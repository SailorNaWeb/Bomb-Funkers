#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Context
#include <haxe/macro/Context.h>
#endif

namespace haxe{
namespace macro{

void Context_obj::__construct() { }

Dynamic Context_obj::__CreateEmpty() { return new Context_obj; }

void *Context_obj::_hx_vtable = 0;

Dynamic Context_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context_obj > _hx_result = new Context_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08670b81;
}


Context_obj::Context_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context_obj::__mClass;

void Context_obj::__register()
{
	Context_obj _hx_dummy;
	Context_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.Context",25,81,2a,f0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
