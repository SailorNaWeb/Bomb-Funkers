#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#define INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_TextFormatAlign,TextFormatAlign_Impl_)

namespace openfl{
namespace text{
namespace _TextFormatAlign{


class HXCPP_CLASS_ATTRIBUTES TextFormatAlign_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextFormatAlign_Impl__obj OBJ_;
		TextFormatAlign_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1337de42 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text._TextFormatAlign.TextFormatAlign_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text._TextFormatAlign.TextFormatAlign_Impl_"); }

		inline static ::hx::ObjectPtr< TextFormatAlign_Impl__obj > __new() {
			::hx::ObjectPtr< TextFormatAlign_Impl__obj > __this = new TextFormatAlign_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextFormatAlign_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextFormatAlign_Impl__obj *__this = (TextFormatAlign_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFormatAlign_Impl__obj), false, "openfl.text._TextFormatAlign.TextFormatAlign_Impl_"));
			*(void **)__this = TextFormatAlign_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFormatAlign_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFormatAlign_Impl_",a1,7b,66,91); }

		static void __boot();
		static  ::Dynamic CENTER;
		static  ::Dynamic END;
		static  ::Dynamic JUSTIFY;
		static  ::Dynamic LEFT;
		static  ::Dynamic RIGHT;
		static  ::Dynamic START;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _TextFormatAlign

#endif /* INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_ */ 
