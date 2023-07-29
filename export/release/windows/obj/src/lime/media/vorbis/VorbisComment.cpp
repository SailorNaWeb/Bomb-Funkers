#include <hxcpp.h>

#ifndef INCLUDED_lime_media_vorbis_VorbisComment
#include <lime/media/vorbis/VorbisComment.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad1e8e68f8403b12_9_new,"lime.media.vorbis.VorbisComment","new",0xfdd2a646,"lime.media.vorbis.VorbisComment.new","lime/media/vorbis/VorbisComment.hx",9,0x973c3769)
namespace lime{
namespace media{
namespace vorbis{

void VorbisComment_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ad1e8e68f8403b12_9_new)
            	}

Dynamic VorbisComment_obj::__CreateEmpty() { return new VorbisComment_obj; }

void *VorbisComment_obj::_hx_vtable = 0;

Dynamic VorbisComment_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VorbisComment_obj > _hx_result = new VorbisComment_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VorbisComment_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c8ee4aa;
}


VorbisComment_obj::VorbisComment_obj()
{
}

void VorbisComment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VorbisComment);
	HX_MARK_MEMBER_NAME(userComments,"userComments");
	HX_MARK_MEMBER_NAME(vendor,"vendor");
	HX_MARK_END_CLASS();
}

void VorbisComment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(userComments,"userComments");
	HX_VISIT_MEMBER_NAME(vendor,"vendor");
}

::hx::Val VorbisComment_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vendor") ) { return ::hx::Val( vendor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"userComments") ) { return ::hx::Val( userComments ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VorbisComment_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vendor") ) { vendor=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"userComments") ) { userComments=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VorbisComment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("userComments",9f,aa,f5,57));
	outFields->push(HX_("vendor",88,e5,96,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VorbisComment_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(VorbisComment_obj,userComments),HX_("userComments",9f,aa,f5,57)},
	{::hx::fsString,(int)offsetof(VorbisComment_obj,vendor),HX_("vendor",88,e5,96,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VorbisComment_obj_sStaticStorageInfo = 0;
#endif

static ::String VorbisComment_obj_sMemberFields[] = {
	HX_("userComments",9f,aa,f5,57),
	HX_("vendor",88,e5,96,9e),
	::String(null()) };

::hx::Class VorbisComment_obj::__mClass;

void VorbisComment_obj::__register()
{
	VorbisComment_obj _hx_dummy;
	VorbisComment_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.vorbis.VorbisComment",54,cb,ac,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VorbisComment_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VorbisComment_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VorbisComment_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VorbisComment_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace vorbis
