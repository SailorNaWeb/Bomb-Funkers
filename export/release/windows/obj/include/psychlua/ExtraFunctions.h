#ifndef INCLUDED_psychlua_ExtraFunctions
#define INCLUDED_psychlua_ExtraFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(psychlua,ExtraFunctions)
HX_DECLARE_CLASS1(psychlua,FunkinLua)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES ExtraFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ExtraFunctions_obj OBJ_;
		ExtraFunctions_obj();

	public:
		enum { _hx_ClassId = 0x21cd1370 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="psychlua.ExtraFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"psychlua.ExtraFunctions"); }

		inline static ::hx::ObjectPtr< ExtraFunctions_obj > __new() {
			::hx::ObjectPtr< ExtraFunctions_obj > __this = new ExtraFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ExtraFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ExtraFunctions_obj *__this = (ExtraFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExtraFunctions_obj), false, "psychlua.ExtraFunctions"));
			*(void **)__this = ExtraFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ExtraFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ExtraFunctions",cb,11,c9,8a); }

		static void implement( ::psychlua::FunkinLua funk);
		static ::Dynamic implement_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_ExtraFunctions */ 
