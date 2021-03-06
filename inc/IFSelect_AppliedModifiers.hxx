// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_AppliedModifiers_HeaderFile
#define _IFSelect_AppliedModifiers_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_AppliedModifiers_HeaderFile
#include <Handle_IFSelect_AppliedModifiers.hxx>
#endif

#ifndef _IFSelect_SequenceOfGeneralModifier_HeaderFile
#include <IFSelect_SequenceOfGeneralModifier.hxx>
#endif
#ifndef _Interface_IntList_HeaderFile
#include <Interface_IntList.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IFSelect_GeneralModifier_HeaderFile
#include <Handle_IFSelect_GeneralModifier.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfInteger_HeaderFile
#include <Handle_TColStd_HSequenceOfInteger.hxx>
#endif
class IFSelect_GeneralModifier;
class TColStd_HSequenceOfInteger;


//! This class allows to memorize and access to the modifiers <br>
//!           which are to be applied to a file. To each modifier, is bound <br>
//!           a list of integers (optionnal) : if this list is absent, the <br>
//!           modifier applies to all the file. Else, it applies to the <br>
//!           entities designated by these numbers in the produced file. <br>
//! <br>
//!           To record a modifier, and a possible list of entity numbers <br>
//!           to be applied on : <br>
//!             AddModif (amodifier); <br>
//!             loop on  AddNum (anumber); <br>
//! <br>
//!           To query it,  Count gives the count of recorded modifiers, <br>
//!           then for each one : <br>
//!             Item (numodif, amodifier, entcount); <br>
//!             IsForAll ()  -> can be called, if True, applies on the whole file <br>
//! <br>
//!             for (i = 1; i <= entcount; i ++) <br>
//!               nument = ItemNum (i);  -> return an entity number <br>
class IFSelect_AppliedModifiers : public MMgt_TShared {

public:

  //! Creates an AppliedModifiers, ready to record up to <nbmax> <br>
//!           modifiers, on a model of <nbent> entities <br>
  Standard_EXPORT   IFSelect_AppliedModifiers(const Standard_Integer nbmax,const Standard_Integer nbent);
  //! Records a modifier. By default, it is to apply on all a <br>
//!           produced file. Further calls to AddNum will restrict this. <br>
//!           Returns True if done, False if too many modifiers are already <br>
//!           recorded <br>
  Standard_EXPORT     Standard_Boolean AddModif(const Handle(IFSelect_GeneralModifier)& modif) ;
  //! Adds a number of entity of the output file to be applied on. <br>
//!           If a sequence of AddNum is called after AddModif, this <br>
//!           Modifier will be applied on the list of designated entities. <br>
//!           Else, it will be applied on all the file <br>
//!           Returns True if done, False if no modifier has yet been added <br>
  Standard_EXPORT     Standard_Boolean AddNum(const Standard_Integer nument) ;
  //! Returns the count of recorded modifiers <br>
  Standard_EXPORT     Standard_Integer Count() const;
  //! Returns the description for applied modifier n0 <num> : <br>
//!           the modifier itself, and the count of entities to be applied <br>
//!           on. If no specific list of number has been defined, returns <br>
//!           the total count of entities of the file <br>
//!           If this count is zero, then the modifier applies to all <br>
//!           the file (see below). Else, the numbers are then queried by <br>
//!           calls to ItemNum between 1 and <entcount> <br>
//!           Returns True if OK, False if <num> is out of range <br>
  Standard_EXPORT     Standard_Boolean Item(const Standard_Integer num,Handle(IFSelect_GeneralModifier)& modif,Standard_Integer& entcount) ;
  //! Returns a numero of entity to be applied on, given its rank <br>
//!           in the list. If no list is defined (i.e. for all the file), <br>
//!           returns <nument> itself, to give all the entities of the file <br>
//!           Returns 0 if <nument> out of range <br>
  Standard_EXPORT     Standard_Integer ItemNum(const Standard_Integer nument) const;
  //! Returns the list of entities to be applied on (see Item) <br>
//!           as a HSequence (IsForAll produces the complete list of all <br>
//!           the entity numbers of the file <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfInteger ItemList() const;
  //! Returns True if the applied modifier queried by last call to <br>
//!           Item is to be applied to all the produced file. <br>
//!           Else, <entcount> returned by Item gives the count of entity <br>
//!           numbers, each one is queried by ItemNum <br>
  Standard_EXPORT     Standard_Boolean IsForAll() const;




  DEFINE_STANDARD_RTTI(IFSelect_AppliedModifiers)

protected:




private: 


IFSelect_SequenceOfGeneralModifier themodifs;
Interface_IntList thelists;
Standard_Integer thenbent;
Standard_Integer theentcnt;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
