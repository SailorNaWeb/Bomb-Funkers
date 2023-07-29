#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#define INCLUDED_haxe_exceptions_NotImplementedException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(haxe,exceptions,NotImplementedException)
HX_DECLARE_CLASS2(haxe,exceptions,PosException)

namespace haxe{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES NotImplementedException_obj : public  ::haxe::exceptions::PosException_obj
{
	public:
		typedef  ::haxe::exceptions::PosException_obj super;
		typedef NotImplementedException_obj OBJ_;
		NotImplementedException_obj();

	public:
		enum { _hx_ClassId = 0x081bdbd6 };

		void __construct(::String __o_message, ::haxe::Exception previous, ::Dynamic pos);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.exceptions.NotImplementedException")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.exceptions.NotImplementedException"); }
		static ::hx::ObjectPtr< NotImplementedException_obj > __new(::String __o_message, ::haxe::Exception previous, ::Dynamic pos);
		static ::hx::ObjectPtr< NotImplementedException_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_message, ::haxe::Exception previous, ::Dynamic pos);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NotImplementedException_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NotImplementedException",c0,57,2c,4a); }

};

} // end namespace haxe
} // end namespace exceptions

#endif /* INCLUDED_haxe_exceptions_NotImplementedException */ 
