#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_Mods
#include <backend/Mods.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_WeekData
#include <backend/WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_40e6927fd11a022a_28_new,"backend.WeekData","new",0xa892a4ea,"backend.WeekData.new","backend/WeekData.hx",28,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_49_createWeekFile,"backend.WeekData","createWeekFile",0x59a0a762,"backend.WeekData.createWeekFile","backend/WeekData.hx",49,0x34ba5365)
static const ::String _hx_array_data_7c17a7f8_2[] = {
	HX_("dad",47,36,4c,00),HX_("bf",c4,55,00,00),HX_("gf",1f,5a,00,00),
};
static const int _hx_array_data_7c17a7f8_3[] = {
	(int)146,(int)113,(int)253,
};
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_86_reloadWeekFiles,"backend.WeekData","reloadWeekFiles",0x1ad1eed4,"backend.WeekData.reloadWeekFiles","backend/WeekData.hx",86,0x34ba5365)
static const ::String _hx_array_data_7c17a7f8_15[] = {
	HX_("mods/",9e,2f,58,0c),HX_("assets/",4c,2a,dc,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_153_addWeek,"backend.WeekData","addWeek",0x92b7843f,"backend.WeekData.addWeek","backend/WeekData.hx",153,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_174_getWeekFile,"backend.WeekData","getWeekFile",0x083495d0,"backend.WeekData.getWeekFile","backend/WeekData.hx",174,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_196_getWeekFileName,"backend.WeekData","getWeekFileName",0xddd45c3b,"backend.WeekData.getWeekFileName","backend/WeekData.hx",196,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_201_getCurrentWeek,"backend.WeekData","getCurrentWeek",0xeba04f8d,"backend.WeekData.getCurrentWeek","backend/WeekData.hx",201,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_204_setDirectoryFromWeek,"backend.WeekData","setDirectoryFromWeek",0x52a1f03f,"backend.WeekData.setDirectoryFromWeek","backend/WeekData.hx",204,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_29_boot,"backend.WeekData","boot",0xcfd6a868,"backend.WeekData.boot","backend/WeekData.hx",29,0x34ba5365)
HX_LOCAL_STACK_FRAME(_hx_pos_40e6927fd11a022a_30_boot,"backend.WeekData","boot",0xcfd6a868,"backend.WeekData.boot","backend/WeekData.hx",30,0x34ba5365)
namespace backend{

void WeekData_obj::__construct( ::Dynamic weekFile,::String fileName){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_28_new)
HXLINE(  31)		this->folder = HX_("",00,00,00,00);
HXLINE(  69)		this->songs = ( (::cpp::VirtualArray)(weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) );
HXLINE(  70)		this->weekCharacters = ( (::Array< ::String >)(weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  71)		this->weekBackground = ( (::String)(weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE(  72)		this->weekBefore = ( (::String)(weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) );
HXLINE(  73)		this->storyName = ( (::String)(weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) );
HXLINE(  74)		this->weekName = ( (::String)(weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) );
HXLINE(  75)		this->freeplayColor = ( (::Array< int >)(weekFile->__Field(HX_("freeplayColor",a3,0c,53,32),::hx::paccDynamic)) );
HXLINE(  76)		this->startUnlocked = ( (bool)(weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) );
HXLINE(  77)		this->hiddenUntilUnlocked = ( (bool)(weekFile->__Field(HX_("hiddenUntilUnlocked",17,ed,31,dc),::hx::paccDynamic)) );
HXLINE(  78)		this->hideStoryMode = ( (bool)(weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) );
HXLINE(  79)		this->hideFreeplay = ( (bool)(weekFile->__Field(HX_("hideFreeplay",82,13,8c,e3),::hx::paccDynamic)) );
HXLINE(  80)		this->difficulties = ( (::String)(weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) );
HXLINE(  82)		this->fileName = fileName;
            	}

Dynamic WeekData_obj::__CreateEmpty() { return new WeekData_obj; }

void *WeekData_obj::_hx_vtable = 0;

Dynamic WeekData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeekData_obj > _hx_result = new WeekData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool WeekData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60db6d72;
}

 ::haxe::ds::StringMap WeekData_obj::weeksLoaded;

::Array< ::String > WeekData_obj::weeksList;

 ::Dynamic WeekData_obj::createWeekFile(){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_49_createWeekFile)
HXLINE(  50)		 ::Dynamic weekFile =  ::Dynamic(::hx::Anon_obj::Create(12)
            			->setFixed(0,HX_("songs",fe,36,c7,80),::cpp::VirtualArray_obj::__new(3)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Bopeebo",90,29,16,da))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Fresh",4e,f6,b3,99))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Dad Battle",31,46,15,16))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253))))
            			->setFixed(1,HX_("hiddenUntilUnlocked",17,ed,31,dc),false)
            			->setFixed(2,HX_("hideFreeplay",82,13,8c,e3),false)
            			->setFixed(3,HX_("weekBackground",02,f1,ce,ed),HX_("stage",be,6a,0b,84))
            			->setFixed(4,HX_("difficulties",59,c7,5e,02),HX_("",00,00,00,00))
            			->setFixed(5,HX_("weekCharacters",be,b5,7f,1d),::Array_obj< ::String >::fromData( _hx_array_data_7c17a7f8_2,3))
            			->setFixed(6,HX_("storyName",e0,50,20,29),HX_("Your New Week",e1,5b,59,b7))
            			->setFixed(7,HX_("weekName",5f,08,2f,30),HX_("Custom Week",c3,aa,e2,8c))
            			->setFixed(8,HX_("freeplayColor",a3,0c,53,32),::Array_obj< int >::fromData( _hx_array_data_7c17a7f8_3,3))
            			->setFixed(9,HX_("hideStoryMode",d6,b4,4e,4c),false)
            			->setFixed(10,HX_("weekBefore",93,97,02,5d),HX_("tutorial",9e,8f,b5,82))
            			->setFixed(11,HX_("startUnlocked",a5,96,c9,60),true));
HXLINE(  64)		return weekFile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,createWeekFile,return )

void WeekData_obj::reloadWeekFiles( ::Dynamic __o_isStoryMode){
            		 ::Dynamic isStoryMode = __o_isStoryMode;
            		if (::hx::IsNull(__o_isStoryMode)) isStoryMode = false;
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_86_reloadWeekFiles)
HXLINE(  87)		::backend::WeekData_obj::weeksList = ::Array_obj< ::String >::__new(0);
HXLINE(  88)		::backend::WeekData_obj::weeksLoaded->clear();
HXLINE(  90)		::Array< ::String > directories = ::Array_obj< ::String >::fromData( _hx_array_data_7c17a7f8_15,2);
HXLINE(  91)		int originalLength = directories->length;
HXLINE(  93)		{
HXLINE(  93)			int _g = 0;
HXDLIN(  93)			if (!(::backend::Mods_obj::updatedOnState)) {
HXLINE(  93)				::backend::Mods_obj::updateModList();
            			}
HXDLIN(  93)			::Array< ::String > list_enabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  93)			::Array< ::String > list_disabled = ::Array_obj< ::String >::__new(0);
HXDLIN(  93)			::Array< ::String > list_all = ::Array_obj< ::String >::__new(0);
HXDLIN(  93)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  93)				int _g = 0;
HXDLIN(  93)				::String path = HX_("modsList.txt",f1,ca,08,ac);
HXDLIN(  93)				::String daList = null();
HXDLIN(  93)				::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)				path = formatted->__get((formatted->length - 1));
HXLINE(  93)				if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)					daList = ::sys::io::File_obj::getContent(path);
            				}
HXLINE(  93)				::Array< ::String > _g1;
HXDLIN(  93)				if (::hx::IsNotNull( daList )) {
HXLINE(  93)					::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)					daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE(  93)					{
HXLINE(  93)						int _g = 0;
HXDLIN(  93)						int _g2 = daList1->length;
HXDLIN(  93)						while((_g < _g2)){
HXLINE(  93)							_g = (_g + 1);
HXDLIN(  93)							int i = (_g - 1);
HXDLIN(  93)							daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            						}
            					}
HXDLIN(  93)					_g1 = daList1;
            				}
            				else {
HXLINE(  93)					_g1 = ::Array_obj< ::String >::__new(0);
            				}
HXDLIN(  93)				while((_g < _g1->length)){
HXLINE(  93)					::String mod = _g1->__get(_g);
HXDLIN(  93)					_g = (_g + 1);
HXDLIN(  93)					if ((::StringTools_obj::trim(mod).length < 1)) {
HXLINE(  93)						continue;
            					}
HXDLIN(  93)					::Array< ::String > dat = mod.split(HX_("|",7c,00,00,00));
HXDLIN(  93)					list_all->push(dat->__get(0));
HXDLIN(  93)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  93)						list_enabled->push(dat->__get(0));
            					}
            					else {
HXLINE(  93)						list_disabled->push(dat->__get(0));
            					}
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 172)					 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  93)					::haxe::Log_obj::trace(e,::hx::SourceInfo(HX_("source/backend/Mods.hx",1e,5b,8b,ff),173,HX_("backend.Mods",2b,aa,ba,a1),HX_("parseList",31,6e,59,cf)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN(  93)			::Array< ::String > _g1 = list_enabled;
HXDLIN(  93)			while((_g < _g1->length)){
HXLINE(  93)				::String mod = _g1->__get(_g);
HXDLIN(  93)				_g = (_g + 1);
HXLINE(  94)				::String key = (mod + HX_("/",2f,00,00,00));
HXDLIN(  94)				if (::hx::IsNull( key )) {
HXLINE(  94)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  94)				directories->push((HX_("mods/",9e,2f,58,0c) + key));
            			}
            		}
HXLINE( 100)		::String file = HX_("weeks/weekList.txt",c4,73,97,b1);
HXDLIN( 100)		if (::hx::IsNull( file )) {
HXLINE( 100)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 100)		::String path = (HX_("assets/",4c,2a,dc,36) + file);
HXDLIN( 100)		::String daList = null();
HXDLIN( 100)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)		path = formatted->__get((formatted->length - 1));
HXLINE( 100)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 100)		::Array< ::String > sexList;
HXDLIN( 100)		if (::hx::IsNotNull( daList )) {
HXLINE( 100)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 100)			{
HXLINE( 100)				int _g = 0;
HXDLIN( 100)				int _g1 = daList1->length;
HXDLIN( 100)				while((_g < _g1)){
HXLINE( 100)					_g = (_g + 1);
HXDLIN( 100)					int i = (_g - 1);
HXDLIN( 100)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN( 100)			sexList = daList1;
            		}
            		else {
HXLINE( 100)			sexList = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 101)		{
HXLINE( 101)			int _g2 = 0;
HXDLIN( 101)			int _g3 = sexList->length;
HXDLIN( 101)			while((_g2 < _g3)){
HXLINE( 101)				_g2 = (_g2 + 1);
HXDLIN( 101)				int i = (_g2 - 1);
HXLINE( 102)				{
HXLINE( 102)					int _g = 0;
HXDLIN( 102)					int _g1 = directories->length;
HXDLIN( 102)					while((_g < _g1)){
HXLINE( 102)						_g = (_g + 1);
HXDLIN( 102)						int j = (_g - 1);
HXLINE( 103)						::String fileToCheck = (((directories->__get(j) + HX_("weeks/",50,a9,04,ff)) + sexList->__get(i)) + HX_(".json",56,f1,d6,c2));
HXLINE( 104)						if (!(::backend::WeekData_obj::weeksLoaded->exists(sexList->__get(i)))) {
HXLINE( 105)							 ::Dynamic week = ::backend::WeekData_obj::getWeekFile(fileToCheck);
HXLINE( 106)							if (::hx::IsNotNull( week )) {
HXLINE( 107)								 ::backend::WeekData weekFile =  ::backend::WeekData_obj::__alloc( HX_CTX ,week,sexList->__get(i));
HXLINE( 110)								if ((j >= originalLength)) {
HXLINE( 111)									weekFile->folder = directories->__get(j).substring(HX_("mods/",9e,2f,58,0c).length,(directories->__get(j).length - 1));
            								}
HXLINE( 115)								bool _hx_tmp;
HXDLIN( 115)								if (::hx::IsNotNull( weekFile )) {
HXLINE( 115)									bool _hx_tmp1;
HXDLIN( 115)									if (::hx::IsNotNull( isStoryMode )) {
HXLINE( 115)										if (( (bool)(isStoryMode) )) {
HXLINE( 115)											_hx_tmp1 = !(weekFile->hideStoryMode);
            										}
            										else {
HXLINE( 115)											_hx_tmp1 = false;
            										}
            									}
            									else {
HXLINE( 115)										_hx_tmp1 = true;
            									}
HXDLIN( 115)									if (!(_hx_tmp1)) {
HXLINE( 115)										if (!(( (bool)(isStoryMode) ))) {
HXLINE( 115)											_hx_tmp = !(weekFile->hideFreeplay);
            										}
            										else {
HXLINE( 115)											_hx_tmp = false;
            										}
            									}
            									else {
HXLINE( 115)										_hx_tmp = true;
            									}
            								}
            								else {
HXLINE( 115)									_hx_tmp = false;
            								}
HXDLIN( 115)								if (_hx_tmp) {
HXLINE( 116)									::backend::WeekData_obj::weeksLoaded->set(sexList->__get(i),weekFile);
HXLINE( 117)									::backend::WeekData_obj::weeksList->push(sexList->__get(i));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 125)		{
HXLINE( 125)			int _g4 = 0;
HXDLIN( 125)			int _g5 = directories->length;
HXDLIN( 125)			while((_g4 < _g5)){
HXLINE( 125)				_g4 = (_g4 + 1);
HXDLIN( 125)				int i = (_g4 - 1);
HXLINE( 126)				::String directory = (directories->__get(i) + HX_("weeks/",50,a9,04,ff));
HXLINE( 127)				if (::sys::FileSystem_obj::exists(directory)) {
HXLINE( 128)					::String path = (directory + HX_("weekList.txt",74,12,92,5d));
HXDLIN( 128)					::String daList = null();
HXDLIN( 128)					::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXLINE(  30)					path = formatted->__get((formatted->length - 1));
HXLINE( 128)					if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  31)						daList = ::sys::io::File_obj::getContent(path);
            					}
HXLINE( 128)					::Array< ::String > listOfWeeks;
HXDLIN( 128)					if (::hx::IsNotNull( daList )) {
HXLINE( 128)						::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXLINE(  52)						daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXLINE( 128)						{
HXLINE( 128)							int _g = 0;
HXDLIN( 128)							int _g1 = daList1->length;
HXDLIN( 128)							while((_g < _g1)){
HXLINE( 128)								_g = (_g + 1);
HXDLIN( 128)								int i = (_g - 1);
HXDLIN( 128)								daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            							}
            						}
HXDLIN( 128)						listOfWeeks = daList1;
            					}
            					else {
HXLINE( 128)						listOfWeeks = ::Array_obj< ::String >::__new(0);
            					}
HXLINE( 129)					{
HXLINE( 129)						int _g = 0;
HXDLIN( 129)						while((_g < listOfWeeks->length)){
HXLINE( 129)							::String daWeek = listOfWeeks->__get(_g);
HXDLIN( 129)							_g = (_g + 1);
HXLINE( 131)							::String path = ((directory + daWeek) + HX_(".json",56,f1,d6,c2));
HXLINE( 132)							if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 134)								::backend::WeekData_obj::addWeek(daWeek,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
HXLINE( 138)					{
HXLINE( 138)						int _g1 = 0;
HXDLIN( 138)						::Array< ::String > _g2 = ::sys::FileSystem_obj::readDirectory(directory);
HXDLIN( 138)						while((_g1 < _g2->length)){
HXLINE( 138)							::String file = _g2->__get(_g1);
HXDLIN( 138)							_g1 = (_g1 + 1);
HXLINE( 140)							::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,directory)->init(1,file));
HXLINE( 141)							bool _hx_tmp;
HXDLIN( 141)							if (!(::sys::FileSystem_obj::isDirectory(path))) {
HXLINE( 141)								_hx_tmp = ::StringTools_obj::endsWith(file,HX_(".json",56,f1,d6,c2));
            							}
            							else {
HXLINE( 141)								_hx_tmp = false;
            							}
HXDLIN( 141)							if (_hx_tmp) {
HXLINE( 143)								::String _hx_tmp = file.substr(0,(file.length - 5));
HXDLIN( 143)								::backend::WeekData_obj::addWeek(_hx_tmp,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,reloadWeekFiles,(void))

void WeekData_obj::addWeek(::String weekToCheck,::String path,::String directory,int i,int originalLength){
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_153_addWeek)
HXDLIN( 153)		if (!(::backend::WeekData_obj::weeksLoaded->exists(weekToCheck))) {
HXLINE( 155)			 ::Dynamic week = ::backend::WeekData_obj::getWeekFile(path);
HXLINE( 156)			if (::hx::IsNotNull( week )) {
HXLINE( 158)				 ::backend::WeekData weekFile =  ::backend::WeekData_obj::__alloc( HX_CTX ,week,weekToCheck);
HXLINE( 159)				if ((i >= originalLength)) {
HXLINE( 162)					weekFile->folder = directory.substring(HX_("mods/",9e,2f,58,0c).length,(directory.length - 1));
            				}
HXLINE( 165)				bool _hx_tmp;
HXDLIN( 165)				bool _hx_tmp1;
HXDLIN( 165)				if (::states::PlayState_obj::isStoryMode) {
HXLINE( 165)					_hx_tmp1 = !(weekFile->hideStoryMode);
            				}
            				else {
HXLINE( 165)					_hx_tmp1 = false;
            				}
HXDLIN( 165)				if (!(_hx_tmp1)) {
HXLINE( 165)					if (!(::states::PlayState_obj::isStoryMode)) {
HXLINE( 165)						_hx_tmp = !(weekFile->hideFreeplay);
            					}
            					else {
HXLINE( 165)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 165)					_hx_tmp = true;
            				}
HXDLIN( 165)				if (_hx_tmp) {
HXLINE( 167)					::backend::WeekData_obj::weeksLoaded->set(weekToCheck,weekFile);
HXLINE( 168)					::backend::WeekData_obj::weeksList->push(weekToCheck);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(WeekData_obj,addWeek,(void))

 ::Dynamic WeekData_obj::getWeekFile(::String path){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_174_getWeekFile)
HXLINE( 175)		::String rawJson = null();
HXLINE( 177)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 178)			rawJson = ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 186)		bool _hx_tmp;
HXDLIN( 186)		if (::hx::IsNotNull( rawJson )) {
HXLINE( 186)			_hx_tmp = (rawJson.length > 0);
            		}
            		else {
HXLINE( 186)			_hx_tmp = false;
            		}
HXDLIN( 186)		if (_hx_tmp) {
HXLINE( 187)			return ::tjson::TJSON_obj::parse(rawJson,null(),null());
            		}
HXLINE( 189)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,getWeekFile,return )

::String WeekData_obj::getWeekFileName(){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_196_getWeekFileName)
HXDLIN( 196)		return ::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getWeekFileName,return )

 ::backend::WeekData WeekData_obj::getCurrentWeek(){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_201_getCurrentWeek)
HXDLIN( 201)		return ( ( ::backend::WeekData)(::backend::WeekData_obj::weeksLoaded->get(::backend::WeekData_obj::weeksList->__get(::states::PlayState_obj::storyWeek))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getCurrentWeek,return )

void WeekData_obj::setDirectoryFromWeek( ::backend::WeekData data){
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_204_setDirectoryFromWeek)
HXLINE( 205)		::backend::Mods_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 206)		bool _hx_tmp;
HXDLIN( 206)		bool _hx_tmp1;
HXDLIN( 206)		if (::hx::IsNotNull( data )) {
HXLINE( 206)			_hx_tmp1 = ::hx::IsNotNull( data->folder );
            		}
            		else {
HXLINE( 206)			_hx_tmp1 = false;
            		}
HXDLIN( 206)		if (_hx_tmp1) {
HXLINE( 206)			_hx_tmp = (data->folder.length > 0);
            		}
            		else {
HXLINE( 206)			_hx_tmp = false;
            		}
HXDLIN( 206)		if (_hx_tmp) {
HXLINE( 207)			::backend::Mods_obj::currentModDirectory = data->folder;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,setDirectoryFromWeek,(void))


WeekData_obj::WeekData_obj()
{
}

void WeekData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeekData);
	HX_MARK_MEMBER_NAME(folder,"folder");
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_MARK_MEMBER_NAME(weekBackground,"weekBackground");
	HX_MARK_MEMBER_NAME(weekBefore,"weekBefore");
	HX_MARK_MEMBER_NAME(storyName,"storyName");
	HX_MARK_MEMBER_NAME(weekName,"weekName");
	HX_MARK_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_MARK_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_MARK_MEMBER_NAME(hiddenUntilUnlocked,"hiddenUntilUnlocked");
	HX_MARK_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_MARK_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_MARK_MEMBER_NAME(difficulties,"difficulties");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_END_CLASS();
}

void WeekData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(folder,"folder");
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_VISIT_MEMBER_NAME(weekBackground,"weekBackground");
	HX_VISIT_MEMBER_NAME(weekBefore,"weekBefore");
	HX_VISIT_MEMBER_NAME(storyName,"storyName");
	HX_VISIT_MEMBER_NAME(weekName,"weekName");
	HX_VISIT_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_VISIT_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_VISIT_MEMBER_NAME(hiddenUntilUnlocked,"hiddenUntilUnlocked");
	HX_VISIT_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_VISIT_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_VISIT_MEMBER_NAME(difficulties,"difficulties");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
}

::hx::Val WeekData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return ::hx::Val( folder ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { return ::hx::Val( weekName ); }
		if (HX_FIELD_EQ(inName,"fileName") ) { return ::hx::Val( fileName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { return ::hx::Val( storyName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { return ::hx::Val( weekBefore ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { return ::hx::Val( hideFreeplay ); }
		if (HX_FIELD_EQ(inName,"difficulties") ) { return ::hx::Val( difficulties ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { return ::hx::Val( freeplayColor ); }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { return ::hx::Val( startUnlocked ); }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { return ::hx::Val( hideStoryMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { return ::hx::Val( weekCharacters ); }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { return ::hx::Val( weekBackground ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlocked") ) { return ::hx::Val( hiddenUntilUnlocked ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WeekData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addWeek") ) { outValue = addWeek_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { outValue = ( weeksList ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { outValue = ( weeksLoaded ); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFile") ) { outValue = getWeekFile_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createWeekFile") ) { outValue = createWeekFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCurrentWeek") ) { outValue = getCurrentWeek_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"reloadWeekFiles") ) { outValue = reloadWeekFiles_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFileName") ) { outValue = getWeekFileName_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setDirectoryFromWeek") ) { outValue = setDirectoryFromWeek_dyn(); return true; }
	}
	return false;
}

::hx::Val WeekData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { folder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { weekName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { storyName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { weekBefore=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { hideFreeplay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { freeplayColor=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { startUnlocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { hideStoryMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { weekCharacters=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { weekBackground=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hiddenUntilUnlocked") ) { hiddenUntilUnlocked=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeekData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { weeksList=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { weeksLoaded=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void WeekData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("folder",ae,76,90,f9));
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("weekCharacters",be,b5,7f,1d));
	outFields->push(HX_("weekBackground",02,f1,ce,ed));
	outFields->push(HX_("weekBefore",93,97,02,5d));
	outFields->push(HX_("storyName",e0,50,20,29));
	outFields->push(HX_("weekName",5f,08,2f,30));
	outFields->push(HX_("freeplayColor",a3,0c,53,32));
	outFields->push(HX_("startUnlocked",a5,96,c9,60));
	outFields->push(HX_("hiddenUntilUnlocked",17,ed,31,dc));
	outFields->push(HX_("hideStoryMode",d6,b4,4e,4c));
	outFields->push(HX_("hideFreeplay",82,13,8c,e3));
	outFields->push(HX_("difficulties",59,c7,5e,02));
	outFields->push(HX_("fileName",e7,5a,43,62));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WeekData_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(WeekData_obj,folder),HX_("folder",ae,76,90,f9)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(WeekData_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(WeekData_obj,weekCharacters),HX_("weekCharacters",be,b5,7f,1d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBackground),HX_("weekBackground",02,f1,ce,ed)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBefore),HX_("weekBefore",93,97,02,5d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,storyName),HX_("storyName",e0,50,20,29)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekName),HX_("weekName",5f,08,2f,30)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(WeekData_obj,freeplayColor),HX_("freeplayColor",a3,0c,53,32)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,startUnlocked),HX_("startUnlocked",a5,96,c9,60)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hiddenUntilUnlocked),HX_("hiddenUntilUnlocked",17,ed,31,dc)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideStoryMode),HX_("hideStoryMode",d6,b4,4e,4c)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideFreeplay),HX_("hideFreeplay",82,13,8c,e3)},
	{::hx::fsString,(int)offsetof(WeekData_obj,difficulties),HX_("difficulties",59,c7,5e,02)},
	{::hx::fsString,(int)offsetof(WeekData_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WeekData_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &WeekData_obj::weeksLoaded,HX_("weeksLoaded",64,5b,41,21)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &WeekData_obj::weeksList,HX_("weeksList",fd,49,e7,38)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WeekData_obj_sMemberFields[] = {
	HX_("folder",ae,76,90,f9),
	HX_("songs",fe,36,c7,80),
	HX_("weekCharacters",be,b5,7f,1d),
	HX_("weekBackground",02,f1,ce,ed),
	HX_("weekBefore",93,97,02,5d),
	HX_("storyName",e0,50,20,29),
	HX_("weekName",5f,08,2f,30),
	HX_("freeplayColor",a3,0c,53,32),
	HX_("startUnlocked",a5,96,c9,60),
	HX_("hiddenUntilUnlocked",17,ed,31,dc),
	HX_("hideStoryMode",d6,b4,4e,4c),
	HX_("hideFreeplay",82,13,8c,e3),
	HX_("difficulties",59,c7,5e,02),
	HX_("fileName",e7,5a,43,62),
	::String(null()) };

static void WeekData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WeekData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#endif

::hx::Class WeekData_obj::__mClass;

static ::String WeekData_obj_sStaticFields[] = {
	HX_("weeksLoaded",64,5b,41,21),
	HX_("weeksList",fd,49,e7,38),
	HX_("createWeekFile",ac,e3,25,7d),
	HX_("reloadWeekFiles",4a,73,e1,0b),
	HX_("addWeek",b5,a2,32,8b),
	HX_("getWeekFile",46,27,df,50),
	HX_("getWeekFileName",b1,e0,e3,ce),
	HX_("getCurrentWeek",d7,8b,25,0f),
	HX_("setDirectoryFromWeek",09,80,f0,74),
	::String(null())
};

void WeekData_obj::__register()
{
	WeekData_obj _hx_dummy;
	WeekData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.WeekData",f8,a7,17,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeekData_obj::__GetStatic;
	__mClass->mSetStaticField = &WeekData_obj::__SetStatic;
	__mClass->mMarkFunc = WeekData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WeekData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WeekData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WeekData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WeekData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeekData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeekData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WeekData_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_40e6927fd11a022a_29_boot)
HXDLIN(  29)		weeksLoaded =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_40e6927fd11a022a_30_boot)
HXDLIN(  30)		weeksList = ::Array_obj< ::String >::__new(0);
            	}
}

} // end namespace backend
