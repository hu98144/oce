// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_SpecificLib_HeaderFile
#define _IGESData_SpecificLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IGESData_NodeOfSpecificLib_HeaderFile
#include <Handle_IGESData_NodeOfSpecificLib.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_IGESData_SpecificModule_HeaderFile
#include <Handle_IGESData_SpecificModule.hxx>
#endif
#ifndef _Handle_IGESData_Protocol_HeaderFile
#include <Handle_IGESData_Protocol.hxx>
#endif
#ifndef _Handle_IGESData_GlobalNodeOfSpecificLib_HeaderFile
#include <Handle_IGESData_GlobalNodeOfSpecificLib.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class IGESData_NodeOfSpecificLib;
class Standard_NoSuchObject;
class IGESData_IGESEntity;
class IGESData_SpecificModule;
class IGESData_Protocol;
class IGESData_GlobalNodeOfSpecificLib;
class Standard_Transient;



class IGESData_SpecificLib  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void SetGlobal(const Handle(IGESData_SpecificModule)& amodule,const Handle(IGESData_Protocol)& aprotocol) ;
  
  Standard_EXPORT   IGESData_SpecificLib(const Handle(IGESData_Protocol)& aprotocol);
  
  Standard_EXPORT   IGESData_SpecificLib();
  
  Standard_EXPORT     void AddProtocol(const Handle(Standard_Transient)& aprotocol) ;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void SetComplete() ;
  
  Standard_EXPORT     Standard_Boolean Select(const Handle(IGESData_IGESEntity)& obj,Handle(IGESData_SpecificModule)& module,Standard_Integer& CN) const;
  
  Standard_EXPORT     void Start() ;
  
  Standard_EXPORT     Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const Handle_IGESData_SpecificModule& Module() const;
  
  Standard_EXPORT    const Handle_IGESData_Protocol& Protocol() const;





protected:





private:



Handle_IGESData_NodeOfSpecificLib thelist;
Handle_IGESData_NodeOfSpecificLib thecurr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
