// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_DimensionalLocationWithPath_HeaderFile
#define _StepShape_DimensionalLocationWithPath_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_DimensionalLocationWithPath_HeaderFile
#include <Handle_StepShape_DimensionalLocationWithPath.hxx>
#endif

#ifndef _Handle_StepRepr_ShapeAspect_HeaderFile
#include <Handle_StepRepr_ShapeAspect.hxx>
#endif
#ifndef _StepShape_DimensionalLocation_HeaderFile
#include <StepShape_DimensionalLocation.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class StepRepr_ShapeAspect;
class TCollection_HAsciiString;


//! Representation of STEP entity DimensionalLocationWithPath <br>
class StepShape_DimensionalLocationWithPath : public StepShape_DimensionalLocation {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepShape_DimensionalLocationWithPath();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aShapeAspectRelationship_Name,const Standard_Boolean hasShapeAspectRelationship_Description,const Handle(TCollection_HAsciiString)& aShapeAspectRelationship_Description,const Handle(StepRepr_ShapeAspect)& aShapeAspectRelationship_RelatingShapeAspect,const Handle(StepRepr_ShapeAspect)& aShapeAspectRelationship_RelatedShapeAspect,const Handle(StepRepr_ShapeAspect)& aPath) ;
  //! Returns field Path <br>
  Standard_EXPORT     Handle_StepRepr_ShapeAspect Path() const;
  //! Set field Path <br>
  Standard_EXPORT     void SetPath(const Handle(StepRepr_ShapeAspect)& Path) ;




  DEFINE_STANDARD_RTTI(StepShape_DimensionalLocationWithPath)

protected:




private: 


Handle_StepRepr_ShapeAspect thePath;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
