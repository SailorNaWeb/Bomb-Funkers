#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
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
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Countdown
#include <backend/Countdown.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#include <flixel/addons/display/FlxRuntimeShader.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_objects_Note
#include <objects/Note.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif
#ifndef INCLUDED_psychlua_CustomSubstate
#include <psychlua/CustomSubstate.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_HScript
#include <psychlua/HScript.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_tea_SScript
#include <tea/SScript.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_22ae5a7ed167d885_9_new,"psychlua.HScript","new",0xc5b53054,"psychlua.HScript.new","psychlua/HScript.hx",9,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_63_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",63,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_66_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",66,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_72_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",72,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_80_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",80,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_89_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",89,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_100_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",100,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_108_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",108,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_34_preset,"psychlua.HScript","preset",0x288cc3eb,"psychlua.HScript.preset","psychlua/HScript.hx",34,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_141_executeCode,"psychlua.HScript","executeCode",0x3ba519f6,"psychlua.HScript.executeCode","psychlua/HScript.hx",141,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_166_executeFunction,"psychlua.HScript","executeFunction",0xe611ac61,"psychlua.HScript.executeFunction","psychlua/HScript.hx",166,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_16_initHaxeModule,"psychlua.HScript","initHaxeModule",0xf5eaad2e,"psychlua.HScript.initHaxeModule","psychlua/HScript.hx",16,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_176_implement,"psychlua.HScript","implement",0x4ce74097,"psychlua.HScript.implement","psychlua/HScript.hx",176,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_204_implement,"psychlua.HScript","implement",0x4ce74097,"psychlua.HScript.implement","psychlua/HScript.hx",204,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_221_implement,"psychlua.HScript","implement",0x4ce74097,"psychlua.HScript.implement","psychlua/HScript.hx",221,0x619ca0dd)
HX_LOCAL_STACK_FRAME(_hx_pos_22ae5a7ed167d885_174_implement,"psychlua.HScript","implement",0x4ce74097,"psychlua.HScript.implement","psychlua/HScript.hx",174,0x619ca0dd)
namespace psychlua{

void HScript_obj::__construct( ::psychlua::FunkinLua parent,::String interpName){
            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_9_new)
HXLINE(  24)		this->interpName = null();
HXLINE(  27)		super::__construct(HX_("",00,00,00,00),false);
HXLINE(  28)		this->parentLua = parent;
HXLINE(  29)		this->interpName = interpName;
HXLINE(  30)		this->preset();
            	}

Dynamic HScript_obj::__CreateEmpty() { return new HScript_obj; }

void *HScript_obj::_hx_vtable = 0;

Dynamic HScript_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HScript_obj > _hx_result = new HScript_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HScript_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f20a2ee) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1f20a2ee;
	} else {
		return inClassId==(int)0x7f75c5ee;
	}
}

void HScript_obj::preset(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		void _hx_run(::String name, ::Dynamic value){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_63_preset)
HXLINE(  63)			::states::PlayState_obj::instance->variables->set(name,value);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::Dynamic _hx_run(::String name){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_66_preset)
HXLINE(  67)			 ::Dynamic result = null();
HXLINE(  68)			if (::states::PlayState_obj::instance->variables->exists(name)) {
HXLINE(  68)				result = ::states::PlayState_obj::instance->variables->get(name);
            			}
HXLINE(  69)			return result;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		bool _hx_run(::String name){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_72_preset)
HXLINE(  73)			if (::states::PlayState_obj::instance->variables->exists(name)) {
HXLINE(  75)				::states::PlayState_obj::instance->variables->remove(name);
HXLINE(  76)				return true;
            			}
HXLINE(  78)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(2)
            		void _hx_run(::String text, ::Dynamic color){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_80_preset)
HXLINE(  81)			if (::hx::IsNull( color )) {
HXLINE(  81)				color = -1;
            			}
HXLINE(  82)			::psychlua::FunkinLua_obj::luaTrace(text,true,false,color);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(2)
            		void _hx_run(::String name, ::Dynamic func){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_89_preset)
HXLINE(  91)			{
HXLINE(  91)				int _g = 0;
HXDLIN(  91)				::Array< ::Dynamic> _g1 = ::states::PlayState_obj::instance->luaArray;
HXDLIN(  91)				while((_g < _g1->length)){
HXLINE(  91)					 ::psychlua::FunkinLua script = _g1->__get(_g).StaticCast<  ::psychlua::FunkinLua >();
HXDLIN(  91)					_g = (_g + 1);
HXLINE(  92)					bool _hx_tmp;
HXDLIN(  92)					bool _hx_tmp1;
HXDLIN(  92)					if (::hx::IsNotNull( script )) {
HXLINE(  92)						_hx_tmp1 = ::hx::IsNotNull( script->lua );
            					}
            					else {
HXLINE(  92)						_hx_tmp1 = false;
            					}
HXDLIN(  92)					if (_hx_tmp1) {
HXLINE(  92)						_hx_tmp = !(script->closed);
            					}
            					else {
HXLINE(  92)						_hx_tmp = false;
            					}
HXDLIN(  92)					if (_hx_tmp) {
HXLINE(  93)						 cpp::Reference<lua_State> l = script->lua;
HXDLIN(  93)						::llua::Lua_helper_obj::callbacks->set(name,func);
HXDLIN(  93)						linc::callbacks::add_callback_function(l,name);
            					}
            				}
            			}
HXLINE(  95)			::psychlua::FunkinLua_obj::customFunctions->set(name,func);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::psychlua::HScript,_gthis) HXARGC(3)
            		void _hx_run(::String name, ::Dynamic func, ::psychlua::FunkinLua funk){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_100_preset)
HXLINE( 101)			if (::hx::IsNull( funk )) {
HXLINE( 101)				funk = _gthis->parentLua;
            			}
HXLINE( 103)			if (::hx::IsNotNull( _gthis->parentLua )) {
HXLINE( 103)				funk->addLocalCallback(name,func);
            			}
            			else {
HXLINE( 104)				::psychlua::FunkinLua_obj::luaTrace(((HX_("createCallback (",29,ef,61,76) + name) + HX_("): 3rd argument is null",44,8a,de,61)),false,false,-65536);
            			}
            		}
            		HX_END_LOCAL_FUNC3((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::psychlua::HScript,_gthis) HXARGC(2)
            		void _hx_run(::String libName,::String __o_libPackage){
            		::String libPackage = __o_libPackage;
            		if (::hx::IsNull(__o_libPackage)) libPackage = HX_("",00,00,00,00);
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_108_preset)
HXLINE( 108)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 109)				::String str = HX_("",00,00,00,00);
HXLINE( 110)				if ((libPackage.length > 0)) {
HXLINE( 111)					str = (libPackage + HX_(".",2e,00,00,00));
            				}
HXLINE( 113)				 ::psychlua::HScript _gthis1 = _gthis;
HXDLIN( 113)				_gthis1->set(libName,::Type_obj::resolveClass((str + libName)));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 115)					{
HXLINE( 115)						null();
            					}
HXDLIN( 115)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN( 115)					{
HXLINE( 116)						::String msg = ( (::String)(e->toString()) );
HXLINE( 117)						if (::hx::IsNotNull( _gthis->parentLua )) {
HXLINE( 119)							::psychlua::FunkinLua_obj::lastCalledScript = _gthis->parentLua;
HXLINE( 120)							msg = ((((_gthis->parentLua->scriptName + HX_(":",3a,00,00,00)) + _gthis->parentLua->lastCalledFunction) + HX_(" - ",73,6f,18,00)) + msg);
            						}
            						else {
HXLINE( 122)							msg = (((HX_("",00,00,00,00) + _gthis->interpName) + HX_(" - ",73,6f,18,00)) + msg);
            						}
HXLINE( 123)						::psychlua::FunkinLua_obj::luaTrace(msg,::hx::IsNull( _gthis->parentLua ),false,-65536);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_34_preset)
HXDLIN(  34)		 ::psychlua::HScript _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  36)		this->super::preset();
HXLINE(  39)		this->set(HX_("FlxG",b5,4b,97,2e),::hx::ClassOf< ::flixel::FlxG >());
HXLINE(  40)		this->set(HX_("FlxSprite",f7,d5,84,45),::hx::ClassOf< ::flixel::FlxSprite >());
HXLINE(  41)		this->set(HX_("FlxCamera",97,40,7b,39),::hx::ClassOf< ::flixel::FlxCamera >());
HXLINE(  42)		this->set(HX_("FlxTimer",13,ca,0f,cd),::hx::ClassOf< ::flixel::util::FlxTimer >());
HXLINE(  43)		this->set(HX_("FlxTween",b9,b4,4a,d6),::hx::ClassOf< ::flixel::tweens::FlxTween >());
HXLINE(  44)		this->set(HX_("FlxEase",60,c5,64,d3),::hx::ClassOf< ::flixel::tweens::FlxEase >());
HXLINE(  45)		this->set(HX_("PlayState",5d,83,c2,46),::hx::ClassOf< ::states::PlayState >());
HXLINE(  46)		this->set(HX_("Paths",0e,7b,84,50),::hx::ClassOf< ::backend::Paths >());
HXLINE(  47)		this->set(HX_("Conductor",c7,77,a1,7b),::hx::ClassOf< ::backend::Conductor >());
HXLINE(  48)		this->set(HX_("ClientPrefs",c5,55,e0,8a),::hx::ClassOf< ::backend::ClientPrefs >());
HXLINE(  49)		this->set(HX_("Character",89,bb,a4,e3),::hx::ClassOf< ::objects::Character >());
HXLINE(  50)		this->set(HX_("Alphabet",d3,38,ea,fa),::hx::ClassOf< ::objects::Alphabet >());
HXLINE(  51)		this->set(HX_("Note",12,44,e3,33),::hx::ClassOf< ::objects::Note >());
HXLINE(  52)		this->set(HX_("CustomSubstate",82,cd,df,32),::hx::ClassOf< ::psychlua::CustomSubstate >());
HXLINE(  53)		this->set(HX_("Countdown",91,30,88,0b),::hx::ClassOf< ::backend::Countdown >());
HXLINE(  55)		this->set(HX_("FlxRuntimeShader",6b,22,33,11),::hx::ClassOf< ::flixel::addons::display::FlxRuntimeShader >());
HXLINE(  57)		this->set(HX_("ShaderFilter",dd,08,30,bd),::hx::ClassOf< ::openfl::filters::ShaderFilter >());
HXLINE(  58)		this->set(HX_("StringTools",6a,db,63,03),::hx::ClassOf< ::StringTools >());
HXLINE(  61)		this->set(HX_("setVar",65,6c,71,6f), ::Dynamic(new _hx_Closure_0()));
HXLINE(  65)		this->set(HX_("getVar",f1,17,29,a3), ::Dynamic(new _hx_Closure_1()));
HXLINE(  71)		this->set(HX_("removeVar",03,fd,f4,ca), ::Dynamic(new _hx_Closure_2()));
HXLINE(  80)		this->set(HX_("debugPrint",da,28,6f,c7), ::Dynamic(new _hx_Closure_3()));
HXLINE(  88)		this->set(HX_("createGlobalCallback",64,de,db,36), ::Dynamic(new _hx_Closure_4()));
HXLINE(  99)		this->set(HX_("createCallback",e1,18,41,d1), ::Dynamic(new _hx_Closure_5(_gthis)));
HXLINE( 107)		this->set(HX_("addHaxeLibrary",d4,92,3b,4b), ::Dynamic(new _hx_Closure_6(_gthis)));
HXLINE( 126)		this->set(HX_("parentLua",ae,22,50,7f),this->parentLua);
HXLINE( 127)		this->set(HX_("game",f2,f3,5e,44),::states::PlayState_obj::instance);
HXLINE( 128)		this->set(HX_("buildTarget",1f,d9,5d,d7),::psychlua::FunkinLua_obj::getBuildTarget());
HXLINE( 129)		this->set(HX_("customSubstate",62,39,8a,88),::psychlua::CustomSubstate_obj::instance);
HXLINE( 130)		this->set(HX_("customSubstateName",cd,30,b8,0d),::psychlua::CustomSubstate_obj::name);
HXLINE( 132)		this->set(HX_("Function_Stop",c9,a5,e8,d3),::psychlua::FunkinLua_obj::Function_Stop);
HXLINE( 133)		this->set(HX_("Function_Continue",ae,85,11,8b),::psychlua::FunkinLua_obj::Function_Continue);
HXLINE( 134)		this->set(HX_("Function_StopLua",6f,6f,62,22),::psychlua::FunkinLua_obj::Function_StopLua);
HXLINE( 135)		this->set(HX_("Function_StopHScript",ca,bd,3f,93),::psychlua::FunkinLua_obj::Function_StopHScript);
HXLINE( 136)		this->set(HX_("Function_StopAll",d8,0e,5a,22),::psychlua::FunkinLua_obj::Function_StopAll);
            	}


 ::Dynamic HScript_obj::executeCode(::String codeToRun,::String funcToRun,::cpp::VirtualArray funcArgs){
            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_141_executeCode)
HXLINE( 142)		this->doString(codeToRun,null());
HXLINE( 144)		if (::hx::IsNotNull( funcToRun )) {
HXLINE( 146)			 ::Dynamic callValue = this->call(funcToRun,funcArgs,null());
HXLINE( 147)			if (( (bool)(callValue->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) )) {
HXLINE( 148)				return callValue->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic);
            			}
            			else {
HXLINE( 151)				 ::haxe::Exception e = Dynamic(  ::Dynamic(callValue->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::haxe::Exception >();
HXLINE( 152)				if (::hx::IsNotNull( e )) {
HXLINE( 154)					::String msg = e->toString();
HXLINE( 155)					if (::hx::IsNotNull( this->parentLua )) {
HXLINE( 155)						msg = ((((this->parentLua->scriptName + HX_(":",3a,00,00,00)) + this->parentLua->lastCalledFunction) + HX_(" - ",73,6f,18,00)) + msg);
            					}
            					else {
HXLINE( 156)						msg = (((HX_("",00,00,00,00) + this->interpName) + HX_(" - ",73,6f,18,00)) + msg);
            					}
HXLINE( 157)					::psychlua::FunkinLua_obj::luaTrace(msg,::hx::IsNull( this->parentLua ),false,-65536);
            				}
HXLINE( 159)				return null();
            			}
            		}
HXLINE( 162)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(HScript_obj,executeCode,return )

 ::Dynamic HScript_obj::executeFunction(::String funcToRun,::cpp::VirtualArray funcArgs){
            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_166_executeFunction)
HXLINE( 167)		if (::hx::IsNull( funcToRun )) {
HXLINE( 168)			return null();
            		}
HXLINE( 170)		return this->call(funcToRun,funcArgs,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(HScript_obj,executeFunction,return )

void HScript_obj::initHaxeModule( ::psychlua::FunkinLua parent){
            	HX_GC_STACKFRAME(&_hx_pos_22ae5a7ed167d885_16_initHaxeModule)
HXDLIN(  16)		if (::hx::IsNull( parent->hscript )) {
HXLINE(  18)			::haxe::Log_obj::trace((HX_("initializing haxe interp for: ",8a,18,b6,6f) + parent->scriptName),::hx::SourceInfo(HX_("source/psychlua/HScript.hx",69,3a,e1,52),18,HX_("psychlua.HScript",62,b6,a1,67),HX_("initHaxeModule",a2,30,89,5d)));
HXLINE(  19)			parent->hscript =  ::psychlua::HScript_obj::__alloc( HX_CTX ,parent,parent->scriptName);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HScript_obj,initHaxeModule,(void))

void HScript_obj::implement( ::psychlua::FunkinLua funk){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::psychlua::FunkinLua,funk) HXARGC(4)
            		 ::Dynamic _hx_run(::String codeToRun, ::Dynamic varsToBring,::String funcToRun,::cpp::VirtualArray funcArgs){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_176_implement)
HXLINE( 177)			 ::Dynamic retVal = null();
HXLINE( 179)			::psychlua::HScript_obj::initHaxeModule(funk);
HXLINE( 180)			if (::hx::IsNotNull( varsToBring )) {
HXLINE( 182)				int _g = 0;
HXDLIN( 182)				::Array< ::String > _g1 = ::Reflect_obj::fields(varsToBring);
HXDLIN( 182)				while((_g < _g1->length)){
HXLINE( 182)					::String key = _g1->__get(_g);
HXDLIN( 182)					_g = (_g + 1);
HXLINE( 185)					 ::psychlua::HScript funk1 = funk->hscript;
HXDLIN( 185)					funk1->set(key,::Reflect_obj::field(varsToBring,key));
            				}
            			}
HXLINE( 188)			retVal = funk->hscript->executeCode(codeToRun,funcToRun,funcArgs);
HXLINE( 189)			bool _hx_tmp;
HXDLIN( 189)			bool _hx_tmp1;
HXDLIN( 189)			bool _hx_tmp2;
HXDLIN( 189)			if (::hx::IsNotNull( funcToRun )) {
HXLINE( 189)				_hx_tmp2 = ::hx::IsNotNull( funcArgs );
            			}
            			else {
HXLINE( 189)				_hx_tmp2 = false;
            			}
HXDLIN( 189)			if (_hx_tmp2) {
HXLINE( 189)				_hx_tmp1 = ::hx::IsNotNull( retVal );
            			}
            			else {
HXLINE( 189)				_hx_tmp1 = false;
            			}
HXDLIN( 189)			if (_hx_tmp1) {
HXLINE( 189)				_hx_tmp = !(( (bool)(retVal->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) ));
            			}
            			else {
HXLINE( 189)				_hx_tmp = false;
            			}
HXDLIN( 189)			if (_hx_tmp) {
HXLINE( 191)				 ::haxe::Exception e = Dynamic(  ::Dynamic(retVal->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::haxe::Exception >();
HXLINE( 192)				if (::hx::IsNotNull( e )) {
HXLINE( 193)					::String _hx_tmp = (((funk->scriptName + HX_(":",3a,00,00,00)) + funk->lastCalledFunction) + HX_(" - ",73,6f,18,00));
HXDLIN( 193)					::psychlua::FunkinLua_obj::luaTrace((_hx_tmp + ::Std_obj::string(e)),false,false,-65536);
            				}
HXLINE( 194)				return null();
            			}
HXLINE( 200)			bool _hx_tmp3;
HXDLIN( 200)			if (::hx::IsNotNull( retVal )) {
HXLINE( 200)				_hx_tmp3 = !(::psychlua::LuaUtils_obj::isOfTypes( ::Dynamic(retVal->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic)),::cpp::VirtualArray_obj::__new(5)->init(0,::hx::ClassOf< bool >())->init(1,::hx::ClassOf< int >())->init(2,::hx::ClassOf< ::Float >())->init(3,::hx::ClassOf< ::String >())->init(4,::hx::ArrayBase::__mClass)));
            			}
            			else {
HXLINE( 200)				_hx_tmp3 = false;
            			}
HXDLIN( 200)			if (_hx_tmp3) {
HXLINE( 200)				retVal = null();
            			}
HXLINE( 201)			return retVal;
            		}
            		HX_END_LOCAL_FUNC4(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::psychlua::FunkinLua,funk) HXARGC(2)
            		 ::Dynamic _hx_run(::String funcToRun,::cpp::VirtualArray funcArgs){
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_204_implement)
HXLINE( 206)			 ::Dynamic callValue = funk->hscript->executeFunction(funcToRun,funcArgs);
HXLINE( 207)			if (!(( (bool)(callValue->__Field(HX_("succeeded",61,56,29,fb),::hx::paccDynamic)) ))) {
HXLINE( 209)				 ::haxe::Exception e = Dynamic(  ::Dynamic(callValue->__Field(HX_("exceptions",44,35,34,1d),::hx::paccDynamic))->__GetItem(0)).StaticCast<  ::haxe::Exception >();
HXLINE( 210)				if (::hx::IsNotNull( e )) {
HXLINE( 211)					::String _hx_tmp = ( (::String)(((((HX_("ERROR (",b0,59,de,69) + funk->scriptName) + HX_(": ",a6,32,00,00)) + callValue->__Field(HX_("calledFunction",b5,00,41,03),::hx::paccDynamic)) + HX_(") - ",ea,2e,32,1b))) );
HXDLIN( 211)					::String _hx_tmp1 = e->get_message();
HXDLIN( 211)					::psychlua::FunkinLua_obj::luaTrace((_hx_tmp + _hx_tmp1.substr(0,e->get_message().indexOf(HX_("\n",0a,00,00,00),null()))),false,false,-65536);
            				}
HXLINE( 212)				return null();
            			}
            			else {
HXLINE( 215)				return  ::Dynamic(callValue->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic));
            			}
HXLINE( 207)			return null();
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::psychlua::FunkinLua,funk) HXARGC(2)
            		void _hx_run(::String libName,::String __o_libPackage){
            		::String libPackage = __o_libPackage;
            		if (::hx::IsNull(__o_libPackage)) libPackage = HX_("",00,00,00,00);
            			HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_221_implement)
HXLINE( 223)			::psychlua::HScript_obj::initHaxeModule(funk);
HXLINE( 224)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 225)				::String str = HX_("",00,00,00,00);
HXLINE( 226)				if ((libPackage.length > 0)) {
HXLINE( 227)					str = (libPackage + HX_(".",2e,00,00,00));
            				}
HXLINE( 229)				::hx::Class c = ::Type_obj::resolveClass((str + libName));
HXLINE( 230)				if (::hx::IsNotNull( c )) {
HXLINE( 231)					funk->hscript->set(libName,c);
            				}
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 233)					{
HXLINE( 233)						null();
            					}
HXDLIN( 233)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 234)					{
HXLINE( 234)						::String _hx_tmp = (((funk->scriptName + HX_(":",3a,00,00,00)) + funk->lastCalledFunction) + HX_(" - ",73,6f,18,00));
HXDLIN( 234)						::psychlua::FunkinLua_obj::luaTrace((_hx_tmp + ::Std_obj::string(e)),false,false,-65536);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_STACKFRAME(&_hx_pos_22ae5a7ed167d885_174_implement)
HXLINE( 176)		funk->addLocalCallback(HX_("runHaxeCode",de,82,8b,0f), ::Dynamic(new _hx_Closure_0(funk)));
HXLINE( 204)		funk->addLocalCallback(HX_("runHaxeFunction",49,a9,42,e6), ::Dynamic(new _hx_Closure_1(funk)));
HXLINE( 221)		funk->addLocalCallback(HX_("addHaxeLibrary",d4,92,3b,4b), ::Dynamic(new _hx_Closure_2(funk)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HScript_obj,implement,(void))


::hx::ObjectPtr< HScript_obj > HScript_obj::__new( ::psychlua::FunkinLua parent,::String interpName) {
	::hx::ObjectPtr< HScript_obj > __this = new HScript_obj();
	__this->__construct(parent,interpName);
	return __this;
}

::hx::ObjectPtr< HScript_obj > HScript_obj::__alloc(::hx::Ctx *_hx_ctx, ::psychlua::FunkinLua parent,::String interpName) {
	HScript_obj *__this = (HScript_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HScript_obj), true, "psychlua.HScript"));
	*(void **)__this = HScript_obj::_hx_vtable;
	__this->__construct(parent,interpName);
	return __this;
}

HScript_obj::HScript_obj()
{
}

void HScript_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HScript);
	HX_MARK_MEMBER_NAME(parentLua,"parentLua");
	HX_MARK_MEMBER_NAME(interpName,"interpName");
	 ::tea::SScript_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HScript_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentLua,"parentLua");
	HX_VISIT_MEMBER_NAME(interpName,"interpName");
	 ::tea::SScript_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HScript_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"preset") ) { return ::hx::Val( preset_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parentLua") ) { return ::hx::Val( parentLua ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"interpName") ) { return ::hx::Val( interpName ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"executeCode") ) { return ::hx::Val( executeCode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"executeFunction") ) { return ::hx::Val( executeFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HScript_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initHaxeModule") ) { outValue = initHaxeModule_dyn(); return true; }
	}
	return false;
}

::hx::Val HScript_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"parentLua") ) { parentLua=inValue.Cast<  ::psychlua::FunkinLua >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"interpName") ) { interpName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HScript_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parentLua",ae,22,50,7f));
	outFields->push(HX_("interpName",3f,92,82,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HScript_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::psychlua::FunkinLua */ ,(int)offsetof(HScript_obj,parentLua),HX_("parentLua",ae,22,50,7f)},
	{::hx::fsString,(int)offsetof(HScript_obj,interpName),HX_("interpName",3f,92,82,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HScript_obj_sStaticStorageInfo = 0;
#endif

static ::String HScript_obj_sMemberFields[] = {
	HX_("parentLua",ae,22,50,7f),
	HX_("interpName",3f,92,82,1a),
	HX_("preset",5f,b3,c0,ae),
	HX_("executeCode",02,a6,34,09),
	HX_("executeFunction",6d,2e,26,29),
	::String(null()) };

::hx::Class HScript_obj::__mClass;

static ::String HScript_obj_sStaticFields[] = {
	HX_("initHaxeModule",a2,30,89,5d),
	HX_("implement",a3,71,3f,af),
	::String(null())
};

void HScript_obj::__register()
{
	HScript_obj _hx_dummy;
	HScript_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.HScript",62,b6,a1,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HScript_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HScript_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HScript_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HScript_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScript_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScript_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
