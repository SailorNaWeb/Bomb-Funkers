#ifndef INCLUDED_psychlua_CallbackHandler
#define INCLUDED_psychlua_CallbackHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(psychlua,CallbackHandler)

namespace psychlua{


class HXCPP_CLASS_ATTRIBUTES CallbackHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CallbackHandler_obj OBJ_;
		CallbackHandler_obj();

	public:
		enum { _hx_ClassId = 0x588512e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="psychlua.CallbackHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"psychlua.CallbackHandler"); }

		inline static ::hx::ObjectPtr< CallbackHandler_obj > __new() {
			::hx::ObjectPtr< CallbackHandler_obj > __this = new CallbackHandler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CallbackHandler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CallbackHandler_obj *__this = (CallbackHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallbackHandler_obj), false, "psychlua.CallbackHandler"));
			*(void **)__this = CallbackHandler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CallbackHandler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallbackHandler",65,38,73,ab); }

		static int call( cpp::Reference<lua_State> l,::String fname);
		static ::Dynamic call_dyn();

};

} // end namespace psychlua

#endif /* INCLUDED_psychlua_CallbackHandler */ 
