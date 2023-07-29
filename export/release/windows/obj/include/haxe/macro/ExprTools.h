#ifndef INCLUDED_haxe_macro_ExprTools
#define INCLUDED_haxe_macro_ExprTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,ExprTools)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES ExprTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ExprTools_obj OBJ_;
		ExprTools_obj();

	public:
		enum { _hx_ClassId = 0x6f463860 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.macro.ExprTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.macro.ExprTools"); }

		inline static ::hx::ObjectPtr< ExprTools_obj > __new() {
			::hx::ObjectPtr< ExprTools_obj > __this = new ExprTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ExprTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ExprTools_obj *__this = (ExprTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExprTools_obj), false, "haxe.macro.ExprTools"));
			*(void **)__this = ExprTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ExprTools_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ExprTools",86,e4,25,18); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_ExprTools */ 
