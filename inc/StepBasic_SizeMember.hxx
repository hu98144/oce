// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SizeMember_HeaderFile
#define _StepBasic_SizeMember_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_SizeMember_HeaderFile
#include <Handle_StepBasic_SizeMember.hxx>
#endif

#ifndef _StepData_SelectReal_HeaderFile
#include <StepData_SelectReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif


//! For immediate members of SizeSelect, i.e. : <br>
//!           ParameterValue (a Real) <br>
class StepBasic_SizeMember : public StepData_SelectReal {

public:

  
  Standard_EXPORT   StepBasic_SizeMember();
  
  Standard_EXPORT   virtual  Standard_Boolean HasName() const;
  
  Standard_EXPORT   virtual  Standard_CString Name() const;
  
  Standard_EXPORT   virtual  Standard_Boolean SetName(const Standard_CString name) ;




  DEFINE_STANDARD_RTTI(StepBasic_SizeMember)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
