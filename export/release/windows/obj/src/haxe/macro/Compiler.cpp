#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Compiler
#include <haxe/macro/Compiler.h>
#endif

namespace haxe{
namespace macro{

void Compiler_obj::__construct() { }

Dynamic Compiler_obj::__CreateEmpty() { return new Compiler_obj; }

void *Compiler_obj::_hx_vtable = 0;

Dynamic Compiler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Compiler_obj > _hx_result = new Compiler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Compiler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39834d41;
}


Compiler_obj::Compiler_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Compiler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Compiler_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Compiler_obj::__mClass;

void Compiler_obj::__register()
{
	Compiler_obj _hx_dummy;
	Compiler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.macro.Compiler",a9,83,ac,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Compiler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Compiler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Compiler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace macro
