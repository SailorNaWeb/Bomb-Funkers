#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#define INCLUDED_flixel_text__FlxText_FlxTextFormatRange

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,text,FlxTextFormat)
HX_DECLARE_CLASS3(flixel,text,_FlxText,FlxTextFormatRange)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxRange)

namespace flixel{
namespace text{
namespace _FlxText{


class HXCPP_CLASS_ATTRIBUTES FlxTextFormatRange_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTextFormatRange_obj OBJ_;
		FlxTextFormatRange_obj();

	public:
		enum { _hx_ClassId = 0x176e93f4 };

		void __construct( ::flixel::text::FlxTextFormat format,int start,int end);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.text._FlxText.FlxTextFormatRange")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.text._FlxText.FlxTextFormatRange"); }
		static ::hx::ObjectPtr< FlxTextFormatRange_obj > __new( ::flixel::text::FlxTextFormat format,int start,int end);
		static ::hx::ObjectPtr< FlxTextFormatRange_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::text::FlxTextFormat format,int start,int end);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTextFormatRange_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTextFormatRange",27,97,19,54); }

		 ::flixel::util::helpers::FlxRange range;
		 ::flixel::text::FlxTextFormat format;
};

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText

#endif /* INCLUDED_flixel_text__FlxText_FlxTextFormatRange */ 
