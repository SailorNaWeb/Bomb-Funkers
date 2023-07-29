#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_Achievements
#include <backend/Achievements.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_DiscordClient
#include <backend/DiscordClient.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_AttachedAchievement
#include <objects/AttachedAchievement.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_states_AchievementsMenuState
#include <states/AchievementsMenuState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_04e68d0d1b786c83_6_new,"states.AchievementsMenuState","new",0x8b29fbd4,"states.AchievementsMenuState.new","states/AchievementsMenuState.hx",6,0xe610951d)
HX_LOCAL_STACK_FRAME(_hx_pos_04e68d0d1b786c83_16_create,"states.AchievementsMenuState","create",0x93d2dc08,"states.AchievementsMenuState.create","states/AchievementsMenuState.hx",16,0xe610951d)
HX_LOCAL_STACK_FRAME(_hx_pos_04e68d0d1b786c83_63_update,"states.AchievementsMenuState","update",0x9ec8fb15,"states.AchievementsMenuState.update","states/AchievementsMenuState.hx",63,0xe610951d)
HX_LOCAL_STACK_FRAME(_hx_pos_04e68d0d1b786c83_79_changeSelection,"states.AchievementsMenuState","changeSelection",0xacd92230,"states.AchievementsMenuState.changeSelection","states/AchievementsMenuState.hx",79,0xe610951d)
HX_LOCAL_STACK_FRAME(_hx_pos_04e68d0d1b786c83_11_boot,"states.AchievementsMenuState","boot",0x31ab5e3e,"states.AchievementsMenuState.boot","states/AchievementsMenuState.hx",11,0xe610951d)
namespace states{

void AchievementsMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_04e68d0d1b786c83_6_new)
HXLINE(  13)		this->achievementIndex = ::Array_obj< int >::__new(0);
HXLINE(  12)		this->achievementArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   9)		this->options = ::Array_obj< ::String >::__new(0);
HXLINE(   6)		super::__construct(TransIn,TransOut);
            	}

Dynamic AchievementsMenuState_obj::__CreateEmpty() { return new AchievementsMenuState_obj; }

void *AchievementsMenuState_obj::_hx_vtable = 0;

Dynamic AchievementsMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AchievementsMenuState_obj > _hx_result = new AchievementsMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AchievementsMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x53aaab8a || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7f34bcf4;
		}
	}
}

void AchievementsMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_04e68d0d1b786c83_16_create)
HXLINE(  18)		::backend::DiscordClient_obj::changePresence(HX_("Achievements Menu",1b,7e,30,71),null(),null(),null(),null());
HXLINE(  21)		 ::flixel::FlxSprite menuBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  21)		 ::flixel::FlxSprite menuBG1 = menuBG->loadGraphic(::backend::Paths_obj::image(HX_("menuBGBlue",de,35,e3,1e),null(),null()),null(),null(),null(),null(),null());
HXLINE(  22)		menuBG1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  23)		menuBG1->setGraphicSize(::Std_obj::_hx_int((menuBG1->get_width() * ((Float)1.1))),null());
HXLINE(  24)		menuBG1->updateHitbox();
HXLINE(  25)		{
HXLINE(  25)			int axes = 17;
HXDLIN(  25)			bool _hx_tmp;
HXDLIN(  25)			if ((axes != 1)) {
HXLINE(  25)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  25)				_hx_tmp = true;
            			}
HXDLIN(  25)			if (_hx_tmp) {
HXLINE(  25)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  25)				menuBG1->set_x(((( (Float)(_hx_tmp) ) - menuBG1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  25)			bool _hx_tmp1;
HXDLIN(  25)			if ((axes != 16)) {
HXLINE(  25)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  25)				_hx_tmp1 = true;
            			}
HXDLIN(  25)			if (_hx_tmp1) {
HXLINE(  25)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  25)				menuBG1->set_y(((( (Float)(_hx_tmp) ) - menuBG1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  26)		this->add(menuBG1);
HXLINE(  28)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  29)		this->add(this->grpOptions);
HXLINE(  31)		::backend::Achievements_obj::loadAchievements();
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			int _g1 = ::backend::Achievements_obj::achievementsStuff->get_length();
HXDLIN(  32)			while((_g < _g1)){
HXLINE(  32)				_g = (_g + 1);
HXDLIN(  32)				int i = (_g - 1);
HXLINE(  33)				bool _hx_tmp;
HXDLIN(  33)				if (( (bool)(::backend::Achievements_obj::achievementsStuff->__get(i)->__GetItem(3)) )) {
HXLINE(  33)					_hx_tmp = ::backend::Achievements_obj::achievementsMap->exists(( (::String)(::backend::Achievements_obj::achievementsStuff->__get(i)->__GetItem(2)) ));
            				}
            				else {
HXLINE(  33)					_hx_tmp = true;
            				}
HXDLIN(  33)				if (_hx_tmp) {
HXLINE(  34)					this->options->push(::backend::Achievements_obj::achievementsStuff->__get(i));
HXLINE(  35)					this->achievementIndex->push(i);
            				}
            			}
            		}
HXLINE(  39)		{
HXLINE(  39)			int _g2 = 0;
HXDLIN(  39)			int _g3 = this->options->length;
HXDLIN(  39)			while((_g2 < _g3)){
HXLINE(  39)				_g2 = (_g2 + 1);
HXDLIN(  39)				int i = (_g2 - 1);
HXLINE(  40)				::String achieveName = ( (::String)(::backend::Achievements_obj::achievementsStuff->__get(this->achievementIndex->__get(i))->__GetItem(2)) );
HXLINE(  41)				::String optionText;
HXDLIN(  41)				if (::backend::Achievements_obj::isAchievementUnlocked(achieveName)) {
HXLINE(  41)					optionText = ( (::String)(::backend::Achievements_obj::achievementsStuff->__get(this->achievementIndex->__get(i))->__GetItem(0)) );
            				}
            				else {
HXLINE(  41)					optionText = HX_("?",3f,00,00,00);
            				}
HXDLIN(  41)				 ::objects::Alphabet optionText1 =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(280) ),( (Float)(300) ),optionText,false);
HXLINE(  42)				optionText1->isMenuItem = true;
HXLINE(  43)				optionText1->targetY = (i - ::states::AchievementsMenuState_obj::curSelected);
HXLINE(  44)				optionText1->snapToPosition();
HXLINE(  45)				this->grpOptions->add(optionText1).StaticCast<  ::objects::Alphabet >();
HXLINE(  47)				 ::objects::AttachedAchievement icon =  ::objects::AttachedAchievement_obj::__alloc( HX_CTX ,(optionText1->x - ( (Float)(105) )),optionText1->y,achieveName);
HXLINE(  48)				icon->sprTracker = optionText1;
HXLINE(  49)				this->achievementArray->push(icon);
HXLINE(  50)				this->add(icon);
            			}
            		}
HXLINE(  53)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,150,600,980,HX_("",00,00,00,00),32,null());
HXLINE(  54)		 ::flixel::text::FlxText _hx_tmp2 = this->descText;
HXDLIN(  54)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  54)		::String _hx_tmp3;
HXDLIN(  54)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  54)			_hx_tmp3 = file;
            		}
            		else {
HXLINE(  54)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  54)		_hx_tmp2->setFormat(_hx_tmp3,32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  55)		{
HXLINE(  55)			 ::flixel::math::FlxBasePoint this1 = this->descText->scrollFactor;
HXDLIN(  55)			this1->set_x(( (Float)(0) ));
HXDLIN(  55)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  56)		this->descText->set_borderSize(((Float)2.4));
HXLINE(  57)		this->add(this->descText);
HXLINE(  58)		this->changeSelection(null());
HXLINE(  60)		this->super::create();
            	}


void AchievementsMenuState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_04e68d0d1b786c83_63_update)
HXLINE(  64)		this->super::update(elapsed);
HXLINE(  66)		if (this->get_controls()->get_UI_UP_P()) {
HXLINE(  67)			this->changeSelection(-1);
            		}
HXLINE(  69)		if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE(  70)			this->changeSelection(1);
            		}
HXLINE(  73)		if (this->get_controls()->get_BACK()) {
HXLINE(  74)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  74)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  75)			::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
            	}


void AchievementsMenuState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_04e68d0d1b786c83_79_changeSelection)
HXLINE(  80)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::states::AchievementsMenuState >();
HXDLIN(  80)		::states::AchievementsMenuState_obj::curSelected = (::states::AchievementsMenuState_obj::curSelected + change);
HXLINE(  81)		if ((::states::AchievementsMenuState_obj::curSelected < 0)) {
HXLINE(  82)			::states::AchievementsMenuState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE(  83)		if ((::states::AchievementsMenuState_obj::curSelected >= this->options->length)) {
HXLINE(  84)			::states::AchievementsMenuState_obj::curSelected = 0;
            		}
HXLINE(  86)		int bullShit = 0;
HXLINE(  88)		{
HXLINE(  88)			int _g = 0;
HXDLIN(  88)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN(  88)			while((_g < _g1->length)){
HXLINE(  88)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN(  88)				_g = (_g + 1);
HXLINE(  89)				item->targetY = (bullShit - ::states::AchievementsMenuState_obj::curSelected);
HXLINE(  90)				bullShit = (bullShit + 1);
HXLINE(  92)				item->set_alpha(((Float)0.6));
HXLINE(  93)				if ((item->targetY == 0)) {
HXLINE(  94)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE(  98)		{
HXLINE(  98)			int _g2 = 0;
HXDLIN(  98)			int _g3 = this->achievementArray->length;
HXDLIN(  98)			while((_g2 < _g3)){
HXLINE(  98)				_g2 = (_g2 + 1);
HXDLIN(  98)				int i = (_g2 - 1);
HXLINE(  99)				this->achievementArray->__get(i).StaticCast<  ::objects::AttachedAchievement >()->set_alpha(((Float)0.6));
HXLINE( 100)				if ((i == ::states::AchievementsMenuState_obj::curSelected)) {
HXLINE( 101)					this->achievementArray->__get(i).StaticCast<  ::objects::AttachedAchievement >()->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 104)		this->descText->set_text(( (::String)(::backend::Achievements_obj::achievementsStuff->__get(this->achievementIndex->__get(::states::AchievementsMenuState_obj::curSelected))->__GetItem(1)) ));
HXLINE( 105)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 105)		_hx_tmp1->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AchievementsMenuState_obj,changeSelection,(void))

int AchievementsMenuState_obj::curSelected;


::hx::ObjectPtr< AchievementsMenuState_obj > AchievementsMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< AchievementsMenuState_obj > __this = new AchievementsMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< AchievementsMenuState_obj > AchievementsMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	AchievementsMenuState_obj *__this = (AchievementsMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AchievementsMenuState_obj), true, "states.AchievementsMenuState"));
	*(void **)__this = AchievementsMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

AchievementsMenuState_obj::AchievementsMenuState_obj()
{
}

void AchievementsMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AchievementsMenuState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(achievementArray,"achievementArray");
	HX_MARK_MEMBER_NAME(achievementIndex,"achievementIndex");
	HX_MARK_MEMBER_NAME(descText,"descText");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AchievementsMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(achievementArray,"achievementArray");
	HX_VISIT_MEMBER_NAME(achievementIndex,"achievementIndex");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AchievementsMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"achievementArray") ) { return ::hx::Val( achievementArray ); }
		if (HX_FIELD_EQ(inName,"achievementIndex") ) { return ::hx::Val( achievementIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AchievementsMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val AchievementsMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"achievementArray") ) { achievementArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"achievementIndex") ) { achievementIndex=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AchievementsMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void AchievementsMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("achievementArray",aa,2a,65,57));
	outFields->push(HX_("achievementIndex",23,58,ea,ef));
	outFields->push(HX_("descText",9e,53,35,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AchievementsMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(AchievementsMenuState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(AchievementsMenuState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AchievementsMenuState_obj,achievementArray),HX_("achievementArray",aa,2a,65,57)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(AchievementsMenuState_obj,achievementIndex),HX_("achievementIndex",23,58,ea,ef)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(AchievementsMenuState_obj,descText),HX_("descText",9e,53,35,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AchievementsMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &AchievementsMenuState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AchievementsMenuState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("achievementArray",aa,2a,65,57),
	HX_("achievementIndex",23,58,ea,ef),
	HX_("descText",9e,53,35,f3),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void AchievementsMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AchievementsMenuState_obj::curSelected,"curSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AchievementsMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AchievementsMenuState_obj::curSelected,"curSelected");
};

#endif

::hx::Class AchievementsMenuState_obj::__mClass;

static ::String AchievementsMenuState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	::String(null())
};

void AchievementsMenuState_obj::__register()
{
	AchievementsMenuState_obj _hx_dummy;
	AchievementsMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.AchievementsMenuState",e2,c1,ea,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AchievementsMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &AchievementsMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = AchievementsMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AchievementsMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AchievementsMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AchievementsMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AchievementsMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AchievementsMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AchievementsMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AchievementsMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_04e68d0d1b786c83_11_boot)
HXDLIN(  11)		curSelected = 0;
            	}
}

} // end namespace states
