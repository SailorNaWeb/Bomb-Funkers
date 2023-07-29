#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Rating
#include <backend/Rating.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_187affb19d616a87_5_new,"backend.Rating","new",0x7a0545c9,"backend.Rating.new","backend/Rating.hx",5,0xab06bda6)
HX_LOCAL_STACK_FRAME(_hx_pos_187affb19d616a87_30_loadDefault,"backend.Rating","loadDefault",0x59141da4,"backend.Rating.loadDefault","backend/Rating.hx",30,0xab06bda6)
namespace backend{

void Rating_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_187affb19d616a87_5_new)
HXLINE(  13)		this->hits = 0;
HXLINE(  12)		this->noteSplash = true;
HXLINE(  11)		this->score = 350;
HXLINE(  10)		this->ratingMod = ((Float)1);
HXLINE(   9)		this->hitWindow = 0;
HXLINE(   8)		this->image = HX_("",00,00,00,00);
HXLINE(   7)		this->name = HX_("",00,00,00,00);
HXLINE(  17)		this->name = name;
HXLINE(  18)		this->image = name;
HXLINE(  19)		this->hitWindow = 0;
HXLINE(  21)		::String window = (name + HX_("Window",10,08,21,87));
HXLINE(  22)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  24)			this->hitWindow = ::Reflect_obj::field(::backend::ClientPrefs_obj::data,window);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}

Dynamic Rating_obj::__CreateEmpty() { return new Rating_obj; }

void *Rating_obj::_hx_vtable = 0;

Dynamic Rating_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Rating_obj > _hx_result = new Rating_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Rating_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c104051;
}

::Array< ::Dynamic> Rating_obj::loadDefault(){
            	HX_GC_STACKFRAME(&_hx_pos_187affb19d616a87_30_loadDefault)
HXLINE(  31)		::Array< ::Dynamic> ratingsData = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::backend::Rating_obj::__alloc( HX_CTX ,HX_("sick",be,8c,53,4c)));
HXLINE(  33)		 ::backend::Rating rating =  ::backend::Rating_obj::__alloc( HX_CTX ,HX_("good",3d,95,69,44));
HXLINE(  34)		rating->ratingMod = ((Float)0.67);
HXLINE(  35)		rating->score = 200;
HXLINE(  36)		rating->noteSplash = false;
HXLINE(  37)		ratingsData->push(rating);
HXLINE(  39)		 ::backend::Rating rating1 =  ::backend::Rating_obj::__alloc( HX_CTX ,HX_("bad",c5,b1,4a,00));
HXLINE(  40)		rating1->ratingMod = ((Float)0.34);
HXLINE(  41)		rating1->score = 100;
HXLINE(  42)		rating1->noteSplash = false;
HXLINE(  43)		ratingsData->push(rating1);
HXLINE(  45)		 ::backend::Rating rating2 =  ::backend::Rating_obj::__alloc( HX_CTX ,HX_("shit",c0,cf,52,4c));
HXLINE(  46)		rating2->ratingMod = ( (Float)(0) );
HXLINE(  47)		rating2->score = 50;
HXLINE(  48)		rating2->noteSplash = false;
HXLINE(  49)		ratingsData->push(rating2);
HXLINE(  50)		return ratingsData;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Rating_obj,loadDefault,return )


::hx::ObjectPtr< Rating_obj > Rating_obj::__new(::String name) {
	::hx::ObjectPtr< Rating_obj > __this = new Rating_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< Rating_obj > Rating_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	Rating_obj *__this = (Rating_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Rating_obj), true, "backend.Rating"));
	*(void **)__this = Rating_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Rating_obj::Rating_obj()
{
}

void Rating_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rating);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(hitWindow,"hitWindow");
	HX_MARK_MEMBER_NAME(ratingMod,"ratingMod");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(noteSplash,"noteSplash");
	HX_MARK_MEMBER_NAME(hits,"hits");
	HX_MARK_END_CLASS();
}

void Rating_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(hitWindow,"hitWindow");
	HX_VISIT_MEMBER_NAME(ratingMod,"ratingMod");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(noteSplash,"noteSplash");
	HX_VISIT_MEMBER_NAME(hits,"hits");
}

::hx::Val Rating_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"hits") ) { return ::hx::Val( hits ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image ); }
		if (HX_FIELD_EQ(inName,"score") ) { return ::hx::Val( score ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitWindow") ) { return ::hx::Val( hitWindow ); }
		if (HX_FIELD_EQ(inName,"ratingMod") ) { return ::hx::Val( ratingMod ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noteSplash") ) { return ::hx::Val( noteSplash ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Rating_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"loadDefault") ) { outValue = loadDefault_dyn(); return true; }
	}
	return false;
}

::hx::Val Rating_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hits") ) { hits=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitWindow") ) { hitWindow=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratingMod") ) { ratingMod=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noteSplash") ) { noteSplash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rating_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("hitWindow",a3,4e,9e,86));
	outFields->push(HX_("ratingMod",a5,4a,34,09));
	outFields->push(HX_("score",52,73,d9,78));
	outFields->push(HX_("noteSplash",f9,8e,ac,5d));
	outFields->push(HX_("hits",c0,42,0e,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Rating_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Rating_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(Rating_obj,image),HX_("image",5b,1f,69,bd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Rating_obj,hitWindow),HX_("hitWindow",a3,4e,9e,86)},
	{::hx::fsFloat,(int)offsetof(Rating_obj,ratingMod),HX_("ratingMod",a5,4a,34,09)},
	{::hx::fsInt,(int)offsetof(Rating_obj,score),HX_("score",52,73,d9,78)},
	{::hx::fsBool,(int)offsetof(Rating_obj,noteSplash),HX_("noteSplash",f9,8e,ac,5d)},
	{::hx::fsInt,(int)offsetof(Rating_obj,hits),HX_("hits",c0,42,0e,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Rating_obj_sStaticStorageInfo = 0;
#endif

static ::String Rating_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("image",5b,1f,69,bd),
	HX_("hitWindow",a3,4e,9e,86),
	HX_("ratingMod",a5,4a,34,09),
	HX_("score",52,73,d9,78),
	HX_("noteSplash",f9,8e,ac,5d),
	HX_("hits",c0,42,0e,45),
	::String(null()) };

::hx::Class Rating_obj::__mClass;

static ::String Rating_obj_sStaticFields[] = {
	HX_("loadDefault",3b,97,61,6c),
	::String(null())
};

void Rating_obj::__register()
{
	Rating_obj _hx_dummy;
	Rating_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Rating",57,ad,12,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rating_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Rating_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Rating_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Rating_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rating_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rating_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
