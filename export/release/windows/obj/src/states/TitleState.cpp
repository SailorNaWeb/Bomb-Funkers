#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Controls
#include <backend/Controls.h>
#endif
#ifndef INCLUDED_backend_Highscore
#include <backend/Highscore.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_shaders_ColorSwap
#include <shaders/ColorSwap.h>
#endif
#ifndef INCLUDED_shaders_ColorSwapShader
#include <shaders/ColorSwapShader.h>
#endif
#ifndef INCLUDED_states_FlashingState
#include <states/FlashingState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_states_OutdatedState
#include <states/OutdatedState.h>
#endif
#ifndef INCLUDED_states_StoryMenuState
#include <states/StoryMenuState.h>
#endif
#ifndef INCLUDED_states_TitleState
#include <states/TitleState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4f54134d4f9e667_42_new,"states.TitleState","new",0x1a057497,"states.TitleState.new","states/TitleState.hx",42,0xa989be18)
static const Float _hx_array_data_81c3dd25_1[] = {
	(Float)1,.64,
};
static const int _hx_array_data_81c3dd25_2[] = {
	(int)-13369345,(int)-13421620,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_79_create,"states.TitleState","create",0x5256ff25,"states.TitleState.create","states/TitleState.hx",79,0xa989be18)
static const int _hx_array_data_81c3dd25_7[] = {
	(int)9,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_181_create,"states.TitleState","create",0x5256ff25,"states.TitleState.create","states/TitleState.hx",181,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_196_startIntro,"states.TitleState","startIntro",0x63990353,"states.TitleState.startIntro","states/TitleState.hx",196,0xa989be18)
static const int _hx_array_data_81c3dd25_10[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_81c3dd25_11[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_356_getIntroTextShit,"states.TitleState","getIntroTextShit",0xb448648c,"states.TitleState.getIntroTextShit","states/TitleState.hx",356,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_380_update,"states.TitleState","update",0x5d4d1e32,"states.TitleState.update","states/TitleState.hx",380,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_445_update,"states.TitleState","update",0x5d4d1e32,"states.TitleState.update","states/TitleState.hx",445,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_523_createCoolText,"states.TitleState","createCoolText",0x558b345b,"states.TitleState.createCoolText","states/TitleState.hx",523,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_537_addMoreText,"states.TitleState","addMoreText",0x3373315a,"states.TitleState.addMoreText","states/TitleState.hx",537,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_548_deleteCoolText,"states.TitleState","deleteCoolText",0x5d27d48a,"states.TitleState.deleteCoolText","states/TitleState.hx",548,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_558_beatHit,"states.TitleState","beatHit",0x1c627634,"states.TitleState.beatHit","states/TitleState.hx",558,0xa989be18)
static const ::String _hx_array_data_81c3dd25_26[] = {
	HX_("Psych Engine by",10,a0,74,89),
};
static const ::String _hx_array_data_81c3dd25_27[] = {
	HX_("Not associated",53,f0,cf,18),HX_("with",06,76,f8,4e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_647_skipIntro,"states.TitleState","skipIntro",0x75bd5ee4,"states.TitleState.skipIntro","states/TitleState.hx",647,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_684_skipIntro,"states.TitleState","skipIntro",0x75bd5ee4,"states.TitleState.skipIntro","states/TitleState.hx",684,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_696_skipIntro,"states.TitleState","skipIntro",0x75bd5ee4,"states.TitleState.skipIntro","states/TitleState.hx",696,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_44_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",44,0xa989be18)
static const int _hx_array_data_81c3dd25_33[] = {
	(int)48,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_45_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",45,0xa989be18)
static const int _hx_array_data_81c3dd25_35[] = {
	(int)109,(int)189,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_46_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",46,0xa989be18)
static const int _hx_array_data_81c3dd25_37[] = {
	(int)107,(int)187,
};
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_48_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",48,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_76_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",76,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_374_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",374,0xa989be18)
HX_LOCAL_STACK_FRAME(_hx_pos_f4f54134d4f9e667_556_boot,"states.TitleState","boot",0xa2d9901b,"states.TitleState.boot","states/TitleState.hx",556,0xa989be18)
namespace states{

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_42_new)
HXLINE( 645)		this->increaseVolume = false;
HXLINE( 644)		this->skippedIntro = false;
HXLINE( 555)		this->sickBeats = 0;
HXLINE( 377)		this->titleTimer = ((Float)0);
HXLINE( 376)		this->newTitle = false;
HXLINE( 373)		this->transitioning = false;
HXLINE( 192)		this->swagShader = null();
HXLINE( 190)		this->danceLeft = false;
HXLINE(  72)		this->mustUpdate = false;
HXLINE(  60)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  58)		this->titleTextAlphas = ::Array_obj< Float >::fromData( _hx_array_data_81c3dd25_1,2);
HXLINE(  57)		this->titleTextColors = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_2,2);
HXLINE(  42)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x1b9a519f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1b9a519f;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x53aaab8a;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void TitleState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_79_create)
HXDLIN(  79)		 ::states::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  80)		::backend::Paths_obj::clearStoredMemory(null());
HXLINE(  81)		::backend::Paths_obj::clearUnusedMemory();
HXLINE(  84)		{
HXLINE(  84)			::backend::Mods_obj::globalMods = ::Array_obj< ::String >::__new(0);
HXDLIN(  84)			{
HXLINE(  84)				int _g = 0;
HXDLIN(  84)				if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  84)					::backend::Mods_obj::updateModList();
            				}
HXDLIN(  84)				::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  84)				::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  84)				::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  84)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  84)					int _g = 0;
HXDLIN(  84)					::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  84)					::String daList = null();
HXDLIN(  84)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)					path = formatted->__get((formatted->length - 1));
HXLINE(  84)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXLINE(  84)					::Array< ::String > _g1;
HXDLIN(  84)					if (::hx::IsNotNull( daList )) {
HXLINE(  84)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  84)						{
HXLINE(  84)							int _g = 0;
HXDLIN(  84)							int _g2 = daList1->length;
HXDLIN(  84)							while((_g < _g2)){
HXLINE(  84)								_g = (_g + 1);
HXDLIN(  84)								int i = (_g - 1);
HXDLIN(  84)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN(  84)						_g1 = daList1;
            					}
            					else {
HXLINE(  84)						_g1 = ::Array_obj< ::String >::__new(0);
            					}
HXDLIN(  84)					while((_g < _g1->length)){
HXLINE(  84)						::String mod = _g1->__get(_g);
HXDLIN(  84)						_g = (_g + 1);
HXDLIN(  84)						if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  84)							continue;
            						}
HXDLIN(  84)						::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  84)						list_all->push(dat->__get(0));
HXDLIN(  84)						if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  84)							list_enabled->push(dat->__get(0));
            						}
            						else {
HXLINE(  84)							list_disabled->push(dat->__get(0));
            						}
            					}
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 172)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  84)						::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN(  84)				::Array< ::String > _g1 = list_enabled;
HXDLIN(  84)				while((_g < _g1->length)){
HXLINE(  84)					::String mod = _g1->__get(_g);
HXDLIN(  84)					_g = (_g + 1);
HXDLIN(  84)					 ::Dynamic pack = ::backend::Mods_obj::getPack(mod);
HXDLIN(  84)					bool _hx_tmp;
HXDLIN(  84)					if (::hx::IsNotNull( pack )) {
HXLINE(  84)						_hx_tmp = ( (bool)(pack->__Field(HX_("runsGlobally",98,2d,b5,06),::hx::paccDynamic)) );
            					}
            					else {
HXLINE(  84)						_hx_tmp = false;
            					}
HXDLIN(  84)					if (_hx_tmp) {
HXLINE(  84)						::backend::Mods_obj::globalMods->push(mod);
            					}
            				}
            			}
            		}
HXLINE(  86)		::backend::Mods_obj::loadTopMod();
HXLINE(  88)		::flixel::FlxG_obj::fixedTimestep = false;
HXLINE(  89)		::flixel::FlxG_obj::game->focusLostFramerate = 60;
HXLINE(  90)		::flixel::FlxG_obj::keys->preventDefaultKeys = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_7,1);
HXLINE(  92)		 ::flixel::math::FlxRandom _hx_tmp = ::flixel::FlxG_obj::random;
HXDLIN(  92)		this->curWacky = _hx_tmp->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE(  94)		this->super::create();
HXLINE(  96)		 ::flixel::util::FlxSave _hx_tmp1 = ::flixel::FlxG_obj::save;
HXDLIN(  96)		::String _hx_tmp2 = (::openfl::Lib_obj::get_current()->stage->application->meta->get(HX_("company",3d,15,69,83)) + HX_("/",2f,00,00,00));
HXDLIN(  96)		_hx_tmp1->bind(HX_("funkin",31,b2,4f,6f),(_hx_tmp2 + ::flixel::util::FlxSave_obj::validate(::openfl::Lib_obj::get_current()->stage->application->meta->get_string(HX_("file",7c,ce,bb,43)))));
HXLINE(  98)		::backend::ClientPrefs_obj::loadPrefs();
HXLINE( 124)		::backend::Highscore_obj::load();
HXLINE( 127)		this->titleJSON = ::tjson::TJSON_obj::parse(::backend::Paths_obj::getTextFromFile(HX_("images/gfDanceTitle.json",1b,dc,af,fc),null()),null(),null());
HXLINE( 148)		if (!(::states::TitleState_obj::initialized)) {
HXLINE( 150)			bool _hx_tmp;
HXDLIN( 150)			if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE( 150)				_hx_tmp = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) );
            			}
            			else {
HXLINE( 150)				_hx_tmp = false;
            			}
HXDLIN( 150)			if (_hx_tmp) {
HXLINE( 152)				::flixel::FlxG_obj::set_fullscreen(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("fullscreen",3b,3a,b4,f9),::hx::paccDynamic)) ));
            			}
HXLINE( 155)			this->persistentUpdate = true;
HXLINE( 156)			this->persistentDraw = true;
            		}
HXLINE( 159)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic) )) {
HXLINE( 161)			::states::StoryMenuState_obj::weekCompleted = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic)) );
            		}
HXLINE( 164)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 170)		bool _hx_tmp3;
HXDLIN( 170)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE( 170)			_hx_tmp3 = !(::states::FlashingState_obj::leftState);
            		}
            		else {
HXLINE( 170)			_hx_tmp3 = false;
            		}
HXDLIN( 170)		if (_hx_tmp3) {
HXLINE( 171)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE( 172)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE( 173)			::backend::MusicBeatState_obj::switchState( ::states::FlashingState_obj::__alloc( HX_CTX ,null(),null()));
            		}
            		else {
HXLINE( 175)			if (::states::TitleState_obj::initialized) {
HXLINE( 176)				this->startIntro();
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::TitleState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_181_create)
HXLINE( 181)					_gthis->startIntro();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 179)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            			}
            		}
            	}


void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_196_startIntro)
HXLINE( 197)		if (!(::states::TitleState_obj::initialized)) {
HXLINE( 199)			if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 200)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 200)				::String library = null();
HXDLIN( 200)				 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 200)				_hx_tmp->playMusic(file,0,null(),null());
            			}
            		}
HXLINE( 204)		::backend::Conductor_obj::changeBPM(( (Float)(this->titleJSON->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ));
HXLINE( 205)		this->persistentUpdate = true;
HXLINE( 207)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 208)		bg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 210)		bool _hx_tmp;
HXDLIN( 210)		bool _hx_tmp1;
HXDLIN( 210)		if (::hx::IsNotNull( this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic) )) {
HXLINE( 210)			_hx_tmp1 = (( (::String)(this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic)) ).length > 0);
            		}
            		else {
HXLINE( 210)			_hx_tmp1 = false;
            		}
HXDLIN( 210)		if (_hx_tmp1) {
HXLINE( 210)			_hx_tmp = ::hx::IsNotEq( this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic),HX_("none",b8,12,0a,49) );
            		}
            		else {
HXLINE( 210)			_hx_tmp = false;
            		}
HXDLIN( 210)		if (_hx_tmp) {
HXLINE( 211)			bg->loadGraphic(::backend::Paths_obj::image(( (::String)(this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic)) ),null(),null()),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 213)			bg->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
            		}
HXLINE( 218)		this->add(bg);
HXLINE( 220)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("titlex",e0,cf,77,23),::hx::paccDynamic),this->titleJSON->__Field(HX_("titley",e1,cf,77,23),::hx::paccDynamic),null());
HXLINE( 221)		 ::flixel::FlxSprite _hx_tmp2 = this->logoBl;
HXDLIN( 221)		::String library = null();
HXDLIN( 221)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("logoBumpin",26,cb,02,ab),null(),true);
HXDLIN( 221)		bool xmlExists = false;
HXDLIN( 221)		::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 221)		if (::sys::FileSystem_obj::exists(xml)) {
HXLINE( 221)			xmlExists = true;
            		}
HXDLIN( 221)		 ::Dynamic _hx_tmp3;
HXDLIN( 221)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 221)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE( 221)			_hx_tmp3 = ::backend::Paths_obj::image(HX_("logoBumpin",26,cb,02,ab),library,true);
            		}
HXDLIN( 221)		 ::Dynamic _hx_tmp4;
HXDLIN( 221)		if (xmlExists) {
HXLINE( 221)			_hx_tmp4 = ::sys::io::File_obj::getContent(xml);
            		}
            		else {
HXLINE( 221)			_hx_tmp4 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logoBumpin",26,cb,02,ab)) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            		}
HXDLIN( 221)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE( 222)		this->logoBl->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 224)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,false,null(),null());
HXLINE( 225)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 226)		this->logoBl->updateHitbox();
HXLINE( 230)		 ::flixel::FlxSprite titlebg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 230)		 ::flixel::FlxSprite titlebg1 = titlebg->loadGraphic(::backend::Paths_obj::image(HX_("main/title",02,b4,18,fc),null(),null()),null(),null(),null(),null(),null());
HXLINE( 231)		titlebg1->setGraphicSize(::Std_obj::_hx_int((titlebg1->get_width() * ((Float)2.600))),null());
HXLINE( 232)		titlebg1->updateHitbox();
HXLINE( 233)		{
HXLINE( 233)			int axes = 17;
HXDLIN( 233)			bool _hx_tmp5;
HXDLIN( 233)			if ((axes != 1)) {
HXLINE( 233)				_hx_tmp5 = (axes == 17);
            			}
            			else {
HXLINE( 233)				_hx_tmp5 = true;
            			}
HXDLIN( 233)			if (_hx_tmp5) {
HXLINE( 233)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 233)				titlebg1->set_x(((( (Float)(_hx_tmp) ) - titlebg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 233)			bool _hx_tmp6;
HXDLIN( 233)			if ((axes != 16)) {
HXLINE( 233)				_hx_tmp6 = (axes == 17);
            			}
            			else {
HXLINE( 233)				_hx_tmp6 = true;
            			}
HXDLIN( 233)			if (_hx_tmp6) {
HXLINE( 233)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 233)				titlebg1->set_y(((( (Float)(_hx_tmp) ) - titlebg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 234)		this->add(titlebg1);
HXLINE( 236)		 ::flixel::FlxSprite _hx_tmp7 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN( 236)		this->magenta = _hx_tmp7->loadGraphic(::backend::Paths_obj::image(HX_("main/title",02,b4,18,fc),null(),null()),null(),null(),null(),null(),null());
HXLINE( 237)		 ::flixel::FlxSprite _hx_tmp8 = this->magenta;
HXDLIN( 237)		_hx_tmp8->setGraphicSize(::Std_obj::_hx_int((this->magenta->get_width() * ((Float)2.600))),null());
HXLINE( 238)		this->magenta->updateHitbox();
HXLINE( 239)		{
HXLINE( 239)			 ::flixel::FlxSprite _this = this->magenta;
HXDLIN( 239)			int axes1 = 17;
HXDLIN( 239)			bool _hx_tmp9;
HXDLIN( 239)			if ((axes1 != 1)) {
HXLINE( 239)				_hx_tmp9 = (axes1 == 17);
            			}
            			else {
HXLINE( 239)				_hx_tmp9 = true;
            			}
HXDLIN( 239)			if (_hx_tmp9) {
HXLINE( 239)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 239)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 239)			bool _hx_tmp10;
HXDLIN( 239)			if ((axes1 != 16)) {
HXLINE( 239)				_hx_tmp10 = (axes1 == 17);
            			}
            			else {
HXLINE( 239)				_hx_tmp10 = true;
            			}
HXDLIN( 239)			if (_hx_tmp10) {
HXLINE( 239)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 239)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 240)		this->magenta->set_color(-16756084);
HXLINE( 241)		this->add(this->magenta);
HXLINE( 243)		if (::backend::ClientPrefs_obj::data->shaders) {
HXLINE( 243)			this->swagShader =  ::shaders::ColorSwap_obj::__alloc( HX_CTX );
            		}
HXLINE( 244)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("gfx",79,81,4e,00),::hx::paccDynamic),this->titleJSON->__Field(HX_("gfy",7a,81,4e,00),::hx::paccDynamic),null());
HXLINE( 245)		this->gfDance->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 247)		::String easterEgg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 248)		if (::hx::IsNull( easterEgg )) {
HXLINE( 248)			easterEgg = HX_("",00,00,00,00);
            		}
HXLINE( 250)		{
HXLINE( 250)			::String _g = easterEgg.toUpperCase();
HXLINE( 272)			{
HXLINE( 276)				 ::flixel::FlxSprite _hx_tmp11 = this->gfDance;
HXDLIN( 276)				::String library1 = null();
HXDLIN( 276)				 ::flixel::graphics::FlxGraphic imageLoaded1 = ::backend::Paths_obj::image(HX_("gfDanceTitle",64,64,d2,7b),null(),true);
HXDLIN( 276)				bool xmlExists1 = false;
HXDLIN( 276)				::String xml1 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 276)				if (::sys::FileSystem_obj::exists(xml1)) {
HXLINE( 276)					xmlExists1 = true;
            				}
HXDLIN( 276)				 ::Dynamic _hx_tmp12;
HXDLIN( 276)				if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE( 276)					_hx_tmp12 = imageLoaded1;
            				}
            				else {
HXLINE( 276)					_hx_tmp12 = ::backend::Paths_obj::image(HX_("gfDanceTitle",64,64,d2,7b),library1,true);
            				}
HXDLIN( 276)				 ::Dynamic _hx_tmp13;
HXDLIN( 276)				if (xmlExists1) {
HXLINE( 276)					_hx_tmp13 = ::sys::io::File_obj::getContent(xml1);
            				}
            				else {
HXLINE( 276)					_hx_tmp13 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfDanceTitle",64,64,d2,7b)) + HX_(".xml",69,3e,c3,1e)),null(),library1,null());
            				}
HXDLIN( 276)				_hx_tmp11->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp12,_hx_tmp13));
HXLINE( 277)				this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_81c3dd25_10,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 278)				this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_81c3dd25_11,15),HX_("",00,00,00,00),24,false,null(),null());
            			}
            		}
HXLINE( 281)		this->add(this->logoBl);
HXLINE( 282)		if (::hx::IsNotNull( this->swagShader )) {
HXLINE( 284)			this->gfDance->shader = this->swagShader->shader;
HXLINE( 285)			this->logoBl->shader = this->swagShader->shader;
            		}
HXLINE( 288)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("startx",d6,61,fa,05),::hx::paccDynamic),this->titleJSON->__Field(HX_("starty",d7,61,fa,05),::hx::paccDynamic),null());
HXLINE( 289)		 ::flixel::FlxSprite _hx_tmp14 = this->titleText;
HXDLIN( 289)		::String library2 = null();
HXDLIN( 289)		 ::flixel::graphics::FlxGraphic imageLoaded2 = ::backend::Paths_obj::image(HX_("titleEnter",60,80,6b,82),null(),true);
HXDLIN( 289)		bool xmlExists2 = false;
HXDLIN( 289)		::String xml2 = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e)));
HXDLIN( 289)		if (::sys::FileSystem_obj::exists(xml2)) {
HXLINE( 289)			xmlExists2 = true;
            		}
HXDLIN( 289)		 ::Dynamic _hx_tmp15;
HXDLIN( 289)		if (::hx::IsNotNull( imageLoaded2 )) {
HXLINE( 289)			_hx_tmp15 = imageLoaded2;
            		}
            		else {
HXLINE( 289)			_hx_tmp15 = ::backend::Paths_obj::image(HX_("titleEnter",60,80,6b,82),library2,true);
            		}
HXDLIN( 289)		 ::Dynamic _hx_tmp16;
HXDLIN( 289)		if (xmlExists2) {
HXLINE( 289)			_hx_tmp16 = ::sys::io::File_obj::getContent(xml2);
            		}
            		else {
HXLINE( 289)			_hx_tmp16 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("titleEnter",60,80,6b,82)) + HX_(".xml",69,3e,c3,1e)),null(),library2,null());
            		}
HXDLIN( 289)		_hx_tmp14->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp15,_hx_tmp16));
HXLINE( 290)		::Array< ::Dynamic> animFrames = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 291)		{
HXLINE( 292)			this->titleText->animation->findByPrefix(animFrames,HX_("ENTER IDLE",3c,57,01,7a));
HXLINE( 293)			this->titleText->animation->findByPrefix(animFrames,HX_("ENTER FREEZE",7f,78,5c,d6));
            		}
HXLINE( 296)		if ((animFrames->length > 0)) {
HXLINE( 297)			this->newTitle = true;
HXLINE( 299)			this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("ENTER IDLE",3c,57,01,7a),24,null(),null(),null());
HXLINE( 300)			::String _hx_tmp;
HXDLIN( 300)			if (::backend::ClientPrefs_obj::data->flashing) {
HXLINE( 300)				_hx_tmp = HX_("ENTER PRESSED",5a,47,9f,63);
            			}
            			else {
HXLINE( 300)				_hx_tmp = HX_("ENTER FREEZE",7f,78,5c,d6);
            			}
HXDLIN( 300)			this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),_hx_tmp,24,null(),null(),null());
            		}
            		else {
HXLINE( 303)			this->newTitle = false;
HXLINE( 305)			this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 306)			this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
            		}
HXLINE( 309)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 310)		this->titleText->updateHitbox();
HXLINE( 311)		this->titleText->set_y(( (Float)(800) ));
HXLINE( 313)		this->add(this->titleText);
HXLINE( 315)		 ::flixel::FlxSprite logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 315)		 ::flixel::FlxSprite logo1 = logo->loadGraphic(::backend::Paths_obj::image(HX_("logo",6b,9f,b7,47),null(),null()),null(),null(),null(),null(),null());
HXLINE( 316)		logo1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 317)		{
HXLINE( 317)			int axes2 = 17;
HXDLIN( 317)			bool _hx_tmp17;
HXDLIN( 317)			if ((axes2 != 1)) {
HXLINE( 317)				_hx_tmp17 = (axes2 == 17);
            			}
            			else {
HXLINE( 317)				_hx_tmp17 = true;
            			}
HXDLIN( 317)			if (_hx_tmp17) {
HXLINE( 317)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 317)				logo1->set_x(((( (Float)(_hx_tmp) ) - logo1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 317)			bool _hx_tmp18;
HXDLIN( 317)			if ((axes2 != 16)) {
HXLINE( 317)				_hx_tmp18 = (axes2 == 17);
            			}
            			else {
HXLINE( 317)				_hx_tmp18 = true;
            			}
HXDLIN( 317)			if (_hx_tmp18) {
HXLINE( 317)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 317)				logo1->set_y(((( (Float)(_hx_tmp) ) - logo1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 323)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 324)		this->add(this->credGroup);
HXLINE( 325)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 327)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 328)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 330)		this->credTextShit =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("",00,00,00,00),true);
HXLINE( 331)		{
HXLINE( 331)			 ::objects::Alphabet _this1 = this->credTextShit;
HXDLIN( 331)			int axes3 = 17;
HXDLIN( 331)			bool _hx_tmp19;
HXDLIN( 331)			if ((axes3 != 1)) {
HXLINE( 331)				_hx_tmp19 = (axes3 == 17);
            			}
            			else {
HXLINE( 331)				_hx_tmp19 = true;
            			}
HXDLIN( 331)			if (_hx_tmp19) {
HXLINE( 331)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 331)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 331)			bool _hx_tmp20;
HXDLIN( 331)			if ((axes3 != 16)) {
HXLINE( 331)				_hx_tmp20 = (axes3 == 17);
            			}
            			else {
HXLINE( 331)				_hx_tmp20 = true;
            			}
HXDLIN( 331)			if (_hx_tmp20) {
HXLINE( 331)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 331)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 335)		this->credTextShit->set_visible(false);
HXLINE( 337)		 ::flixel::FlxSprite _hx_tmp21 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.52)),null());
HXDLIN( 337)		this->ngSpr = _hx_tmp21->loadGraphic(::backend::Paths_obj::image(HX_("newgrounds_logo",1e,5c,8d,a6),null(),null()),null(),null(),null(),null(),null());
HXLINE( 338)		this->add(this->ngSpr);
HXLINE( 339)		this->ngSpr->set_visible(false);
HXLINE( 340)		 ::flixel::FlxSprite _hx_tmp22 = this->ngSpr;
HXDLIN( 340)		_hx_tmp22->setGraphicSize(::Std_obj::_hx_int((this->ngSpr->get_width() * ((Float)0.8))),null());
HXLINE( 341)		this->ngSpr->updateHitbox();
HXLINE( 342)		{
HXLINE( 342)			 ::flixel::FlxSprite _this2 = this->ngSpr;
HXDLIN( 342)			int axes4 = 1;
HXDLIN( 342)			bool _hx_tmp23;
HXDLIN( 342)			if ((axes4 != 1)) {
HXLINE( 342)				_hx_tmp23 = (axes4 == 17);
            			}
            			else {
HXLINE( 342)				_hx_tmp23 = true;
            			}
HXDLIN( 342)			if (_hx_tmp23) {
HXLINE( 342)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 342)				_this2->set_x(((( (Float)(_hx_tmp) ) - _this2->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 342)			bool _hx_tmp24;
HXDLIN( 342)			if ((axes4 != 16)) {
HXLINE( 342)				_hx_tmp24 = (axes4 == 17);
            			}
            			else {
HXLINE( 342)				_hx_tmp24 = true;
            			}
HXDLIN( 342)			if (_hx_tmp24) {
HXLINE( 342)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 342)				_this2->set_y(((( (Float)(_hx_tmp) ) - _this2->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 343)		this->ngSpr->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE( 345)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 347)		if (::states::TitleState_obj::initialized) {
HXLINE( 348)			this->skipIntro();
            		}
            		else {
HXLINE( 350)			::states::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_356_getIntroTextShit)
HXLINE( 358)		::String defaultDirectory = HX_("assets/",4c,2a,dc,36);
HXDLIN( 358)		bool allowDuplicates = false;
HXDLIN( 358)		if (::hx::IsNull( defaultDirectory )) {
HXLINE( 358)			defaultDirectory = HX_("assets/",4c,2a,dc,36);
            		}
HXDLIN( 358)		defaultDirectory = ::StringTools_obj::trim(defaultDirectory);
HXDLIN( 358)		if (!(::StringTools_obj::endsWith(defaultDirectory,HX_("/",2f,00,00,00)))) {
HXLINE( 358)			defaultDirectory = (defaultDirectory + HX_("/",2f,00,00,00));
            		}
HXDLIN( 358)		if (!(::StringTools_obj::startsWith(defaultDirectory,HX_("assets/",4c,2a,dc,36)))) {
HXLINE( 358)			defaultDirectory = (HX_("assets/",4c,2a,dc,36) + defaultDirectory);
            		}
HXDLIN( 358)		::Array< ::String > mergedList = ::Array_obj< ::String >::__new(0);
HXDLIN( 358)		::Array< ::String > foldersToCheck = ::Array_obj< ::String >::__new(0);
HXDLIN( 358)		if (::sys::FileSystem_obj::exists((defaultDirectory + HX_("data/introText.txt",d6,92,cf,a9)))) {
HXLINE( 358)			foldersToCheck->push((defaultDirectory + HX_("data/introText.txt",d6,92,cf,a9)));
            		}
HXDLIN( 358)		{
HXLINE( 358)			{
HXLINE( 358)				int _g = 0;
HXDLIN( 358)				::Array< ::String > _g1 = ::backend::Mods_obj::globalMods;
HXDLIN( 358)				while((_g < _g1->length)){
HXLINE( 358)					::String mod = _g1->__get(_g);
HXDLIN( 358)					_g = (_g + 1);
HXDLIN( 358)					::String key = ((mod + HX_("/",2f,00,00,00)) + HX_("data/introText.txt",d6,92,cf,a9));
HXDLIN( 358)					if (::hx::IsNull( key )) {
HXLINE( 358)						key = HX_("",00,00,00,00);
            					}
HXDLIN( 358)					::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN( 358)					if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 358)						foldersToCheck->push(folder);
            					}
            				}
            			}
HXDLIN( 358)			::String key = HX_("data/introText.txt",d6,92,cf,a9);
HXDLIN( 358)			if (::hx::IsNull( key )) {
HXLINE( 358)				key = HX_("",00,00,00,00);
            			}
HXDLIN( 358)			::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN( 358)			if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 358)				::String key = HX_("data/introText.txt",d6,92,cf,a9);
HXDLIN( 358)				if (::hx::IsNull( key )) {
HXLINE( 358)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 358)				foldersToCheck->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
HXDLIN( 358)			bool _hx_tmp;
HXDLIN( 358)			if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE( 358)				_hx_tmp = (::backend::Mods_obj::currentModDirectory.length > 0);
            			}
            			else {
HXLINE( 358)				_hx_tmp = false;
            			}
HXDLIN( 358)			if (_hx_tmp) {
HXLINE( 358)				::String key = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + HX_("data/introText.txt",d6,92,cf,a9));
HXDLIN( 358)				if (::hx::IsNull( key )) {
HXLINE( 358)					key = HX_("",00,00,00,00);
            				}
HXDLIN( 358)				::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN( 358)				if (::sys::FileSystem_obj::exists(folder)) {
HXLINE( 358)					foldersToCheck->push(folder);
            				}
            			}
            		}
HXDLIN( 358)		::Array< ::String > paths = foldersToCheck;
HXDLIN( 358)		::String defaultPath = (defaultDirectory + HX_("data/introText.txt",d6,92,cf,a9));
HXDLIN( 358)		if (paths->contains(defaultPath)) {
HXLINE( 358)			paths->remove(defaultPath);
HXDLIN( 358)			paths->insert(0,defaultPath);
            		}
HXDLIN( 358)		{
HXLINE( 358)			int _g2 = 0;
HXDLIN( 358)			while((_g2 < paths->length)){
HXLINE( 358)				::String file = paths->__get(_g2);
HXDLIN( 358)				_g2 = (_g2 + 1);
HXDLIN( 358)				::String path = file;
HXDLIN( 358)				::String daList = null();
HXDLIN( 358)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 358)				path = formatted->__get((formatted->length - 1));
HXDLIN( 358)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 358)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXDLIN( 358)				::Array< ::String > list;
HXDLIN( 358)				if (::hx::IsNotNull( daList )) {
HXLINE( 358)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 358)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 358)					{
HXLINE( 358)						int _g = 0;
HXDLIN( 358)						int _g1 = daList1->length;
HXDLIN( 358)						while((_g < _g1)){
HXLINE( 358)							_g = (_g + 1);
HXDLIN( 358)							int i = (_g - 1);
HXDLIN( 358)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN( 358)					list = daList1;
            				}
            				else {
HXLINE( 358)					list = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN( 358)				{
HXLINE( 358)					int _g = 0;
HXDLIN( 358)					while((_g < list->length)){
HXLINE( 358)						::String value = list->__get(_g);
HXDLIN( 358)						_g = (_g + 1);
HXDLIN( 358)						bool _hx_tmp;
HXDLIN( 358)						bool _hx_tmp1;
HXDLIN( 358)						if (!(allowDuplicates)) {
HXLINE( 358)							_hx_tmp1 = !(mergedList->contains(value));
            						}
            						else {
HXLINE( 358)							_hx_tmp1 = true;
            						}
HXDLIN( 358)						if (_hx_tmp1) {
HXLINE( 358)							_hx_tmp = (value.length > 0);
            						}
            						else {
HXLINE( 358)							_hx_tmp = false;
            						}
HXDLIN( 358)						if (_hx_tmp) {
HXLINE( 358)							mergedList->push(value);
            						}
            					}
            				}
            			}
            		}
HXDLIN( 358)		::Array< ::String > firstArray = mergedList;
HXLINE( 363)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 365)		{
HXLINE( 365)			int _g3 = 0;
HXDLIN( 365)			while((_g3 < firstArray->length)){
HXLINE( 365)				::String i = firstArray->__get(_g3);
HXDLIN( 365)				_g3 = (_g3 + 1);
HXLINE( 367)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 370)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_380_update)
HXDLIN( 380)		 ::states::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 381)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 382)			::backend::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 385)		bool pressedEnter;
HXDLIN( 385)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 385)		if (!(_this->keyManager->checkStatusUnsafe(13,_this->status))) {
HXLINE( 385)			pressedEnter = this->get_controls()->get_ACCEPT();
            		}
            		else {
HXLINE( 385)			pressedEnter = true;
            		}
HXLINE( 397)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 399)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 401)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 401)			int id = 7;
HXDLIN( 401)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 401)			int Status = _this->status;
HXDLIN( 401)			bool _hx_tmp;
HXDLIN( 401)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 401)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 401)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 401)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 401)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 401)					if (::hx::IsNotNull( button )) {
HXLINE( 401)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 401)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 401)			if (_hx_tmp) {
HXLINE( 402)				pressedEnter = true;
            			}
            		}
HXLINE( 410)		if (this->newTitle) {
HXLINE( 411)			 ::states::TitleState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 411)			Float lowerBound;
HXDLIN( 411)			if ((elapsed < 0)) {
HXLINE( 411)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 411)				lowerBound = elapsed;
            			}
HXDLIN( 411)			Float _hx_tmp1;
HXDLIN( 411)			if ((lowerBound > 1)) {
HXLINE( 411)				_hx_tmp1 = ( (Float)(1) );
            			}
            			else {
HXLINE( 411)				_hx_tmp1 = lowerBound;
            			}
HXDLIN( 411)			_hx_tmp->titleTimer = (_hx_tmp->titleTimer + _hx_tmp1);
HXLINE( 412)			if ((this->titleTimer > 2)) {
HXLINE( 412)				 ::states::TitleState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 412)				_hx_tmp->titleTimer = (_hx_tmp->titleTimer - ( (Float)(2) ));
            			}
            		}
HXLINE( 417)		bool _hx_tmp;
HXDLIN( 417)		bool _hx_tmp1;
HXDLIN( 417)		if (::states::TitleState_obj::initialized) {
HXLINE( 417)			_hx_tmp1 = !(this->transitioning);
            		}
            		else {
HXLINE( 417)			_hx_tmp1 = false;
            		}
HXDLIN( 417)		if (_hx_tmp1) {
HXLINE( 417)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 417)			_hx_tmp = false;
            		}
HXDLIN( 417)		if (_hx_tmp) {
HXLINE( 419)			bool _hx_tmp;
HXDLIN( 419)			if (this->newTitle) {
HXLINE( 419)				_hx_tmp = !(pressedEnter);
            			}
            			else {
HXLINE( 419)				_hx_tmp = false;
            			}
HXDLIN( 419)			if (_hx_tmp) {
HXLINE( 421)				Float timer = this->titleTimer;
HXLINE( 422)				if ((timer >= 1)) {
HXLINE( 423)					timer = (-(timer) + 2);
            				}
HXLINE( 425)				Float t = timer;
HXDLIN( 425)				if ((t <= ((Float).5))) {
HXLINE( 425)					timer = ((t * t) * ( (Float)(2) ));
            				}
            				else {
HXLINE( 425)					t = (t - ( (Float)(1) ));
HXDLIN( 425)					timer = (( (Float)(1) ) - ((t * t) * ( (Float)(2) )));
            				}
HXLINE( 427)				 ::flixel::FlxSprite _hx_tmp = this->titleText;
HXDLIN( 427)				int Color1 = this->titleTextColors->__get(0);
HXDLIN( 427)				int Color2 = this->titleTextColors->__get(1);
HXDLIN( 427)				int r = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 16) & 255) - ((Color1 >> 16) & 255))) ) * timer) + ((Color1 >> 16) & 255)));
HXDLIN( 427)				int g = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 8) & 255) - ((Color1 >> 8) & 255))) ) * timer) + ((Color1 >> 8) & 255)));
HXDLIN( 427)				int b = ::Std_obj::_hx_int(((( (Float)(((Color2 & 255) - (Color1 & 255))) ) * timer) + (Color1 & 255)));
HXDLIN( 427)				int a = ::Std_obj::_hx_int(((( (Float)((((Color2 >> 24) & 255) - ((Color1 >> 24) & 255))) ) * timer) + ((Color1 >> 24) & 255)));
HXDLIN( 427)				int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 427)				{
HXLINE( 427)					color = (color & -16711681);
HXDLIN( 427)					int color1;
HXDLIN( 427)					if ((r > 255)) {
HXLINE( 427)						color1 = 255;
            					}
            					else {
HXLINE( 427)						if ((r < 0)) {
HXLINE( 427)							color1 = 0;
            						}
            						else {
HXLINE( 427)							color1 = r;
            						}
            					}
HXDLIN( 427)					color = (color | (color1 << 16));
            				}
HXDLIN( 427)				{
HXLINE( 427)					color = (color & -65281);
HXDLIN( 427)					int color2;
HXDLIN( 427)					if ((g > 255)) {
HXLINE( 427)						color2 = 255;
            					}
            					else {
HXLINE( 427)						if ((g < 0)) {
HXLINE( 427)							color2 = 0;
            						}
            						else {
HXLINE( 427)							color2 = g;
            						}
            					}
HXDLIN( 427)					color = (color | (color2 << 8));
            				}
HXDLIN( 427)				{
HXLINE( 427)					color = (color & -256);
HXDLIN( 427)					int color3;
HXDLIN( 427)					if ((b > 255)) {
HXLINE( 427)						color3 = 255;
            					}
            					else {
HXLINE( 427)						if ((b < 0)) {
HXLINE( 427)							color3 = 0;
            						}
            						else {
HXLINE( 427)							color3 = b;
            						}
            					}
HXDLIN( 427)					color = (color | color3);
            				}
HXDLIN( 427)				{
HXLINE( 427)					color = (color & 16777215);
HXDLIN( 427)					int color4;
HXDLIN( 427)					if ((a > 255)) {
HXLINE( 427)						color4 = 255;
            					}
            					else {
HXLINE( 427)						if ((a < 0)) {
HXLINE( 427)							color4 = 0;
            						}
            						else {
HXLINE( 427)							color4 = a;
            						}
            					}
HXDLIN( 427)					color = (color | (color4 << 24));
            				}
HXDLIN( 427)				_hx_tmp->set_color(color);
HXLINE( 428)				Float a1 = this->titleTextAlphas->__get(0);
HXDLIN( 428)				this->titleText->set_alpha((a1 + (timer * (this->titleTextAlphas->__get(1) - a1))));
            			}
HXLINE( 431)			if (pressedEnter) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::TitleState,_gthis) HXARGC(1)
            				void _hx_run( ::flixel::util::FlxTimer tmr){
            					HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_445_update)
HXLINE( 446)					if (_gthis->mustUpdate) {
HXLINE( 447)						::backend::MusicBeatState_obj::switchState( ::states::OutdatedState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            					else {
HXLINE( 449)						::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            					}
HXLINE( 451)					::states::TitleState_obj::closedState = true;
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 433)				this->titleText->set_color(-1);
HXLINE( 434)				this->titleText->set_alpha(( (Float)(1) ));
HXLINE( 436)				if (::hx::IsNotNull( this->titleText )) {
HXLINE( 436)					this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            				}
HXLINE( 438)				int _hx_tmp;
HXDLIN( 438)				if (::backend::ClientPrefs_obj::data->flashing) {
HXLINE( 438)					_hx_tmp = -1;
            				}
            				else {
HXLINE( 438)					_hx_tmp = (int)1291845631;
            				}
HXDLIN( 438)				::flixel::FlxG_obj::camera->flash(_hx_tmp,1,null(),null());
HXLINE( 439)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 439)				_hx_tmp1->play(::backend::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 441)				this->transitioning = true;
HXLINE( 444)				 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            			}
            		}
HXLINE( 507)		bool _hx_tmp2;
HXDLIN( 507)		bool _hx_tmp3;
HXDLIN( 507)		if (::states::TitleState_obj::initialized) {
HXLINE( 507)			_hx_tmp3 = pressedEnter;
            		}
            		else {
HXLINE( 507)			_hx_tmp3 = false;
            		}
HXDLIN( 507)		if (_hx_tmp3) {
HXLINE( 507)			_hx_tmp2 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 507)			_hx_tmp2 = false;
            		}
HXDLIN( 507)		if (_hx_tmp2) {
HXLINE( 509)			this->skipIntro();
            		}
HXLINE( 512)		if (::hx::IsNotNull( this->swagShader )) {
HXLINE( 514)			if (this->get_controls()->get_UI_LEFT()) {
HXLINE( 514)				 ::shaders::ColorSwap fh = this->swagShader;
HXDLIN( 514)				fh->set_hue((fh->hue - (elapsed * ((Float)0.1))));
            			}
HXLINE( 515)			if (this->get_controls()->get_UI_RIGHT()) {
HXLINE( 515)				 ::shaders::ColorSwap fh = this->swagShader;
HXDLIN( 515)				fh->set_hue((fh->hue + (elapsed * ((Float)0.1))));
            			}
            		}
HXLINE( 518)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_523_createCoolText)
HXDLIN( 523)		int _g = 0;
HXDLIN( 523)		int _g1 = textArray->length;
HXDLIN( 523)		while((_g < _g1)){
HXDLIN( 523)			_g = (_g + 1);
HXDLIN( 523)			int i = (_g - 1);
HXLINE( 525)			 ::objects::Alphabet money =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true);
HXLINE( 526)			{
HXLINE( 526)				int axes = 1;
HXDLIN( 526)				bool _hx_tmp;
HXDLIN( 526)				if ((axes != 1)) {
HXLINE( 526)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 526)					_hx_tmp = true;
            				}
HXDLIN( 526)				if (_hx_tmp) {
HXLINE( 526)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 526)					money->set_x(((( (Float)(_hx_tmp) ) - money->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 526)				bool _hx_tmp1;
HXDLIN( 526)				if ((axes != 16)) {
HXLINE( 526)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 526)					_hx_tmp1 = true;
            				}
HXDLIN( 526)				if (_hx_tmp1) {
HXLINE( 526)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 526)					money->set_y(((( (Float)(_hx_tmp) ) - money->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 527)			money->set_y((money->y + (((i * 60) + 200) + offset)));
HXLINE( 528)			bool _hx_tmp2;
HXDLIN( 528)			if (::hx::IsNotNull( this->credGroup )) {
HXLINE( 528)				_hx_tmp2 = ::hx::IsNotNull( this->textGroup );
            			}
            			else {
HXLINE( 528)				_hx_tmp2 = false;
            			}
HXDLIN( 528)			if (_hx_tmp2) {
HXLINE( 529)				this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 530)				this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_537_addMoreText)
HXDLIN( 537)		bool _hx_tmp;
HXDLIN( 537)		if (::hx::IsNotNull( this->textGroup )) {
HXDLIN( 537)			_hx_tmp = ::hx::IsNotNull( this->credGroup );
            		}
            		else {
HXDLIN( 537)			_hx_tmp = false;
            		}
HXDLIN( 537)		if (_hx_tmp) {
HXLINE( 538)			 ::objects::Alphabet coolText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true);
HXLINE( 539)			{
HXLINE( 539)				int axes = 1;
HXDLIN( 539)				bool _hx_tmp;
HXDLIN( 539)				if ((axes != 1)) {
HXLINE( 539)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE( 539)					_hx_tmp = true;
            				}
HXDLIN( 539)				if (_hx_tmp) {
HXLINE( 539)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 539)					coolText->set_x(((( (Float)(_hx_tmp) ) - coolText->get_width()) / ( (Float)(2) )));
            				}
HXDLIN( 539)				bool _hx_tmp1;
HXDLIN( 539)				if ((axes != 16)) {
HXLINE( 539)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE( 539)					_hx_tmp1 = true;
            				}
HXDLIN( 539)				if (_hx_tmp1) {
HXLINE( 539)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 539)					coolText->set_y(((( (Float)(_hx_tmp) ) - coolText->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE( 540)			coolText->set_y((coolText->y + (((this->textGroup->length * 60) + 200) + offset)));
HXLINE( 541)			this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 542)			this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_548_deleteCoolText)
HXDLIN( 548)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 550)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 551)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_558_beatHit)
HXLINE( 559)		this->super::beatHit();
HXLINE( 561)		if (::hx::IsNotNull( this->logoBl )) {
HXLINE( 562)			this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
            		}
HXLINE( 564)		if (::hx::IsNotNull( this->gfDance )) {
HXLINE( 565)			this->danceLeft = !(this->danceLeft);
HXLINE( 566)			if (this->danceLeft) {
HXLINE( 567)				this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            			else {
HXLINE( 569)				this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            			}
            		}
HXLINE( 572)		if (!(::states::TitleState_obj::closedState)) {
HXLINE( 573)			this->sickBeats++;
HXLINE( 574)			switch((int)(this->sickBeats)){
            				case (int)1: {
HXLINE( 578)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 578)					::String library = null();
HXDLIN( 578)					 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 578)					_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 579)					{
HXLINE( 579)						 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 579)						 ::Dynamic onComplete = null();
HXDLIN( 579)						if (::hx::IsNull( _this->_channel )) {
HXLINE( 579)							_this->play(null(),null(),null());
            						}
HXDLIN( 579)						if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 579)							_this->fadeTween->cancel();
            						}
HXDLIN( 579)						_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 582)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_81c3dd25_26,1),40);
            				}
            				break;
            				case (int)4: {
HXLINE( 589)					this->addMoreText(HX_("Shadow Mario",c4,01,05,71),40);
HXLINE( 590)					this->addMoreText(HX_("Riveren",55,c6,ba,81),40);
            				}
            				break;
            				case (int)5: {
HXLINE( 597)					this->deleteCoolText();
            				}
            				break;
            				case (int)6: {
HXLINE( 603)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_81c3dd25_27,2),-40);
            				}
            				break;
            				case (int)8: {
HXLINE( 608)					this->addMoreText(HX_("newgrounds",ac,0f,a7,f6),-40);
HXLINE( 609)					this->ngSpr->set_visible(true);
            				}
            				break;
            				case (int)9: {
HXLINE( 612)					this->deleteCoolText();
HXLINE( 613)					this->ngSpr->set_visible(false);
            				}
            				break;
            				case (int)10: {
HXLINE( 619)					this->createCoolText(::Array_obj< ::String >::__new(1)->init(0,this->curWacky->__get(0)),null());
            				}
            				break;
            				case (int)12: {
HXLINE( 622)					this->addMoreText(this->curWacky->__get(1),null());
            				}
            				break;
            				case (int)13: {
HXLINE( 625)					this->deleteCoolText();
            				}
            				break;
            				case (int)14: {
HXLINE( 630)					this->addMoreText(HX_("Friday",ff,00,5d,e6),null());
            				}
            				break;
            				case (int)15: {
HXLINE( 633)					this->addMoreText(HX_("Night",b8,29,f7,2e),null());
            				}
            				break;
            				case (int)16: {
HXLINE( 636)					this->addMoreText(HX_("Funkin",51,26,e4,a3),null());
            				}
            				break;
            				case (int)17: {
HXLINE( 639)					this->skipIntro();
            				}
            				break;
            			}
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_647_skipIntro)
HXDLIN( 647)		 ::states::TitleState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 648)		if (!(this->skippedIntro)) {
HXLINE( 650)			if (::states::TitleState_obj::playJingle) {
HXLINE( 652)				::String easteregg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 653)				if (::hx::IsNull( easteregg )) {
HXLINE( 653)					easteregg = HX_("",00,00,00,00);
            				}
HXLINE( 654)				easteregg = easteregg.toUpperCase();
HXLINE( 656)				 ::flixel::sound::FlxSound sound = null();
HXLINE( 657)				::String _hx_switch_0 = easteregg;
            				if (  (_hx_switch_0==HX_("BBPANZU",78,33,57,57)) ){
HXLINE( 666)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 666)					sound = sound1->play(::backend::Paths_obj::sound(HX_("JingleBB",51,0b,1a,28),null()),null(),null(),null(),null(),null());
HXDLIN( 666)					goto _hx_goto_28;
            				}
            				if (  (_hx_switch_0==HX_("RIVER",ec,a2,5d,67)) ){
HXLINE( 660)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 660)					sound = sound1->play(::backend::Paths_obj::sound(HX_("JingleRiver",fb,99,93,2f),null()),null(),null(),null(),null(),null());
HXDLIN( 660)					goto _hx_goto_28;
            				}
            				if (  (_hx_switch_0==HX_("SHADOW",e0,73,a3,cf)) ){
HXLINE( 664)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 664)					_hx_tmp->play(::backend::Paths_obj::sound(HX_("JingleShadow",11,aa,a5,36),null()),null(),null(),null(),null(),null());
HXDLIN( 664)					goto _hx_goto_28;
            				}
            				if (  (_hx_switch_0==HX_("SHUBS",f1,3b,1a,fa)) ){
HXLINE( 662)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd sound1 = ::flixel::FlxG_obj::sound;
HXDLIN( 662)					sound = sound1->play(::backend::Paths_obj::sound(HX_("JingleShubs",00,33,50,c2),null()),null(),null(),null(),null(),null());
HXDLIN( 662)					goto _hx_goto_28;
            				}
            				/* default */{
HXLINE( 669)					this->remove(this->ngSpr,null());
HXLINE( 670)					this->remove(this->credGroup,null());
HXLINE( 671)					::flixel::FlxG_obj::camera->flash(-1,2,null(),null());
HXLINE( 672)					this->skippedIntro = true;
HXLINE( 673)					::states::TitleState_obj::playJingle = false;
HXLINE( 675)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 675)					::String library = null();
HXDLIN( 675)					 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 675)					_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 676)					{
HXLINE( 676)						 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 676)						 ::Dynamic onComplete = null();
HXDLIN( 676)						if (::hx::IsNull( _this->_channel )) {
HXLINE( 676)							_this->play(null(),null(),null());
            						}
HXDLIN( 676)						if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 676)							_this->fadeTween->cancel();
            						}
HXDLIN( 676)						_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            					}
HXLINE( 677)					return;
            				}
            				_hx_goto_28:;
HXLINE( 680)				this->transitioning = true;
HXLINE( 681)				if ((easteregg == HX_("SHADOW",e0,73,a3,cf))) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::TitleState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer tmr){
            						HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_684_skipIntro)
HXLINE( 685)						_gthis->remove(_gthis->ngSpr,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 686)						_gthis->remove(_gthis->credGroup,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 687)						::flixel::FlxG_obj::camera->flash(-1,((Float)0.6),null(),null());
HXLINE( 688)						_gthis->transitioning = false;
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 683)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)3.2), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::states::TitleState,_gthis) HXARGC(0)
            					void _hx_run(){
            						HX_GC_STACKFRAME(&_hx_pos_f4f54134d4f9e667_696_skipIntro)
HXLINE( 697)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 697)						::String library = null();
HXDLIN( 697)						 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 697)						_hx_tmp->playMusic(file,0,null(),null());
HXLINE( 698)						{
HXLINE( 698)							 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 698)							 ::Dynamic onComplete = null();
HXDLIN( 698)							if (::hx::IsNull( _this->_channel )) {
HXLINE( 698)								_this->play(null(),null(),null());
            							}
HXDLIN( 698)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 698)								_this->fadeTween->cancel();
            							}
HXDLIN( 698)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
HXLINE( 699)						_gthis->transitioning = false;
            					}
            					HX_END_LOCAL_FUNC0((void))

HXLINE( 693)					this->remove(this->ngSpr,null());
HXLINE( 694)					this->remove(this->credGroup,null());
HXLINE( 695)					::flixel::FlxG_obj::camera->flash(-1,3,null(),null());
HXLINE( 696)					sound->onComplete =  ::Dynamic(new _hx_Closure_1(_gthis));
            				}
HXLINE( 702)				::states::TitleState_obj::playJingle = false;
            			}
            			else {
HXLINE( 706)				this->remove(this->ngSpr,null());
HXLINE( 707)				this->remove(this->credGroup,null());
HXLINE( 708)				::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 710)				::String easteregg = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("psychDevsEasterEgg",22,2b,1d,02),::hx::paccDynamic)) );
HXLINE( 711)				if (::hx::IsNull( easteregg )) {
HXLINE( 711)					easteregg = HX_("",00,00,00,00);
            				}
HXLINE( 712)				easteregg = easteregg.toUpperCase();
            			}
HXLINE( 724)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

::Array< int > TitleState_obj::muteKeys;

::Array< int > TitleState_obj::volumeDownKeys;

::Array< int > TitleState_obj::volumeUpKeys;

bool TitleState_obj::initialized;

::String TitleState_obj::updateVersion;

bool TitleState_obj::playJingle;

bool TitleState_obj::closedState;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "states.TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(ngSpr,"ngSpr");
	HX_MARK_MEMBER_NAME(titlebg,"titlebg");
	HX_MARK_MEMBER_NAME(titleTextColors,"titleTextColors");
	HX_MARK_MEMBER_NAME(titleTextAlphas,"titleTextAlphas");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_MARK_MEMBER_NAME(titleJSON,"titleJSON");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(swagShader,"swagShader");
	HX_MARK_MEMBER_NAME(magenta,"magenta");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(newTitle,"newTitle");
	HX_MARK_MEMBER_NAME(titleTimer,"titleTimer");
	HX_MARK_MEMBER_NAME(sickBeats,"sickBeats");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	HX_MARK_MEMBER_NAME(increaseVolume,"increaseVolume");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(ngSpr,"ngSpr");
	HX_VISIT_MEMBER_NAME(titlebg,"titlebg");
	HX_VISIT_MEMBER_NAME(titleTextColors,"titleTextColors");
	HX_VISIT_MEMBER_NAME(titleTextAlphas,"titleTextAlphas");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_VISIT_MEMBER_NAME(titleJSON,"titleJSON");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(swagShader,"swagShader");
	HX_VISIT_MEMBER_NAME(magenta,"magenta");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(newTitle,"newTitle");
	HX_VISIT_MEMBER_NAME(titleTimer,"titleTimer");
	HX_VISIT_MEMBER_NAME(sickBeats,"sickBeats");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	HX_VISIT_MEMBER_NAME(increaseVolume,"increaseVolume");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { return ::hx::Val( ngSpr ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"titlebg") ) { return ::hx::Val( titlebg ); }
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"magenta") ) { return ::hx::Val( magenta ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		if (HX_FIELD_EQ(inName,"newTitle") ) { return ::hx::Val( newTitle ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"titleJSON") ) { return ::hx::Val( titleJSON ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { return ::hx::Val( sickBeats ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { return ::hx::Val( mustUpdate ); }
		if (HX_FIELD_EQ(inName,"swagShader") ) { return ::hx::Val( swagShader ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		if (HX_FIELD_EQ(inName,"titleTimer") ) { return ::hx::Val( titleTimer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"increaseVolume") ) { return ::hx::Val( increaseVolume ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"titleTextColors") ) { return ::hx::Val( titleTextColors ); }
		if (HX_FIELD_EQ(inName,"titleTextAlphas") ) { return ::hx::Val( titleTextAlphas ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { outValue = ( muteKeys ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playJingle") ) { outValue = ( playJingle ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { outValue = ( closedState ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { outValue = ( volumeUpKeys ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { outValue = ( updateVersion ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { outValue = ( volumeDownKeys ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { ngSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"titlebg") ) { titlebg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"magenta") ) { magenta=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newTitle") ) { newTitle=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleJSON") ) { titleJSON=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { sickBeats=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { mustUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagShader") ) { swagShader=inValue.Cast<  ::shaders::ColorSwap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleTimer") ) { titleTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::objects::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"increaseVolume") ) { increaseVolume=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"titleTextColors") ) { titleTextColors=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleTextAlphas") ) { titleTextAlphas=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playJingle") ) { playJingle=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { closedState=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { updateVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("ngSpr",7c,26,68,9a));
	outFields->push(HX_("titlebg",5d,01,5e,e5));
	outFields->push(HX_("titleTextColors",f5,4d,ff,7e));
	outFields->push(HX_("titleTextAlphas",9a,53,b4,fa));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("mustUpdate",f2,14,07,8d));
	outFields->push(HX_("titleJSON",c0,cb,fa,69));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("swagShader",4f,e1,a0,28));
	outFields->push(HX_("magenta",29,ba,9d,0e));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("newTitle",18,59,85,33));
	outFields->push(HX_("titleTimer",0d,d3,1a,22));
	outFields->push(HX_("sickBeats",9f,58,9e,58));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	outFields->push(HX_("increaseVolume",3c,17,43,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::objects::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,ngSpr),HX_("ngSpr",7c,26,68,9a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titlebg),HX_("titlebg",5d,01,5e,e5)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TitleState_obj,titleTextColors),HX_("titleTextColors",f5,4d,ff,7e)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(TitleState_obj,titleTextAlphas),HX_("titleTextAlphas",9a,53,b4,fa)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,mustUpdate),HX_("mustUpdate",f2,14,07,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TitleState_obj,titleJSON),HX_("titleJSON",c0,cb,fa,69)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::shaders::ColorSwap */ ,(int)offsetof(TitleState_obj,swagShader),HX_("swagShader",4f,e1,a0,28)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,magenta),HX_("magenta",29,ba,9d,0e)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,newTitle),HX_("newTitle",18,59,85,33)},
	{::hx::fsFloat,(int)offsetof(TitleState_obj,titleTimer),HX_("titleTimer",0d,d3,1a,22)},
	{::hx::fsInt,(int)offsetof(TitleState_obj,sickBeats),HX_("sickBeats",9f,58,9e,58)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,increaseVolume),HX_("increaseVolume",3c,17,43,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::muteKeys,HX_("muteKeys",6d,5d,88,16)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeDownKeys,HX_("volumeDownKeys",70,2f,58,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeUpKeys,HX_("volumeUpKeys",69,bb,f5,23)},
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsString,(void *) &TitleState_obj::updateVersion,HX_("updateVersion",0f,4c,60,48)},
	{::hx::fsBool,(void *) &TitleState_obj::playJingle,HX_("playJingle",45,b8,ae,c6)},
	{::hx::fsBool,(void *) &TitleState_obj::closedState,HX_("closedState",c5,ac,a4,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("ngSpr",7c,26,68,9a),
	HX_("titlebg",5d,01,5e,e5),
	HX_("titleTextColors",f5,4d,ff,7e),
	HX_("titleTextAlphas",9a,53,b4,fa),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("mustUpdate",f2,14,07,8d),
	HX_("titleJSON",c0,cb,fa,69),
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("gfDance",94,88,3a,eb),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("swagShader",4f,e1,a0,28),
	HX_("magenta",29,ba,9d,0e),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("newTitle",18,59,85,33),
	HX_("titleTimer",0d,d3,1a,22),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("sickBeats",9f,58,9e,58),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("increaseVolume",3c,17,43,1a),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_MARK_MEMBER_NAME(TitleState_obj::playJingle,"playJingle");
	HX_MARK_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_VISIT_MEMBER_NAME(TitleState_obj::playJingle,"playJingle");
	HX_VISIT_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("muteKeys",6d,5d,88,16),
	HX_("volumeDownKeys",70,2f,58,0b),
	HX_("volumeUpKeys",69,bb,f5,23),
	HX_("initialized",14,f5,0f,37),
	HX_("updateVersion",0f,4c,60,48),
	HX_("playJingle",45,b8,ae,c6),
	HX_("closedState",c5,ac,a4,98),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.TitleState",25,dd,c3,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_44_boot)
HXDLIN(  44)		muteKeys = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_33,1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_45_boot)
HXDLIN(  45)		volumeDownKeys = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_35,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_46_boot)
HXDLIN(  46)		volumeUpKeys = ::Array_obj< int >::fromData( _hx_array_data_81c3dd25_37,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_48_boot)
HXDLIN(  48)		initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_76_boot)
HXDLIN(  76)		updateVersion = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_374_boot)
HXDLIN( 374)		playJingle = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_f4f54134d4f9e667_556_boot)
HXDLIN( 556)		closedState = false;
            	}
}

} // end namespace states
