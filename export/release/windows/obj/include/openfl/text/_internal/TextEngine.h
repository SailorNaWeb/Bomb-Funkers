#ifndef INCLUDED_openfl_text__internal_TextEngine
#define INCLUDED_openfl_text__internal_TextEngine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS3(openfl,text,_internal,ShapeCache)
HX_DECLARE_CLASS3(openfl,text,_internal,TextEngine)
HX_DECLARE_CLASS3(openfl,text,_internal,TextLayout)

namespace openfl{
namespace text{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES TextEngine_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextEngine_obj OBJ_;
		TextEngine_obj();

	public:
		enum { _hx_ClassId = 0x2dd5980a };

		void __construct( ::openfl::text::TextField textField);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text._internal.TextEngine")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.text._internal.TextEngine"); }
		static ::hx::ObjectPtr< TextEngine_obj > __new( ::openfl::text::TextField textField);
		static ::hx::ObjectPtr< TextEngine_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField textField);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextEngine_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextEngine",6f,cc,25,2a); }

		static void __boot();
		static  ::Dynamic __meta__;
		static int GUTTER;
		static int UTF8_TAB;
		static int UTF8_ENDLINE;
		static int UTF8_SPACE;
		static int UTF8_HYPHEN;
		static  ::haxe::ds::StringMap _hx___defaultFonts;
		static  ::openfl::text::Font findFont(::String name);
		static ::Dynamic findFont_dyn();

		static  ::openfl::text::Font findFontVariant( ::openfl::text::TextFormat format);
		static ::Dynamic findFontVariant_dyn();

		static  ::openfl::text::Font getDefaultFont(::String name,bool bold,bool italic);
		static ::Dynamic getDefaultFont_dyn();

		static Float getFormatHeight( ::openfl::text::TextFormat format);
		static ::Dynamic getFormatHeight_dyn();

		static ::String getFont( ::openfl::text::TextFormat format);
		static ::Dynamic getFont_dyn();

		static  ::openfl::text::Font getFontInstance( ::openfl::text::TextFormat format);
		static ::Dynamic getFontInstance_dyn();

		 ::Dynamic antiAliasType;
		 ::Dynamic autoSize;
		bool background;
		int backgroundColor;
		bool border;
		int borderColor;
		int bottomScrollV;
		 ::openfl::geom::Rectangle bounds;
		int caretIndex;
		bool embedFonts;
		 ::Dynamic gridFitType;
		Float height;
		 ::openfl::_Vector::ObjectVector layoutGroups;
		 ::openfl::_Vector::FloatVector lineAscents;
		 ::openfl::_Vector::IntVector lineBreaks;
		 ::openfl::_Vector::FloatVector lineDescents;
		 ::openfl::_Vector::FloatVector lineLeadings;
		 ::openfl::_Vector::FloatVector lineHeights;
		 ::openfl::_Vector::FloatVector lineWidths;
		int maxChars;
		int maxScrollH;
		int maxScrollV;
		bool multiline;
		int numLines;
		::String restrict;
		int scrollH;
		int scrollV;
		bool selectable;
		Float sharpness;
		::String text;
		 ::openfl::geom::Rectangle textBounds;
		Float textHeight;
		 ::openfl::_Vector::ObjectVector textFormatRanges;
		Float textWidth;
		 ::Dynamic type;
		Float width;
		bool wordWrap;
		 ::openfl::text::TextField textField;
		 ::haxe::Timer _hx___cursorTimer;
		bool _hx___hasFocus;
		bool _hx___isKeyDown;
		int _hx___measuredHeight;
		int _hx___measuredWidth;
		 ::EReg _hx___restrictRegexp;
		int _hx___selectionStart;
		 ::openfl::text::_internal::ShapeCache _hx___shapeCache;
		bool _hx___showCursor;
		 ::openfl::text::TextFormat _hx___textFormat;
		 ::openfl::text::_internal::TextLayout _hx___textLayout;
		 ::lime::graphics::opengl::GLObject _hx___texture;
		 ::Dynamic _hx___useIntAdvances;
		 ::Dynamic _hx___cairoFont;
		 ::openfl::text::Font _hx___font;
		 ::EReg createRestrictRegexp(::String restrict);
		::Dynamic createRestrictRegexp_dyn();

		void getBounds();
		::Dynamic getBounds_dyn();

		::String getLine(int index);
		::Dynamic getLine_dyn();

		void getLineBreaks();
		::Dynamic getLineBreaks_dyn();

		int getLineBreakIndex(::hx::Null< int >  startIndex);
		::Dynamic getLineBreakIndex_dyn();

		void getLineMeasurements();
		::Dynamic getLineMeasurements_dyn();

		void getLayoutGroups();
		::Dynamic getLayoutGroups_dyn();

		::String restrictText(::String value);
		::Dynamic restrictText_dyn();

		void setTextAlignment();
		::Dynamic setTextAlignment_dyn();

		::String trimText(::String value);
		::Dynamic trimText_dyn();

		void update();
		::Dynamic update_dyn();

		int get_bottomScrollV();
		::Dynamic get_bottomScrollV_dyn();

		int get_maxScrollV();
		::Dynamic get_maxScrollV_dyn();

		::String set_restrict(::String value);
		::Dynamic set_restrict_dyn();

		int get_scrollV();
		::Dynamic get_scrollV_dyn();

		int set_scrollV(int value);
		::Dynamic set_scrollV_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _internal

#endif /* INCLUDED_openfl_text__internal_TextEngine */ 
