#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_shaders_RGBPalette
#include <shaders/RGBPalette.h>
#endif
#ifndef INCLUDED_shaders_RGBPaletteShader
#include <shaders/RGBPaletteShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41b97fe5a8880956_6_new,"shaders.RGBPalette","new",0x4af331c0,"shaders.RGBPalette.new","shaders/RGBPalette.hx",6,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_41b97fe5a8880956_13_set_r,"shaders.RGBPalette","set_r",0x347214b5,"shaders.RGBPalette.set_r","shaders/RGBPalette.hx",13,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_41b97fe5a8880956_19_set_g,"shaders.RGBPalette","set_g",0x347214aa,"shaders.RGBPalette.set_g","shaders/RGBPalette.hx",19,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_41b97fe5a8880956_25_set_b,"shaders.RGBPalette","set_b",0x347214a5,"shaders.RGBPalette.set_b","shaders/RGBPalette.hx",25,0xd43b990f)
HX_LOCAL_STACK_FRAME(_hx_pos_41b97fe5a8880956_31_set_mult,"shaders.RGBPalette","set_mult",0x4bc11f8d,"shaders.RGBPalette.set_mult","shaders/RGBPalette.hx",31,0xd43b990f)
namespace shaders{

void RGBPalette_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_41b97fe5a8880956_6_new)
HXLINE(   7)		this->shader =  ::shaders::RGBPaletteShader_obj::__alloc( HX_CTX );
HXLINE(  39)		this->set_r(-65536);
HXLINE(  40)		this->set_g(-16711936);
HXLINE(  41)		this->set_b(-16776961);
HXLINE(  42)		this->set_mult(((Float)1.0));
            	}

Dynamic RGBPalette_obj::__CreateEmpty() { return new RGBPalette_obj; }

void *RGBPalette_obj::_hx_vtable = 0;

Dynamic RGBPalette_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RGBPalette_obj > _hx_result = new RGBPalette_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RGBPalette_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4418aed8;
}

int RGBPalette_obj::set_r(int color){
            	HX_STACKFRAME(&_hx_pos_41b97fe5a8880956_13_set_r)
HXLINE(  14)		this->r = color;
HXLINE(  15)		this->shader->r->value = ::Array_obj< Float >::__new(3)->init(0,(( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) )))->init(1,(( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) )))->init(2,(( (Float)((color & 255)) ) / ( (Float)(255) )));
HXLINE(  16)		return color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBPalette_obj,set_r,return )

int RGBPalette_obj::set_g(int color){
            	HX_STACKFRAME(&_hx_pos_41b97fe5a8880956_19_set_g)
HXLINE(  20)		this->g = color;
HXLINE(  21)		this->shader->g->value = ::Array_obj< Float >::__new(3)->init(0,(( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) )))->init(1,(( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) )))->init(2,(( (Float)((color & 255)) ) / ( (Float)(255) )));
HXLINE(  22)		return color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBPalette_obj,set_g,return )

int RGBPalette_obj::set_b(int color){
            	HX_STACKFRAME(&_hx_pos_41b97fe5a8880956_25_set_b)
HXLINE(  26)		this->b = color;
HXLINE(  27)		this->shader->b->value = ::Array_obj< Float >::__new(3)->init(0,(( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) )))->init(1,(( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) )))->init(2,(( (Float)((color & 255)) ) / ( (Float)(255) )));
HXLINE(  28)		return color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBPalette_obj,set_b,return )

Float RGBPalette_obj::set_mult(Float value){
            	HX_STACKFRAME(&_hx_pos_41b97fe5a8880956_31_set_mult)
HXLINE(  32)		this->mult = ::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),value));
HXLINE(  33)		this->shader->mult->value = ::Array_obj< Float >::__new(1)->init(0,this->mult);
HXLINE(  34)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RGBPalette_obj,set_mult,return )


::hx::ObjectPtr< RGBPalette_obj > RGBPalette_obj::__new() {
	::hx::ObjectPtr< RGBPalette_obj > __this = new RGBPalette_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RGBPalette_obj > RGBPalette_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RGBPalette_obj *__this = (RGBPalette_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RGBPalette_obj), true, "shaders.RGBPalette"));
	*(void **)__this = RGBPalette_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RGBPalette_obj::RGBPalette_obj()
{
}

void RGBPalette_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RGBPalette);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(mult,"mult");
	HX_MARK_END_CLASS();
}

void RGBPalette_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(mult,"mult");
}

::hx::Val RGBPalette_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return ::hx::Val( mult ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_r") ) { return ::hx::Val( set_r_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_g") ) { return ::hx::Val( set_g_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_b") ) { return ::hx::Val( set_b_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_mult") ) { return ::hx::Val( set_mult_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RGBPalette_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_r(inValue.Cast< int >()) );r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_g(inValue.Cast< int >()) );g=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_b(inValue.Cast< int >()) );b=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mult(inValue.Cast< Float >()) );mult=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::shaders::RGBPaletteShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RGBPalette_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("mult",f0,67,65,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RGBPalette_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::shaders::RGBPaletteShader */ ,(int)offsetof(RGBPalette_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsInt,(int)offsetof(RGBPalette_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsInt,(int)offsetof(RGBPalette_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsInt,(int)offsetof(RGBPalette_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RGBPalette_obj,mult),HX_("mult",f0,67,65,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RGBPalette_obj_sStaticStorageInfo = 0;
#endif

static ::String RGBPalette_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	HX_("mult",f0,67,65,48),
	HX_("set_r",55,9b,2f,7a),
	HX_("set_g",4a,9b,2f,7a),
	HX_("set_b",45,9b,2f,7a),
	HX_("set_mult",ed,7c,7d,76),
	::String(null()) };

::hx::Class RGBPalette_obj::__mClass;

void RGBPalette_obj::__register()
{
	RGBPalette_obj _hx_dummy;
	RGBPalette_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("shaders.RGBPalette",ce,91,0f,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RGBPalette_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RGBPalette_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RGBPalette_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RGBPalette_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace shaders
