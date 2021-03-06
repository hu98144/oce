// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_LinearScalarConstraint_HeaderFile
#define _Plate_LinearScalarConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Plate_HArray1OfPinpointConstraint_HeaderFile
#include <Handle_Plate_HArray1OfPinpointConstraint.hxx>
#endif
#ifndef _Handle_TColgp_HArray2OfXYZ_HeaderFile
#include <Handle_TColgp_HArray2OfXYZ.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Plate_HArray1OfPinpointConstraint;
class TColgp_HArray2OfXYZ;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Plate_PinpointConstraint;
class gp_XYZ;
class Plate_Array1OfPinpointConstraint;
class TColgp_Array1OfXYZ;
class TColgp_Array2OfXYZ;


//! define on or several constraints  as linear combination of <br>
//!         the X,Y and Z components of a set of PinPointConstraint <br>
//! <br>
class Plate_LinearScalarConstraint  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Plate_LinearScalarConstraint();
  
  Standard_EXPORT   Plate_LinearScalarConstraint(const Plate_PinpointConstraint& PPC1,const gp_XYZ& coeff);
  
  Standard_EXPORT   Plate_LinearScalarConstraint(const Plate_Array1OfPinpointConstraint& ppc,const TColgp_Array1OfXYZ& coeff);
  
  Standard_EXPORT   Plate_LinearScalarConstraint(const Plate_Array1OfPinpointConstraint& ppc,const TColgp_Array2OfXYZ& coeff);
  
  Standard_EXPORT   Plate_LinearScalarConstraint(const Standard_Integer ColLen,const Standard_Integer RowLen);
  
       const Plate_Array1OfPinpointConstraint& GetPPC() const;
  
       const TColgp_Array2OfXYZ& Coeff() const;
  //!  Sets   the PinPointConstraint of   index Index to <br>
//!          Value raise if Index is greater than the length of <br>
//!          ppc or the Row length of coeff or lower  than 1 <br>
  Standard_EXPORT     void SetPPC(const Standard_Integer Index,const Plate_PinpointConstraint& Value) ;
  //!  Sets the coeff  of index (Row,Col)  to Value <br>
//!           raise if  Row (respectively Col)  is greater than the <br>
//!          Row (respectively Column) length of coeff <br>
  Standard_EXPORT     void SetCoeff(const Standard_Integer Row,const Standard_Integer Col,const gp_XYZ& Value) ;





protected:





private:



Handle_Plate_HArray1OfPinpointConstraint myPPC;
Handle_TColgp_HArray2OfXYZ myCoef;


};


#include <Plate_LinearScalarConstraint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
