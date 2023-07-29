#ifndef INCLUDED_haxe_macro_Compiler
#define INCLUDED_haxe_macro_Compiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,Compiler)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES Compiler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Compiler_obj OBJ_;
		Compiler_obj();

	public:
		enum { _hx_ClassId = 0x39834d41 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.macro.Compiler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.macro.Compiler"); }

		inline static ::hx::ObjectPtr< Compiler_obj > __new() {
			::hx::ObjectPtr< Compiler_obj > __this = new Compiler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Compiler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Compiler_obj *__this = (Compiler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Compiler_obj), false, "haxe.macro.Compiler"));
			*(void **)__this = Compiler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Compiler_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Compiler",bf,5b,83,57); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_Compiler */ 
