#ifndef INCLUDED_openfl_filters_ShaderFilter
#define INCLUDED_openfl_filters_ShaderFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,ShaderFilter)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES ShaderFilter_obj : public  ::openfl::filters::BitmapFilter_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilter_obj super;
		typedef ShaderFilter_obj OBJ_;
		ShaderFilter_obj();

	public:
		enum { _hx_ClassId = 0x7f1ab084 };

		void __construct( ::openfl::display::Shader shader);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.ShaderFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters.ShaderFilter"); }
		static ::hx::ObjectPtr< ShaderFilter_obj > __new( ::openfl::display::Shader shader);
		static ::hx::ObjectPtr< ShaderFilter_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Shader shader);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderFilter",dd,08,30,bd); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::Dynamic blendMode;
		 ::openfl::display::Shader shader;
		 ::openfl::filters::BitmapFilter clone();

		void invalidate();
		::Dynamic invalidate_dyn();

		int get_topExtension();
		::Dynamic get_topExtension_dyn();

		int set_topExtension(int value);
		::Dynamic set_topExtension_dyn();

		int get_bottomExtension();
		::Dynamic get_bottomExtension_dyn();

		int set_bottomExtension(int value);
		::Dynamic set_bottomExtension_dyn();

		int get_leftExtension();
		::Dynamic get_leftExtension_dyn();

		int set_leftExtension(int value);
		::Dynamic set_leftExtension_dyn();

		int get_rightExtension();
		::Dynamic get_rightExtension_dyn();

		int set_rightExtension(int value);
		::Dynamic set_rightExtension_dyn();

		 ::openfl::display::Shader _hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData);

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_ShaderFilter */ 
