#include <hxcpp.h>

#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_states_SongMetadata
#include <states/SongMetadata.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e23e7423f533d70_540_new,"states.SongMetadata","new",0x9038fc22,"states.SongMetadata.new","states/FreeplayState.hx",540,0x1b2e20da)
namespace states{

void SongMetadata_obj::__construct(::String song,int week,::String songCharacter,int color){
            	HX_STACKFRAME(&_hx_pos_8e23e7423f533d70_540_new)
HXLINE( 547)		this->lastDifficulty = null();
HXLINE( 546)		this->folder = HX_("",00,00,00,00);
HXLINE( 545)		this->color = -7179779;
HXLINE( 544)		this->songCharacter = HX_("",00,00,00,00);
HXLINE( 543)		this->week = 0;
HXLINE( 542)		this->songName = HX_("",00,00,00,00);
HXLINE( 551)		this->songName = song;
HXLINE( 552)		this->week = week;
HXLINE( 553)		this->songCharacter = songCharacter;
HXLINE( 554)		this->color = color;
HXLINE( 555)		this->folder = ::backend::Mods_obj::currentModDirectory;
HXLINE( 556)		if (::hx::IsNull( this->folder )) {
HXLINE( 556)			this->folder = HX_("",00,00,00,00);
            		}
            	}

Dynamic SongMetadata_obj::__CreateEmpty() { return new SongMetadata_obj; }

void *SongMetadata_obj::_hx_vtable = 0;

Dynamic SongMetadata_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SongMetadata_obj > _hx_result = new SongMetadata_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool SongMetadata_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13428e82;
}


::hx::ObjectPtr< SongMetadata_obj > SongMetadata_obj::__new(::String song,int week,::String songCharacter,int color) {
	::hx::ObjectPtr< SongMetadata_obj > __this = new SongMetadata_obj();
	__this->__construct(song,week,songCharacter,color);
	return __this;
}

::hx::ObjectPtr< SongMetadata_obj > SongMetadata_obj::__alloc(::hx::Ctx *_hx_ctx,::String song,int week,::String songCharacter,int color) {
	SongMetadata_obj *__this = (SongMetadata_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SongMetadata_obj), true, "states.SongMetadata"));
	*(void **)__this = SongMetadata_obj::_hx_vtable;
	__this->__construct(song,week,songCharacter,color);
	return __this;
}

SongMetadata_obj::SongMetadata_obj()
{
}

void SongMetadata_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SongMetadata);
	HX_MARK_MEMBER_NAME(songName,"songName");
	HX_MARK_MEMBER_NAME(week,"week");
	HX_MARK_MEMBER_NAME(songCharacter,"songCharacter");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(folder,"folder");
	HX_MARK_MEMBER_NAME(lastDifficulty,"lastDifficulty");
	HX_MARK_END_CLASS();
}

void SongMetadata_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(songName,"songName");
	HX_VISIT_MEMBER_NAME(week,"week");
	HX_VISIT_MEMBER_NAME(songCharacter,"songCharacter");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(folder,"folder");
	HX_VISIT_MEMBER_NAME(lastDifficulty,"lastDifficulty");
}

::hx::Val SongMetadata_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { return ::hx::Val( week ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return ::hx::Val( folder ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { return ::hx::Val( songName ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"songCharacter") ) { return ::hx::Val( songCharacter ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lastDifficulty") ) { return ::hx::Val( lastDifficulty ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SongMetadata_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { week=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { folder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { songName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"songCharacter") ) { songCharacter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lastDifficulty") ) { lastDifficulty=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SongMetadata_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("songName",c0,d0,d7,36));
	outFields->push(HX_("week",f4,5f,f5,4e));
	outFields->push(HX_("songCharacter",14,f5,a5,78));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("folder",ae,76,90,f9));
	outFields->push(HX_("lastDifficulty",31,e4,14,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SongMetadata_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SongMetadata_obj,songName),HX_("songName",c0,d0,d7,36)},
	{::hx::fsInt,(int)offsetof(SongMetadata_obj,week),HX_("week",f4,5f,f5,4e)},
	{::hx::fsString,(int)offsetof(SongMetadata_obj,songCharacter),HX_("songCharacter",14,f5,a5,78)},
	{::hx::fsInt,(int)offsetof(SongMetadata_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsString,(int)offsetof(SongMetadata_obj,folder),HX_("folder",ae,76,90,f9)},
	{::hx::fsString,(int)offsetof(SongMetadata_obj,lastDifficulty),HX_("lastDifficulty",31,e4,14,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SongMetadata_obj_sStaticStorageInfo = 0;
#endif

static ::String SongMetadata_obj_sMemberFields[] = {
	HX_("songName",c0,d0,d7,36),
	HX_("week",f4,5f,f5,4e),
	HX_("songCharacter",14,f5,a5,78),
	HX_("color",63,71,5c,4a),
	HX_("folder",ae,76,90,f9),
	HX_("lastDifficulty",31,e4,14,bb),
	::String(null()) };

::hx::Class SongMetadata_obj::__mClass;

void SongMetadata_obj::__register()
{
	SongMetadata_obj _hx_dummy;
	SongMetadata_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.SongMetadata",30,03,84,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SongMetadata_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SongMetadata_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SongMetadata_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SongMetadata_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
