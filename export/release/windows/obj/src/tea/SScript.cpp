#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_ex_InterpEx
#include <ex/InterpEx.h>
#endif
#ifndef INCLUDED_ex_ScriptClass
#include <ex/ScriptClass.h>
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
#ifndef INCLUDED_hscriptBase_Interp
#include <hscriptBase/Interp.h>
#endif
#ifndef INCLUDED_hscriptBase_Parser
#include <hscriptBase/Parser.h>
#endif
#ifndef INCLUDED_hscriptBase_Tools
#include <hscriptBase/Tools.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_macro_Macro
#include <macro/Macro.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif
#ifndef INCLUDED_tea_backend_SScriptX
#include <tea/backend/SScriptX.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ffc4a688e712d40b_47_new,"tea.SScript","new",0x7a4ca312,"tea.SScript.new","tea/SScript.hx",47,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_355_execute,"tea.SScript","execute",0x452a1de7,"tea.SScript.execute","tea/SScript.hx",355,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_398_set,"tea.SScript","set",0x7a506e54,"tea.SScript.set","tea/SScript.hx",398,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_390_set,"tea.SScript","set",0x7a506e54,"tea.SScript.set","tea/SScript.hx",390,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_443_setClass,"tea.SScript","setClass",0xd6e10944,"tea.SScript.setClass","tea/SScript.hx",443,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_477_setClassString,"tea.SScript","setClassString",0x4845f135,"tea.SScript.setClassString","tea/SScript.hx",477,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_508_locals,"tea.SScript","locals",0xaf3ddd36,"tea.SScript.locals","tea/SScript.hx",508,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_543_unset,"tea.SScript","unset",0x2ec7561b,"tea.SScript.unset","tea/SScript.hx",543,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_578_get,"tea.SScript","get",0x7a475348,"tea.SScript.get","tea/SScript.hx",578,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_665_call,"tea.SScript","call",0x8179a1ac,"tea.SScript.call","tea/SScript.hx",665,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_639_call,"tea.SScript","call",0x8179a1ac,"tea.SScript.call","tea/SScript.hx",639,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_765_clear,"tea.SScript","clear",0xd033d4bf,"tea.SScript.clear","tea/SScript.hx",765,0x727e4fdf)
static const ::String _hx_array_data_6e1d7220_20[] = {
	HX_("true",4e,a7,03,4d),HX_("false",a3,35,4f,fb),HX_("null",87,9e,0e,49),HX_("trace",85,8e,1f,16),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_793_exists,"tea.SScript","exists",0x155e866a,"tea.SScript.exists","tea/SScript.hx",793,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_822_preset,"tea.SScript","preset",0x043f1bed,"tea.SScript.preset","tea/SScript.hx",822,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_847_doFile,"tea.SScript","doFile",0x693ddc35,"tea.SScript.doFile","tea/SScript.hx",847,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_937_doString,"tea.SScript","doString",0x259bd6ca,"tea.SScript.doString","tea/SScript.hx",937,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1029_toString,"tea.SScript","toString",0xb8c2f8ba,"tea.SScript.toString","tea/SScript.hx",1029,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1142_destroy,"tea.SScript","destroy",0x9da340ac,"tea.SScript.destroy","tea/SScript.hx",1142,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1170_get_variables,"tea.SScript","get_variables",0xf2609bc0,"tea.SScript.get_variables","tea/SScript.hx",1170,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1178_setPackagePath,"tea.SScript","setPackagePath",0xc5cc5a57,"tea.SScript.setPackagePath","tea/SScript.hx",1178,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1186_get_packagePath,"tea.SScript","get_packagePath",0xbba44594,"tea.SScript.get_packagePath","tea/SScript.hx",1186,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1194_get_classes,"tea.SScript","get_classes",0xd581836f,"tea.SScript.get_classes","tea/SScript.hx",1194,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1210_get_currentScriptClass,"tea.SScript","get_currentScriptClass",0x4775144b,"tea.SScript.get_currentScriptClass","tea/SScript.hx",1210,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1218_get_currentSuperClass,"tea.SScript","get_currentSuperClass",0x9398945f,"tea.SScript.get_currentSuperClass","tea/SScript.hx",1218,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1226_set_currentClass,"tea.SScript","set_currentClass",0x20351d4a,"tea.SScript.set_currentClass","tea/SScript.hx",1226,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1234_get_currentClass,"tea.SScript","get_currentClass",0xc9f32fd6,"tea.SScript.get_currentClass","tea/SScript.hx",1234,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1242_get_exMode,"tea.SScript","get_exMode",0xf99b44cd,"tea.SScript.get_exMode","tea/SScript.hx",1242,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1256_set_customOrigin,"tea.SScript","set_customOrigin",0xdb6f3082,"tea.SScript.set_customOrigin","tea/SScript.hx",1256,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1061_listScripts,"tea.SScript","listScripts",0xc9d943fc,"tea.SScript.listScripts","tea/SScript.hx",1061,0x727e4fdf)
static const ::String _hx_array_data_6e1d7220_42[] = {
	HX_("hx",10,5b,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1251_get_BlankReg,"tea.SScript","get_BlankReg",0xb5f7b597,"tea.SScript.get_BlankReg","tea/SScript.hx",1251,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1266_set_defaultTypeCheck,"tea.SScript","set_defaultTypeCheck",0x4b207c38,"tea.SScript.set_defaultTypeCheck","tea/SScript.hx",1266,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_1277_set_defaultClassSupport,"tea.SScript","set_defaultClassSupport",0x15ee9c6d,"tea.SScript.set_defaultClassSupport","tea/SScript.hx",1277,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_52_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",52,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_57_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",57,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_95_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",95,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_108_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",108,0x727e4fdf)
HX_LOCAL_STACK_FRAME(_hx_pos_ffc4a688e712d40b_113_boot,"tea.SScript","boot",0x80db0d40,"tea.SScript.boot","tea/SScript.hx",113,0x727e4fdf)
namespace tea{

void SScript_obj::__construct(::String __o_scriptPath, ::Dynamic __o_preset){
            		::String scriptPath = __o_scriptPath;
            		if (::hx::IsNull(__o_scriptPath)) scriptPath = HX_("",00,00,00,00);
            		 ::Dynamic preset = __o_preset;
            		if (::hx::IsNull(__o_preset)) preset = true;
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_47_new)
HXLINE( 238)		this->parsingExceptions = ::Array_obj< ::Dynamic>::__new();
HXLINE( 208)		this->packagePath = HX_("",00,00,00,00);
HXLINE( 198)		this->debugTraces = false;
HXLINE( 193)		this->traces = false;
HXLINE( 188)		this->scriptFile = HX_("",00,00,00,00);
HXLINE( 183)		this->active = true;
HXLINE( 176)		this->script = HX_("",00,00,00,00);
HXLINE( 153)		this->notAllowedClasses = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 148)		this->lastReportedCallTime = ((Float)-1);
HXLINE( 141)		this->lastReportedTime = ((Float)-1);
HXLINE( 134)		this->classSupport = false;
HXLINE( 129)		this->typeCheck = false;
HXLINE( 250)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 250)		Float time;
HXDLIN( 250)		if ((timer > 0)) {
HXLINE( 250)			time = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 250)			time = ( (Float)(0) );
            		}
HXLINE( 253)		if (::hx::IsNull( ::tea::SScript_obj::defines )) {
HXLINE( 255)			::tea::SScript_obj::defines =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 257)			::String contents = null();
HXLINE( 258)			::String path = ::macro::Macro_obj::get_definePath();
HXLINE( 260)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 262)				contents = ::sys::io::File_obj::getContent(path);
HXLINE( 263)				::sys::FileSystem_obj::deleteFile(path);
HXLINE( 265)				{
HXLINE( 265)					int _g = 0;
HXDLIN( 265)					::Array< ::String > _g1 = contents.split(HX_("\n",0a,00,00,00));
HXDLIN( 265)					while((_g < _g1->length)){
HXLINE( 265)						::String i = _g1->__get(_g);
HXDLIN( 265)						_g = (_g + 1);
HXLINE( 267)						i = ::StringTools_obj::trim(i);
HXLINE( 269)						::String d1 = null();
HXDLIN( 269)						::String d2 = null();
HXLINE( 270)						::Array< ::String > define = i.split(HX_("|",7c,00,00,00));
HXLINE( 271)						if ((define->length == 2)) {
HXLINE( 273)							d1 = define->__get(0);
HXLINE( 274)							d2 = define->__get(1);
            						}
            						else {
HXLINE( 276)							if ((define->length == 1)) {
HXLINE( 278)								d1 = define->__get(0);
HXLINE( 279)								d2 = HX_("1",31,00,00,00);
            							}
            						}
HXLINE( 282)						if (::hx::IsNotNull( d1 )) {
HXLINE( 283)							::String v;
HXDLIN( 283)							if (::hx::IsNotNull( d2 )) {
HXLINE( 283)								v = d2;
            							}
            							else {
HXLINE( 283)								v = HX_("1",31,00,00,00);
            							}
HXDLIN( 283)							::tea::SScript_obj::defines->set(d1,v);
            						}
            					}
            				}
            			}
            			else {
HXLINE( 288)				::tea::SScript_obj::defines->set(HX_("true",4e,a7,03,4d),HX_("1",31,00,00,00));
HXLINE( 289)				::tea::SScript_obj::defines->set(HX_("haxe",26,34,08,45),HX_("1",31,00,00,00));
HXLINE( 290)				::tea::SScript_obj::defines->set(HX_("sys",0d,ad,57,00),HX_("1",31,00,00,00));
HXLINE( 293)				::tea::SScript_obj::defines->set(HX_("hscriptPos",e1,92,07,49),HX_("1",31,00,00,00));
            			}
            		}
HXLINE( 309)		if (::hx::IsNotNull( ::tea::SScript_obj::defaultTypeCheck )) {
HXLINE( 310)			this->typeCheck = ( (bool)(::tea::SScript_obj::defaultTypeCheck) );
            		}
HXLINE( 311)		if (::hx::IsNotNull( ::tea::SScript_obj::defaultClassSupport )) {
HXLINE( 312)			this->classSupport = ( (bool)(::tea::SScript_obj::defaultClassSupport) );
            		}
HXLINE( 314)		this->interp =  ::hscriptBase::Interp_obj::__alloc( HX_CTX );
HXLINE( 315)		this->interp->typecheck = this->typeCheck;
HXLINE( 316)		this->interp->script = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 318)		this->parser =  ::hscriptBase::Parser_obj::__alloc( HX_CTX );
HXLINE( 319)		this->parser->script = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 320)		this->parser->interp = this->interp;
HXLINE( 321)		this->interp->parser = this->parser;
HXLINE( 323)		if (( (bool)(preset) )) {
HXLINE( 324)			this->preset();
            		}
HXLINE( 326)		{
HXLINE( 326)			::Dynamic map = ::tea::SScript_obj::globalVariables;
HXDLIN( 326)			::Dynamic _g_map = map;
HXDLIN( 326)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 326)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 326)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 326)				 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 326)				::String _g1_key = key;
HXDLIN( 326)				::String i = _g1_key;
HXDLIN( 326)				 ::Dynamic k = _g1_value;
HXLINE( 327)				if (::hx::IsNotNull( i )) {
HXLINE( 328)					this->set(i,k);
            				}
            			}
            		}
HXLINE( 330)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 332)			this->doFile(scriptPath);
HXLINE( 333)			if (this->debugTraces) {
HXLINE( 335)				if ((this->lastReportedTime == 0)) {
HXLINE( 336)					::haxe::Log_obj::trace(HX_("SScript instance created instantly (0s)",11,34,5c,3a),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),336,HX_("tea.SScript",20,72,1d,6e),HX_("new",60,d0,53,00)));
            				}
            				else {
HXLINE( 338)					::haxe::Log_obj::trace(((HX_("SScript instance created in ",fa,89,6b,12) + this->lastReportedTime) + HX_("s",73,00,00,00)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),338,HX_("tea.SScript",20,72,1d,6e),HX_("new",60,d0,53,00)));
            				}
            			}
HXLINE( 340)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 340)			Float _hx_tmp;
HXDLIN( 340)			if ((timer > 0)) {
HXLINE( 340)				_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 340)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN( 340)			this->lastReportedTime = (_hx_tmp - time);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 345)				this->lastReportedTime = ( (Float)(-1) );
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}

Dynamic SScript_obj::__CreateEmpty() { return new SScript_obj; }

void *SScript_obj::_hx_vtable = 0;

Dynamic SScript_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SScript_obj > _hx_result = new SScript_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SScript_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f20a2ee;
}

void SScript_obj::execute(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_355_execute)
HXLINE( 356)		if (this->_destroyed) {
HXLINE( 357)			return;
            		}
HXLINE( 359)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 360)			return;
            		}
HXLINE( 362)		bool _hx_tmp;
HXDLIN( 362)		if (::hx::IsNotNull( this->interp )) {
HXLINE( 362)			_hx_tmp = !(this->active);
            		}
            		else {
HXLINE( 362)			_hx_tmp = true;
            		}
HXDLIN( 362)		if (_hx_tmp) {
HXLINE( 363)			return;
            		}
HXLINE( 365)		::String origin;
HXLINE( 366)		bool origin1;
HXDLIN( 366)		if (::hx::IsNotNull( this->customOrigin )) {
HXLINE( 366)			origin1 = (this->customOrigin.length > 0);
            		}
            		else {
HXLINE( 366)			origin1 = false;
            		}
HXDLIN( 366)		if (origin1) {
HXLINE( 365)			origin = this->customOrigin;
            		}
            		else {
HXLINE( 368)			bool origin1;
HXDLIN( 368)			if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 368)				origin1 = (this->scriptFile.length > 0);
            			}
            			else {
HXLINE( 368)				origin1 = false;
            			}
HXDLIN( 368)			if (origin1) {
HXLINE( 365)				origin = this->scriptFile;
            			}
            			else {
HXLINE( 365)				origin = HX_("SScript",be,42,6a,f7);
            			}
            		}
HXLINE( 374)		bool _hx_tmp1;
HXDLIN( 374)		if (::hx::IsNotNull( this->script )) {
HXLINE( 374)			_hx_tmp1 = (this->script.length > 0);
            		}
            		else {
HXLINE( 374)			_hx_tmp1 = false;
            		}
HXDLIN( 374)		if (_hx_tmp1) {
HXLINE( 376)			 ::Dynamic expr = this->parser->parseString(this->script,origin);
HXLINE( 377)			this->interp->execute(expr);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,execute,(void))

 ::tea::SScript SScript_obj::set(::String key, ::Dynamic obj){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tea::SScript,_gthis) HXARGC(2)
            		void _hx_run(::String key, ::Dynamic obj){
            			HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_398_set)
HXLINE( 399)			if (::hx::IsNull( key )) {
HXLINE( 400)				return;
            			}
HXLINE( 402)			if (::hscriptBase::Tools_obj::keys->contains(key)) {
HXLINE( 403)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("",00,00,00,00) + key) + HX_(" is a keyword, set something else",e5,46,d7,e6))));
            			}
            			else {
HXLINE( 404)				bool setVar;
HXDLIN( 404)				if (::hx::IsNotNull( obj )) {
HXLINE( 404)					setVar = ::macro::Macro_obj::macroClasses->contains(obj);
            				}
            				else {
HXLINE( 404)					setVar = false;
            				}
HXDLIN( 404)				if (setVar) {
HXLINE( 405)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("",00,00,00,00) + key) + HX_(" cannot be a Macro class (tried to set ",80,82,e6,c4)) + ::Type_obj::getClassName(obj)) + HX_(")",29,00,00,00))));
            				}
            			}
HXLINE( 407)			if (_gthis->classSupport) {
HXLINE( 408)				 ::Dynamic v = obj;
HXDLIN( 408)				::tea::backend::SScriptX_obj::variables->set(key,v);
            			}
HXLINE( 410)			if (::hx::IsNotNull( _gthis->scriptX )) {
HXLINE( 412)				 ::Dynamic value = obj;
HXLINE( 413)				_gthis->scriptX->set(key,value);
            			}
            			else {
HXLINE( 417)				bool setVar;
HXDLIN( 417)				if (::hx::IsNotNull( _gthis->interp )) {
HXLINE( 417)					setVar = !(_gthis->active);
            				}
            				else {
HXLINE( 417)					setVar = true;
            				}
HXDLIN( 417)				if (setVar) {
HXLINE( 419)					if (_gthis->traces) {
HXLINE( 421)						if (::hx::IsNull( _gthis->interp )) {
HXLINE( 422)							::haxe::Log_obj::trace(HX_("This script is unusable!",cd,d5,e4,32),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),422,HX_("tea.SScript",20,72,1d,6e),HX_("set",a2,9b,57,00)));
            						}
            						else {
HXLINE( 424)							::haxe::Log_obj::trace(HX_("This script is not active!",ab,75,7e,36),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),424,HX_("tea.SScript",20,72,1d,6e),HX_("set",a2,9b,57,00)));
            						}
            					}
            				}
            				else {
HXLINE( 428)					 ::Dynamic v = obj;
HXDLIN( 428)					_gthis->interp->variables->set(key,v);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_390_set)
HXDLIN( 390)		 ::tea::SScript _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 391)		if (this->_destroyed) {
HXLINE( 392)			return null();
            		}
HXLINE( 394)		bool _hx_tmp;
HXDLIN( 394)		bool _hx_tmp1;
HXDLIN( 394)		if (::hx::IsNotNull( obj )) {
HXLINE( 394)			_hx_tmp1 = ::Std_obj::isOfType(obj,::hx::ClassOf< ::hx::Class >());
            		}
            		else {
HXLINE( 394)			_hx_tmp1 = false;
            		}
HXDLIN( 394)		if (_hx_tmp1) {
HXLINE( 394)			_hx_tmp = this->notAllowedClasses->contains(obj);
            		}
            		else {
HXLINE( 394)			_hx_tmp = false;
            		}
HXDLIN( 394)		if (_hx_tmp) {
HXLINE( 395)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Tried to set ",0d,8f,18,62) + ::Type_obj::getClassName(obj)) + HX_(" which is not allowed.",46,be,51,07))));
            		}
HXLINE( 397)		 ::Dynamic setVar =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 432)		setVar(key,obj);
HXLINE( 433)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SScript_obj,set,return )

 ::tea::SScript SScript_obj::setClass(::hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_443_setClass)
HXLINE( 444)		if (this->_destroyed) {
HXLINE( 445)			return null();
            		}
HXLINE( 447)		if (::hx::IsNull( cl )) {
HXLINE( 449)			if (this->traces) {
HXLINE( 451)				::haxe::Log_obj::trace(HX_("Class cannot be null",ef,ce,40,49),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),451,HX_("tea.SScript",20,72,1d,6e),HX_("setClass",36,e1,8c,56)));
            			}
HXLINE( 454)			return null();
            		}
HXLINE( 457)		::String clName = ::Type_obj::getClassName(cl);
HXLINE( 458)		if (::hx::IsNotNull( clName )) {
HXLINE( 460)			if ((clName.split(HX_(".",2e,00,00,00))->length > 1)) {
HXLINE( 462)				clName = clName.split(HX_(".",2e,00,00,00))->__get((clName.split(HX_(".",2e,00,00,00))->length - 1));
            			}
HXLINE( 465)			this->set(clName,cl);
            		}
HXLINE( 467)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,setClass,return )

 ::tea::SScript SScript_obj::setClassString(::String cl){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_477_setClassString)
HXLINE( 478)		if (this->_destroyed) {
HXLINE( 479)			return null();
            		}
HXLINE( 481)		bool _hx_tmp;
HXDLIN( 481)		if (::hx::IsNotNull( cl )) {
HXLINE( 481)			_hx_tmp = (cl.length < 1);
            		}
            		else {
HXLINE( 481)			_hx_tmp = true;
            		}
HXDLIN( 481)		if (_hx_tmp) {
HXLINE( 483)			if (this->traces) {
HXLINE( 484)				::haxe::Log_obj::trace(HX_("Class cannot be null",ef,ce,40,49),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),484,HX_("tea.SScript",20,72,1d,6e),HX_("setClassString",a7,4a,37,30)));
            			}
HXLINE( 486)			return null();
            		}
HXLINE( 489)		::hx::Class cls = ::Type_obj::resolveClass(cl);
HXLINE( 490)		if (::hx::IsNotNull( cls )) {
HXLINE( 492)			if ((cl.split(HX_(".",2e,00,00,00))->length > 1)) {
HXLINE( 494)				cl = cl.split(HX_(".",2e,00,00,00))->__get((cl.split(HX_(".",2e,00,00,00))->length - 1));
            			}
HXLINE( 497)			this->set(cl,cls);
            		}
HXLINE( 499)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,setClassString,return )

 ::haxe::ds::StringMap SScript_obj::locals(){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_508_locals)
HXLINE( 509)		if (this->_destroyed) {
HXLINE( 510)			return null();
            		}
HXLINE( 512)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 514)			 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 515)			if (::hx::IsNotNull( this->scriptX->interpEX->locals )) {
HXLINE( 516)				 ::Dynamic i = this->scriptX->interpEX->locals->keys();
HXDLIN( 516)				while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 516)					::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 518)					 ::Dynamic v = this->scriptX->interpEX->locals->get(i1);
HXLINE( 519)					if (::hx::IsNotNull( v )) {
HXLINE( 520)						 ::Dynamic v1 =  ::Dynamic(v->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
HXDLIN( 520)						newMap->set(i1,v1);
            					}
            				}
            			}
HXLINE( 522)			return newMap;
            		}
HXLINE( 525)		 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 526)		{
HXLINE( 526)			 ::Dynamic i = this->interp->locals->keys();
HXDLIN( 526)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 526)				::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 528)				 ::Dynamic v = this->interp->locals->get(i1);
HXLINE( 529)				if (::hx::IsNotNull( v )) {
HXLINE( 530)					 ::Dynamic v1 =  ::Dynamic(v->__Field(HX_("r",72,00,00,00),::hx::paccDynamic));
HXDLIN( 530)					newMap->set(i1,v1);
            				}
            			}
            		}
HXLINE( 532)		return newMap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,locals,return )

 ::tea::SScript SScript_obj::unset(::String key){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_543_unset)
HXLINE( 544)		if (this->_destroyed) {
HXLINE( 545)			return null();
            		}
HXLINE( 547)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 549)			this->scriptX->interpEX->variables->remove(key);
HXLINE( 550)			::tea::backend::SScriptX_obj::variables->remove(key);
HXLINE( 551)			{
HXLINE( 551)				int _g = 0;
HXDLIN( 551)				::Array< ::Dynamic> _g1 = ::ex::InterpEx_obj::interps;
HXDLIN( 551)				while((_g < _g1->length)){
HXLINE( 551)					 ::ex::InterpEx i = _g1->__get(_g).StaticCast<  ::ex::InterpEx >();
HXDLIN( 551)					_g = (_g + 1);
HXLINE( 553)					bool _hx_tmp;
HXDLIN( 553)					if (::hx::IsNotNull( i->variables )) {
HXLINE( 553)						_hx_tmp = i->variables->exists(key);
            					}
            					else {
HXLINE( 553)						_hx_tmp = false;
            					}
HXDLIN( 553)					if (_hx_tmp) {
HXLINE( 554)						i->variables->remove(key);
            					}
            					else {
HXLINE( 555)						bool _hx_tmp;
HXDLIN( 555)						if (::hx::IsNotNull( i->locals )) {
HXLINE( 555)							_hx_tmp = i->locals->exists(key);
            						}
            						else {
HXLINE( 555)							_hx_tmp = false;
            						}
HXDLIN( 555)						if (_hx_tmp) {
HXLINE( 556)							i->locals->remove(key);
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 561)			bool _hx_tmp;
HXDLIN( 561)			bool _hx_tmp1;
HXDLIN( 561)			bool _hx_tmp2;
HXDLIN( 561)			if (::hx::IsNotNull( this->interp )) {
HXLINE( 561)				_hx_tmp2 = !(this->active);
            			}
            			else {
HXLINE( 561)				_hx_tmp2 = true;
            			}
HXDLIN( 561)			if (!(_hx_tmp2)) {
HXLINE( 561)				_hx_tmp1 = ::hx::IsNull( key );
            			}
            			else {
HXLINE( 561)				_hx_tmp1 = true;
            			}
HXDLIN( 561)			if (!(_hx_tmp1)) {
HXLINE( 561)				_hx_tmp = !(this->interp->variables->exists(key));
            			}
            			else {
HXLINE( 561)				_hx_tmp = true;
            			}
HXDLIN( 561)			if (_hx_tmp) {
HXLINE( 562)				return null();
            			}
HXLINE( 564)			this->interp->variables->remove(key);
            		}
HXLINE( 567)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,unset,return )

 ::Dynamic SScript_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_578_get)
HXLINE( 579)		if (this->_destroyed) {
HXLINE( 580)			return null();
            		}
HXLINE( 582)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 586)			 ::haxe::ds::StringMap l = this->locals();
HXLINE( 587)			if (l->exists(key)) {
HXLINE( 588)				return l->get(key);
            			}
            			else {
HXLINE( 589)				if (this->scriptX->interpEX->variables->exists(key)) {
HXLINE( 590)					return this->scriptX->interpEX->variables->get(key);
            				}
            				else {
HXLINE( 591)					if (::hx::IsNotNull( this->get_classes() )) {
HXLINE( 593)						{
HXLINE( 593)							::Dynamic map = this->get_classes();
HXDLIN( 593)							::Dynamic _g_map = map;
HXDLIN( 593)							 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 593)							while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 593)								::String key1 = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 593)								 ::ex::ScriptClass _g1_value = ( ( ::ex::ScriptClass)(::haxe::IMap_obj::get(_g_map,key1)) );
HXDLIN( 593)								::String _g1_key = key1;
HXDLIN( 593)								::String k = _g1_key;
HXDLIN( 593)								 ::ex::ScriptClass i = _g1_value;
HXLINE( 595)								bool _hx_tmp;
HXDLIN( 595)								bool _hx_tmp1;
HXDLIN( 595)								if (::hx::IsNotNull( i )) {
HXLINE( 595)									_hx_tmp1 = i->listFunctions()->exists(key);
            								}
            								else {
HXLINE( 595)									_hx_tmp1 = false;
            								}
HXDLIN( 595)								if (_hx_tmp1) {
HXLINE( 595)									_hx_tmp = ::hx::IsNotNull( i->listFunctions()->get(key) );
            								}
            								else {
HXLINE( 595)									_hx_tmp = false;
            								}
HXDLIN( 595)								if (_hx_tmp) {
HXLINE( 596)									return HX_("#fun",fc,43,70,17);
            								}
            							}
            						}
HXLINE( 598)						return null();
            					}
            					else {
HXLINE( 600)						if (::tea::backend::SScriptX_obj::variables->exists(key)) {
HXLINE( 601)							return ::tea::backend::SScriptX_obj::variables->get(key);
            						}
            						else {
HXLINE( 603)							return null();
            						}
            					}
            				}
            			}
            		}
HXLINE( 607)		bool _hx_tmp;
HXDLIN( 607)		if (::hx::IsNotNull( this->interp )) {
HXLINE( 607)			_hx_tmp = !(this->active);
            		}
            		else {
HXLINE( 607)			_hx_tmp = true;
            		}
HXDLIN( 607)		if (_hx_tmp) {
HXLINE( 609)			if (this->traces) {
HXLINE( 611)				if (::hx::IsNull( this->interp )) {
HXLINE( 612)					::haxe::Log_obj::trace(HX_("This script is unusable!",cd,d5,e4,32),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),612,HX_("tea.SScript",20,72,1d,6e),HX_("get",96,80,4e,00)));
            				}
            				else {
HXLINE( 614)					::haxe::Log_obj::trace(HX_("This script is not active!",ab,75,7e,36),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),614,HX_("tea.SScript",20,72,1d,6e),HX_("get",96,80,4e,00)));
            				}
            			}
HXLINE( 617)			return null();
            		}
HXLINE( 620)		 ::haxe::ds::StringMap l = this->locals();
HXLINE( 621)		if (l->exists(key)) {
HXLINE( 622)			return l->get(key);
            		}
HXLINE( 624)		if (this->exists(key)) {
HXLINE( 624)			return this->interp->variables->get(key);
            		}
            		else {
HXLINE( 624)			return null();
            		}
HXDLIN( 624)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,get,return )

 ::Dynamic SScript_obj::call(::String func,::cpp::VirtualArray args,::String className){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,caller,::Array< ::String >,pushedExceptions) HXARGC(1)
            		void _hx_run(::String e){
            			HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_665_call)
HXLINE( 666)			if (!(pushedExceptions->contains(e))) {
HXLINE( 667)				::Array< ::Dynamic> caller1 = ( (::Array< ::Dynamic>)(caller->__get(0)->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic)) );
HXDLIN( 667)				caller1->push( ::haxe::Exception_obj::__alloc( HX_CTX ,e,null(),null()));
            			}
HXLINE( 669)			pushedExceptions->push(e);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_639_call)
HXLINE( 640)		if (this->_destroyed) {
HXLINE( 641)			return null();
            		}
HXLINE( 643)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 643)		Float time;
HXDLIN( 643)		if ((timer > 0)) {
HXLINE( 643)			time = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 643)			time = ( (Float)(0) );
            		}
HXLINE( 645)		::String scriptFile;
HXDLIN( 645)		bool scriptFile1;
HXDLIN( 645)		if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 645)			scriptFile1 = (this->scriptFile.length > 0);
            		}
            		else {
HXLINE( 645)			scriptFile1 = false;
            		}
HXDLIN( 645)		if (scriptFile1) {
HXLINE( 645)			scriptFile = this->scriptFile;
            		}
            		else {
HXLINE( 645)			scriptFile = HX_("",00,00,00,00);
            		}
HXLINE( 646)		::Array< ::Dynamic> caller = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("succeeded",61,56,29,fb),false)
            			->setFixed(1,HX_("calledFunction",b5,00,41,03),func)
            			->setFixed(2,HX_("exceptions",44,35,34,1d),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(3,HX_("returnValue",a1,4c,95,3e),null())));
HXLINE( 652)		bool _hx_tmp;
HXDLIN( 652)		if (::hx::IsNotNull( scriptFile )) {
HXLINE( 652)			_hx_tmp = (scriptFile.length > 0);
            		}
            		else {
HXLINE( 652)			_hx_tmp = false;
            		}
HXDLIN( 652)		if (_hx_tmp) {
HXLINE( 653)			caller[0] =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("succeeded",61,56,29,fb),false)
            				->setFixed(1,HX_("calledFunction",b5,00,41,03),func)
            				->setFixed(2,HX_("exceptions",44,35,34,1d),::Array_obj< ::Dynamic>::__new(0))
            				->setFixed(3,HX_("returnValue",a1,4c,95,3e),null())
            				->setFixed(4,HX_("fileName",e7,5a,43,62),scriptFile));
            		}
HXLINE( 660)		if (::hx::IsNull( args )) {
HXLINE( 661)			args = ::cpp::VirtualArray_obj::__new();
            		}
HXLINE( 663)		::Array< ::String > pushedExceptions = ::Array_obj< ::String >::__new();
HXLINE( 664)		 ::Dynamic pushException =  ::Dynamic(new _hx_Closure_0(caller,pushedExceptions));
HXLINE( 671)		if (::hx::IsNull( func )) {
HXLINE( 673)			if (this->traces) {
HXLINE( 674)				::haxe::Log_obj::trace(((HX_("Function name cannot be null for ",63,f7,68,cd) + scriptFile) + HX_("!",21,00,00,00)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),674,HX_("tea.SScript",20,72,1d,6e),HX_("call",9e,18,ba,41)));
            			}
HXLINE( 676)			pushException(((HX_("Function name cannot be null for ",63,f7,68,cd) + scriptFile) + HX_("!",21,00,00,00)));
HXLINE( 677)			return caller->__get(0);
            		}
HXLINE( 679)		 ::Dynamic callX = null();
HXLINE( 680)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 682)			callX = this->scriptX->callFunction(func,null(),null());
            		}
            		else {
HXLINE( 686)			bool _hx_tmp;
HXDLIN( 686)			if (this->exists(func)) {
HXLINE( 686)				_hx_tmp = ::hx::IsPointerNotEq( ::Type_obj::_hx_typeof(this->get(func)),::ValueType_obj::TFunction_dyn() );
            			}
            			else {
HXLINE( 686)				_hx_tmp = false;
            			}
HXDLIN( 686)			if (_hx_tmp) {
HXLINE( 688)				if (this->traces) {
HXLINE( 689)					::haxe::Log_obj::trace(((HX_("",00,00,00,00) + func) + HX_(" is not a function",fa,f7,c7,36)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),689,HX_("tea.SScript",20,72,1d,6e),HX_("call",9e,18,ba,41)));
            				}
HXLINE( 691)				pushException(((HX_("",00,00,00,00) + func) + HX_(" is not a function",fa,f7,c7,36)));
            			}
            			else {
HXLINE( 694)				bool _hx_tmp;
HXDLIN( 694)				if (::hx::IsNotNull( this->interp )) {
HXLINE( 694)					_hx_tmp = !(this->exists(func));
            				}
            				else {
HXLINE( 694)					_hx_tmp = true;
            				}
HXDLIN( 694)				if (_hx_tmp) {
HXLINE( 696)					if (::hx::IsNull( this->interp )) {
HXLINE( 698)						if (this->traces) {
HXLINE( 699)							::haxe::Log_obj::trace(HX_("Interpreter is null!",4a,de,45,aa),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),699,HX_("tea.SScript",20,72,1d,6e),HX_("call",9e,18,ba,41)));
            						}
HXLINE( 701)						pushException(HX_("Interpreter is null!",4a,de,45,aa));
            					}
            					else {
HXLINE( 705)						if (this->traces) {
HXLINE( 706)							::haxe::Log_obj::trace(((((HX_("Function ",e8,e9,d5,55) + func) + HX_(" does not exist in ",de,a3,13,4c)) + scriptFile) + HX_(".",2e,00,00,00)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),706,HX_("tea.SScript",20,72,1d,6e),HX_("call",9e,18,ba,41)));
            						}
HXLINE( 708)						bool _hx_tmp;
HXDLIN( 708)						if (::hx::IsNotNull( scriptFile )) {
HXLINE( 708)							_hx_tmp = (scriptFile.length > 1);
            						}
            						else {
HXLINE( 708)							_hx_tmp = false;
            						}
HXDLIN( 708)						if (_hx_tmp) {
HXLINE( 709)							pushException(((((HX_("Function ",e8,e9,d5,55) + func) + HX_(" does not exist in ",de,a3,13,4c)) + scriptFile) + HX_(".",2e,00,00,00)));
            						}
            						else {
HXLINE( 711)							pushException(((HX_("Function ",e8,e9,d5,55) + func) + HX_(" does not exist in SScript instance.",79,fd,5b,f3)));
            						}
            					}
            				}
            				else {
HXLINE( 716)					 ::Dynamic oldCaller = caller->__get(0);
HXLINE( 717)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 719)						 ::Dynamic functionField = ::Reflect_obj::callMethod(::hx::ObjectPtr<OBJ_>(this),this->get(func),args);
HXLINE( 720)						caller[0] =  ::Dynamic(::hx::Anon_obj::Create(4)
            							->setFixed(0,HX_("succeeded",61,56,29,fb),true)
            							->setFixed(1,HX_("calledFunction",b5,00,41,03),func)
            							->setFixed(2,HX_("exceptions",44,35,34,1d), ::Dynamic(caller->__get(0)->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic)))
            							->setFixed(3,HX_("returnValue",a1,4c,95,3e),functionField));
HXLINE( 726)						bool _hx_tmp;
HXDLIN( 726)						if (::hx::IsNotNull( scriptFile )) {
HXLINE( 726)							_hx_tmp = (scriptFile.length > 0);
            						}
            						else {
HXLINE( 726)							_hx_tmp = false;
            						}
HXDLIN( 726)						if (_hx_tmp) {
HXLINE( 727)							caller[0] =  ::Dynamic(::hx::Anon_obj::Create(5)
            								->setFixed(0,HX_("succeeded",61,56,29,fb),true)
            								->setFixed(1,HX_("calledFunction",b5,00,41,03),func)
            								->setFixed(2,HX_("exceptions",44,35,34,1d), ::Dynamic(caller->__get(0)->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic)))
            								->setFixed(3,HX_("returnValue",a1,4c,95,3e),functionField)
            								->setFixed(4,HX_("fileName",e7,5a,43,62),scriptFile));
            						}
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 735)							 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 736)							{
HXLINE( 737)								caller[0] = oldCaller;
HXLINE( 738)								 ::Dynamic pushException1 = pushException;
HXDLIN( 738)								pushException1(e->details());
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            			}
            		}
HXLINE( 742)		int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 742)		Float _hx_tmp1;
HXDLIN( 742)		if ((timer1 > 0)) {
HXLINE( 742)			_hx_tmp1 = (( (Float)(timer1) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 742)			_hx_tmp1 = ( (Float)(0) );
            		}
HXDLIN( 742)		this->lastReportedCallTime = (_hx_tmp1 - time);
HXLINE( 744)		bool _hx_tmp2;
HXDLIN( 744)		if (!(( (bool)(caller->__get(0)->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) ))) {
HXLINE( 744)			if (::hx::IsNotNull( callX )) {
HXLINE( 744)				_hx_tmp2 = !(( (bool)(callX->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) ));
            			}
            			else {
HXLINE( 744)				_hx_tmp2 = true;
            			}
            		}
            		else {
HXLINE( 744)			_hx_tmp2 = false;
            		}
HXDLIN( 744)		if (_hx_tmp2) {
HXLINE( 746)			this->lastReportedCallTime = ( (Float)(-1) );
HXLINE( 747)			{
HXLINE( 747)				int _g = 0;
HXDLIN( 747)				::Array< ::Dynamic> _g1 = this->parsingExceptions;
HXDLIN( 747)				while((_g < _g1->length)){
HXLINE( 747)					 ::haxe::Exception i = _g1->__get(_g).StaticCast<  ::haxe::Exception >();
HXDLIN( 747)					_g = (_g + 1);
HXLINE( 749)					 ::Dynamic pushException1 = pushException;
HXDLIN( 749)					pushException1(i->details());
HXLINE( 751)					if (::hx::IsNotNull( callX )) {
HXLINE( 752)						::Array< ::Dynamic> callX1 = ( (::Array< ::Dynamic>)(callX->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic)) );
HXDLIN( 752)						callX1->push( ::haxe::Exception_obj::__alloc( HX_CTX ,i->details(),null(),null()));
            					}
            				}
            			}
            		}
HXLINE( 756)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 756)			return callX;
            		}
            		else {
HXLINE( 756)			return caller->__get(0);
            		}
HXDLIN( 756)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(SScript_obj,call,return )

 ::tea::SScript SScript_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_765_clear)
HXLINE( 766)		if (this->_destroyed) {
HXLINE( 767)			return null();
            		}
HXLINE( 769)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 771)			this->scriptX->interpEX->variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 772)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 775)		if (::hx::IsNull( this->interp )) {
HXLINE( 776)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 778)		::Array< ::String > importantThings = ::Array_obj< ::String >::fromData( _hx_array_data_6e1d7220_20,4);
HXLINE( 780)		{
HXLINE( 780)			 ::Dynamic i = this->interp->variables->keys();
HXDLIN( 780)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 780)				::String i1 = ( (::String)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 781)				if (!(importantThings->contains(i1))) {
HXLINE( 782)					this->interp->variables->remove(i1);
            				}
            			}
            		}
HXLINE( 784)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,clear,return )

bool SScript_obj::exists(::String key){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_793_exists)
HXLINE( 794)		if (this->_destroyed) {
HXLINE( 795)			return false;
            		}
HXLINE( 797)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 799)			bool _hx_tmp;
HXDLIN( 799)			bool _hx_tmp1;
HXDLIN( 799)			if (::hx::IsNotNull( this->scriptX->currentScriptClass )) {
HXLINE( 799)				_hx_tmp1 = ::hx::IsNotNull( this->scriptX->currentScriptClass->listFunctions() );
            			}
            			else {
HXLINE( 799)				_hx_tmp1 = false;
            			}
HXDLIN( 799)			if (_hx_tmp1) {
HXLINE( 799)				_hx_tmp = this->scriptX->currentScriptClass->listFunctions()->exists(key);
            			}
            			else {
HXLINE( 799)				_hx_tmp = false;
            			}
HXDLIN( 799)			if (_hx_tmp) {
HXLINE( 802)				return true;
            			}
HXLINE( 804)			 ::haxe::ds::StringMap l = this->locals();
HXLINE( 805)			 ::haxe::ds::StringMap v = this->scriptX->interpEX->variables;
HXLINE( 806)			bool _hx_tmp2;
HXDLIN( 806)			if (::hx::IsNotNull( l )) {
HXLINE( 806)				_hx_tmp2 = l->exists(key);
            			}
            			else {
HXLINE( 806)				_hx_tmp2 = false;
            			}
HXDLIN( 806)			if (_hx_tmp2) {
HXLINE( 806)				return true;
            			}
            			else {
HXLINE( 806)				bool _hx_tmp;
HXDLIN( 806)				if (::hx::IsNotNull( v )) {
HXLINE( 806)					_hx_tmp = v->exists(key);
            				}
            				else {
HXLINE( 806)					_hx_tmp = false;
            				}
HXDLIN( 806)				if (_hx_tmp) {
HXLINE( 806)					return true;
            				}
            				else {
HXLINE( 806)					return false;
            				}
            			}
            		}
HXLINE( 809)		if (::hx::IsNull( this->interp )) {
HXLINE( 810)			return false;
            		}
HXLINE( 811)		if (this->locals()->exists(key)) {
HXLINE( 812)			return this->locals()->exists(key);
            		}
HXLINE( 814)		return this->interp->variables->exists(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,exists,return )

void SScript_obj::preset(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_822_preset)
HXLINE( 823)		if (this->_destroyed) {
HXLINE( 824)			return;
            		}
HXLINE( 826)		this->setClass(::hx::ClassOf< ::Date >());
HXLINE( 827)		this->setClass(::hx::ClassOf< ::DateTools >());
HXLINE( 828)		this->setClass(::hx::ClassOf< ::Math >());
HXLINE( 829)		this->setClass(::hx::ClassOf< ::Std >());
HXLINE( 830)		this->setClass(::hx::ClassOf< ::tea::SScript >());
HXLINE( 831)		this->setClass(::hx::ClassOf< ::StringTools >());
HXLINE( 834)		this->setClass(::hx::ClassOf< ::sys::io::File >());
HXLINE( 835)		this->setClass(::hx::ClassOf< ::sys::FileSystem >());
HXLINE( 836)		this->setClass(::hx::ClassOf< ::Sys >());
HXLINE( 840)		this->setClass(::hx::ClassOf< ::openfl::utils::Assets >());
HXLINE( 843)		this->set(HX_("this",5e,06,fc,4c),::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,preset,(void))

void SScript_obj::doFile(::String scriptPath){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_847_doFile)
HXLINE( 848)		if (this->_destroyed) {
HXLINE( 849)			return;
            		}
HXLINE( 851)		bool _hx_tmp;
HXDLIN( 851)		bool _hx_tmp1;
HXDLIN( 851)		if (::hx::IsNotNull( scriptPath )) {
HXLINE( 851)			_hx_tmp1 = (scriptPath.length < 1);
            		}
            		else {
HXLINE( 851)			_hx_tmp1 = true;
            		}
HXDLIN( 851)		if (!(_hx_tmp1)) {
HXLINE( 851)			_hx_tmp = ::tea::SScript_obj::get_BlankReg()->match(scriptPath);
            		}
            		else {
HXLINE( 851)			_hx_tmp = true;
            		}
HXDLIN( 851)		if (_hx_tmp) {
HXLINE( 852)			return;
            		}
HXLINE( 854)		if (this->classSupport) {
HXLINE( 856)			bool _hx_tmp;
HXDLIN( 856)			if (::hx::IsNotNull( scriptPath )) {
HXLINE( 856)				_hx_tmp = (scriptPath.length > 0);
            			}
            			else {
HXLINE( 856)				_hx_tmp = false;
            			}
HXDLIN( 856)			if (_hx_tmp) {
HXLINE( 857)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 858)					this->scriptX =  ::tea::backend::SScriptX_obj::__alloc( HX_CTX ,scriptPath,::hx::ObjectPtr<OBJ_>(this));
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 859)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 860)						{
HXLINE( 861)							::Array< ::Dynamic> _hx_tmp = this->parsingExceptions;
HXDLIN( 861)							_hx_tmp->push( ::haxe::Exception_obj::__alloc( HX_CTX ,e->details(),null(),null()));
HXLINE( 862)							this->scriptX = null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
HXLINE( 866)		bool _hx_tmp2;
HXDLIN( 866)		if (::hx::IsNotNull( scriptPath )) {
HXLINE( 866)			_hx_tmp2 = (scriptPath.length > 0);
            		}
            		else {
HXLINE( 866)			_hx_tmp2 = false;
            		}
HXDLIN( 866)		if (_hx_tmp2) {
HXLINE( 870)			bool _hx_tmp;
HXDLIN( 870)			bool _hx_tmp1;
HXDLIN( 870)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 870)				_hx_tmp1 = ::openfl::utils::Assets_obj::exists(scriptPath,null());
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 870)					_hx_tmp1 = false;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXDLIN( 870)			if (!(_hx_tmp1)) {
HXLINE( 870)				_hx_tmp = ::sys::FileSystem_obj::exists(scriptPath);
            			}
            			else {
HXLINE( 870)				_hx_tmp = true;
            			}
HXDLIN( 870)			if (_hx_tmp) {
HXLINE( 875)				this->scriptFile = scriptPath;
HXLINE( 877)				::String _hx_tmp;
HXDLIN( 877)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 877)					_hx_tmp = ::openfl::utils::Assets_obj::getText(scriptPath);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 877)						_hx_tmp = null();
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN( 877)				this->script = _hx_tmp;
HXLINE( 878)				if (::hx::IsNull( this->script )) {
HXLINE( 879)					this->script = ::sys::io::File_obj::getContent(scriptPath);
            				}
            			}
            			else {
HXLINE( 886)				this->scriptFile = HX_("",00,00,00,00);
HXLINE( 887)				this->script = scriptPath;
            			}
HXLINE( 910)			if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 912)				bool _hx_tmp;
HXDLIN( 912)				if (::hx::IsNotNull( this->scriptX->scriptFile )) {
HXLINE( 912)					_hx_tmp = (this->scriptX->scriptFile.length > 0);
            				}
            				else {
HXLINE( 912)					_hx_tmp = false;
            				}
HXDLIN( 912)				if (_hx_tmp) {
HXLINE( 913)					::tea::SScript_obj::global->set(this->scriptX->scriptFile,::hx::ObjectPtr<OBJ_>(this));
            				}
            			}
            			else {
HXLINE( 915)				bool _hx_tmp;
HXDLIN( 915)				if (::hx::IsNotNull( this->scriptFile )) {
HXLINE( 915)					_hx_tmp = (this->scriptFile.length > 0);
            				}
            				else {
HXLINE( 915)					_hx_tmp = false;
            				}
HXDLIN( 915)				if (_hx_tmp) {
HXLINE( 916)					::tea::SScript_obj::global->set(this->scriptFile,::hx::ObjectPtr<OBJ_>(this));
            				}
            				else {
HXLINE( 917)					bool _hx_tmp;
HXDLIN( 917)					if (::hx::IsNotNull( this->script )) {
HXLINE( 917)						_hx_tmp = (this->script.length > 0);
            					}
            					else {
HXLINE( 917)						_hx_tmp = false;
            					}
HXDLIN( 917)					if (_hx_tmp) {
HXLINE( 918)						::tea::SScript_obj::global->set(this->script,::hx::ObjectPtr<OBJ_>(this));
            					}
            				}
            			}
HXLINE( 920)			this->execute();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,doFile,(void))

 ::tea::SScript SScript_obj::doString(::String string,::String origin){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_937_doString)
HXLINE( 938)		if (this->_destroyed) {
HXLINE( 939)			return null();
            		}
HXLINE( 941)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 941)		Float time;
HXDLIN( 941)		if ((timer > 0)) {
HXLINE( 941)			time = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 941)			time = ( (Float)(0) );
            		}
HXLINE( 942)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 945)			::String og = origin;
HXLINE( 946)			bool _hx_tmp;
HXDLIN( 946)			if (::hx::IsNotNull( og )) {
HXLINE( 946)				_hx_tmp = (og.length > 0);
            			}
            			else {
HXLINE( 946)				_hx_tmp = false;
            			}
HXDLIN( 946)			if (_hx_tmp) {
HXLINE( 947)				this->set_customOrigin(og);
            			}
HXLINE( 948)			bool _hx_tmp1;
HXDLIN( 948)			if (::hx::IsNotNull( og )) {
HXLINE( 948)				_hx_tmp1 = (og.length < 1);
            			}
            			else {
HXLINE( 948)				_hx_tmp1 = true;
            			}
HXDLIN( 948)			if (_hx_tmp1) {
HXLINE( 949)				og = this->customOrigin;
            			}
HXLINE( 950)			bool _hx_tmp2;
HXDLIN( 950)			if (::hx::IsNotNull( og )) {
HXLINE( 950)				_hx_tmp2 = (og.length < 1);
            			}
            			else {
HXLINE( 950)				_hx_tmp2 = true;
            			}
HXDLIN( 950)			if (_hx_tmp2) {
HXLINE( 951)				og = HX_("SScript",be,42,6a,f7);
            			}
HXLINE( 953)			bool _hx_tmp3;
HXDLIN( 953)			bool _hx_tmp4;
HXDLIN( 953)			if (::hx::IsNotNull( string )) {
HXLINE( 953)				_hx_tmp4 = (string.length < 1);
            			}
            			else {
HXLINE( 953)				_hx_tmp4 = true;
            			}
HXDLIN( 953)			if (!(_hx_tmp4)) {
HXLINE( 953)				_hx_tmp3 = ::tea::SScript_obj::get_BlankReg()->match(string);
            			}
            			else {
HXLINE( 953)				_hx_tmp3 = true;
            			}
HXDLIN( 953)			if (_hx_tmp3) {
HXLINE( 954)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
            			else {
HXLINE( 956)				bool _hx_tmp;
HXDLIN( 956)				bool _hx_tmp1;
HXDLIN( 956)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 956)					_hx_tmp1 = ::openfl::utils::Assets_obj::exists(string,null());
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 956)						_hx_tmp1 = false;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXDLIN( 956)				if (!(_hx_tmp1)) {
HXLINE( 956)					_hx_tmp = ::sys::FileSystem_obj::exists(string);
            				}
            				else {
HXLINE( 956)					_hx_tmp = true;
            				}
HXDLIN( 956)				if (_hx_tmp) {
HXLINE( 959)					og = (HX_("",00,00,00,00) + string);
HXLINE( 961)					this->scriptFile = string;
HXLINE( 962)					string = ::sys::io::File_obj::getContent(string);
            				}
            			}
HXLINE( 974)			if (::hx::IsNotNull( this->scriptX )) {
HXLINE( 976)				::tea::SScript_obj::global->set(string,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 978)				this->scriptX->doString(string,og);
HXLINE( 979)				return ::hx::ObjectPtr<OBJ_>(this);
            			}
HXLINE( 981)			bool _hx_tmp5;
HXDLIN( 981)			if (this->active) {
HXLINE( 981)				_hx_tmp5 = ::hx::IsNull( this->interp );
            			}
            			else {
HXLINE( 981)				_hx_tmp5 = true;
            			}
HXDLIN( 981)			if (_hx_tmp5) {
HXLINE( 982)				return null();
            			}
HXLINE( 984)			if (::hx::IsNull( this->scriptX )) {
HXLINE( 986)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 988)					this->script = string;
HXLINE( 990)					bool _hx_tmp;
HXDLIN( 990)					if (::hx::IsNotNull( this->script )) {
HXLINE( 990)						_hx_tmp = (this->script.length > 0);
            					}
            					else {
HXLINE( 990)						_hx_tmp = false;
            					}
HXDLIN( 990)					if (_hx_tmp) {
HXLINE( 991)						::tea::SScript_obj::global->set(this->script,::hx::ObjectPtr<OBJ_>(this));
            					}
HXLINE( 993)					 ::Dynamic expr = this->parser->parseString(this->script,og);
HXLINE( 994)					this->interp->execute(expr);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE( 996)						 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE( 997)						{
HXLINE( 998)							this->script = HX_("",00,00,00,00);
HXLINE( 999)							::Array< ::Dynamic> _hx_tmp = this->parsingExceptions;
HXDLIN( 999)							_hx_tmp->push( ::haxe::Exception_obj::__alloc( HX_CTX ,e->details(),null(),null()));
HXLINE(1001)							if (this->classSupport) {
HXLINE(1003)								try {
            									HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1004)									this->scriptX =  ::tea::backend::SScriptX_obj::__alloc( HX_CTX ,string,::hx::ObjectPtr<OBJ_>(this));
            								} catch( ::Dynamic _hx_e) {
            									if (_hx_e.IsClass<  ::Dynamic >() ){
            										HX_STACK_BEGIN_CATCH
            										 ::Dynamic _g = _hx_e;
HXLINE(1007)										this->scriptX = null();
            									}
            									else {
            										HX_STACK_DO_THROW(_hx_e);
            									}
            								}
            							}
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
HXLINE(1013)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(1013)			Float _hx_tmp6;
HXDLIN(1013)			if ((timer > 0)) {
HXLINE(1013)				_hx_tmp6 = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(1013)				_hx_tmp6 = ( (Float)(0) );
            			}
HXDLIN(1013)			this->lastReportedTime = (_hx_tmp6 - time);
HXLINE(1015)			if (this->debugTraces) {
HXLINE(1017)				if ((this->lastReportedTime == 0)) {
HXLINE(1018)					::haxe::Log_obj::trace(HX_("SScript instance created instantly (0s)",11,34,5c,3a),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),1018,HX_("tea.SScript",20,72,1d,6e),HX_("doString",bc,ae,47,a5)));
            				}
            				else {
HXLINE(1020)					::haxe::Log_obj::trace(((HX_("SScript instance created in ",fa,89,6b,12) + this->lastReportedTime) + HX_("s",73,00,00,00)),::hx::SourceInfo(HX_("tea/SScript.hx",df,4f,7e,72),1020,HX_("tea.SScript",20,72,1d,6e),HX_("doString",bc,ae,47,a5)));
            				}
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(1023)				this->lastReportedTime = ( (Float)(-1) );
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(1025)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SScript_obj,doString,return )

::String SScript_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1029_toString)
HXLINE(1030)		if (this->_destroyed) {
HXLINE(1031)			return HX_("null",87,9e,0e,49);
            		}
HXLINE(1033)		bool _hx_tmp;
HXDLIN(1033)		if (::hx::IsNotNull( this->scriptFile )) {
HXLINE(1033)			_hx_tmp = (this->scriptFile.length > 0);
            		}
            		else {
HXLINE(1033)			_hx_tmp = false;
            		}
HXDLIN(1033)		if (_hx_tmp) {
HXLINE(1034)			return this->scriptFile;
            		}
HXLINE(1036)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1036)			return HX_("[SScriptX SScriptX]",98,a2,25,6d);
            		}
            		else {
HXLINE(1036)			return HX_("[SScript SScript]",dc,5f,eb,25);
            		}
HXDLIN(1036)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,toString,return )

void SScript_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1142_destroy)
HXLINE(1143)		if (::tea::SScript_obj::global->exists(this->script)) {
HXLINE(1144)			::tea::SScript_obj::global->remove(this->script);
            		}
HXLINE(1145)		if (::tea::SScript_obj::global->exists(this->scriptFile)) {
HXLINE(1146)			::tea::SScript_obj::global->remove(this->scriptFile);
            		}
HXLINE(1148)		if (this->classSupport) {
HXLINE(1149)			::Dynamic map = this->interp->variables;
HXDLIN(1149)			::Dynamic _g_map = map;
HXDLIN(1149)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN(1149)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1149)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(1149)				 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN(1149)				::String _g1_key = key;
HXDLIN(1149)				::String i = _g1_key;
HXDLIN(1149)				 ::Dynamic k = _g1_value;
HXLINE(1150)				if (::tea::backend::SScriptX_obj::variables->exists(i)) {
HXLINE(1151)					::tea::backend::SScriptX_obj::variables->remove(i);
            				}
            			}
            		}
HXLINE(1153)		this->interp->variables->clear();
HXLINE(1154)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1155)			this->scriptX->interpEX->variables->clear();
            		}
HXLINE(1157)		this->parser = null();
HXLINE(1158)		this->interp = null();
HXLINE(1159)		this->scriptX = null();
HXLINE(1160)		this->script = null();
HXLINE(1161)		this->scriptFile = null();
HXLINE(1162)		this->active = false;
HXLINE(1163)		this->notAllowedClasses = null();
HXLINE(1164)		this->lastReportedCallTime = ( (Float)(-1) );
HXLINE(1165)		this->lastReportedTime = ( (Float)(-1) );
HXLINE(1166)		this->_destroyed = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,destroy,(void))

 ::haxe::ds::StringMap SScript_obj::get_variables(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1170_get_variables)
HXLINE(1171)		if (this->_destroyed) {
HXLINE(1172)			return null();
            		}
HXLINE(1174)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1174)			return this->scriptX->interpEX->variables;
            		}
            		else {
HXLINE(1174)			return this->interp->variables;
            		}
HXDLIN(1174)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_variables,return )

::String SScript_obj::setPackagePath(::String p){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1178_setPackagePath)
HXLINE(1179)		if (this->_destroyed) {
HXLINE(1180)			return null();
            		}
HXLINE(1182)		return (this->packagePath = p);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,setPackagePath,return )

::String SScript_obj::get_packagePath(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1186_get_packagePath)
HXLINE(1187)		if (this->_destroyed) {
HXLINE(1188)			return null();
            		}
HXLINE(1190)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1190)			return this->scriptX->interpEX->pkg;
            		}
            		else {
HXLINE(1190)			return this->packagePath;
            		}
HXDLIN(1190)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_packagePath,return )

 ::haxe::ds::StringMap SScript_obj::get_classes(){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1194_get_classes)
HXLINE(1195)		if (this->_destroyed) {
HXLINE(1196)			return null();
            		}
HXLINE(1198)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1200)			 ::haxe::ds::StringMap newMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(1201)			{
HXLINE(1201)				 ::Dynamic access = this->scriptX->classes;
HXDLIN(1201)				 ::Dynamic _g_access = access;
HXDLIN(1201)				::Array< ::String > _g_keys = ::Reflect_obj::fields(access);
HXDLIN(1201)				int _g_index = 0;
HXDLIN(1201)				while((_g_index < _g_keys->length)){
HXLINE(1201)					_g_index = (_g_index + 1);
HXDLIN(1201)					::String key = _g_keys->__get((_g_index - 1));
HXDLIN(1201)					 ::ex::ScriptClass _g1_value = ( ( ::ex::ScriptClass)(::Reflect_obj::field(_g_access,key)) );
HXDLIN(1201)					::String _g1_key = key;
HXDLIN(1201)					::String i = _g1_key;
HXDLIN(1201)					 ::ex::ScriptClass k = _g1_value;
HXLINE(1202)					bool _hx_tmp;
HXDLIN(1202)					if (::hx::IsNotNull( i )) {
HXLINE(1202)						_hx_tmp = ::hx::IsNotNull( k );
            					}
            					else {
HXLINE(1202)						_hx_tmp = false;
            					}
HXDLIN(1202)					if (_hx_tmp) {
HXLINE(1203)						newMap->set(i,k);
            					}
            				}
            			}
HXLINE(1204)			return newMap;
            		}
            		else {
HXLINE(1206)			return  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(1198)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_classes,return )

 ::ex::ScriptClass SScript_obj::get_currentScriptClass(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1210_get_currentScriptClass)
HXLINE(1211)		if (this->_destroyed) {
HXLINE(1212)			return null();
            		}
HXLINE(1214)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1214)			return this->scriptX->currentScriptClass;
            		}
            		else {
HXLINE(1214)			return null();
            		}
HXDLIN(1214)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_currentScriptClass,return )

::hx::Class SScript_obj::get_currentSuperClass(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1218_get_currentSuperClass)
HXLINE(1219)		if (this->_destroyed) {
HXLINE(1220)			return null();
            		}
HXLINE(1222)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1222)			return this->scriptX->get_currentSuperClass();
            		}
            		else {
HXLINE(1222)			return null();
            		}
HXDLIN(1222)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_currentSuperClass,return )

::String SScript_obj::set_currentClass(::String value){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1226_set_currentClass)
HXLINE(1227)		if (this->_destroyed) {
HXLINE(1228)			return null();
            		}
HXLINE(1230)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1230)			 ::tea::backend::SScriptX _this = this->scriptX;
HXDLIN(1230)			if (::hx::IsNull( value )) {
HXLINE(1230)				_this->currentScriptClass = null();
            			}
            			else {
HXLINE(1230)				bool _hx_tmp;
HXDLIN(1230)				if (::hx::IsNotNull( _this->classes )) {
HXLINE(1230)					_hx_tmp = ::hx::IsNotNull( ( ( ::ex::ScriptClass)(::Reflect_obj::field(_this->classes,value)) ) );
            				}
            				else {
HXLINE(1230)					_hx_tmp = false;
            				}
HXDLIN(1230)				if (_hx_tmp) {
HXLINE(1230)					_this->currentScriptClass = ( ( ::ex::ScriptClass)(::Reflect_obj::field(_this->classes,value)) );
            				}
            				else {
HXLINE(1230)					_this->currentScriptClass = null();
            				}
            			}
HXDLIN(1230)			return (_this->currentClass = value);
            		}
            		else {
HXLINE(1230)			return null();
            		}
HXDLIN(1230)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,set_currentClass,return )

::String SScript_obj::get_currentClass(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1234_get_currentClass)
HXLINE(1235)		if (this->_destroyed) {
HXLINE(1236)			return null();
            		}
HXLINE(1238)		if (::hx::IsNotNull( this->scriptX )) {
HXLINE(1238)			return this->scriptX->currentClass;
            		}
            		else {
HXLINE(1238)			return null();
            		}
HXDLIN(1238)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_currentClass,return )

bool SScript_obj::get_exMode(){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1242_get_exMode)
HXLINE(1243)		if (this->_destroyed) {
HXLINE(1244)			return false;
            		}
HXLINE(1246)		return ::hx::IsNotNull( this->scriptX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_exMode,return )

::String SScript_obj::set_customOrigin(::String value){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1256_set_customOrigin)
HXLINE(1257)		if (this->_destroyed) {
HXLINE(1258)			return null();
            		}
HXLINE(1260)		this->parser->origin = value;
HXLINE(1261)		return (this->customOrigin = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,set_customOrigin,return )

 ::Dynamic SScript_obj::defaultTypeCheck;

 ::Dynamic SScript_obj::defaultClassSupport;

 ::haxe::ds::StringMap SScript_obj::superClassInstances;

 ::haxe::ds::StringMap SScript_obj::globalVariables;

 ::haxe::ds::StringMap SScript_obj::global;

 ::haxe::ds::StringMap SScript_obj::defines;

::Array< ::Dynamic> SScript_obj::listScripts(::String path,::Array< ::String > extensions){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1061_listScripts)
HXLINE(1062)		if (!(::StringTools_obj::endsWith(path,HX_("/",2f,00,00,00)))) {
HXLINE(1063)			path = (path + HX_("/",2f,00,00,00));
            		}
HXLINE(1065)		bool _hx_tmp;
HXDLIN(1065)		if (::hx::IsNotNull( extensions )) {
HXLINE(1065)			_hx_tmp = (extensions->length < 1);
            		}
            		else {
HXLINE(1065)			_hx_tmp = true;
            		}
HXDLIN(1065)		if (_hx_tmp) {
HXLINE(1066)			extensions = ::Array_obj< ::String >::fromData( _hx_array_data_6e1d7220_42,1);
            		}
HXLINE(1068)		::Array< ::Dynamic> list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1070)		bool _hx_tmp1;
HXDLIN(1070)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(1070)			_hx_tmp1 = ::sys::FileSystem_obj::isDirectory(path);
            		}
            		else {
HXLINE(1070)			_hx_tmp1 = false;
            		}
HXDLIN(1070)		if (_hx_tmp1) {
HXLINE(1072)			::Array< ::String > files = ::sys::FileSystem_obj::readDirectory(path);
HXLINE(1073)			{
HXLINE(1073)				int _g = 0;
HXDLIN(1073)				while((_g < files->length)){
HXLINE(1073)					::String i = files->__get(_g);
HXDLIN(1073)					_g = (_g + 1);
HXLINE(1075)					bool hasExtension = false;
HXLINE(1076)					{
HXLINE(1076)						int _g1 = 0;
HXDLIN(1076)						while((_g1 < extensions->length)){
HXLINE(1076)							::String l = extensions->__get(_g1);
HXDLIN(1076)							_g1 = (_g1 + 1);
HXLINE(1078)							if (::StringTools_obj::endsWith(i,l)) {
HXLINE(1080)								hasExtension = true;
HXLINE(1081)								goto _hx_goto_40;
            							}
            						}
            						_hx_goto_40:;
            					}
HXLINE(1084)					bool _hx_tmp;
HXDLIN(1084)					if (hasExtension) {
HXLINE(1084)						_hx_tmp = ::sys::FileSystem_obj::exists((path + i));
            					}
            					else {
HXLINE(1084)						_hx_tmp = false;
            					}
HXDLIN(1084)					if (_hx_tmp) {
HXLINE(1085)						list->push( ::tea::SScript_obj::__alloc( HX_CTX ,(path + i),null()));
            					}
            				}
            			}
            		}
HXLINE(1133)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SScript_obj,listScripts,return )

 ::EReg SScript_obj::get_BlankReg(){
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1251_get_BlankReg)
HXDLIN(1251)		return  ::EReg_obj::__alloc( HX_CTX ,HX_("^[\n\r\t]$",30,29,fc,71),HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SScript_obj,get_BlankReg,return )

 ::Dynamic SScript_obj::set_defaultTypeCheck( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1266_set_defaultTypeCheck)
HXLINE(1267)		{
HXLINE(1267)			 ::Dynamic i = ::tea::SScript_obj::global->iterator();
HXDLIN(1267)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1267)				 ::tea::SScript i1 = ( ( ::tea::SScript)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1269)				bool _hx_tmp;
HXDLIN(1269)				if (::hx::IsNull( value )) {
HXLINE(1269)					_hx_tmp = false;
            				}
            				else {
HXLINE(1269)					_hx_tmp = ( (bool)(value) );
            				}
HXDLIN(1269)				i1->typeCheck = _hx_tmp;
HXLINE(1270)				i1->execute();
            			}
            		}
HXLINE(1273)		return (::tea::SScript_obj::defaultTypeCheck = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,set_defaultTypeCheck,return )

 ::Dynamic SScript_obj::set_defaultClassSupport( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_1277_set_defaultClassSupport)
HXLINE(1278)		{
HXLINE(1278)			 ::Dynamic i = ::tea::SScript_obj::global->iterator();
HXDLIN(1278)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(1278)				 ::tea::SScript i1 = ( ( ::tea::SScript)(i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(1280)				bool _hx_tmp;
HXDLIN(1280)				if (::hx::IsNull( value )) {
HXLINE(1280)					_hx_tmp = false;
            				}
            				else {
HXLINE(1280)					_hx_tmp = ( (bool)(value) );
            				}
HXDLIN(1280)				i1->classSupport = _hx_tmp;
HXLINE(1281)				i1->execute();
            			}
            		}
HXLINE(1284)		return (::tea::SScript_obj::defaultClassSupport = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SScript_obj,set_defaultClassSupport,return )


::hx::ObjectPtr< SScript_obj > SScript_obj::__new(::String __o_scriptPath, ::Dynamic __o_preset) {
	::hx::ObjectPtr< SScript_obj > __this = new SScript_obj();
	__this->__construct(__o_scriptPath,__o_preset);
	return __this;
}

::hx::ObjectPtr< SScript_obj > SScript_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_scriptPath, ::Dynamic __o_preset) {
	SScript_obj *__this = (SScript_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SScript_obj), true, "tea.SScript"));
	*(void **)__this = SScript_obj::_hx_vtable;
	__this->__construct(__o_scriptPath,__o_preset);
	return __this;
}

SScript_obj::SScript_obj()
{
}

void SScript_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SScript);
	HX_MARK_MEMBER_NAME(customOrigin,"customOrigin");
	HX_MARK_MEMBER_NAME(typeCheck,"typeCheck");
	HX_MARK_MEMBER_NAME(classSupport,"classSupport");
	HX_MARK_MEMBER_NAME(lastReportedTime,"lastReportedTime");
	HX_MARK_MEMBER_NAME(lastReportedCallTime,"lastReportedCallTime");
	HX_MARK_MEMBER_NAME(notAllowedClasses,"notAllowedClasses");
	HX_MARK_MEMBER_NAME(interp,"interp");
	HX_MARK_MEMBER_NAME(parser,"parser");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(scriptFile,"scriptFile");
	HX_MARK_MEMBER_NAME(traces,"traces");
	HX_MARK_MEMBER_NAME(debugTraces,"debugTraces");
	HX_MARK_MEMBER_NAME(packagePath,"packagePath");
	HX_MARK_MEMBER_NAME(parsingExceptions,"parsingExceptions");
	HX_MARK_MEMBER_NAME(scriptX,"scriptX");
	HX_MARK_MEMBER_NAME(_destroyed,"_destroyed");
	HX_MARK_END_CLASS();
}

void SScript_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(customOrigin,"customOrigin");
	HX_VISIT_MEMBER_NAME(typeCheck,"typeCheck");
	HX_VISIT_MEMBER_NAME(classSupport,"classSupport");
	HX_VISIT_MEMBER_NAME(lastReportedTime,"lastReportedTime");
	HX_VISIT_MEMBER_NAME(lastReportedCallTime,"lastReportedCallTime");
	HX_VISIT_MEMBER_NAME(notAllowedClasses,"notAllowedClasses");
	HX_VISIT_MEMBER_NAME(interp,"interp");
	HX_VISIT_MEMBER_NAME(parser,"parser");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(scriptFile,"scriptFile");
	HX_VISIT_MEMBER_NAME(traces,"traces");
	HX_VISIT_MEMBER_NAME(debugTraces,"debugTraces");
	HX_VISIT_MEMBER_NAME(packagePath,"packagePath");
	HX_VISIT_MEMBER_NAME(parsingExceptions,"parsingExceptions");
	HX_VISIT_MEMBER_NAME(scriptX,"scriptX");
	HX_VISIT_MEMBER_NAME(_destroyed,"_destroyed");
}

::hx::Val SScript_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unset") ) { return ::hx::Val( unset_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { return ::hx::Val( interp ); }
		if (HX_FIELD_EQ(inName,"parser") ) { return ::hx::Val( parser ); }
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"traces") ) { return ::hx::Val( traces ); }
		if (HX_FIELD_EQ(inName,"exMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_exMode() ); }
		if (HX_FIELD_EQ(inName,"locals") ) { return ::hx::Val( locals_dyn() ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"preset") ) { return ::hx::Val( preset_dyn() ); }
		if (HX_FIELD_EQ(inName,"doFile") ) { return ::hx::Val( doFile_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_classes() ); }
		if (HX_FIELD_EQ(inName,"scriptX") ) { return ::hx::Val( scriptX ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setClass") ) { return ::hx::Val( setClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"doString") ) { return ::hx::Val( doString_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeCheck") ) { return ::hx::Val( typeCheck ); }
		if (HX_FIELD_EQ(inName,"variables") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_variables() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptFile") ) { return ::hx::Val( scriptFile ); }
		if (HX_FIELD_EQ(inName,"_destroyed") ) { return ::hx::Val( _destroyed ); }
		if (HX_FIELD_EQ(inName,"get_exMode") ) { return ::hx::Val( get_exMode_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"debugTraces") ) { return ::hx::Val( debugTraces ); }
		if (HX_FIELD_EQ(inName,"packagePath") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_packagePath() : packagePath ); }
		if (HX_FIELD_EQ(inName,"get_classes") ) { return ::hx::Val( get_classes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"customOrigin") ) { return ::hx::Val( customOrigin ); }
		if (HX_FIELD_EQ(inName,"classSupport") ) { return ::hx::Val( classSupport ); }
		if (HX_FIELD_EQ(inName,"currentClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentClass() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_variables") ) { return ::hx::Val( get_variables_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setClassString") ) { return ::hx::Val( setClassString_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPackagePath") ) { return ::hx::Val( setPackagePath_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_packagePath") ) { return ::hx::Val( get_packagePath_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastReportedTime") ) { return ::hx::Val( lastReportedTime ); }
		if (HX_FIELD_EQ(inName,"set_currentClass") ) { return ::hx::Val( set_currentClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_currentClass") ) { return ::hx::Val( get_currentClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_customOrigin") ) { return ::hx::Val( set_customOrigin_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"notAllowedClasses") ) { return ::hx::Val( notAllowedClasses ); }
		if (HX_FIELD_EQ(inName,"currentSuperClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentSuperClass() ); }
		if (HX_FIELD_EQ(inName,"parsingExceptions") ) { return ::hx::Val( parsingExceptions ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentScriptClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_currentScriptClass() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lastReportedCallTime") ) { return ::hx::Val( lastReportedCallTime ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentSuperClass") ) { return ::hx::Val( get_currentSuperClass_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_currentScriptClass") ) { return ::hx::Val( get_currentScriptClass_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SScript_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { outValue = ( global ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"defines") ) { outValue = ( defines ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"BlankReg") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_BlankReg() ); return true; } }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listScripts") ) { outValue = listScripts_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_BlankReg") ) { outValue = get_BlankReg_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalVariables") ) { outValue = ( globalVariables ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultTypeCheck") ) { outValue = ( defaultTypeCheck ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultClassSupport") ) { outValue = ( defaultClassSupport ); return true; }
		if (HX_FIELD_EQ(inName,"superClassInstances") ) { outValue = ( superClassInstances ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_defaultTypeCheck") ) { outValue = set_defaultTypeCheck_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_defaultClassSupport") ) { outValue = set_defaultClassSupport_dyn(); return true; }
	}
	return false;
}

::hx::Val SScript_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { interp=inValue.Cast<  ::hscriptBase::Interp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parser") ) { parser=inValue.Cast<  ::hscriptBase::Parser >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"traces") ) { traces=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scriptX") ) { scriptX=inValue.Cast<  ::tea::backend::SScriptX >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"typeCheck") ) { typeCheck=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scriptFile") ) { scriptFile=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_destroyed") ) { _destroyed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"debugTraces") ) { debugTraces=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"packagePath") ) { packagePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"customOrigin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customOrigin(inValue.Cast< ::String >()) );customOrigin=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classSupport") ) { classSupport=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentClass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_currentClass(inValue.Cast< ::String >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastReportedTime") ) { lastReportedTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"notAllowedClasses") ) { notAllowedClasses=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parsingExceptions") ) { parsingExceptions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lastReportedCallTime") ) { lastReportedCallTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SScript_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"defines") ) { defines=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"globalVariables") ) { globalVariables=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultTypeCheck") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_defaultTypeCheck(ioValue.Cast<  ::Dynamic >()) ); else defaultTypeCheck=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultClassSupport") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_defaultClassSupport(ioValue.Cast<  ::Dynamic >()) ); else defaultClassSupport=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"superClassInstances") ) { superClassInstances=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void SScript_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("customOrigin",77,70,9e,4a));
	outFields->push(HX_("typeCheck",ae,f3,8e,0a));
	outFields->push(HX_("classSupport",b7,b2,a3,25));
	outFields->push(HX_("lastReportedTime",36,a7,34,87));
	outFields->push(HX_("lastReportedCallTime",74,db,fa,f3));
	outFields->push(HX_("notAllowedClasses",d1,82,87,c7));
	outFields->push(HX_("variables",b7,e2,62,82));
	outFields->push(HX_("interp",d4,79,86,9e));
	outFields->push(HX_("parser",df,9c,88,ed));
	outFields->push(HX_("script",0b,4e,60,47));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("scriptFile",27,aa,9c,3c));
	outFields->push(HX_("traces",4e,26,7d,45));
	outFields->push(HX_("debugTraces",01,ed,ef,4d));
	outFields->push(HX_("exMode",76,0d,5b,ad));
	outFields->push(HX_("packagePath",4b,78,ff,05));
	outFields->push(HX_("classes",a6,4e,91,69));
	outFields->push(HX_("currentClass",3f,5d,64,8f));
	outFields->push(HX_("currentScriptClass",74,b6,d3,8b));
	outFields->push(HX_("currentSuperClass",56,2a,3d,7f));
	outFields->push(HX_("parsingExceptions",94,01,6c,59));
	outFields->push(HX_("scriptX",ed,fb,e3,2c));
	outFields->push(HX_("_destroyed",9a,b3,c9,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SScript_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SScript_obj,customOrigin),HX_("customOrigin",77,70,9e,4a)},
	{::hx::fsBool,(int)offsetof(SScript_obj,typeCheck),HX_("typeCheck",ae,f3,8e,0a)},
	{::hx::fsBool,(int)offsetof(SScript_obj,classSupport),HX_("classSupport",b7,b2,a3,25)},
	{::hx::fsFloat,(int)offsetof(SScript_obj,lastReportedTime),HX_("lastReportedTime",36,a7,34,87)},
	{::hx::fsFloat,(int)offsetof(SScript_obj,lastReportedCallTime),HX_("lastReportedCallTime",74,db,fa,f3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SScript_obj,notAllowedClasses),HX_("notAllowedClasses",d1,82,87,c7)},
	{::hx::fsObject /*  ::hscriptBase::Interp */ ,(int)offsetof(SScript_obj,interp),HX_("interp",d4,79,86,9e)},
	{::hx::fsObject /*  ::hscriptBase::Parser */ ,(int)offsetof(SScript_obj,parser),HX_("parser",df,9c,88,ed)},
	{::hx::fsString,(int)offsetof(SScript_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsBool,(int)offsetof(SScript_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsString,(int)offsetof(SScript_obj,scriptFile),HX_("scriptFile",27,aa,9c,3c)},
	{::hx::fsBool,(int)offsetof(SScript_obj,traces),HX_("traces",4e,26,7d,45)},
	{::hx::fsBool,(int)offsetof(SScript_obj,debugTraces),HX_("debugTraces",01,ed,ef,4d)},
	{::hx::fsString,(int)offsetof(SScript_obj,packagePath),HX_("packagePath",4b,78,ff,05)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SScript_obj,parsingExceptions),HX_("parsingExceptions",94,01,6c,59)},
	{::hx::fsObject /*  ::tea::backend::SScriptX */ ,(int)offsetof(SScript_obj,scriptX),HX_("scriptX",ed,fb,e3,2c)},
	{::hx::fsBool,(int)offsetof(SScript_obj,_destroyed),HX_("_destroyed",9a,b3,c9,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SScript_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SScript_obj::defaultTypeCheck,HX_("defaultTypeCheck",ad,5a,87,cd)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SScript_obj::defaultClassSupport,HX_("defaultClassSupport",18,75,fc,a1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScript_obj::superClassInstances,HX_("superClassInstances",c1,3a,ab,61)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScript_obj::globalVariables,HX_("globalVariables",d4,cc,01,94)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScript_obj::global,HX_("global",63,31,b2,a7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &SScript_obj::defines,HX_("defines",d8,37,08,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SScript_obj_sMemberFields[] = {
	HX_("customOrigin",77,70,9e,4a),
	HX_("typeCheck",ae,f3,8e,0a),
	HX_("classSupport",b7,b2,a3,25),
	HX_("lastReportedTime",36,a7,34,87),
	HX_("lastReportedCallTime",74,db,fa,f3),
	HX_("notAllowedClasses",d1,82,87,c7),
	HX_("interp",d4,79,86,9e),
	HX_("parser",df,9c,88,ed),
	HX_("script",0b,4e,60,47),
	HX_("active",c6,41,46,16),
	HX_("scriptFile",27,aa,9c,3c),
	HX_("traces",4e,26,7d,45),
	HX_("debugTraces",01,ed,ef,4d),
	HX_("packagePath",4b,78,ff,05),
	HX_("parsingExceptions",94,01,6c,59),
	HX_("scriptX",ed,fb,e3,2c),
	HX_("_destroyed",9a,b3,c9,4f),
	HX_("execute",35,0a,0d,cc),
	HX_("set",a2,9b,57,00),
	HX_("setClass",36,e1,8c,56),
	HX_("setClassString",a7,4a,37,30),
	HX_("locals",a8,74,bf,59),
	HX_("unset",e9,f2,ee,a6),
	HX_("get",96,80,4e,00),
	HX_("call",9e,18,ba,41),
	HX_("clear",8d,71,5b,48),
	HX_("exists",dc,1d,e0,bf),
	HX_("preset",5f,b3,c0,ae),
	HX_("doFile",a7,73,bf,13),
	HX_("doString",bc,ae,47,a5),
	HX_("toString",ac,d0,6e,38),
	HX_("destroy",fa,2c,86,24),
	HX_("get_variables",8e,b6,c6,43),
	HX_("setPackagePath",c9,b3,bd,ad),
	HX_("get_packagePath",e2,2f,e1,c6),
	HX_("get_classes",bd,ae,8b,ef),
	HX_("get_currentScriptClass",bd,2f,68,e5),
	HX_("get_currentSuperClass",2d,2d,eb,fd),
	HX_("set_currentClass",3c,37,45,ea),
	HX_("get_currentClass",c8,49,03,94),
	HX_("get_exMode",3f,7d,e2,9d),
	HX_("set_customOrigin",74,4a,7f,a5),
	::String(null()) };

static void SScript_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SScript_obj::defaultTypeCheck,"defaultTypeCheck");
	HX_MARK_MEMBER_NAME(SScript_obj::defaultClassSupport,"defaultClassSupport");
	HX_MARK_MEMBER_NAME(SScript_obj::superClassInstances,"superClassInstances");
	HX_MARK_MEMBER_NAME(SScript_obj::globalVariables,"globalVariables");
	HX_MARK_MEMBER_NAME(SScript_obj::global,"global");
	HX_MARK_MEMBER_NAME(SScript_obj::defines,"defines");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SScript_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SScript_obj::defaultTypeCheck,"defaultTypeCheck");
	HX_VISIT_MEMBER_NAME(SScript_obj::defaultClassSupport,"defaultClassSupport");
	HX_VISIT_MEMBER_NAME(SScript_obj::superClassInstances,"superClassInstances");
	HX_VISIT_MEMBER_NAME(SScript_obj::globalVariables,"globalVariables");
	HX_VISIT_MEMBER_NAME(SScript_obj::global,"global");
	HX_VISIT_MEMBER_NAME(SScript_obj::defines,"defines");
};

#endif

::hx::Class SScript_obj::__mClass;

static ::String SScript_obj_sStaticFields[] = {
	HX_("defaultTypeCheck",ad,5a,87,cd),
	HX_("defaultClassSupport",18,75,fc,a1),
	HX_("superClassInstances",c1,3a,ab,61),
	HX_("globalVariables",d4,cc,01,94),
	HX_("global",63,31,b2,a7),
	HX_("defines",d8,37,08,a1),
	HX_("listScripts",4a,6f,e3,e3),
	HX_("get_BlankReg",89,6e,d3,64),
	HX_("set_defaultTypeCheck",2a,77,a9,b8),
	HX_("set_defaultClassSupport",bb,84,b3,ac),
	::String(null())
};

void SScript_obj::__register()
{
	SScript_obj _hx_dummy;
	SScript_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tea.SScript",20,72,1d,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SScript_obj::__GetStatic;
	__mClass->mSetStaticField = &SScript_obj::__SetStatic;
	__mClass->mMarkFunc = SScript_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SScript_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SScript_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SScript_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SScript_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SScript_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SScript_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SScript_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_52_boot)
HXDLIN(  52)		defaultTypeCheck = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ffc4a688e712d40b_57_boot)
HXDLIN(  57)		defaultClassSupport = null();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_95_boot)
HXDLIN(  95)		superClassInstances =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_108_boot)
HXDLIN( 108)		globalVariables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_ffc4a688e712d40b_113_boot)
HXDLIN( 113)		global =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tea
