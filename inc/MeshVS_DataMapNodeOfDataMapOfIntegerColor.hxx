// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapNodeOfDataMapOfIntegerColor_HeaderFile
#define _MeshVS_DataMapNodeOfDataMapOfIntegerColor_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfIntegerColor_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerColor.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Quantity_Color;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerColor;
class MeshVS_DataMapIteratorOfDataMapOfIntegerColor;



class MeshVS_DataMapNodeOfDataMapOfIntegerColor : public TCollection_MapNode {

public:

  
      MeshVS_DataMapNodeOfDataMapOfIntegerColor(const Standard_Integer& K,const Quantity_Color& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        Quantity_Color& Value() const;




  DEFINE_STANDARD_RTTI(MeshVS_DataMapNodeOfDataMapOfIntegerColor)

protected:




private: 


Standard_Integer myKey;
Quantity_Color myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem Quantity_Color
#define TheItem_hxx <Quantity_Color.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MeshVS_DataMapNodeOfDataMapOfIntegerColor
#define TCollection_DataMapNode_hxx <MeshVS_DataMapNodeOfDataMapOfIntegerColor.hxx>
#define TCollection_DataMapIterator MeshVS_DataMapIteratorOfDataMapOfIntegerColor
#define TCollection_DataMapIterator_hxx <MeshVS_DataMapIteratorOfDataMapOfIntegerColor.hxx>
#define Handle_TCollection_DataMapNode Handle_MeshVS_DataMapNodeOfDataMapOfIntegerColor
#define TCollection_DataMapNode_Type_() MeshVS_DataMapNodeOfDataMapOfIntegerColor_Type_()
#define TCollection_DataMap MeshVS_DataMapOfIntegerColor
#define TCollection_DataMap_hxx <MeshVS_DataMapOfIntegerColor.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
