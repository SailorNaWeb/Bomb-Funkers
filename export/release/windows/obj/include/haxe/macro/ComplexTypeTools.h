#ifndef INCLUDED_haxe_macro_ComplexTypeTools
#define INCLUDED_haxe_macro_ComplexTypeTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ComplexTypeTools)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES ComplexTypeTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ComplexTypeTools_obj OBJ_;
		ComplexTypeTools_obj();

	public:
		enum { _hx_ClassId = 0x31d23837 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.macro.ComplexTypeTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.macro.ComplexTypeTools"); }

		inline static ::hx::ObjectPtr< ComplexTypeTools_obj > __new() {
			::hx::ObjectPtr< ComplexTypeTools_obj > __this = new ComplexTypeTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ComplexTypeTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ComplexTypeTools_obj *__this = (ComplexTypeTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComplexTypeTools_obj), false, "haxe.macro.ComplexTypeTools"));
			*(void **)__this = ComplexTypeTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComplexTypeTools_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComplexTypeTools",d1,fc,fc,54); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ComplexTypeTools */ 
