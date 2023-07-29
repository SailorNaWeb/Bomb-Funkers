#ifndef INCLUDED_haxe_macro_MacroStringTools
#define INCLUDED_haxe_macro_MacroStringTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,MacroStringTools)

namespace haxe{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES MacroStringTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MacroStringTools_obj OBJ_;
		MacroStringTools_obj();

	public:
		enum { _hx_ClassId = 0x17cca664 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.macro.MacroStringTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.macro.MacroStringTools"); }

		inline static ::hx::ObjectPtr< MacroStringTools_obj > __new() {
			::hx::ObjectPtr< MacroStringTools_obj > __this = new MacroStringTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MacroStringTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MacroStringTools_obj *__this = (MacroStringTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MacroStringTools_obj), false, "haxe.macro.MacroStringTools"));
			*(void **)__this = MacroStringTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MacroStringTools_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MacroStringTools",fe,6a,f7,3a); }

};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_MacroStringTools */ 
