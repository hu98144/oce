# - Find Tcl includes and libraries

IF(WIN32)
  SET(TCL_SEP "")

  GET_FILENAME_COMPONENT(ActiveTcl_CurrentVersion 
    "[HKEY_LOCAL_MACHINE\\SOFTWARE\\ActiveState\\ActiveTcl;CurrentVersion]" NAME)

ELSE()
  SET(TCL_SEP ".")
ENDIF()

IF(NOT DEFINED 3RDPARTY_TCL_DIR)
  SET(3RDPARTY_TCL_DIR "" CACHE PATH "Directory contains TCL product")
ENDIF()

IF(3RDPARTY_DIR AND ("${3RDPARTY_TCL_DIR}" STREQUAL "" OR CHANGES_ARE_NEEDED))
  FIND_PRODUCT_DIR("${3RDPARTY_DIR}" tcl TCL_DIR_NAME)
  IF("${TCL_DIR_NAME}" STREQUAL "")
    MESSAGE(STATUS "\nInfo: tcl folder isn't found in ${3RDPARTY_DIR}. Start seeking in default folders")
  ELSE()
    SET(3RDPARTY_TCL_DIR "${3RDPARTY_DIR}/${TCL_DIR_NAME}" CACHE PATH "Directory contains TCL product" FORCE)
  ENDIF()
ENDIF()
  
SET(INSTALL_TCL OFF CACHE BOOL "Is TCL lib copy to install directory")

# include dir search
IF("${3RDPARTY_TCL_INCLUDE_DIR}" STREQUAL "" OR CHANGES_ARE_NEEDED OR "${3RDPARTY_TCL_INCLUDE_DIR}" STREQUAL "3RDPARTY_TCL_INCLUDE_DIR-NOTFOUND")
  SET(3RDPARTY_TCL_INCLUDE_DIR "3RDPARTY_TCL_INCLUDE_DIR-NOTFOUND" CACHE FILEPATH "Directory contains headers of the TCL product" FORCE)
  
  IF(NOT "${3RDPARTY_TCL_DIR}" STREQUAL "")
    FIND_PATH(3RDPARTY_TCL_INCLUDE_DIR tcl.h PATHS "${3RDPARTY_TCL_DIR}/include" NO_DEFAULT_PATH)
  ELSE()
    SET(3RDPARTY_TCL_POSSIBLE_INCLUDE_DIRS /usr/include
                                           /usr/local/include
                                           /usr/include/tcl8${TCL_SEP}6
                                           /usr/include/tcl8${TCL_SEP}5)
    IF(WIN32)
      SET(3RDPARTY_TCL_POSSIBLE_INCLUDE_DIRS ${3RDPARTY_TCL_POSSIBLE_INCLUDE_DIRS}
          "[HKEY_LOCAL_MACHINE\\SOFTWARE\\ActiveState\\ActiveTcl\\${ActiveTcl_CurrentVersion}]/include"
          "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Scriptics\\Tcl\\8.6;Root]/include"
          "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Scriptics\\Tcl\\8.5;Root]/include"
          "$ENV{ProgramFiles}/Tcl/include"
          #"$ENV{ProgramFiles\(x86\)}/Tcl/include"
          "C:/Program Files/Tcl/include"
          "C:/Tcl/include")
    ENDIF(WIN32)

    # check default path (with additions) for header search
    FIND_PATH(3RDPARTY_TCL_INCLUDE_DIR tcl.h PATHS ${3RDPARTY_TCL_POSSIBLE_INCLUDE_DIRS})
    
    #if find_path found something - set 3RDPARTY_TCL_DIR
    IF(NOT "${3RDPARTY_TCL_INCLUDE_DIR}" STREQUAL "3RDPARTY_TCL_INCLUDE_DIR-NOTFOUND")
      GET_FILENAME_COMPONENT (3RDPARTY_TCL_DIR "${3RDPARTY_TCL_INCLUDE_DIR}/../" ABSOLUTE)
      SET(3RDPARTY_TCL_DIR ${3RDPARTY_TCL_DIR} CACHE FILEPATH "Directory contains TCL product" FORCE)
    ENDIF()
  ENDIF()
ENDIF()

#library dir search
IF("${3RDPARTY_TCL_LIBRARY}" STREQUAL "" OR CHANGES_ARE_NEEDED OR "${3RDPARTY_TCL_LIBRARY}" STREQUAL "3RDPARTY_TCL_LIBRARY-NOTFOUND")
  SET(3RDPARTY_TCL_LIBRARY "3RDPARTY_TCL_LIBRARY-NOTFOUND" CACHE FILEPATH "Path to library of the TCL product" FORCE)
  
  IF(NOT "${3RDPARTY_TCL_DIR}" STREQUAL "")
    FIND_LIBRARY(3RDPARTY_TCL_LIBRARY
                 NAMES tcl8${TCL_SEP}6 tcl8${TCL_SEP}5 tcl
                 PATHS "${3RDPARTY_TCL_DIR}/lib" NO_DEFAULT_PATH)
  ELSE()
    SET(3RDPARTY_TCL_POSSIBLE_LIBRARIES_DIRS /usr/lib /usr/local/lib)
    
    IF(WIN32)
      SET(3RDPARTY_TCL_POSSIBLE_LIBRARIES_DIRS ${3RDPARTY_TCL_POSSIBLE_LIBRARIES_DIRS}
        "[HKEY_LOCAL_MACHINE\\SOFTWARE\\ActiveState\\ActiveTcl\\${ActiveTcl_CurrentVersion}]/lib"
        "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Scriptics\\Tcl\\8.6;Root]/lib"
        "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Scriptics\\Tcl\\8.5;Root]/lib"
        "$ENV{ProgramFiles}/Tcl/Lib"
        "C:/Program Files/Tcl/lib" 
        "C:/Tcl/lib" )
    ENDIF()
    
    # check default path (with additions) for library search
    FIND_LIBRARY(3RDPARTY_TCL_LIBRARY
                 NAMES tcl8${TCL_SEP}6 tcl8${TCL_SEP}5 tcl
                 PATHS ${3RDPARTY_TCL_POSSIBLE_LIBRARIES_DIRS})
  ENDIF()
ENDIF()

#search the version of found tcl library
IF("${3RDPARTY_TCL_LIBRARY}" STREQUAL "" OR "${3RDPARTY_TCL_LIBRARY}" STREQUAL "3RDPARTY_TCL_LIBRARY-NOTFOUND")
  SET (TCL_DLL_SO_NAMES ${DLL_SO_PREFIX}tcl8${TCL_SEP}6.${DLL_SO}
                        ${DLL_SO_PREFIX}tcl8${TCL_SEP}5.${DLL_SO}
                        ${DLL_SO_PREFIX}tcl.${DLL_SO})
ELSE()
  GET_FILENAME_COMPONENT(TCL_LIBRARY_NAME "${3RDPARTY_TCL_LIBRARY}" NAME)

  STRING(REGEX REPLACE "^.*tcl([0-9])[^0-9]*[0-9].*$" "\\1" TCL_MAJOR_VERSION "${TCL_LIBRARY_NAME}")
  STRING(REGEX REPLACE "^.*tcl[0-9][^0-9]*([0-9]).*$" "\\1" TCL_MINOR_VERSION "${TCL_LIBRARY_NAME}")

  IF (NOT "${TCL_MAJOR_VERSION}" STREQUAL "${TCL_LIBRARY_NAME}")
    SET (IS_TCL_VERSION_FOUND ON)
  ELSE()
    SET (IS_TCL_VERSION_FOUND OFF)
  ENDIF()
  
  IF (IS_TCL_VERSION_FOUND)
    SET (TCL_DLL_SO_NAMES "${DLL_SO_PREFIX}tcl${TCL_MAJOR_VERSION}${TCL_SEP}${TCL_MINOR_VERSION}.${DLL_SO}")
  ELSE()
    MESSAGE(STATUS "\nWarning: Tcl version isn't found. ${DLL_SO_PREFIX}tcl.${DLL_SO} is used")
    SET (TCL_DLL_SO_NAMES "${DLL_SO_PREFIX}tcl.${DLL_SO}")
  ENDIF()
ENDIF()

#dll_so search
IF("${3RDPARTY_TCL_DLL}" STREQUAL "" OR CHANGES_ARE_NEEDED OR "${3RDPARTY_TCL_DLL}" STREQUAL "3RDPARTY_TCL_DLL-NOTFOUND")
  SET(3RDPARTY_TCL_DLL "3RDPARTY_TCL_DLL-NOTFOUND" CACHE FILEPATH "Path to shared library of the TCL product" FORCE)
  
  IF(NOT "${3RDPARTY_TCL_DIR}" STREQUAL "")
    FIND_FILE(3RDPARTY_TCL_DLL 
              NAMES ${TCL_DLL_SO_NAMES}
              PATHS "${3RDPARTY_TCL_DIR}/${DLL_SO_FOLDER}" NO_DEFAULT_PATH)
  ELSE() 
    SET(3RDPARTY_TCL_POSSIBLE_SO_DIRS /usr/lib /usr/local/lib)
    
    IF(WIN32)
      SET(3RDPARTY_TCL_POSSIBLE_SO_DIRS ${3RDPARTY_TCL_POSSIBLE_SO_DIRS}
        "[HKEY_LOCAL_MACHINE\\SOFTWARE\\ActiveState\\ActiveTcl\\${ActiveTcl_CurrentVersion}]/bin"
        "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Scriptics\\Tcl\\8.6;Root]/bin"
        "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Scriptics\\Tcl\\8.5;Root]/bin"
        "$ENV{ProgramFiles}/Tcl/Bin"
        "C:/Program Files/Tcl/bin" 
        "C:/Tcl/b" )
    ENDIF()
    
    # check default path (with additions) for dll_so search
    FIND_FILE(3RDPARTY_TCL_DLL 
              NAMES ${TCL_DLL_SO_NAMES}
              PATHS ${3RDPARTY_TCL_POSSIBLE_SO_DIRS})
  ENDIF()
ENDIF()
  
IF(NOT "${3RDPARTY_TCL_DIR}" STREQUAL "")
  MARK_AS_ADVANCED(3RDPARTY_TCL_DIR)
ENDIF()

# #includes found paths to common variables
IF(3RDPARTY_TCL_INCLUDE_DIR)
  SET(3RDPARTY_INCLUDE_DIRS "${3RDPARTY_INCLUDE_DIRS};${3RDPARTY_TCL_INCLUDE_DIR}")
ELSE()
  LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TCL_INCLUDE_DIR)
ENDIF()

IF(3RDPARTY_TCL_LIBRARY)
  GET_FILENAME_COMPONENT(3RDPARTY_TCL_LIBRARY_DIR "${3RDPARTY_TCL_LIBRARY}" PATH)
SET(3RDPARTY_LIBRARY_DIRS "${3RDPARTY_LIBRARY_DIRS};${3RDPARTY_TCL_LIBRARY_DIR}")
ELSE()
  LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TCL_LIBRARY)
ENDIF()
  
IF(3RDPARTY_TCL_DLL)
ELSE()
  LIST(APPEND 3RDPARTY_NOT_INCLUDED 3RDPARTY_TCL_DLL)
ENDIF()