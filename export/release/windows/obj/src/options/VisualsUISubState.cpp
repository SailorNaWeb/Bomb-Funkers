#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
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
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_objects_StrumNote
#include <objects/StrumNote.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_options_VisualsUISubState
#include <options/VisualsUISubState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e14480e50e84747_7_new,"options.VisualsUISubState","new",0xc75f2e1a,"options.VisualsUISubState.new","options/VisualsUISubState.hx",7,0x3f30f917)
static const ::String _hx_array_data_f33bd928_10[] = {
	HX_("Time Left",fa,08,f2,62),HX_("Time Elapsed",29,71,5d,35),HX_("Song Name",76,e6,ca,de),HX_("Disabled",9c,fd,b5,55),
};
static const ::String _hx_array_data_f33bd928_11[] = {
	HX_("None",d8,3e,e3,33),HX_("Breakfast",bb,92,df,ea),HX_("Tea Time",9d,d4,cb,99),
};
HX_LOCAL_STACK_FRAME(_hx_pos_4e14480e50e84747_160_changeSelection,"options.VisualsUISubState","changeSelection",0x8fb3a576,"options.VisualsUISubState.changeSelection","options/VisualsUISubState.hx",160,0x3f30f917)
HX_LOCAL_STACK_FRAME(_hx_pos_4e14480e50e84747_178_onChangePauseMusic,"options.VisualsUISubState","onChangePauseMusic",0xdfdbfe24,"options.VisualsUISubState.onChangePauseMusic","options/VisualsUISubState.hx",178,0x3f30f917)
HX_LOCAL_STACK_FRAME(_hx_pos_4e14480e50e84747_189_onChangeNoteSkin,"options.VisualsUISubState","onChangeNoteSkin",0x98669ca4,"options.VisualsUISubState.onChangeNoteSkin","options/VisualsUISubState.hx",189,0x3f30f917)
HX_LOCAL_STACK_FRAME(_hx_pos_4e14480e50e84747_188_onChangeNoteSkin,"options.VisualsUISubState","onChangeNoteSkin",0x98669ca4,"options.VisualsUISubState.onChangeNoteSkin","options/VisualsUISubState.hx",188,0x3f30f917)
HX_LOCAL_STACK_FRAME(_hx_pos_4e14480e50e84747_197_changeNoteSkin,"options.VisualsUISubState","changeNoteSkin",0x5380e1a5,"options.VisualsUISubState.changeNoteSkin","options/VisualsUISubState.hx",197,0x3f30f917)
HX_LOCAL_STACK_FRAME(_hx_pos_4e14480e50e84747_208_destroy,"options.VisualsUISubState","destroy",0x298befb4,"options.VisualsUISubState.destroy","options/VisualsUISubState.hx",208,0x3f30f917)
HX_LOCAL_STACK_FRAME(_hx_pos_4e14480e50e84747_216_onChangeFPSCounter,"options.VisualsUISubState","onChangeFPSCounter",0xf92afa68,"options.VisualsUISubState.onChangeFPSCounter","options/VisualsUISubState.hx",216,0x3f30f917)
namespace options{

void VisualsUISubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4e14480e50e84747_7_new)
HXLINE( 176)		this->changedMusic = false;
HXLINE(  12)		this->noteY = ((Float)90);
HXLINE(  11)		this->notesTween = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   9)		this->noteOptionID = -1;
HXLINE(  15)		this->title = HX_("Visuals and UI",ea,4a,1e,90);
HXLINE(  16)		this->rpcTitle = HX_("Visuals & UI Settings Menu",d7,56,13,0a);
HXLINE(  19)		this->notes =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  20)		{
HXLINE(  20)			int _g = 0;
HXDLIN(  20)			int _g1 = ::objects::Note_obj::colArray->length;
HXDLIN(  20)			while((_g < _g1)){
HXLINE(  20)				_g = (_g + 1);
HXDLIN(  20)				int i = (_g - 1);
HXLINE(  22)				 ::objects::StrumNote note =  ::objects::StrumNote_obj::__alloc( HX_CTX ,(370 + ((( (Float)(560) ) / ( (Float)(::objects::Note_obj::colArray->length) )) * ( (Float)(i) ))),( (Float)(-200) ),i,0);
HXLINE(  23)				note->centerOffsets(null());
HXLINE(  24)				{
HXLINE(  24)					 ::flixel::math::FlxBasePoint this1 = note->origin;
HXDLIN(  24)					Float y = (( (Float)(note->frameHeight) ) * ((Float)0.5));
HXDLIN(  24)					this1->set_x((( (Float)(note->frameWidth) ) * ((Float)0.5)));
HXDLIN(  24)					this1->set_y(y);
            				}
HXLINE(  25)				note->playAnim(HX_("static",ae,dc,fb,05),null());
HXLINE(  26)				this->notes->add(note).StaticCast<  ::objects::StrumNote >();
            			}
            		}
HXLINE(  31)		::String defaultDirectory = HX_("shared",a5,5e,2b,1d);
HXDLIN(  31)		bool allowDuplicates = false;
HXDLIN(  31)		if (::hx::IsNull( defaultDirectory )) {
HXLINE(  31)			defaultDirectory = HX_("assets/",4c,2a,dc,36);
            		}
HXDLIN(  31)		defaultDirectory = ::StringTools_obj::trim(defaultDirectory);
HXDLIN(  31)		if (!(::StringTools_obj::endsWith(defaultDirectory,HX_("/",2f,00,00,00)))) {
HXLINE(  31)			defaultDirectory = (defaultDirectory + HX_("/",2f,00,00,00));
            		}
HXDLIN(  31)		if (!(::StringTools_obj::startsWith(defaultDirectory,HX_("assets/",4c,2a,dc,36)))) {
HXLINE(  31)			defaultDirectory = (HX_("assets/",4c,2a,dc,36) + defaultDirectory);
            		}
HXDLIN(  31)		::Array< ::String > mergedList = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)		::Array< ::String > foldersToCheck = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)		if (::sys::FileSystem_obj::exists((defaultDirectory + HX_("images/noteSkins/list.txt",42,a1,fc,21)))) {
HXLINE(  31)			foldersToCheck->push((defaultDirectory + HX_("images/noteSkins/list.txt",42,a1,fc,21)));
            		}
HXDLIN(  31)		{
HXLINE(  31)			{
HXLINE(  31)				int _g2 = 0;
HXDLIN(  31)				::Array< ::String > _g3 = ::backend::Mods_obj::globalMods;
HXDLIN(  31)				while((_g2 < _g3->length)){
HXLINE(  31)					::String mod = _g3->__get(_g2);
HXDLIN(  31)					_g2 = (_g2 + 1);
HXDLIN(  31)					::String key = ((mod + HX_("/",2f,00,00,00)) + HX_("images/noteSkins/list.txt",42,a1,fc,21));
HXDLIN(  31)					if (::hx::IsNull( key )) {
HXLINE(  31)						key = HX_("",00,00,00,00);
            					}
HXDLIN(  31)					::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  31)					if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  31)						foldersToCheck->push(folder);
            					}
            				}
            			}
HXDLIN(  31)			::String key = HX_("images/noteSkins/list.txt",42,a1,fc,21);
HXDLIN(  31)			if (::hx::IsNull( key )) {
HXLINE(  31)				key = HX_("",00,00,00,00);
            			}
HXDLIN(  31)			::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  31)			if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  31)				::String key = HX_("images/noteSkins/list.txt",42,a1,fc,21);
HXDLIN(  31)				if (::hx::IsNull( key )) {
HXLINE(  31)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  31)				foldersToCheck->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
HXDLIN(  31)			bool _hx_tmp;
HXDLIN(  31)			if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE(  31)				_hx_tmp = (::backend::Mods_obj::currentModDirectory.length > 0);
            			}
            			else {
HXLINE(  31)				_hx_tmp = false;
            			}
HXDLIN(  31)			if (_hx_tmp) {
HXLINE(  31)				::String key = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + HX_("images/noteSkins/list.txt",42,a1,fc,21));
HXDLIN(  31)				if (::hx::IsNull( key )) {
HXLINE(  31)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  31)				::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  31)				if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  31)					foldersToCheck->push(folder);
            				}
            			}
            		}
HXDLIN(  31)		::Array< ::String > paths = foldersToCheck;
HXDLIN(  31)		::String defaultPath = (defaultDirectory + HX_("images/noteSkins/list.txt",42,a1,fc,21));
HXDLIN(  31)		if (paths->contains(defaultPath)) {
HXLINE(  31)			paths->remove(defaultPath);
HXDLIN(  31)			paths->insert(0,defaultPath);
            		}
HXDLIN(  31)		{
HXLINE(  31)			int _g4 = 0;
HXDLIN(  31)			while((_g4 < paths->length)){
HXLINE(  31)				::String file = paths->__get(_g4);
HXDLIN(  31)				_g4 = (_g4 + 1);
HXDLIN(  31)				::String path = file;
HXDLIN(  31)				::String daList = null();
HXDLIN(  31)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN(  31)				path = formatted->__get((formatted->length - 1));
HXDLIN(  31)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXDLIN(  31)				::Array< ::String > list;
HXDLIN(  31)				if (::hx::IsNotNull( daList )) {
HXLINE(  31)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  31)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN(  31)					{
HXLINE(  31)						int _g = 0;
HXDLIN(  31)						int _g1 = daList1->length;
HXDLIN(  31)						while((_g < _g1)){
HXLINE(  31)							_g = (_g + 1);
HXDLIN(  31)							int i = (_g - 1);
HXDLIN(  31)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  31)					list = daList1;
            				}
            				else {
HXLINE(  31)					list = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN(  31)				{
HXLINE(  31)					int _g = 0;
HXDLIN(  31)					while((_g < list->length)){
HXLINE(  31)						::String value = list->__get(_g);
HXDLIN(  31)						_g = (_g + 1);
HXDLIN(  31)						bool _hx_tmp;
HXDLIN(  31)						bool _hx_tmp1;
HXDLIN(  31)						if (!(allowDuplicates)) {
HXLINE(  31)							_hx_tmp1 = !(mergedList->contains(value));
            						}
            						else {
HXLINE(  31)							_hx_tmp1 = true;
            						}
HXDLIN(  31)						if (_hx_tmp1) {
HXLINE(  31)							_hx_tmp = (value.length > 0);
            						}
            						else {
HXLINE(  31)							_hx_tmp = false;
            						}
HXDLIN(  31)						if (_hx_tmp) {
HXLINE(  31)							mergedList->push(value);
            						}
            					}
            				}
            			}
            		}
HXDLIN(  31)		::Array< ::String > noteSkins = mergedList;
HXLINE(  32)		if ((noteSkins->length > 0)) {
HXLINE(  34)			if (!(noteSkins->contains(::backend::ClientPrefs_obj::data->noteSkin))) {
HXLINE(  35)				::backend::ClientPrefs_obj::data->noteSkin = ::backend::ClientPrefs_obj::defaultData->noteSkin;
            			}
HXLINE(  37)			noteSkins->insert(0,::backend::ClientPrefs_obj::defaultData->noteSkin);
HXLINE(  38)			 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Note Skins:",92,62,42,0e),HX_("Select your prefered Note skin.",2b,65,4f,d5),HX_("noteSkin",8f,3b,88,5b),HX_("string",d1,28,30,11),noteSkins);
HXLINE(  43)			this->addOption(option);
HXLINE(  44)			option->onChange = this->onChangeNoteSkin_dyn();
HXLINE(  45)			this->noteOptionID = (this->optionsArray->length - 1);
            		}
HXLINE(  48)		::String defaultDirectory1 = HX_("shared",a5,5e,2b,1d);
HXDLIN(  48)		bool allowDuplicates1 = false;
HXDLIN(  48)		if (::hx::IsNull( defaultDirectory1 )) {
HXLINE(  48)			defaultDirectory1 = HX_("assets/",4c,2a,dc,36);
            		}
HXDLIN(  48)		defaultDirectory1 = ::StringTools_obj::trim(defaultDirectory1);
HXDLIN(  48)		if (!(::StringTools_obj::endsWith(defaultDirectory1,HX_("/",2f,00,00,00)))) {
HXLINE(  48)			defaultDirectory1 = (defaultDirectory1 + HX_("/",2f,00,00,00));
            		}
HXDLIN(  48)		if (!(::StringTools_obj::startsWith(defaultDirectory1,HX_("assets/",4c,2a,dc,36)))) {
HXLINE(  48)			defaultDirectory1 = (HX_("assets/",4c,2a,dc,36) + defaultDirectory1);
            		}
HXDLIN(  48)		::Array< ::String > mergedList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  48)		::Array< ::String > foldersToCheck1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  48)		if (::sys::FileSystem_obj::exists((defaultDirectory1 + HX_("images/noteSplashes/list.txt",31,67,e4,1c)))) {
HXLINE(  48)			foldersToCheck1->push((defaultDirectory1 + HX_("images/noteSplashes/list.txt",31,67,e4,1c)));
            		}
HXDLIN(  48)		{
HXLINE(  48)			{
HXLINE(  48)				int _g5 = 0;
HXDLIN(  48)				::Array< ::String > _g6 = ::backend::Mods_obj::globalMods;
HXDLIN(  48)				while((_g5 < _g6->length)){
HXLINE(  48)					::String mod = _g6->__get(_g5);
HXDLIN(  48)					_g5 = (_g5 + 1);
HXDLIN(  48)					::String key = ((mod + HX_("/",2f,00,00,00)) + HX_("images/noteSplashes/list.txt",31,67,e4,1c));
HXDLIN(  48)					if (::hx::IsNull( key )) {
HXLINE(  48)						key = HX_("",00,00,00,00);
            					}
HXDLIN(  48)					::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  48)					if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  48)						foldersToCheck1->push(folder);
            					}
            				}
            			}
HXDLIN(  48)			::String key1 = HX_("images/noteSplashes/list.txt",31,67,e4,1c);
HXDLIN(  48)			if (::hx::IsNull( key1 )) {
HXLINE(  48)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN(  48)			::String folder1 = (HX_("mods/",9e,2f,58,0c) + key1);
HXDLIN(  48)			if (::sys::FileSystem_obj::exists(folder1)) {
HXLINE(  48)				::String key = HX_("images/noteSplashes/list.txt",31,67,e4,1c);
HXDLIN(  48)				if (::hx::IsNull( key )) {
HXLINE(  48)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  48)				foldersToCheck1->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
HXDLIN(  48)			bool _hx_tmp1;
HXDLIN(  48)			if (::hx::IsNotNull( ::backend::Mods_obj::currentModDirectory )) {
HXLINE(  48)				_hx_tmp1 = (::backend::Mods_obj::currentModDirectory.length > 0);
            			}
            			else {
HXLINE(  48)				_hx_tmp1 = false;
            			}
HXDLIN(  48)			if (_hx_tmp1) {
HXLINE(  48)				::String key = ((::backend::Mods_obj::currentModDirectory + HX_("/",2f,00,00,00)) + HX_("images/noteSplashes/list.txt",31,67,e4,1c));
HXDLIN(  48)				if (::hx::IsNull( key )) {
HXLINE(  48)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  48)				::String folder = (HX_("mods/",9e,2f,58,0c) + key);
HXDLIN(  48)				if (::sys::FileSystem_obj::exists(folder)) {
HXLINE(  48)					foldersToCheck1->push(folder);
            				}
            			}
            		}
HXDLIN(  48)		::Array< ::String > paths1 = foldersToCheck1;
HXDLIN(  48)		::String defaultPath1 = (defaultDirectory1 + HX_("images/noteSplashes/list.txt",31,67,e4,1c));
HXDLIN(  48)		if (paths1->contains(defaultPath1)) {
HXLINE(  48)			paths1->remove(defaultPath1);
HXDLIN(  48)			paths1->insert(0,defaultPath1);
            		}
HXDLIN(  48)		{
HXLINE(  48)			int _g7 = 0;
HXDLIN(  48)			while((_g7 < paths1->length)){
HXLINE(  48)				::String file = paths1->__get(_g7);
HXDLIN(  48)				_g7 = (_g7 + 1);
HXDLIN(  48)				::String path = file;
HXDLIN(  48)				::String daList = null();
HXDLIN(  48)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN(  48)				path = formatted->__get((formatted->length - 1));
HXDLIN(  48)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  48)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXDLIN(  48)				::Array< ::String > list;
HXDLIN(  48)				if (::hx::IsNotNull( daList )) {
HXLINE(  48)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN(  48)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN(  48)					{
HXLINE(  48)						int _g = 0;
HXDLIN(  48)						int _g1 = daList1->length;
HXDLIN(  48)						while((_g < _g1)){
HXLINE(  48)							_g = (_g + 1);
HXDLIN(  48)							int i = (_g - 1);
HXDLIN(  48)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  48)					list = daList1;
            				}
            				else {
HXLINE(  48)					list = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN(  48)				{
HXLINE(  48)					int _g = 0;
HXDLIN(  48)					while((_g < list->length)){
HXLINE(  48)						::String value = list->__get(_g);
HXDLIN(  48)						_g = (_g + 1);
HXDLIN(  48)						bool _hx_tmp;
HXDLIN(  48)						bool _hx_tmp1;
HXDLIN(  48)						if (!(allowDuplicates1)) {
HXLINE(  48)							_hx_tmp1 = !(mergedList1->contains(value));
            						}
            						else {
HXLINE(  48)							_hx_tmp1 = true;
            						}
HXDLIN(  48)						if (_hx_tmp1) {
HXLINE(  48)							_hx_tmp = (value.length > 0);
            						}
            						else {
HXLINE(  48)							_hx_tmp = false;
            						}
HXDLIN(  48)						if (_hx_tmp) {
HXLINE(  48)							mergedList1->push(value);
            						}
            					}
            				}
            			}
            		}
HXDLIN(  48)		::Array< ::String > noteSplashes = mergedList1;
HXLINE(  49)		if ((noteSplashes->length > 0)) {
HXLINE(  51)			if (!(noteSplashes->contains(::backend::ClientPrefs_obj::data->splashSkin))) {
HXLINE(  52)				::backend::ClientPrefs_obj::data->splashSkin = ::backend::ClientPrefs_obj::defaultData->splashSkin;
            			}
HXLINE(  54)			noteSplashes->insert(0,::backend::ClientPrefs_obj::defaultData->splashSkin);
HXLINE(  55)			 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Note Splashes:",57,cb,35,75),HX_("Select your prefered Note Splash variation or turn it off.",ae,cb,6a,a5),HX_("splashSkin",84,03,e1,a1),HX_("string",d1,28,30,11),noteSplashes);
HXLINE(  60)			this->addOption(option);
            		}
HXLINE(  63)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Note Splash Opacity",60,36,3d,35),HX_("How much transparent should the Note Splashes be.",23,18,f8,99),HX_("splashAlpha",77,20,7a,a6),HX_("percent",c5,aa,da,78),null());
HXLINE(  67)		option->scrollSpeed = ((Float)1.6);
HXLINE(  68)		option->minValue = ((Float)0.0);
HXLINE(  69)		option->maxValue = 1;
HXLINE(  70)		option->changeValue = ((Float)0.1);
HXLINE(  71)		option->decimals = 1;
HXLINE(  72)		this->addOption(option);
HXLINE(  74)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Hide HUD",59,3a,04,5d),HX_("If checked, hides most HUD elements.",b8,a1,19,66),HX_("hideHud",15,b9,3c,b7),HX_("bool",2a,84,1b,41),null());
HXLINE(  78)		this->addOption(option1);
HXLINE(  80)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Time Bar:",fa,e7,52,5c),HX_("What should the Time Bar display?",bd,00,f8,02),HX_("timeBarType",a0,5d,bb,01),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_f33bd928_10,4));
HXLINE(  85)		this->addOption(option2);
HXLINE(  87)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Flashing Lights",0b,e4,0d,04),HX_("Uncheck this if you're sensitive to flashing lights!",9e,ed,11,12),HX_("flashing",32,85,e8,99),HX_("bool",2a,84,1b,41),null());
HXLINE(  91)		this->addOption(option3);
HXLINE(  93)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Camera Zooms",45,a6,9b,43),HX_("If unchecked, the camera won't zoom in on a beat hit.",fd,78,13,6b),HX_("camZooms",71,f3,cd,90),HX_("bool",2a,84,1b,41),null());
HXLINE(  97)		this->addOption(option4);
HXLINE(  99)		 ::options::Option option5 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Score Text Zoom on Hit",da,24,e2,56),HX_("If unchecked, disables the Score text zooming\neverytime you hit a note.",bc,95,97,3e),HX_("scoreZoom",85,53,bc,e0),HX_("bool",2a,84,1b,41),null());
HXLINE( 103)		this->addOption(option5);
HXLINE( 105)		 ::options::Option option6 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Health Bar Opacity",da,18,73,d2),HX_("How much transparent should the health bar and icons be.",16,a5,40,f3),HX_("healthBarAlpha",47,c9,a0,80),HX_("percent",c5,aa,da,78),null());
HXLINE( 109)		option6->scrollSpeed = ((Float)1.6);
HXLINE( 110)		option6->minValue = ((Float)0.0);
HXLINE( 111)		option6->maxValue = 1;
HXLINE( 112)		option6->changeValue = ((Float)0.1);
HXLINE( 113)		option6->decimals = 1;
HXLINE( 114)		this->addOption(option6);
HXLINE( 117)		 ::options::Option option7 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("FPS Counter",85,ef,54,c9),HX_("If unchecked, hides FPS Counter.",17,fc,a1,74),HX_("showFPS",ec,0a,9a,7b),HX_("bool",2a,84,1b,41),null());
HXLINE( 121)		this->addOption(option7);
HXLINE( 122)		option7->onChange = this->onChangeFPSCounter_dyn();
HXLINE( 125)		 ::options::Option option8 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Pause Screen Song:",9b,6e,16,2a),HX_("What song do you prefer for the Pause Screen?",9a,c8,b3,59),HX_("pauseMusic",cf,6d,d3,e5),HX_("string",d1,28,30,11),::Array_obj< ::String >::fromData( _hx_array_data_f33bd928_11,3));
HXLINE( 130)		this->addOption(option8);
HXLINE( 131)		option8->onChange = this->onChangePauseMusic_dyn();
HXLINE( 142)		 ::options::Option option9 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Discord Rich Presence",2b,ef,99,77),HX_("Uncheck this to prevent accidental leaks, it will hide the Application from your \"Playing\" box on Discord",0b,e4,6b,c9),HX_("discordRPC",99,18,34,b0),HX_("bool",2a,84,1b,41),null());
HXLINE( 146)		this->addOption(option9);
HXLINE( 149)		 ::options::Option option10 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Combo Stacking",ec,30,59,b7),HX_("If unchecked, Ratings and Combo won't stack, saving on System Memory and making them easier to read",d6,be,78,3a),HX_("comboStacking",08,45,bb,e0),HX_("bool",2a,84,1b,41),null());
HXLINE( 153)		this->addOption(option10);
HXLINE( 155)		super::__construct();
HXLINE( 156)		this->add(this->notes);
            	}

Dynamic VisualsUISubState_obj::__CreateEmpty() { return new VisualsUISubState_obj; }

void *VisualsUISubState_obj::_hx_vtable = 0;

Dynamic VisualsUISubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VisualsUISubState_obj > _hx_result = new VisualsUISubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VisualsUISubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x39ef0ffe) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x39ef0ffe;
			}
		} else {
			return inClassId==(int)0x3c0818b8 || inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void VisualsUISubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_4e14480e50e84747_160_changeSelection)
HXLINE( 161)		this->super::changeSelection(change);
HXLINE( 163)		if ((this->noteOptionID < 0)) {
HXLINE( 163)			return;
            		}
HXLINE( 165)		{
HXLINE( 165)			int _g = 0;
HXDLIN( 165)			int _g1 = ::objects::Note_obj::colArray->length;
HXDLIN( 165)			while((_g < _g1)){
HXLINE( 165)				_g = (_g + 1);
HXDLIN( 165)				int i = (_g - 1);
HXLINE( 167)				 ::objects::StrumNote note = Dynamic( this->notes->members->__get(i)).StaticCast<  ::objects::StrumNote >();
HXLINE( 168)				if (::hx::IsNotNull( this->notesTween->__get(i).StaticCast<  ::flixel::tweens::FlxTween >() )) {
HXLINE( 168)					this->notesTween->__get(i).StaticCast<  ::flixel::tweens::FlxTween >()->cancel();
            				}
HXLINE( 169)				if ((this->curSelected == this->noteOptionID)) {
HXLINE( 170)					this->notesTween[i] = ::flixel::tweens::FlxTween_obj::tween(note, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),this->noteY)),(::Math_obj::abs((note->y / (200 + this->noteY))) / ( (Float)(3) )), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
            				}
            				else {
HXLINE( 172)					this->notesTween[i] = ::flixel::tweens::FlxTween_obj::tween(note, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),-200)),(::Math_obj::abs((note->y / (200 + this->noteY))) / ( (Float)(3) )), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
            				}
            			}
            		}
            	}


void VisualsUISubState_obj::onChangePauseMusic(){
            	HX_GC_STACKFRAME(&_hx_pos_4e14480e50e84747_178_onChangePauseMusic)
HXLINE( 179)		if ((::backend::ClientPrefs_obj::data->pauseMusic == HX_("None",d8,3e,e3,33))) {
HXLINE( 180)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
            		}
            		else {
HXLINE( 182)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 182)			::String path = ::backend::ClientPrefs_obj::data->pauseMusic;
HXDLIN( 182)			 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN( 182)			 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN( 182)			::String path1 = invalidChars->split(::StringTools_obj::replace(path,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN( 182)			::String library = null();
HXDLIN( 182)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),hideChars->split(path1)->join(HX_("",00,00,00,00)).toLowerCase(),library);
HXDLIN( 182)			_hx_tmp->playMusic(file,null(),null(),null());
            		}
HXLINE( 184)		this->changedMusic = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VisualsUISubState_obj,onChangePauseMusic,(void))

void VisualsUISubState_obj::onChangeNoteSkin(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::options::VisualsUISubState,_gthis) HXARGC(1)
            		void _hx_run( ::objects::StrumNote note){
            			HX_STACKFRAME(&_hx_pos_4e14480e50e84747_189_onChangeNoteSkin)
HXLINE( 190)			_gthis->changeNoteSkin(note);
HXLINE( 191)			note->centerOffsets(null());
HXLINE( 192)			{
HXLINE( 192)				 ::flixel::math::FlxBasePoint this1 = note->origin;
HXDLIN( 192)				Float y = (( (Float)(note->frameHeight) ) * ((Float)0.5));
HXDLIN( 192)				this1->set_x((( (Float)(note->frameWidth) ) * ((Float)0.5)));
HXDLIN( 192)				this1->set_y(y);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_4e14480e50e84747_188_onChangeNoteSkin)
HXDLIN( 188)		 ::options::VisualsUISubState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 189)		this->notes->forEachAlive( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(VisualsUISubState_obj,onChangeNoteSkin,(void))

void VisualsUISubState_obj::changeNoteSkin( ::objects::StrumNote note){
            	HX_STACKFRAME(&_hx_pos_4e14480e50e84747_197_changeNoteSkin)
HXLINE( 198)		::String skin = ::objects::Note_obj::defaultNoteSkin;
HXLINE( 199)		::String customSkin = (skin + ::objects::Note_obj::getNoteSkinPostfix());
HXLINE( 200)		if (::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + customSkin) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null())) {
HXLINE( 200)			skin = customSkin;
            		}
HXLINE( 202)		note->set_texture(skin);
HXLINE( 203)		note->reloadNote();
HXLINE( 204)		note->playAnim(HX_("static",ae,dc,fb,05),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(VisualsUISubState_obj,changeNoteSkin,(void))

void VisualsUISubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_4e14480e50e84747_208_destroy)
HXLINE( 209)		bool _hx_tmp;
HXDLIN( 209)		if (this->changedMusic) {
HXLINE( 209)			_hx_tmp = !(::options::OptionsState_obj::onPlayState);
            		}
            		else {
HXLINE( 209)			_hx_tmp = false;
            		}
HXDLIN( 209)		if (_hx_tmp) {
HXLINE( 209)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 209)			::String library = null();
HXDLIN( 209)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("freakyMenu",15,c9,93,86),library);
HXDLIN( 209)			_hx_tmp->playMusic(file,1,true,null());
            		}
HXLINE( 210)		this->super::destroy();
            	}


void VisualsUISubState_obj::onChangeFPSCounter(){
            	HX_STACKFRAME(&_hx_pos_4e14480e50e84747_216_onChangeFPSCounter)
HXDLIN( 216)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 217)			::Main_obj::fpsVar->set_visible(::backend::ClientPrefs_obj::data->showFPS);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VisualsUISubState_obj,onChangeFPSCounter,(void))


::hx::ObjectPtr< VisualsUISubState_obj > VisualsUISubState_obj::__new() {
	::hx::ObjectPtr< VisualsUISubState_obj > __this = new VisualsUISubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VisualsUISubState_obj > VisualsUISubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VisualsUISubState_obj *__this = (VisualsUISubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VisualsUISubState_obj), true, "options.VisualsUISubState"));
	*(void **)__this = VisualsUISubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VisualsUISubState_obj::VisualsUISubState_obj()
{
}

void VisualsUISubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VisualsUISubState);
	HX_MARK_MEMBER_NAME(noteOptionID,"noteOptionID");
	HX_MARK_MEMBER_NAME(notes,"notes");
	HX_MARK_MEMBER_NAME(notesTween,"notesTween");
	HX_MARK_MEMBER_NAME(noteY,"noteY");
	HX_MARK_MEMBER_NAME(changedMusic,"changedMusic");
	 ::options::BaseOptionsMenu_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VisualsUISubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(noteOptionID,"noteOptionID");
	HX_VISIT_MEMBER_NAME(notes,"notes");
	HX_VISIT_MEMBER_NAME(notesTween,"notesTween");
	HX_VISIT_MEMBER_NAME(noteY,"noteY");
	HX_VISIT_MEMBER_NAME(changedMusic,"changedMusic");
	 ::options::BaseOptionsMenu_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VisualsUISubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { return ::hx::Val( notes ); }
		if (HX_FIELD_EQ(inName,"noteY") ) { return ::hx::Val( noteY ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"notesTween") ) { return ::hx::Val( notesTween ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"noteOptionID") ) { return ::hx::Val( noteOptionID ); }
		if (HX_FIELD_EQ(inName,"changedMusic") ) { return ::hx::Val( changedMusic ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"changeNoteSkin") ) { return ::hx::Val( changeNoteSkin_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onChangeNoteSkin") ) { return ::hx::Val( onChangeNoteSkin_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onChangePauseMusic") ) { return ::hx::Val( onChangePauseMusic_dyn() ); }
		if (HX_FIELD_EQ(inName,"onChangeFPSCounter") ) { return ::hx::Val( onChangeFPSCounter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VisualsUISubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { notes=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteY") ) { noteY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"notesTween") ) { notesTween=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"noteOptionID") ) { noteOptionID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changedMusic") ) { changedMusic=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VisualsUISubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("noteOptionID",a2,b0,ce,73));
	outFields->push(HX_("notes",41,dc,ca,9f));
	outFields->push(HX_("notesTween",6a,32,28,11));
	outFields->push(HX_("noteY",27,dc,ca,9f));
	outFields->push(HX_("changedMusic",11,9b,d1,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VisualsUISubState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VisualsUISubState_obj,noteOptionID),HX_("noteOptionID",a2,b0,ce,73)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(VisualsUISubState_obj,notes),HX_("notes",41,dc,ca,9f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(VisualsUISubState_obj,notesTween),HX_("notesTween",6a,32,28,11)},
	{::hx::fsFloat,(int)offsetof(VisualsUISubState_obj,noteY),HX_("noteY",27,dc,ca,9f)},
	{::hx::fsBool,(int)offsetof(VisualsUISubState_obj,changedMusic),HX_("changedMusic",11,9b,d1,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VisualsUISubState_obj_sStaticStorageInfo = 0;
#endif

static ::String VisualsUISubState_obj_sMemberFields[] = {
	HX_("noteOptionID",a2,b0,ce,73),
	HX_("notes",41,dc,ca,9f),
	HX_("notesTween",6a,32,28,11),
	HX_("noteY",27,dc,ca,9f),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changedMusic",11,9b,d1,51),
	HX_("onChangePauseMusic",9e,da,98,ca),
	HX_("onChangeNoteSkin",9e,86,19,c1),
	HX_("changeNoteSkin",1f,79,c3,b4),
	HX_("destroy",fa,2c,86,24),
	HX_("onChangeFPSCounter",e2,d6,e7,e3),
	::String(null()) };

::hx::Class VisualsUISubState_obj::__mClass;

void VisualsUISubState_obj::__register()
{
	VisualsUISubState_obj _hx_dummy;
	VisualsUISubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.VisualsUISubState",28,d9,3b,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VisualsUISubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VisualsUISubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VisualsUISubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VisualsUISubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
