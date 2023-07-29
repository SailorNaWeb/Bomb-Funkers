#ifndef INCLUDED_hxcodec_vlc_Types
#define INCLUDED_hxcodec_vlc_Types

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxcodec,vlc,Types)

namespace hxcodec{
namespace vlc{


class HXCPP_CLASS_ATTRIBUTES Types_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Types_obj OBJ_;
		Types_obj();

	public:
		enum { _hx_ClassId = 0x3d0d1f52 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxcodec.vlc.Types")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxcodec.vlc.Types"); }

		inline static ::hx::ObjectPtr< Types_obj > __new() {
			::hx::ObjectPtr< Types_obj > __this = new Types_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Types_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Types_obj *__this = (Types_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Types_obj), false, "hxcodec.vlc.Types"));
			*(void **)__this = Types_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Types_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Types",59,e0,f8,ad); }

};

} // end namespace hxcodec
} // end namespace vlc

#endif /* INCLUDED_hxcodec_vlc_Types */ 
