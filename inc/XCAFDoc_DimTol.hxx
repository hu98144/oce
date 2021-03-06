// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_DimTol_HeaderFile
#define _XCAFDoc_DimTol_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XCAFDoc_DimTol_HeaderFile
#include <Handle_XCAFDoc_DimTol.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
class TColStd_HArray1OfReal;
class TCollection_HAsciiString;
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;



class XCAFDoc_DimTol : public TDF_Attribute {

public:

  
  Standard_EXPORT   XCAFDoc_DimTol();
  
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  
  Standard_EXPORT   static  Handle_XCAFDoc_DimTol Set(const TDF_Label& label,const Standard_Integer kind,const Handle(TColStd_HArray1OfReal)& aVal,const Handle(TCollection_HAsciiString)& aName,const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT     void Set(const Standard_Integer kind,const Handle(TColStd_HArray1OfReal)& aVal,const Handle(TCollection_HAsciiString)& aName,const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT     Standard_Integer GetKind() const;
  
  Standard_EXPORT     Handle_TColStd_HArray1OfReal GetVal() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString GetName() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString GetDescription() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;




  DEFINE_STANDARD_RTTI(XCAFDoc_DimTol)

protected:




private: 


Standard_Integer myKind;
Handle_TColStd_HArray1OfReal myVal;
Handle_TCollection_HAsciiString myName;
Handle_TCollection_HAsciiString myDescription;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
