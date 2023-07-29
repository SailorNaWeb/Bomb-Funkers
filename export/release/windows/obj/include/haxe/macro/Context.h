#ifndef INCLUDED_haxe_macro_Context
#define INCLUDED_haxe_macro_Context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Context)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES Context_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context_obj OBJ_;
		Context_obj();

	public:
		enum { _hx_ClassId = 0x08670b81 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.macro.Context")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.macro.Context"); }

		inline static ::hx::ObjectPtr< Context_obj > __new() {
			::hx::ObjectPtr< Context_obj > __this = new Context_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context_obj *__this = (Context_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context_obj), false, "haxe.macro.Context"));
			*(void **)__this = Context_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context",cf,bd,c8,e6); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Context */ 
