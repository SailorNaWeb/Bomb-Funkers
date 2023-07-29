#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_objects_Alignment
#include <objects/Alignment.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_AttachedSprite
#include <objects/AttachedSprite.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_states_CreditsState
#include <states/CreditsState.h>
#endif
#ifndef INCLUDED_states_MainMenuState
#include <states/MainMenuState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_178cfd7cdc100066_10_new,"states.CreditsState","new",0x880b66d5,"states.CreditsState.new","states/CreditsState.hx",10,0xc8f2335a)
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_27_create,"states.CreditsState","create",0xd40f87a7,"states.CreditsState.create","states/CreditsState.hx",27,0xc8f2335a)
static const ::String _hx_array_data_79985863_7[] = {
	HX_("Psych Engine Team",36,ef,98,3e),
};
static const ::String _hx_array_data_79985863_8[] = {
	HX_("Seraphyn",2e,7b,37,ac),HX_("sera",c1,90,50,4c),HX_("Programmer",36,32,b5,45),HX_("",00,00,00,00),HX_("ffffff",c0,7b,ff,c6),
};
static const ::String _hx_array_data_79985863_9[] = {
	HX_("Sailor",74,f3,36,4f),HX_("sailor",54,7f,a2,1a),HX_("Programmer",36,32,b5,45),HX_("",00,00,00,00),HX_("ffffff",c0,7b,ff,c6),
};
static const ::String _hx_array_data_79985863_10[] = {
	HX_("Lucas1556",51,d1,c4,f8),HX_("lu",89,5e,00,00),HX_("Main Artist and Animator",82,29,98,0e),HX_("",00,00,00,00),HX_("ffffff",c0,7b,ff,c6),
};
static const ::String _hx_array_data_79985863_11[] = {
	HX_("Caster",0c,59,23,f0),HX_("cas",15,74,4b,00),HX_("Did the logo :)",14,69,0a,4a),HX_("",00,00,00,00),HX_("ffffff",c0,7b,ff,c6),
};
static const ::String _hx_array_data_79985863_12[] = {
	HX_("",00,00,00,00),
};
static const ::String _hx_array_data_79985863_13[] = {
	HX_("Funkin' Crew",ab,00,2d,30),
};
static const ::String _hx_array_data_79985863_14[] = {
	HX_("ninjamuffin99",f7,4c,e5,00),HX_("ninjamuffin99",f7,4c,e5,00),HX_("Programmer of Friday Night Funkin'",2c,f9,c3,b2),HX_("https://twitter.com/ninja_muffin99",7a,ac,b6,89),HX_("CF2D2D",47,38,36,39),
};
static const ::String _hx_array_data_79985863_15[] = {
	HX_("PhantomArcade",9d,2d,b3,ef),HX_("phantomarcade",9d,69,2e,73),HX_("Animator of Friday Night Funkin'",7d,a9,23,e4),HX_("https://twitter.com/PhantomArcade3K",9d,e2,57,4f),HX_("FADC45",7b,7d,2c,97),
};
static const ::String _hx_array_data_79985863_16[] = {
	HX_("evilsk8r",66,38,e0,32),HX_("evilsk8r",66,38,e0,32),HX_("Artist of Friday Night Funkin'",dd,f8,e7,48),HX_("https://twitter.com/evilsk8r",5e,80,bd,94),HX_("5ABD4B",3c,b0,c9,c9),
};
static const ::String _hx_array_data_79985863_17[] = {
	HX_("kawaisprite",0e,de,66,45),HX_("kawaisprite",0e,de,66,45),HX_("Composer of Friday Night Funkin'",36,08,52,24),HX_("https://twitter.com/kawaisprite",16,e1,bc,3d),HX_("378FC7",c6,99,76,34),
};
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_120_update,"states.CreditsState","update",0xdf05a6b4,"states.CreditsState.update","states/CreditsState.hx",120,0xc8f2335a)
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_196_changeSelection,"states.CreditsState","changeSelection",0xb16f8ab1,"states.CreditsState.changeSelection","states/CreditsState.hx",196,0xc8f2335a)
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_215_changeSelection,"states.CreditsState","changeSelection",0xb16f8ab1,"states.CreditsState.changeSelection","states/CreditsState.hx",215,0xc8f2335a)
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_247_pushModCreditsToList,"states.CreditsState","pushModCreditsToList",0xbcc6d8f6,"states.CreditsState.pushModCreditsToList","states/CreditsState.hx",247,0xc8f2335a)
static const ::String _hx_array_data_79985863_26[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_178cfd7cdc100066_267_unselectableCheck,"states.CreditsState","unselectableCheck",0x9a60714e,"states.CreditsState.unselectableCheck","states/CreditsState.hx",267,0xc8f2335a)
namespace states{

void CreditsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_178cfd7cdc100066_10_new)
HXLINE( 194)		this->moveTween = null();
HXLINE( 118)		this->holdTime = ((Float)0);
HXLINE( 117)		this->quitting = false;
HXLINE(  24)		this->offsetThing = ((Float)-75);
HXLINE(  16)		this->creditsStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  15)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  12)		this->curSelected = -1;
HXLINE(  10)		super::__construct(TransIn,TransOut);
            	}

Dynamic CreditsState_obj::__CreateEmpty() { return new CreditsState_obj; }

void *CreditsState_obj::_hx_vtable = 0;

Dynamic CreditsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsState_obj > _hx_result = new CreditsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53aaab8a) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x0d505f5d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0d505f5d;
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

void CreditsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_178cfd7cdc100066_27_create)
HXLINE(  30)		::backend::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  33)		this->persistentUpdate = true;
HXLINE(  34)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  34)		this->bg = _hx_tmp->loadGraphic(::backend::Paths_obj::image(HX_("menuDesat",26,91,04,72),null(),null()),null(),null(),null(),null(),null());
HXLINE(  35)		this->bg->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  36)		this->add(this->bg);
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::FlxSprite _this = this->bg;
HXDLIN(  37)			int axes = 17;
HXDLIN(  37)			bool _hx_tmp1;
HXDLIN(  37)			if ((axes != 1)) {
HXLINE(  37)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  37)				_hx_tmp1 = true;
            			}
HXDLIN(  37)			if (_hx_tmp1) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  37)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  37)			bool _hx_tmp2;
HXDLIN(  37)			if ((axes != 16)) {
HXLINE(  37)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  37)				_hx_tmp2 = true;
            			}
HXDLIN(  37)			if (_hx_tmp2) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  37)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  39)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  40)		this->add(this->grpOptions);
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  43)				::backend::Mods_obj::updateModList();
            			}
HXDLIN(  43)			::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  43)			::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  43)			::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  43)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  43)				int _g = 0;
HXDLIN(  43)				::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  43)				::String daList = null();
HXDLIN(  43)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)				path = formatted->__get((formatted->length - 1));
HXLINE(  43)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXLINE(  43)				::Array< ::String > _g1;
HXDLIN(  43)				if (::hx::IsNotNull( daList )) {
HXLINE(  43)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  43)					{
HXLINE(  43)						int _g = 0;
HXDLIN(  43)						int _g2 = daList1->length;
HXDLIN(  43)						while((_g < _g2)){
HXLINE(  43)							_g = (_g + 1);
HXDLIN(  43)							int i = (_g - 1);
HXDLIN(  43)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  43)					_g1 = daList1;
            				}
            				else {
HXLINE(  43)					_g1 = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN(  43)				while((_g < _g1->length)){
HXLINE(  43)					::String mod = _g1->__get(_g);
HXDLIN(  43)					_g = (_g + 1);
HXDLIN(  43)					if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  43)						continue;
            					}
HXDLIN(  43)					::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  43)					list_all->push(dat->__get(0));
HXDLIN(  43)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  43)						list_enabled->push(dat->__get(0));
            					}
            					else {
HXLINE(  43)						list_disabled->push(dat->__get(0));
            					}
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 172)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  43)					::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN(  43)			::Array< ::String > _g1 = list_enabled;
HXDLIN(  43)			while((_g < _g1->length)){
HXLINE(  43)				::String mod = _g1->__get(_g);
HXDLIN(  43)				_g = (_g + 1);
HXDLIN(  43)				this->pushModCreditsToList(mod);
            			}
            		}
HXLINE(  46)		::Array< ::Dynamic> defaultList = ::Array_obj< ::Dynamic>::__new(11)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_79985863_7,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_79985863_8,5))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_79985863_9,5))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_79985863_10,5))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_79985863_11,5))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_79985863_12,1))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_79985863_13,1))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_79985863_14,5))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_79985863_15,5))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_79985863_16,5))->init(10,::Array_obj< ::String >::fromData( _hx_array_data_79985863_17,5));
HXLINE(  60)		{
HXLINE(  60)			int _g2 = 0;
HXDLIN(  60)			while((_g2 < defaultList->length)){
HXLINE(  60)				::Array< ::String > i = defaultList->__get(_g2).StaticCast< ::Array< ::String > >();
HXDLIN(  60)				_g2 = (_g2 + 1);
HXLINE(  61)				this->creditsStuff->push(i);
            			}
            		}
HXLINE(  64)		{
HXLINE(  64)			int _g3 = 0;
HXDLIN(  64)			int _g4 = this->creditsStuff->length;
HXDLIN(  64)			while((_g3 < _g4)){
HXLINE(  64)				_g3 = (_g3 + 1);
HXDLIN(  64)				int i = (_g3 - 1);
HXLINE(  66)				bool isSelectable = !(this->unselectableCheck(i));
HXLINE(  67)				 ::objects::Alphabet optionText =  ::objects::Alphabet_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )),( (Float)(300) ),this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(0),!(isSelectable));
HXLINE(  68)				optionText->isMenuItem = true;
HXLINE(  69)				optionText->targetY = i;
HXLINE(  70)				optionText->changeX = false;
HXLINE(  71)				optionText->snapToPosition();
HXLINE(  72)				this->grpOptions->add(optionText).StaticCast<  ::objects::Alphabet >();
HXLINE(  74)				if (isSelectable) {
HXLINE(  75)					if (::hx::IsNotNull( this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5) )) {
HXLINE(  77)						::backend::Mods_obj::currentModDirectory = this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(5);
            					}
HXLINE(  80)					::String str = HX_("credits/missing_icon",87,66,74,31);
HXLINE(  81)					if (::hx::IsNotNull( ::backend::Paths_obj::image((HX_("credits/",d5,48,ee,de) + this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1)),null(),null()) )) {
HXLINE(  81)						str = (HX_("credits/",d5,48,ee,de) + this->creditsStuff->__get(i).StaticCast< ::Array< ::String > >()->__get(1));
            					}
HXLINE(  82)					 ::objects::AttachedSprite icon =  ::objects::AttachedSprite_obj::__alloc( HX_CTX ,str,null(),null(),null());
HXLINE(  83)					icon->xAdd = (optionText->get_width() + 10);
HXLINE(  84)					icon->sprTracker = optionText;
HXLINE(  87)					this->iconArray->push(icon);
HXLINE(  88)					this->add(icon);
HXLINE(  89)					::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE(  91)					if ((this->curSelected == -1)) {
HXLINE(  91)						this->curSelected = i;
            					}
            				}
            				else {
HXLINE(  93)					optionText->set_alignment(::objects::Alignment_obj::CENTERED_dyn());
            				}
            			}
            		}
HXLINE(  96)		this->descBox =  ::objects::AttachedSprite_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  97)		this->descBox->makeGraphic(1,1,-16777216,null(),null());
HXLINE(  98)		this->descBox->xAdd = ( (Float)(-10) );
HXLINE(  99)		this->descBox->yAdd = ( (Float)(-10) );
HXLINE( 100)		this->descBox->alphaMult = ((Float)0.6);
HXLINE( 101)		this->descBox->set_alpha(((Float)0.6));
HXLINE( 102)		this->add(this->descBox);
HXLINE( 104)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,((::flixel::FlxG_obj::height + this->offsetThing) - ( (Float)(25) )),1180,HX_("",00,00,00,00),32,null());
HXLINE( 105)		 ::flixel::text::FlxText _hx_tmp3 = this->descText;
HXDLIN( 105)		::String file = ::backend::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 105)		::String _hx_tmp4;
HXDLIN( 105)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 105)			_hx_tmp4 = file;
            		}
            		else {
HXLINE( 105)			_hx_tmp4 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 105)		_hx_tmp3->setFormat(_hx_tmp4,32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE( 106)		{
HXLINE( 106)			 ::flixel::math::FlxBasePoint this1 = this->descText->scrollFactor;
HXDLIN( 106)			this1->set_x(( (Float)(0) ));
HXDLIN( 106)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 108)		this->descBox->sprTracker = this->descText;
HXLINE( 109)		this->add(this->descText);
HXLINE( 111)		 ::flixel::FlxSprite _hx_tmp5 = this->bg;
HXDLIN( 111)		::String color = this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(4);
HXDLIN( 111)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXDLIN( 111)		::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXDLIN( 111)		if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE(  42)			color1 = color1.substring((color1.length - 6),null());
            		}
HXLINE( 111)		 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXDLIN( 111)		if (::hx::IsNull( colorNum )) {
HXLINE(  45)			colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            		}
HXLINE( 111)		int _hx_tmp6;
HXDLIN( 111)		if (::hx::IsNotNull( colorNum )) {
HXLINE( 111)			_hx_tmp6 = ( (int)(colorNum) );
            		}
            		else {
HXLINE( 111)			_hx_tmp6 = -1;
            		}
HXDLIN( 111)		_hx_tmp5->set_color(_hx_tmp6);
HXLINE( 112)		this->intendedColor = this->bg->color;
HXLINE( 113)		this->changeSelection(null());
HXLINE( 114)		this->super::create();
            	}


void CreditsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_178cfd7cdc100066_120_update)
HXLINE( 121)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 123)			 ::flixel::sound::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 123)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 126)		if (!(this->quitting)) {
HXLINE( 128)			if ((this->creditsStuff->length > 1)) {
HXLINE( 130)				int shiftMult = 1;
HXLINE( 131)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 131)				if (_this->keyManager->checkStatusUnsafe(16,_this->status)) {
HXLINE( 131)					shiftMult = 3;
            				}
HXLINE( 133)				bool upP = this->get_controls()->get_UI_UP_P();
HXLINE( 134)				bool downP = this->get_controls()->get_UI_DOWN_P();
HXLINE( 136)				if (upP) {
HXLINE( 138)					this->changeSelection(-(shiftMult));
HXLINE( 139)					this->holdTime = ( (Float)(0) );
            				}
HXLINE( 141)				if (downP) {
HXLINE( 143)					this->changeSelection(shiftMult);
HXLINE( 144)					this->holdTime = ( (Float)(0) );
            				}
HXLINE( 147)				bool _hx_tmp;
HXDLIN( 147)				if (!(this->get_controls()->get_UI_DOWN())) {
HXLINE( 147)					_hx_tmp = this->get_controls()->get_UI_UP();
            				}
            				else {
HXLINE( 147)					_hx_tmp = true;
            				}
HXDLIN( 147)				if (_hx_tmp) {
HXLINE( 149)					int checkLastHold = ::Math_obj::floor(((this->holdTime - ((Float)0.5)) * ( (Float)(10) )));
HXLINE( 150)					 ::states::CreditsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 150)					_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
HXLINE( 151)					int checkNewHold = ::Math_obj::floor(((this->holdTime - ((Float)0.5)) * ( (Float)(10) )));
HXLINE( 153)					bool _hx_tmp1;
HXDLIN( 153)					if ((this->holdTime > ((Float)0.5))) {
HXLINE( 153)						_hx_tmp1 = ((checkNewHold - checkLastHold) > 0);
            					}
            					else {
HXLINE( 153)						_hx_tmp1 = false;
            					}
HXDLIN( 153)					if (_hx_tmp1) {
HXLINE( 155)						int _hx_tmp;
HXDLIN( 155)						if (this->get_controls()->get_UI_UP()) {
HXLINE( 155)							_hx_tmp = -(shiftMult);
            						}
            						else {
HXLINE( 155)							_hx_tmp = shiftMult;
            						}
HXDLIN( 155)						this->changeSelection(((checkNewHold - checkLastHold) * _hx_tmp));
            					}
            				}
            			}
HXLINE( 160)			bool _hx_tmp;
HXDLIN( 160)			if (this->get_controls()->get_ACCEPT()) {
HXLINE( 160)				if (::hx::IsNotNull( this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(3) )) {
HXLINE( 160)					_hx_tmp = (this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(3).length > 4);
            				}
            				else {
HXLINE( 160)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 160)				_hx_tmp = false;
            			}
HXDLIN( 160)			if (_hx_tmp) {
HXLINE( 161)				::String site = this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(3);
HXDLIN( 161)				{
HXLINE( 161)					::String prefix = HX_("",00,00,00,00);
HXDLIN( 161)					if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXLINE( 161)						prefix = HX_("http://",52,75,cd,5a);
            					}
HXDLIN( 161)					::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            				}
            			}
HXLINE( 163)			if (this->get_controls()->get_BACK()) {
HXLINE( 165)				if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 166)					this->colorTween->cancel();
            				}
HXLINE( 168)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 168)				_hx_tmp->play(::backend::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 169)				::backend::MusicBeatState_obj::switchState( ::states::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 170)				this->quitting = true;
            			}
            		}
HXLINE( 174)		{
HXLINE( 174)			int _g = 0;
HXDLIN( 174)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 174)			while((_g < _g1->length)){
HXLINE( 174)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 174)				_g = (_g + 1);
HXLINE( 176)				if (!(item->bold)) {
HXLINE( 178)					Float Value = (elapsed * ( (Float)(12) ));
HXDLIN( 178)					Float lowerBound;
HXDLIN( 178)					if ((Value < 0)) {
HXLINE( 178)						lowerBound = ( (Float)(0) );
            					}
            					else {
HXLINE( 178)						lowerBound = Value;
            					}
HXDLIN( 178)					Float lerpVal;
HXDLIN( 178)					if ((lowerBound > 1)) {
HXLINE( 178)						lerpVal = ( (Float)(1) );
            					}
            					else {
HXLINE( 178)						lerpVal = lowerBound;
            					}
HXLINE( 179)					if ((item->targetY == 0)) {
HXLINE( 181)						Float lastX = item->x;
HXLINE( 182)						{
HXLINE( 182)							int axes = 1;
HXDLIN( 182)							bool _hx_tmp;
HXDLIN( 182)							if ((axes != 1)) {
HXLINE( 182)								_hx_tmp = (axes == 17);
            							}
            							else {
HXLINE( 182)								_hx_tmp = true;
            							}
HXDLIN( 182)							if (_hx_tmp) {
HXLINE( 182)								int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 182)								item->set_x(((( (Float)(_hx_tmp) ) - item->get_width()) / ( (Float)(2) )));
            							}
HXDLIN( 182)							bool _hx_tmp1;
HXDLIN( 182)							if ((axes != 16)) {
HXLINE( 182)								_hx_tmp1 = (axes == 17);
            							}
            							else {
HXLINE( 182)								_hx_tmp1 = true;
            							}
HXDLIN( 182)							if (_hx_tmp1) {
HXLINE( 182)								int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 182)								item->set_y(((( (Float)(_hx_tmp) ) - item->get_height()) / ( (Float)(2) )));
            							}
            						}
HXLINE( 183)						item->set_x((lastX + (lerpVal * ((item->x - ( (Float)(70) )) - lastX))));
            					}
            					else {
HXLINE( 187)						Float a = item->x;
HXDLIN( 187)						item->set_x((a + (lerpVal * ((200 + (( (Float)(-40) ) * ::Math_obj::abs(( (Float)(item->targetY) )))) - a))));
            					}
            				}
            			}
            		}
HXLINE( 191)		this->super::update(elapsed);
            	}


void CreditsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_178cfd7cdc100066_196_changeSelection)
HXDLIN( 196)		 ::states::CreditsState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 197)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 197)		_hx_tmp->play(::backend::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 198)		while(true){
HXLINE( 199)			 ::states::CreditsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 199)			_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 200)			if ((this->curSelected < 0)) {
HXLINE( 201)				this->curSelected = (this->creditsStuff->length - 1);
            			}
HXLINE( 202)			if ((this->curSelected >= this->creditsStuff->length)) {
HXLINE( 203)				this->curSelected = 0;
            			}
HXLINE( 198)			if (!(this->unselectableCheck(this->curSelected))) {
HXLINE( 198)				goto _hx_goto_20;
            			}
            		}
            		_hx_goto_20:;
HXLINE( 206)		::String color = this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(4);
HXDLIN( 206)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\t\n\r]",ac,57,71,6b),HX_("",00,00,00,00));
HXDLIN( 206)		::String color1 = ::StringTools_obj::trim(hideChars->split(color)->join(HX_("",00,00,00,00)));
HXDLIN( 206)		if (::StringTools_obj::startsWith(color1,HX_("0x",48,2a,00,00))) {
HXLINE( 206)			color1 = color1.substring((color1.length - 6),null());
            		}
HXDLIN( 206)		 ::Dynamic colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(color1);
HXDLIN( 206)		if (::hx::IsNull( colorNum )) {
HXLINE( 206)			colorNum = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString((HX_("#",23,00,00,00) + color1));
            		}
HXDLIN( 206)		int newColor;
HXDLIN( 206)		if (::hx::IsNotNull( colorNum )) {
HXLINE( 206)			newColor = ( (int)(colorNum) );
            		}
            		else {
HXLINE( 206)			newColor = -1;
            		}
HXLINE( 207)		::haxe::Log_obj::trace((HX_("The BG color is: ",59,4f,d7,97) + newColor),::hx::SourceInfo(HX_("source/states/CreditsState.hx",4e,19,5d,78),207,HX_("states.CreditsState",63,58,98,79),HX_("changeSelection",bc,98,b5,48)));
HXLINE( 208)		if ((newColor != this->intendedColor)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::states::CreditsState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_178cfd7cdc100066_215_changeSelection)
HXLINE( 215)				_gthis->colorTween = null();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 209)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 210)				this->colorTween->cancel();
            			}
HXLINE( 212)			this->intendedColor = newColor;
HXLINE( 213)			this->colorTween = ::flixel::tweens::FlxTween_obj::color(this->bg,1,this->bg->color,this->intendedColor, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
HXLINE( 220)		int bullShit = 0;
HXLINE( 222)		{
HXLINE( 222)			int _g = 0;
HXDLIN( 222)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 222)			while((_g < _g1->length)){
HXLINE( 222)				 ::objects::Alphabet item = _g1->__get(_g).StaticCast<  ::objects::Alphabet >();
HXDLIN( 222)				_g = (_g + 1);
HXLINE( 224)				item->targetY = (bullShit - this->curSelected);
HXLINE( 225)				bullShit = (bullShit + 1);
HXLINE( 227)				if (!(this->unselectableCheck((bullShit - 1)))) {
HXLINE( 228)					item->set_alpha(((Float)0.6));
HXLINE( 229)					if ((item->targetY == 0)) {
HXLINE( 230)						item->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE( 235)		this->descText->set_text(this->creditsStuff->__get(this->curSelected).StaticCast< ::Array< ::String > >()->__get(2));
HXLINE( 236)		 ::flixel::text::FlxText _hx_tmp1 = this->descText;
HXDLIN( 236)		int _hx_tmp2 = ::flixel::FlxG_obj::height;
HXDLIN( 236)		Float _hx_tmp3 = (( (Float)(_hx_tmp2) ) - this->descText->get_height());
HXDLIN( 236)		_hx_tmp1->set_y(((_hx_tmp3 + this->offsetThing) - ( (Float)(60) )));
HXLINE( 238)		if (::hx::IsNotNull( this->moveTween )) {
HXLINE( 238)			this->moveTween->cancel();
            		}
HXLINE( 239)		this->moveTween = ::flixel::tweens::FlxTween_obj::tween(this->descText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->descText->y + 75))),((Float)0.25), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::sineOut_dyn())));
HXLINE( 241)		 ::objects::AttachedSprite _hx_tmp4 = this->descBox;
HXDLIN( 241)		int _hx_tmp5 = ::Std_obj::_hx_int((this->descText->get_width() + 20));
HXDLIN( 241)		_hx_tmp4->setGraphicSize(_hx_tmp5,::Std_obj::_hx_int((this->descText->get_height() + 25)));
HXLINE( 242)		this->descBox->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,changeSelection,(void))

void CreditsState_obj::pushModCreditsToList(::String folder){
            	HX_STACKFRAME(&_hx_pos_178cfd7cdc100066_247_pushModCreditsToList)
HXLINE( 248)		::String creditsFile = null();
HXLINE( 249)		bool _hx_tmp;
HXDLIN( 249)		if (::hx::IsNotNull( folder )) {
HXLINE( 249)			_hx_tmp = (::StringTools_obj::trim(folder).length > 0);
            		}
            		else {
HXLINE( 249)			_hx_tmp = false;
            		}
HXDLIN( 249)		if (_hx_tmp) {
HXLINE( 249)			::String key = (folder + HX_("/data/credits.txt",a6,fd,31,d1));
HXDLIN( 249)			if (::hx::IsNull( key )) {
HXLINE( 249)				key = HX_("",00,00,00,00);
            			}
HXDLIN( 249)			creditsFile = (HX_("mods/",9e,2f,58,0c) + key);
            		}
            		else {
HXLINE( 250)			::String key = HX_("data/credits.txt",77,6f,6e,c6);
HXDLIN( 250)			if (::hx::IsNull( key )) {
HXLINE( 250)				key = HX_("",00,00,00,00);
            			}
HXDLIN( 250)			creditsFile = (HX_("mods/",9e,2f,58,0c) + key);
            		}
HXLINE( 252)		if (::sys::FileSystem_obj::exists(creditsFile)) {
HXLINE( 254)			::Array< ::String > firstarray = ::sys::io::File_obj::getContent(creditsFile).split(HX_("\n",0a,00,00,00));
HXLINE( 255)			{
HXLINE( 255)				int _g = 0;
HXDLIN( 255)				while((_g < firstarray->length)){
HXLINE( 255)					::String i = firstarray->__get(_g);
HXDLIN( 255)					_g = (_g + 1);
HXLINE( 257)					::Array< ::String > arr = ::StringTools_obj::replace(i,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00)).split(HX_("::",c0,32,00,00));
HXLINE( 258)					if ((arr->length >= 5)) {
HXLINE( 258)						arr->push(folder);
            					}
HXLINE( 259)					this->creditsStuff->push(arr);
            				}
            			}
HXLINE( 261)			this->creditsStuff->push(::Array_obj< ::String >::fromData( _hx_array_data_79985863_26,1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,pushModCreditsToList,(void))

bool CreditsState_obj::unselectableCheck(int num){
            	HX_STACKFRAME(&_hx_pos_178cfd7cdc100066_267_unselectableCheck)
HXDLIN( 267)		return (this->creditsStuff->__get(num).StaticCast< ::Array< ::String > >()->length <= 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,unselectableCheck,return )


::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CreditsState_obj > __this = new CreditsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CreditsState_obj *__this = (CreditsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsState_obj), true, "states.CreditsState"));
	*(void **)__this = CreditsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CreditsState_obj::CreditsState_obj()
{
}

void CreditsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	HX_MARK_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(intendedColor,"intendedColor");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	HX_MARK_MEMBER_NAME(descBox,"descBox");
	HX_MARK_MEMBER_NAME(offsetThing,"offsetThing");
	HX_MARK_MEMBER_NAME(quitting,"quitting");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(moveTween,"moveTween");
	 ::backend::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	HX_VISIT_MEMBER_NAME(creditsStuff,"creditsStuff");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(intendedColor,"intendedColor");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	HX_VISIT_MEMBER_NAME(descBox,"descBox");
	HX_VISIT_MEMBER_NAME(offsetThing,"offsetThing");
	HX_VISIT_MEMBER_NAME(quitting,"quitting");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(moveTween,"moveTween");
	 ::backend::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { return ::hx::Val( descBox ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		if (HX_FIELD_EQ(inName,"quitting") ) { return ::hx::Val( quitting ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		if (HX_FIELD_EQ(inName,"moveTween") ) { return ::hx::Val( moveTween ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"offsetThing") ) { return ::hx::Val( offsetThing ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { return ::hx::Val( creditsStuff ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { return ::hx::Val( intendedColor ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pushModCreditsToList") ) { return ::hx::Val( pushModCreditsToList_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CreditsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { descBox=inValue.Cast<  ::objects::AttachedSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quitting") ) { quitting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveTween") ) { moveTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetThing") ) { offsetThing=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { creditsStuff=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { intendedColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CreditsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	outFields->push(HX_("creditsStuff",7a,9a,7e,73));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("intendedColor",b8,fb,ff,5a));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	outFields->push(HX_("descBox",3a,20,25,19));
	outFields->push(HX_("offsetThing",5b,0b,0a,a8));
	outFields->push(HX_("quitting",3d,a0,84,53));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("moveTween",9a,79,37,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CreditsState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CreditsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,creditsStuff),HX_("creditsStuff",7a,9a,7e,73)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsInt,(int)offsetof(CreditsState_obj,intendedColor),HX_("intendedColor",b8,fb,ff,5a)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsState_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{::hx::fsObject /*  ::objects::AttachedSprite */ ,(int)offsetof(CreditsState_obj,descBox),HX_("descBox",3a,20,25,19)},
	{::hx::fsFloat,(int)offsetof(CreditsState_obj,offsetThing),HX_("offsetThing",5b,0b,0a,a8)},
	{::hx::fsBool,(int)offsetof(CreditsState_obj,quitting),HX_("quitting",3d,a0,84,53)},
	{::hx::fsFloat,(int)offsetof(CreditsState_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsState_obj,moveTween),HX_("moveTween",9a,79,37,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CreditsState_obj_sStaticStorageInfo = 0;
#endif

static ::String CreditsState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("grpOptions",f9,45,d8,00),
	HX_("iconArray",60,3f,53,5f),
	HX_("creditsStuff",7a,9a,7e,73),
	HX_("bg",c5,55,00,00),
	HX_("descText",9e,53,35,f3),
	HX_("intendedColor",b8,fb,ff,5a),
	HX_("colorTween",08,c2,dc,3d),
	HX_("descBox",3a,20,25,19),
	HX_("offsetThing",5b,0b,0a,a8),
	HX_("create",fc,66,0f,7c),
	HX_("quitting",3d,a0,84,53),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("update",09,86,05,87),
	HX_("moveTween",9a,79,37,d7),
	HX_("changeSelection",bc,98,b5,48),
	HX_("pushModCreditsToList",0b,03,bb,6c),
	HX_("unselectableCheck",19,58,ce,19),
	::String(null()) };

::hx::Class CreditsState_obj::__mClass;

void CreditsState_obj::__register()
{
	CreditsState_obj _hx_dummy;
	CreditsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.CreditsState",63,58,98,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
