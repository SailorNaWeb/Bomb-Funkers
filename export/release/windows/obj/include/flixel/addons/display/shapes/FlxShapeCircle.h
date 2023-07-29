#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeCircle
#define INCLUDED_flixel_addons_display_shapes_FlxShapeCircle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#include <flixel/addons/display/shapes/FlxShape.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShape)
HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShapeCircle)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace flixel{
namespace addons{
namespace display{
namespace shapes{


class HXCPP_CLASS_ATTRIBUTES FlxShapeCircle_obj : public  ::flixel::addons::display::shapes::FlxShape_obj
{
	public:
		typedef  ::flixel::addons::display::shapes::FlxShape_obj super;
		typedef FlxShapeCircle_obj OBJ_;
		FlxShapeCircle_obj();

	public:
		enum { _hx_ClassId = 0x3f951c64 };

		void __construct(Float X,Float Y,Float Radius, ::Dynamic LineStyle_,int FillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.display.shapes.FlxShapeCircle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.display.shapes.FlxShapeCircle"); }
		static ::hx::ObjectPtr< FlxShapeCircle_obj > __new(Float X,Float Y,Float Radius, ::Dynamic LineStyle_,int FillColor);
		static ::hx::ObjectPtr< FlxShapeCircle_obj > __alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,Float Radius, ::Dynamic LineStyle_,int FillColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxShapeCircle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxShapeCircle",df,10,d7,46); }

		Float radius;
		void drawSpecificShape( ::openfl::geom::Matrix matrix);

		Float set_radius(Float r);
		::Dynamic set_radius_dyn();

		Float getStrokeOffsetX();

		Float getStrokeOffsetY();

		Float get_strokeBuffer();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes

#endif /* INCLUDED_flixel_addons_display_shapes_FlxShapeCircle */ 
