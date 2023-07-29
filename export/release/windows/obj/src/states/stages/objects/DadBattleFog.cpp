#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_states_stages_objects_DadBattleFog
#include <states/stages/objects/DadBattleFog.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a452e11b924fd65_6_new,"states.stages.objects.DadBattleFog","new",0x4c963938,"states.stages.objects.DadBattleFog.new","states/stages/objects/DadBattleFog.hx",6,0x0ed0d037)
namespace states{
namespace stages{
namespace objects{

void DadBattleFog_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4a452e11b924fd65_6_new)
HXLINE(   7)		super::__construct(null(),null(),null());
HXLINE(   9)		this->set_alpha(( (Float)(0) ));
HXLINE(  10)		this->set_blend(0);
HXLINE(  12)		int offsetX = 200;
HXLINE(  13)		 ::objects::BGSprite smoke =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("smoke",6f,8f,75,7f),(-1550 + offsetX),(660 + ::flixel::FlxG_obj::random->_hx_float(-20,20,null())),((Float)1.2),((Float)1.05),null(),null());
HXLINE(  14)		Float _hx_tmp = smoke->get_width();
HXDLIN(  14)		smoke->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::flixel::FlxG_obj::random->_hx_float(((Float)1.1),((Float)1.22),null()))),null());
HXLINE(  15)		smoke->updateHitbox();
HXLINE(  16)		{
HXLINE(  16)			 ::flixel::math::FlxBasePoint this1 = smoke->velocity;
HXDLIN(  16)			this1->set_x(::flixel::FlxG_obj::random->_hx_float(15,22,null()));
            		}
HXLINE(  17)		smoke->set_active(true);
HXLINE(  18)		smoke->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  19)		this->add(smoke);
HXLINE(  21)		 ::objects::BGSprite smoke1 =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("smoke",6f,8f,75,7f),(1550 + offsetX),(660 + ::flixel::FlxG_obj::random->_hx_float(-20,20,null())),((Float)1.2),((Float)1.05),null(),null());
HXLINE(  22)		Float _hx_tmp1 = smoke1->get_width();
HXDLIN(  22)		smoke1->setGraphicSize(::Std_obj::_hx_int((_hx_tmp1 * ::flixel::FlxG_obj::random->_hx_float(((Float)1.1),((Float)1.22),null()))),null());
HXLINE(  23)		smoke1->updateHitbox();
HXLINE(  24)		{
HXLINE(  24)			 ::flixel::math::FlxBasePoint this2 = smoke1->velocity;
HXDLIN(  24)			this2->set_x(::flixel::FlxG_obj::random->_hx_float(-15,-22,null()));
            		}
HXLINE(  25)		smoke1->set_active(true);
HXLINE(  26)		smoke1->set_flipX(true);
HXLINE(  27)		smoke1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  28)		this->add(smoke1);
            	}

Dynamic DadBattleFog_obj::__CreateEmpty() { return new DadBattleFog_obj; }

void *DadBattleFog_obj::_hx_vtable = 0;

Dynamic DadBattleFog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DadBattleFog_obj > _hx_result = new DadBattleFog_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DadBattleFog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53cc277c) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x53cc277c;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< DadBattleFog_obj > DadBattleFog_obj::__new() {
	::hx::ObjectPtr< DadBattleFog_obj > __this = new DadBattleFog_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DadBattleFog_obj > DadBattleFog_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DadBattleFog_obj *__this = (DadBattleFog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DadBattleFog_obj), true, "states.stages.objects.DadBattleFog"));
	*(void **)__this = DadBattleFog_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DadBattleFog_obj::DadBattleFog_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DadBattleFog_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DadBattleFog_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DadBattleFog_obj::__mClass;

void DadBattleFog_obj::__register()
{
	DadBattleFog_obj _hx_dummy;
	DadBattleFog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.objects.DadBattleFog",46,7d,cb,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DadBattleFog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DadBattleFog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DadBattleFog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
} // end namespace objects
