#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#include <flixel/addons/display/FlxRuntimeShader.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_psychlua_FunkinLua
#include <psychlua/FunkinLua.h>
#endif
#ifndef INCLUDED_psychlua_LuaUtils
#include <psychlua/LuaUtils.h>
#endif
#ifndef INCLUDED_psychlua_ShaderFunctions
#include <psychlua/ShaderFunctions.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_13_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",13,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_24_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",24,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_10_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",10,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_50_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",50,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_65_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",65,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_79_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",79,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_93_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",93,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_107_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",107,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_121_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",121,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_135_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",135,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_151_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",151,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_166_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",166,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_181_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",181,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_196_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",196,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_211_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",211,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_226_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",226,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_243_implement,"psychlua.ShaderFunctions","implement",0xb319df3a,"psychlua.ShaderFunctions.implement","psychlua/ShaderFunctions.hx",243,0xccd4b4da)
HX_LOCAL_STACK_FRAME(_hx_pos_929905dd20ad7486_270_getShader,"psychlua.ShaderFunctions","getShader",0x9d51b5f2,"psychlua.ShaderFunctions.getShader","psychlua/ShaderFunctions.hx",270,0xccd4b4da)
namespace psychlua{

void ShaderFunctions_obj::__construct() { }

Dynamic ShaderFunctions_obj::__CreateEmpty() { return new ShaderFunctions_obj; }

void *ShaderFunctions_obj::_hx_vtable = 0;

Dynamic ShaderFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderFunctions_obj > _hx_result = new ShaderFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c3c4af5;
}

void ShaderFunctions_obj::implement( ::psychlua::FunkinLua funk){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::psychlua::FunkinLua,funk) HXARGC(2)
            		bool _hx_run(::String name, ::Dynamic __o_glslVersion){
            		 ::Dynamic glslVersion = __o_glslVersion;
            		if (::hx::IsNull(__o_glslVersion)) glslVersion = 120;
            			HX_STACKFRAME(&_hx_pos_929905dd20ad7486_13_implement)
HXLINE(  14)			if (!(::backend::ClientPrefs_obj::data->shaders)) {
HXLINE(  14)				return false;
            			}
HXLINE(  17)			return funk->initLuaShader(name,glslVersion);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::psychlua::FunkinLua,funk) HXARGC(2)
            		bool _hx_run(::String obj,::String shader){
            			HX_GC_STACKFRAME(&_hx_pos_929905dd20ad7486_24_implement)
HXLINE(  25)			if (!(::backend::ClientPrefs_obj::data->shaders)) {
HXLINE(  25)				return false;
            			}
HXLINE(  28)			bool _hx_tmp;
HXDLIN(  28)			if (!(funk->runtimeShaders->exists(shader))) {
HXLINE(  28)				_hx_tmp = !(funk->initLuaShader(shader,null()));
            			}
            			else {
HXLINE(  28)				_hx_tmp = false;
            			}
HXDLIN(  28)			if (_hx_tmp) {
HXLINE(  30)				::psychlua::FunkinLua_obj::luaTrace(((HX_("setSpriteShader: Shader ",09,aa,37,9c) + shader) + HX_(" is missing!",d1,64,6b,b3)),false,false,-65536);
HXLINE(  31)				return false;
            			}
HXLINE(  34)			::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE(  35)			 ::flixel::FlxSprite leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
HXLINE(  36)			if ((split->length > 1)) {
HXLINE(  37)				 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN(  37)				leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            			}
HXLINE(  40)			if (::hx::IsNotNull( leObj )) {
HXLINE(  41)				::Array< ::String > arr = ( (::Array< ::String >)(funk->runtimeShaders->get(shader)) );
HXLINE(  42)				leObj->shader =  ::flixel::addons::display::FlxRuntimeShader_obj::__alloc( HX_CTX ,arr->__get(0),arr->__get(1),null());
HXLINE(  43)				return true;
            			}
HXLINE(  48)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_929905dd20ad7486_10_implement)
HXLINE(  11)		 cpp::Reference<lua_State> lua = funk->lua;
HXLINE(  13)		funk->addLocalCallback(HX_("initLuaShader",cd,69,3d,b0), ::Dynamic(new _hx_Closure_0(funk)));
HXLINE(  24)		funk->addLocalCallback(HX_("setSpriteShader",cc,33,b9,d3), ::Dynamic(new _hx_Closure_1(funk)));
HXLINE(  50)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            			bool _hx_run(::String obj){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_50_implement)
HXLINE(  51)				::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE(  52)				 ::flixel::FlxSprite leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
HXLINE(  53)				if ((split->length > 1)) {
HXLINE(  54)					 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN(  54)					leObj = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            				}
HXLINE(  57)				if (::hx::IsNotNull( leObj )) {
HXLINE(  58)					leObj->shader = null();
HXLINE(  59)					return true;
            				}
HXLINE(  61)				return false;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  50)			::llua::Lua_helper_obj::callbacks->set(HX_("removeSpriteShader",6e,9f,39,01), ::Dynamic(new _hx_Closure_2()));
HXDLIN(  50)			linc::callbacks::add_callback_function(lua,HX_("removeSpriteShader",6e,9f,39,01));
            		}
HXLINE(  65)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_65_implement)
HXLINE(  67)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE(  68)				if (::hx::IsNull( shader )) {
HXLINE(  70)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderBool: Shader is not FlxRuntimeShader!",e3,10,46,bd),false,false,-65536);
HXLINE(  71)					return null();
            				}
HXLINE(  73)				return shader->getBool(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  65)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderBool",25,c2,26,8c), ::Dynamic(new _hx_Closure_3()));
HXDLIN(  65)			linc::callbacks::add_callback_function(lua,HX_("getShaderBool",25,c2,26,8c));
            		}
HXLINE(  79)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(2)
            			::Array< bool > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_79_implement)
HXLINE(  81)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE(  82)				if (::hx::IsNull( shader )) {
HXLINE(  84)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderBoolArray: Shader is not FlxRuntimeShader!",f4,2e,54,2b),false,false,-65536);
HXLINE(  85)					return null();
            				}
HXLINE(  87)				return shader->getBoolArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  79)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderBoolArray",34,35,0b,6a), ::Dynamic(new _hx_Closure_4()));
HXDLIN(  79)			linc::callbacks::add_callback_function(lua,HX_("getShaderBoolArray",34,35,0b,6a));
            		}
HXLINE(  93)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_5) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_93_implement)
HXLINE(  95)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE(  96)				if (::hx::IsNull( shader )) {
HXLINE(  98)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderInt: Shader is not FlxRuntimeShader!",d4,d8,ca,ab),false,false,-65536);
HXLINE(  99)					return null();
            				}
HXLINE( 101)				return shader->getInt(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE(  93)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderInt",54,e7,a3,3e), ::Dynamic(new _hx_Closure_5()));
HXDLIN(  93)			linc::callbacks::add_callback_function(lua,HX_("getShaderInt",54,e7,a3,3e));
            		}
HXLINE( 107)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(2)
            			::Array< int > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_107_implement)
HXLINE( 109)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 110)				if (::hx::IsNull( shader )) {
HXLINE( 112)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderIntArray: Shader is not FlxRuntimeShader!",63,fd,1f,7f),false,false,-65536);
HXLINE( 113)					return null();
            				}
HXLINE( 115)				return shader->getIntArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 107)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderIntArray",a5,e5,8d,91), ::Dynamic(new _hx_Closure_6()));
HXDLIN( 107)			linc::callbacks::add_callback_function(lua,HX_("getShaderIntArray",a5,e5,8d,91));
            		}
HXLINE( 121)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_7) HXARGC(2)
            			 ::Dynamic _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_121_implement)
HXLINE( 123)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 124)				if (::hx::IsNull( shader )) {
HXLINE( 126)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderFloat: Shader is not FlxRuntimeShader!",47,18,f4,13),false,false,-65536);
HXLINE( 127)					return null();
            				}
HXLINE( 129)				return shader->getFloat(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 121)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderFloat",41,c3,61,61), ::Dynamic(new _hx_Closure_7()));
HXDLIN( 121)			linc::callbacks::add_callback_function(lua,HX_("getShaderFloat",41,c3,61,61));
            		}
HXLINE( 135)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_8) HXARGC(2)
            			::Array< Float > _hx_run(::String obj,::String prop){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_135_implement)
HXLINE( 137)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 138)				if (::hx::IsNull( shader )) {
HXLINE( 140)					::psychlua::FunkinLua_obj::luaTrace(HX_("getShaderFloatArray: Shader is not FlxRuntimeShader!",10,dd,1c,59),false,false,-65536);
HXLINE( 141)					return null();
            				}
HXLINE( 143)				return shader->getFloatArray(prop);
            			}
            			HX_END_LOCAL_FUNC2(return)

HXLINE( 135)			::llua::Lua_helper_obj::callbacks->set(HX_("getShaderFloatArray",98,ae,4a,4c), ::Dynamic(new _hx_Closure_8()));
HXDLIN( 135)			linc::callbacks::add_callback_function(lua,HX_("getShaderFloatArray",98,ae,4a,4c));
            		}
HXLINE( 151)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_9) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,bool value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_151_implement)
HXLINE( 153)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 154)				if (::hx::IsNull( shader )) {
HXLINE( 156)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderBool: Shader is not FlxRuntimeShader!",57,49,cc,f1),false,false,-65536);
HXLINE( 157)					return false;
            				}
HXLINE( 159)				shader->setBool(prop,value);
HXLINE( 160)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 151)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderBool",31,a4,2c,d1), ::Dynamic(new _hx_Closure_9()));
HXDLIN( 151)			linc::callbacks::add_callback_function(lua,HX_("setShaderBool",31,a4,2c,d1));
            		}
HXLINE( 166)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_10) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_166_implement)
HXLINE( 168)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 169)				if (::hx::IsNull( shader )) {
HXLINE( 171)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderBoolArray: Shader is not FlxRuntimeShader!",00,d2,a8,2e),false,false,-65536);
HXLINE( 172)					return false;
            				}
HXLINE( 174)				shader->setBoolArray(prop,( (::Array< bool >)(values) ));
HXLINE( 175)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 166)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderBoolArray",a8,67,ba,46), ::Dynamic(new _hx_Closure_10()));
HXDLIN( 166)			linc::callbacks::add_callback_function(lua,HX_("setShaderBoolArray",a8,67,ba,46));
            		}
HXLINE( 181)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_11) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,int value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_181_implement)
HXLINE( 183)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 184)				if (::hx::IsNull( shader )) {
HXLINE( 186)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderInt: Shader is not FlxRuntimeShader!",e0,6a,a4,15),false,false,-65536);
HXLINE( 187)					return false;
            				}
HXLINE( 189)				shader->setInt(prop,value);
HXLINE( 190)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 181)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderInt",c8,0a,9d,53), ::Dynamic(new _hx_Closure_11()));
HXDLIN( 181)			linc::callbacks::add_callback_function(lua,HX_("setShaderInt",c8,0a,9d,53));
            		}
HXLINE( 196)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_12) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_196_implement)
HXLINE( 198)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 199)				if (::hx::IsNull( shader )) {
HXLINE( 201)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderIntArray: Shader is not FlxRuntimeShader!",d7,7f,9d,a9),false,false,-65536);
HXLINE( 202)					return false;
            				}
HXLINE( 204)				shader->setIntArray(prop,( (::Array< int >)(values) ));
HXLINE( 205)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 196)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderIntArray",b1,bd,fb,b4), ::Dynamic(new _hx_Closure_12()));
HXDLIN( 196)			linc::callbacks::add_callback_function(lua,HX_("setShaderIntArray",b1,bd,fb,b4));
            		}
HXLINE( 211)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_13) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,Float value){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_211_implement)
HXLINE( 213)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 214)				if (::hx::IsNull( shader )) {
HXLINE( 216)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderFloat: Shader is not FlxRuntimeShader!",53,45,df,d4),false,false,-65536);
HXLINE( 217)					return false;
            				}
HXLINE( 219)				shader->setFloat(prop,value);
HXLINE( 220)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 211)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderFloat",b5,ab,81,81), ::Dynamic(new _hx_Closure_13()));
HXDLIN( 211)			linc::callbacks::add_callback_function(lua,HX_("setShaderFloat",b5,ab,81,81));
            		}
HXLINE( 226)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_14) HXARGC(3)
            			bool _hx_run(::String obj,::String prop, ::Dynamic values){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_226_implement)
HXLINE( 228)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 229)				if (::hx::IsNull( shader )) {
HXLINE( 231)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderFloatArray: Shader is not FlxRuntimeShader!",84,e4,d6,3f),false,false,-65536);
HXLINE( 232)					return false;
            				}
HXLINE( 235)				shader->setFloatArray(prop,( (::Array< Float >)(values) ));
HXLINE( 236)				return true;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 226)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderFloatArray",a4,a1,e7,88), ::Dynamic(new _hx_Closure_14()));
HXDLIN( 226)			linc::callbacks::add_callback_function(lua,HX_("setShaderFloatArray",a4,a1,e7,88));
            		}
HXLINE( 243)		{
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_15) HXARGC(3)
            			bool _hx_run(::String obj,::String prop,::String bitmapdataPath){
            				HX_STACKFRAME(&_hx_pos_929905dd20ad7486_243_implement)
HXLINE( 245)				 ::flixel::addons::display::FlxRuntimeShader shader = ::psychlua::ShaderFunctions_obj::getShader(obj);
HXLINE( 246)				if (::hx::IsNull( shader )) {
HXLINE( 248)					::psychlua::FunkinLua_obj::luaTrace(HX_("setShaderSampler2D: Shader is not FlxRuntimeShader!",d5,95,42,9d),false,false,-65536);
HXLINE( 249)					return false;
            				}
HXLINE( 253)				 ::flixel::graphics::FlxGraphic value = ::backend::Paths_obj::image(bitmapdataPath,null(),null());
HXLINE( 254)				bool _hx_tmp;
HXDLIN( 254)				if (::hx::IsNotNull( value )) {
HXLINE( 254)					_hx_tmp = ::hx::IsNotNull( value->bitmap );
            				}
            				else {
HXLINE( 254)					_hx_tmp = false;
            				}
HXDLIN( 254)				if (_hx_tmp) {
HXLINE( 257)					shader->setSampler2D(prop,value->bitmap);
HXLINE( 258)					return true;
            				}
HXLINE( 260)				return false;
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 243)			::llua::Lua_helper_obj::callbacks->set(HX_("setShaderSampler2D",73,a9,e5,27), ::Dynamic(new _hx_Closure_15()));
HXDLIN( 243)			linc::callbacks::add_callback_function(lua,HX_("setShaderSampler2D",73,a9,e5,27));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderFunctions_obj,implement,(void))

 ::flixel::addons::display::FlxRuntimeShader ShaderFunctions_obj::getShader(::String obj){
            	HX_STACKFRAME(&_hx_pos_929905dd20ad7486_270_getShader)
HXLINE( 271)		::Array< ::String > split = obj.split(HX_(".",2e,00,00,00));
HXLINE( 272)		 ::flixel::FlxSprite target = null();
HXLINE( 273)		if ((split->length > 1)) {
HXLINE( 273)			 ::Dynamic this1 = ::psychlua::LuaUtils_obj::getPropertyLoop(split,null(),null(),null());
HXDLIN( 273)			target = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getVarInArray(this1,split->__get((split->length - 1)),null())) );
            		}
            		else {
HXLINE( 274)			target = ( ( ::flixel::FlxSprite)(::psychlua::LuaUtils_obj::getObjectDirectly(split->__get(0),null(),null())) );
            		}
HXLINE( 276)		if (::hx::IsNull( target )) {
HXLINE( 278)			::psychlua::FunkinLua_obj::luaTrace(((HX_("Error on getting shader: Object ",91,06,1d,aa) + obj) + HX_(" not found",55,f3,a5,21)),false,false,-65536);
HXLINE( 279)			return null();
            		}
HXLINE( 281)		return ::hx::TCast<  ::flixel::addons::display::FlxRuntimeShader >::cast(target->shader);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderFunctions_obj,getShader,return )


ShaderFunctions_obj::ShaderFunctions_obj()
{
}

bool ShaderFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"implement") ) { outValue = implement_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getShader") ) { outValue = getShader_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ShaderFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShaderFunctions_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ShaderFunctions_obj::__mClass;

static ::String ShaderFunctions_obj_sStaticFields[] = {
	HX_("implement",a3,71,3f,af),
	HX_("getShader",5b,48,77,99),
	::String(null())
};

void ShaderFunctions_obj::__register()
{
	ShaderFunctions_obj _hx_dummy;
	ShaderFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("psychlua.ShaderFunctions",45,3b,4e,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ShaderFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ShaderFunctions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace psychlua
