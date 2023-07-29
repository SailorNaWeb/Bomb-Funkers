#ifndef INCLUDED_psychlua_ShaderFunctions
#define INCLUDED_psychlua_ShaderFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,display,FlxRuntimeShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(psychlua,FunkinLua)
HX_DECLARE_CLASS1(psychlua,ShaderFunctions)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES ShaderFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderFunctions_obj OBJ_;
		ShaderFunctions_obj();

	public:
		enum { _hx_ClassId = 0x6c3c4af5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="psychlua.ShaderFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"psychlua.ShaderFunctions"); }

		inline static ::hx::ObjectPtr< ShaderFunctions_obj > __new() {
			::hx::ObjectPtr< ShaderFunctions_obj > __this = new ShaderFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ShaderFunctions_obj *__this = (ShaderFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderFunctions_obj), false, "psychlua.ShaderFunctions"));
			*(void **)__this = ShaderFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderFunctions",56,a6,74,4f); }

		static void implement( ::psychlua::FunkinLua funk);
		static ::Dynamic implement_dyn();

		static  ::flixel::addons::display::FlxRuntimeShader getShader(::String obj);
		static ::Dynamic getShader_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_ShaderFunctions */ 
