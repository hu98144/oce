// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SymmetricTensor23d_HeaderFile
#define _StepFEA_SymmetricTensor23d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepData_SelectMember_HeaderFile
#include <Handle_StepData_SelectMember.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
class Standard_Transient;
class StepData_SelectMember;
class TColStd_HArray1OfReal;


//! Representation of STEP SELECT type SymmetricTensor23d <br>
class StepFEA_SymmetricTensor23d  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_SymmetricTensor23d();
  //! Recognizes a kind of SymmetricTensor23d select type <br>
//!          return 0 <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Recognizes a items of select member SymmetricTensor23dMember <br>
//!          1 -> IsotropicSymmetricTensor23d <br>
//!          2 -> OrthotropicSymmetricTensor23d <br>
//!          3 -> AnisotropicSymmetricTensor23d <br>
//!          0 else <br>
  Standard_EXPORT   virtual  Standard_Integer CaseMem(const Handle(StepData_SelectMember)& ent) const;
  //! Returns a new select member the type SymmetricTensor23dMember <br>
  Standard_EXPORT   virtual  Handle_StepData_SelectMember NewMember() const;
  //! Set Value for IsotropicSymmetricTensor23d <br>
  Standard_EXPORT     void SetIsotropicSymmetricTensor23d(const Standard_Real aVal) ;
  //! Returns Value as IsotropicSymmetricTensor23d (or Null if another type) <br>
  Standard_EXPORT     Standard_Real IsotropicSymmetricTensor23d() const;
  //! Set Value for OrthotropicSymmetricTensor23d <br>
  Standard_EXPORT     void SetOrthotropicSymmetricTensor23d(const Handle(TColStd_HArray1OfReal)& aVal) ;
  //! Returns Value as OrthotropicSymmetricTensor23d (or Null if another type) <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal OrthotropicSymmetricTensor23d() const;
  //! Set Value for AnisotropicSymmetricTensor23d <br>
  Standard_EXPORT     void SetAnisotropicSymmetricTensor23d(const Handle(TColStd_HArray1OfReal)& aVal) ;
  //! Returns Value as AnisotropicSymmetricTensor23d (or Null if another type) <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal AnisotropicSymmetricTensor23d() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
