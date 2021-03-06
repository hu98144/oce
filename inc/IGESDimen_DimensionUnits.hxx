// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_DimensionUnits_HeaderFile
#define _IGESDimen_DimensionUnits_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_DimensionUnits_HeaderFile
#include <Handle_IGESDimen_DimensionUnits.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class TCollection_HAsciiString;


//! defines Dimension Units, Type <406>, Form <28> <br>
//!          in package IGESDimen <br>
//!          Describes the units and formatting details of the <br>
//!          nominal value of a dimension. <br>
class IGESDimen_DimensionUnits : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_DimensionUnits();
  //! This method is used to set the fields of the class <br>
//!           DimensionUnits <br>
//!       - nbPropVal  : Number of property values, always = 6 <br>
//!       - aSecondPos : Secondary Dimension Position <br>
//!                          0 = This is the main text <br>
//!                          1 = Before primary dimension <br>
//!                          2 = After primary dimension <br>
//!                          3 = Above primary dimension <br>
//!                          4 = Below primary dimension <br>
//!       - aUnitsInd  : Units Indicator <br>
//!       - aCharSet   : Character Set used <br>
//!       - aFormat    : Format HAsciiString <br>
//!                          1 = Standard ASCII <br>
//!                          1001 = Symbol Font 1 <br>
//!                          1002 = Symbol Font 2 <br>
//!                          1003 = Drafting Font <br>
//!       - aFracFlag  : Fraction Flag <br>
//!                          0 = Display values as decimal numbers <br>
//!                          1 = Display values as fractions <br>
//!       - aPrecision : Precision Value <br>
  Standard_EXPORT     void Init(const Standard_Integer nbPropVal,const Standard_Integer aSecondPos,const Standard_Integer aUnitsInd,const Standard_Integer aCharSet,const Handle(TCollection_HAsciiString)& aFormat,const Standard_Integer aFracFlag,const Standard_Integer aPrecision) ;
  //! returns the number of property values <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns position of secondary dimension w.r.t. primary dimension <br>
  Standard_EXPORT     Standard_Integer SecondaryDimenPosition() const;
  //! returns the units indicator <br>
  Standard_EXPORT     Standard_Integer UnitsIndicator() const;
  //! returns the character set interpretation <br>
  Standard_EXPORT     Standard_Integer CharacterSet() const;
  //! returns the string used in formatting value <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString FormatString() const;
  //! returns the fraction flag <br>
  Standard_EXPORT     Standard_Integer FractionFlag() const;
  //! returns the precision/denominator <br>
//!     number of decimal places when FractionFlag() = 0 <br>
//!     denominator of fraction when FractionFlag() = 1 <br>
  Standard_EXPORT     Standard_Integer PrecisionOrDenominator() const;




  DEFINE_STANDARD_RTTI(IGESDimen_DimensionUnits)

protected:




private: 


Standard_Integer theNbPropertyValues;
Standard_Integer theSecondaryDimenPosition;
Standard_Integer theUnitsIndicator;
Standard_Integer theCharacterSet;
Handle_TCollection_HAsciiString theFormatString;
Standard_Integer theFractionFlag;
Standard_Integer thePrecision;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
