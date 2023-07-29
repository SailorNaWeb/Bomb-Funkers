#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif
#ifndef INCLUDED_llua_LuaCallback
#include <llua/LuaCallback.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d6492622815d6e1e_13_new,"llua.LuaCallback","new",0xe40f834d,"llua.LuaCallback.new","llua/LuaCallback.hx",13,0xd770c484)
HX_LOCAL_STACK_FRAME(_hx_pos_d6492622815d6e1e_19_call,"llua.LuaCallback","call",0xa23af511,"llua.LuaCallback.call","llua/LuaCallback.hx",19,0xd770c484)
HX_LOCAL_STACK_FRAME(_hx_pos_d6492622815d6e1e_47_dispose,"llua.LuaCallback","dispose",0x61c0ae0c,"llua.LuaCallback.dispose","llua/LuaCallback.hx",47,0xd770c484)
namespace llua{

void LuaCallback_obj::__construct( cpp::Reference<lua_State> lua,int ref){
            	HX_STACKFRAME(&_hx_pos_d6492622815d6e1e_13_new)
HXLINE(  14)		this->l = lua;
HXLINE(  15)		this->ref = ref;
            	}

Dynamic LuaCallback_obj::__CreateEmpty() { return new LuaCallback_obj; }

void *LuaCallback_obj::_hx_vtable = 0;

Dynamic LuaCallback_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LuaCallback_obj > _hx_result = new LuaCallback_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LuaCallback_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f98fc19;
}

void LuaCallback_obj::call(::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_d6492622815d6e1e_19_call)
HXLINE(  20)		lua_rawgeti(this->l,-10000,this->ref);
HXLINE(  21)		if ((lua_isfunction(this->l,-1) != 0)) {
HXLINE(  22)			if (::hx::IsNull( args )) {
HXLINE(  22)				args = ::cpp::VirtualArray_obj::__new(0);
            			}
HXLINE(  23)			{
HXLINE(  23)				int _g = 0;
HXDLIN(  23)				while((_g < args->get_length())){
HXLINE(  23)					 ::Dynamic arg = args->__get(_g);
HXDLIN(  23)					_g = (_g + 1);
HXDLIN(  23)					::llua::Convert_obj::toLua(this->l,arg);
            				}
            			}
HXLINE(  24)			int status = lua_pcall(this->l,args->get_length(),0,0);
HXLINE(  25)			if ((status != 0)) {
HXLINE(  26)				::String err = linc::lua::tostring(this->l,-1);
HXLINE(  27)				lua_pop(this->l,1);
HXLINE(  29)				bool _hx_tmp;
HXDLIN(  29)				if (::hx::IsNotNull( err )) {
HXLINE(  29)					_hx_tmp = (err == HX_("",00,00,00,00));
            				}
            				else {
HXLINE(  29)					_hx_tmp = true;
            				}
HXDLIN(  29)				if (_hx_tmp) {
HXLINE(  30)					switch((int)(status)){
            						case (int)2: {
HXLINE(  31)							err = HX_("Runtime Error",40,fe,ae,fe);
            						}
            						break;
            						case (int)4: {
HXLINE(  32)							err = HX_("Memory Allocation Error",a7,0d,34,8f);
            						}
            						break;
            						case (int)5: {
HXLINE(  33)							err = HX_("Critical Error",87,29,36,da);
            						}
            						break;
            						default:{
HXLINE(  34)							err = HX_("Unknown Error",72,7e,3c,a3);
            						}
            					}
            				}
HXLINE(  37)				::haxe::Log_obj::trace((HX_("Error on callback: ",94,32,ed,c4) + err),::hx::SourceInfo(HX_("llua/LuaCallback.hx",84,c4,70,d7),37,HX_("llua.LuaCallback",db,d8,46,84),HX_("call",9e,18,ba,41)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LuaCallback_obj,call,(void))

void LuaCallback_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_d6492622815d6e1e_47_dispose)
HXDLIN(  47)		luaL_unref(this->l,-10000,this->ref);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LuaCallback_obj,dispose,(void))


::hx::ObjectPtr< LuaCallback_obj > LuaCallback_obj::__new( cpp::Reference<lua_State> lua,int ref) {
	::hx::ObjectPtr< LuaCallback_obj > __this = new LuaCallback_obj();
	__this->__construct(lua,ref);
	return __this;
}

::hx::ObjectPtr< LuaCallback_obj > LuaCallback_obj::__alloc(::hx::Ctx *_hx_ctx, cpp::Reference<lua_State> lua,int ref) {
	LuaCallback_obj *__this = (LuaCallback_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LuaCallback_obj), true, "llua.LuaCallback"));
	*(void **)__this = LuaCallback_obj::_hx_vtable;
	__this->__construct(lua,ref);
	return __this;
}

LuaCallback_obj::LuaCallback_obj()
{
}

void LuaCallback_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LuaCallback);
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_MEMBER_NAME(ref,"ref");
	HX_MARK_END_CLASS();
}

void LuaCallback_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(l,"l");
	HX_VISIT_MEMBER_NAME(ref,"ref");
}

::hx::Val LuaCallback_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return ::hx::Val( l ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { return ::hx::Val( ref ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LuaCallback_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast<  cpp::Reference<lua_State> >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ref") ) { ref=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LuaCallback_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("l",6c,00,00,00));
	outFields->push(HX_("ref",53,d9,56,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LuaCallback_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  cpp::Reference<lua_State> */ ,(int)offsetof(LuaCallback_obj,l),HX_("l",6c,00,00,00)},
	{::hx::fsInt,(int)offsetof(LuaCallback_obj,ref),HX_("ref",53,d9,56,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LuaCallback_obj_sStaticStorageInfo = 0;
#endif

static ::String LuaCallback_obj_sMemberFields[] = {
	HX_("l",6c,00,00,00),
	HX_("ref",53,d9,56,00),
	HX_("call",9e,18,ba,41),
	HX_("dispose",9f,80,4c,bb),
	::String(null()) };

::hx::Class LuaCallback_obj::__mClass;

void LuaCallback_obj::__register()
{
	LuaCallback_obj _hx_dummy;
	LuaCallback_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.LuaCallback",db,d8,46,84);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LuaCallback_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LuaCallback_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LuaCallback_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LuaCallback_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace llua
