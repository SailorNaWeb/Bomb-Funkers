#ifndef INCLUDED_openfl_display__internal_CanvasGraphics
#define INCLUDED_openfl_display__internal_CanvasGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,CanvasGraphics)
HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandBuffer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CanvasGraphics_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasGraphics_obj OBJ_;
		CanvasGraphics_obj();

	public:
		enum { _hx_ClassId = 0x1d4500f1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CanvasGraphics")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CanvasGraphics"); }

		inline static ::hx::ObjectPtr< CanvasGraphics_obj > __new() {
			::hx::ObjectPtr< CanvasGraphics_obj > __this = new CanvasGraphics_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasGraphics_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasGraphics_obj *__this = (CanvasGraphics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasGraphics_obj), false, "openfl.display._internal.CanvasGraphics"));
			*(void **)__this = CanvasGraphics_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasGraphics_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasGraphics",e3,35,d6,92); }

		static void __boot();
		static  ::Dynamic __meta__;
		static Float SIN45;
		static Float TAN22;
		static bool allowSmoothing;
		static  ::openfl::display::BitmapData bitmapFill;
		static  ::openfl::display::BitmapData bitmapStroke;
		static bool bitmapRepeat;
		static  ::openfl::geom::Rectangle bounds;
		static  ::openfl::display::_internal::DrawCommandBuffer fillCommands;
		static  ::openfl::display::Graphics graphics;
		static bool hasFill;
		static bool hasStroke;
		static bool hitTesting;
		static  ::openfl::geom::Matrix inversePendingMatrix;
		static  ::openfl::geom::Matrix pendingMatrix;
		static  ::openfl::display::_internal::DrawCommandBuffer strokeCommands;
		static  ::Dynamic windingRule;
		static Float worldAlpha;
		static void closePath(::hx::Null< bool >  strokeBefore);
		static ::Dynamic closePath_dyn();

		static  ::Dynamic createBitmapFill( ::openfl::display::BitmapData bitmap,bool bitmapRepeat,bool smooth);
		static ::Dynamic createBitmapFill_dyn();

		static void createGradientPattern( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		static ::Dynamic createGradientPattern_dyn();

		static void createTempPatternCanvas( ::openfl::display::BitmapData bitmap,bool repeat,int width,int height);
		static ::Dynamic createTempPatternCanvas_dyn();

		static void drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight);
		static ::Dynamic drawRoundRect_dyn();

		static void endFill();
		static ::Dynamic endFill_dyn();

		static void endStroke();
		static ::Dynamic endStroke_dyn();

		static bool hitTest( ::openfl::display::Graphics graphics,Float x,Float y);
		static ::Dynamic hitTest_dyn();

		static bool isCCW(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static ::Dynamic isCCW_dyn();

		static  ::Dynamic normalizeUVT( ::openfl::_Vector::FloatVector uvt,::hx::Null< bool >  skipT);
		static ::Dynamic normalizeUVT_dyn();

		static void playCommands( ::openfl::display::_internal::DrawCommandBuffer commands,::hx::Null< bool >  stroke);
		static ::Dynamic playCommands_dyn();

		static void render( ::openfl::display::Graphics graphics, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderMask( ::openfl::display::Graphics graphics, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderMask_dyn();

		static void setSmoothing(bool smooth);
		static ::Dynamic setSmoothing_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CanvasGraphics */ 
