#include <hxcpp.h>

#ifndef INCLUDED_hxcodec_vlc_Types
#include <hxcodec/vlc/Types.h>
#endif

namespace hxcodec{
namespace vlc{

void Types_obj::__construct() { }

Dynamic Types_obj::__CreateEmpty() { return new Types_obj; }

void *Types_obj::_hx_vtable = 0;

Dynamic Types_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Types_obj > _hx_result = new Types_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Types_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d0d1f52;
}


Types_obj::Types_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Types_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Types_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Types_obj::__mClass;

void Types_obj::__register()
{
	Types_obj _hx_dummy;
	Types_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.vlc.Types",b0,c0,f1,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Types_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Types_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Types_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
} // end namespace vlc
