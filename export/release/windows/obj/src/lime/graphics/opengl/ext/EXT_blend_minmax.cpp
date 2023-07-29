#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_blend_minmax
#include <lime/graphics/opengl/ext/EXT_blend_minmax.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60db2844fe3361da_5_new,"lime.graphics.opengl.ext.EXT_blend_minmax","new",0xd4a71f12,"lime.graphics.opengl.ext.EXT_blend_minmax.new","lime/graphics/opengl/ext/EXT_blend_minmax.hx",5,0x3d88ad3c)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_blend_minmax_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_60db2844fe3361da_5_new)
HXLINE(   8)		this->MAX_EXT = 32776;
HXLINE(   7)		this->MIN_EXT = 32775;
            	}

Dynamic EXT_blend_minmax_obj::__CreateEmpty() { return new EXT_blend_minmax_obj; }

void *EXT_blend_minmax_obj::_hx_vtable = 0;

Dynamic EXT_blend_minmax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_blend_minmax_obj > _hx_result = new EXT_blend_minmax_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_blend_minmax_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07ae2618;
}


EXT_blend_minmax_obj::EXT_blend_minmax_obj()
{
}

::hx::Val EXT_blend_minmax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"MIN_EXT") ) { return ::hx::Val( MIN_EXT ); }
		if (HX_FIELD_EQ(inName,"MAX_EXT") ) { return ::hx::Val( MAX_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_blend_minmax_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"MIN_EXT") ) { MIN_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_EXT") ) { MAX_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_blend_minmax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MIN_EXT",f4,3b,43,da));
	outFields->push(HX_("MAX_EXT",06,26,6a,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_blend_minmax_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_blend_minmax_obj,MIN_EXT),HX_("MIN_EXT",f4,3b,43,da)},
	{::hx::fsInt,(int)offsetof(EXT_blend_minmax_obj,MAX_EXT),HX_("MAX_EXT",06,26,6a,69)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_blend_minmax_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_blend_minmax_obj_sMemberFields[] = {
	HX_("MIN_EXT",f4,3b,43,da),
	HX_("MAX_EXT",06,26,6a,69),
	::String(null()) };

::hx::Class EXT_blend_minmax_obj::__mClass;

void EXT_blend_minmax_obj::__register()
{
	EXT_blend_minmax_obj _hx_dummy;
	EXT_blend_minmax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_blend_minmax",20,ee,89,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_blend_minmax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_blend_minmax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_blend_minmax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_blend_minmax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
