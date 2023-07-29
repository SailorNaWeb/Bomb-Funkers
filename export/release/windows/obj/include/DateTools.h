#ifndef INCLUDED_DateTools
#define INCLUDED_DateTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(DateTools)



class HXCPP_CLASS_ATTRIBUTES DateTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DateTools_obj OBJ_;
		DateTools_obj();

	public:
		enum { _hx_ClassId = 0x58a1da2d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="DateTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"DateTools"); }

		inline static ::hx::ObjectPtr< DateTools_obj > __new() {
			::hx::ObjectPtr< DateTools_obj > __this = new DateTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DateTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DateTools_obj *__this = (DateTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DateTools_obj), false, "DateTools"));
			*(void **)__this = DateTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DateTools_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DateTools",ed,64,5e,95); }

};


#endif /* INCLUDED_DateTools */ 
