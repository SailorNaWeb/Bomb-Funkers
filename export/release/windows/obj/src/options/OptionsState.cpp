#include <hxcpp.h>

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
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_backend_StageData
#include <backend/StageData.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
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
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_ControlsSubState
#include <options/ControlsSubState.h>
#endif
#ifndef INCLUDED_options_GameplaySettingsSubState
#include <options/GameplaySettingsSubState.h>
#endif
#ifndef INCLUDED_options_GraphicsSettingsSubState
#include <options/GraphicsSettingsSubState.h>
#endif
#ifndef INCLUDED_options_NoteOffsetState
#include <options/NoteOffsetState.h>
#endif
#ifndef INCLUDED_options_NotesSubState
#include <options/NotesSubState.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_options_VisualsUISubState
#include <options/VisualsUISubState.h>
#endif
#ifndef INCLUDED_states_LoadingState
#include <states/LoadingState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bddb8806f8971119_6_new,"options.OptionsState","new",0xe72cff75,"options.OptionsState.new","options/OptionsState.hx",6,0xaa608eba)
static const ::String _hx_array_data_14992103_1[] = {
	HX_("Note Colors",1e,54,23,f8),HX_("Controls",96,42,6e,11),HX_("Adjust Delay and Combo",b7,c9,c3,05),HX_("Graphics",eb,b4,19,ec),HX_("Visuals and UI",ea,4a,1e,90),HX_("Gameplay",06,bf,58,a5),
};
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_15_openSelectedSubstate,"options.OptionsState","openSelectedSubstate",0x28c3b341,"options.OptionsState.openSelectedSubstate","options/OptionsState.hx",15,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_34_create,"options.OptionsState","create",0xc1bf1307,"options.OptionsState.create","options/OptionsState.hx",34,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_69_closeSubState,"options.OptionsState","closeSubState",0xbc3ad39e,"options.OptionsState.closeSubState","options/OptionsState.hx",69,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_74_update,"options.OptionsState","update",0xccb53214,"options.OptionsState.update","options/OptionsState.hx",74,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_97_changeSelection,"options.OptionsState","changeSelection",0xa0e39351,"options.OptionsState.changeSelection","options/OptionsState.hx",97,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_123_destroy,"options.OptionsState","destroy",0xd88d0a8f,"options.OptionsState.destroy","options/OptionsState.hx",123,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_10_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",10,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_12_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",12,0xaa608eba)
namespace options{

void OptionsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_6_new)
HXLINE(   8)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_14992103_1,6);
HXLINE(   6)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3b1d59ed || inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OptionsState_obj::openSelectedSubstate(::String label){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_15_openSelectedSubstate)
HXDLIN(  15)		::String _hx_switch_0 = label;
            		if (  (_hx_switch_0==HX_("Adjust Delay and Combo",b7,c9,c3,05)) ){
HXLINE(  27)			::backend::MusicBeatState_obj::switchState( ::options::NoteOffsetState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  27)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Controls",96,42,6e,11)) ){
HXLINE(  19)			this->openSubState( ::options::ControlsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  19)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Gameplay",06,bf,58,a5)) ){
HXLINE(  25)			this->openSubState( ::options::GameplaySettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  25)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Graphics",eb,b4,19,ec)) ){
HXLINE(  21)			this->openSubState( ::options::GraphicsSettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  21)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Note Colors",1e,54,23,f8)) ){
HXLINE(  17)			this->openSubState( ::options::NotesSubState_obj::__alloc( HX_CTX ));
HXDLIN(  17)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Visuals and UI",ea,4a,1e,90)) ){
HXLINE(  23)			this->openSubState( ::options::VisualsUISubState_obj::__alloc( HX_CTX ));
HXDLIN(  23)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,openSelectedSubstate,(void))

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_34_create)
HXLINE(  36)		::backend::DiscordClient_obj::changePresence(HX_("Options Menu",e1,25,4c,98),null(),null(),null(),null());
HXLINE(  39)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  39)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::backend::Paths_obj::image(HX_("menuDesat",26,91,04,72),null(),null()),null(),null(),null(),null(),null());
HXLINE(  40)		bg1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  41)		bg1->set_color(-1412611);
HXLINE(  42)		bg1->updateHitbox();
HXLINE(  44)		{
HXLINE(  44)			int axes = 17;
HXDLIN(  44)			bool _hx_tmp;
HXDLIN(  44)			if ((axes != 1)) {
HXLINE(  44)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  44)				_hx_tmp = true;
            			}
HXDLIN(  44)			if (_hx_tmp) {
HXLINE(  44)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  44)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  44)			bool _hx_tmp1;
HXDLIN(  44)			if ((axes != 16)) {
HXLINE(  44)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  44)				_hx_tmp1 = true;
            			}
HXDLIN(  44)			if (_hx_tmp1) {
HXLINE(  44)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  44)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  45)		this->add(bg1);
HXLINE(  47)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  48)		this->add(this->grpOptions);
HXLINE(  50)		{
HXLINE(  50)			int _g = 0;
HXDLIN(  50)			int _g1 = this->options->length;
HXDLIN(  50)			while((_g < _g1)){
HXLINE(  50)				_g = (_g + 1);
HXDLIN(  50)				int i = (_g - 1);
HXLINE(  52)				 ::objects::Alphabet optionText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),this->options->__get(i),true);
HXLINE(  53)				{
HXLINE(  53)					int axes = 17;
HXDLIN(  53)					bool _hx_tmp;
HXDLIN(  53)					if ((axes != 1)) {
HXLINE(  53)						_hx_tmp = (axes == 17);
            					}
            					else {
HXLINE(  53)						_hx_tmp = true;
            					}
HXDLIN(  53)					if (_hx_tmp) {
HXLINE(  53)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  53)						optionText->set_x(((( (Float)(_hx_tmp) ) - optionText->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  53)					bool _hx_tmp1;
HXDLIN(  53)					if ((axes != 16)) {
HXLINE(  53)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE(  53)						_hx_tmp1 = true;
            					}
HXDLIN(  53)					if (_hx_tmp1) {
HXLINE(  53)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  53)						optionText->set_y(((( (Float)(_hx_tmp) ) - optionText->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  54)				optionText->set_y((optionText->y + ((( (Float)(100) ) * (( (Float)(i) ) - (( (Float)(this->options->length) ) / ( (Float)(2) )))) + 50)));
HXLINE(  55)				this->grpOptions->add(optionText).StaticCast<  ::objects::Alphabet >();
            			}
            		}
HXLINE(  58)		this->selectorLeft =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_(">",3e,00,00,00),true);
HXLINE(  59)		this->add(this->selectorLeft);
HXLINE(  60)		this->selectorRight =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("<",3c,00,00,00),true);
HXLINE(  61)		this->add(this->selectorRight);
HXLINE(  63)		this->changeSelection(null());
HXLINE(  64)		::backend::ClientPrefs_obj::saveSettings();
HXLINE(  66)		this->super::create();
            	}


void OptionsState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_69_closeSubState)
HXLINE(  70)		this->super::closeSubState();
HXLINE(  71)		::backend::ClientPrefs_obj::saveSettings();
            	}


void OptionsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_74_update)
HXLINE(  75)		this->super::update(elapsed);
HXLINE(  77)		if (this->get_controls()->get_UI_UP_P()) {
HXLINE(  78)			this->changeSelection(-1);
            		}
HXLINE(  80)		if (this->get_controls()->get_UI_DOWN_P()) {
HXLINE(  81)			this->changeSelection(1);
            		}
HXLINE(  84)		if (this->get_controls()->get_BACK()) {
HXLINE(  85)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  85)			_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE(  86)			if (::options::OptionsState_obj::onPlayState) {
HXLINE(  88)				::backend::StageData_obj::loadDirectory(::states::PlayState_obj::SONG);
HXLINE(  89)				::backend::MusicBeatState_obj::switchState(::states::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXLINE(  90)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
            			}
            			else {
HXLINE(  92)				::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            		}
            		else {
HXLINE(  94)			if (this->get_controls()->get_ACCEPT()) {
HXLINE(  94)				this->openSelectedSubstate(this->options->__get(::options::OptionsState_obj::curSelected));
            			}
            		}
            	}


void OptionsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_97_changeSelection)
HXLINE(  98)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::OptionsState >();
HXDLIN(  98)		::options::OptionsState_obj::curSelected = (::options::OptionsState_obj::curSelected + change);
HXLINE(  99)		if ((::options::OptionsState_obj::curSelected < 0)) {
HXLINE( 100)			::options::OptionsState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE( 101)		if ((::options::OptionsState_obj::curSelected >= this->options->length)) {
HXLINE( 102)			::options::OptionsState_obj::curSelected = 0;
            		}
HXLINE( 104)		int bullShit = 0;
HXLINE( 106)		{
HXLINE( 106)			int _g = 0;
HXDLIN( 106)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 106)			while((_g < _g1->length)){
HXLINE( 106)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 106)				_g = (_g + 1);
HXLINE( 107)				item->targetY = (bullShit - ::options::OptionsState_obj::curSelected);
HXLINE( 108)				bullShit = (bullShit + 1);
HXLINE( 110)				item->set_alpha(((Float)0.6));
HXLINE( 111)				if ((item->targetY == 0)) {
HXLINE( 112)					item->set_alpha(( (Float)(1) ));
HXLINE( 113)					this->selectorLeft->set_x((item->x - ( (Float)(63) )));
HXLINE( 114)					this->selectorLeft->set_y(item->y);
HXLINE( 115)					 ::objects::Alphabet _hx_tmp = this->selectorRight;
HXDLIN( 115)					Float item1 = item->x;
HXDLIN( 115)					_hx_tmp->set_x(((item1 + item->get_width()) + 15));
HXLINE( 116)					this->selectorRight->set_y(item->y);
            				}
            			}
            		}
HXLINE( 119)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 119)		_hx_tmp1->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,changeSelection,(void))

void OptionsState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_123_destroy)
HXLINE( 124)		::backend::ClientPrefs_obj::loadPrefs();
HXLINE( 125)		this->super::destroy();
            	}


int OptionsState_obj::curSelected;

 ::flixel::FlxSprite OptionsState_obj::menuBG;

bool OptionsState_obj::onPlayState;


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "options.OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_MARK_MEMBER_NAME(selectorRight,"selectorRight");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_VISIT_MEMBER_NAME(selectorRight,"selectorRight");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { return ::hx::Val( selectorLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { return ::hx::Val( selectorRight ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"openSelectedSubstate") ) { return ::hx::Val( openSelectedSubstate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { outValue = ( menuBG ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		if (HX_FIELD_EQ(inName,"onPlayState") ) { outValue = ( onPlayState ); return true; }
	}
	return false;
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { selectorLeft=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { selectorRight=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { menuBG=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"onPlayState") ) { onPlayState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("selectorLeft",c6,e2,77,e7));
	outFields->push(HX_("selectorRight",3d,98,7b,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorLeft),HX_("selectorLeft",c6,e2,77,e7)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorRight),HX_("selectorRight",3d,98,7b,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &OptionsState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &OptionsState_obj::menuBG,HX_("menuBG",24,65,6d,05)},
	{::hx::fsBool,(void *) &OptionsState_obj::onPlayState,HX_("onPlayState",5e,86,32,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("openSelectedSubstate",f6,29,af,78),
	HX_("selectorLeft",c6,e2,77,e7),
	HX_("selectorRight",3d,98,7b,18),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void OptionsState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
	HX_MARK_MEMBER_NAME(OptionsState_obj::onPlayState,"onPlayState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::onPlayState,"onPlayState");
};

#endif

::hx::Class OptionsState_obj::__mClass;

static ::String OptionsState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuBG",24,65,6d,05),
	HX_("onPlayState",5e,86,32,c7),
	::String(null())
};

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.OptionsState",03,21,99,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsState_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsState_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OptionsState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_10_boot)
HXDLIN(  10)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_12_boot)
HXDLIN(  12)		onPlayState = false;
            	}
}

} // end namespace options
