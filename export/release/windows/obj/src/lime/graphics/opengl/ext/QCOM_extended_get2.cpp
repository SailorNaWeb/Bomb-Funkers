#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_extended_get2
#include <lime/graphics/opengl/ext/QCOM_extended_get2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d211b99717bb97fd_5_new,"lime.graphics.opengl.ext.QCOM_extended_get2","new",0xeba00aa7,"lime.graphics.opengl.ext.QCOM_extended_get2.new","lime/graphics/opengl/ext/QCOM_extended_get2.hx",5,0x23b2eec7)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void QCOM_extended_get2_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d211b99717bb97fd_5_new)
            	}

Dynamic QCOM_extended_get2_obj::__CreateEmpty() { return new QCOM_extended_get2_obj; }

void *QCOM_extended_get2_obj::_hx_vtable = 0;

Dynamic QCOM_extended_get2_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QCOM_extended_get2_obj > _hx_result = new QCOM_extended_get2_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QCOM_extended_get2_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7eced685;
}


QCOM_extended_get2_obj::QCOM_extended_get2_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *QCOM_extended_get2_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *QCOM_extended_get2_obj_sStaticStorageInfo = 0;
#endif

::hx::Class QCOM_extended_get2_obj::__mClass;

void QCOM_extended_get2_obj::__register()
{
	QCOM_extended_get2_obj _hx_dummy;
	QCOM_extended_get2_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.QCOM_extended_get2",35,2b,b6,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< QCOM_extended_get2_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QCOM_extended_get2_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QCOM_extended_get2_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
