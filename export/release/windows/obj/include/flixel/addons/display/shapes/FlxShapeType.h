#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeType
#define INCLUDED_flixel_addons_display_shapes_FlxShapeType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,display,shapes,FlxShapeType)
namespace flixel{
namespace addons{
namespace display{
namespace shapes{


class FlxShapeType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxShapeType_obj OBJ_;

	public:
		FlxShapeType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.display.shapes.FlxShapeType",30,c6,9e,b2); }
		::String __ToString() const { return HX_("FlxShapeType.",45,e0,63,2f) + _hx_tag; }

		static ::flixel::addons::display::shapes::FlxShapeType ARROW;
		static inline ::flixel::addons::display::shapes::FlxShapeType ARROW_dyn() { return ARROW; }
		static ::flixel::addons::display::shapes::FlxShapeType BOX;
		static inline ::flixel::addons::display::shapes::FlxShapeType BOX_dyn() { return BOX; }
		static ::flixel::addons::display::shapes::FlxShapeType CIRCLE;
		static inline ::flixel::addons::display::shapes::FlxShapeType CIRCLE_dyn() { return CIRCLE; }
		static ::flixel::addons::display::shapes::FlxShapeType CROSS;
		static inline ::flixel::addons::display::shapes::FlxShapeType CROSS_dyn() { return CROSS; }
		static ::flixel::addons::display::shapes::FlxShapeType DONUT;
		static inline ::flixel::addons::display::shapes::FlxShapeType DONUT_dyn() { return DONUT; }
		static ::flixel::addons::display::shapes::FlxShapeType DOUBLE_CIRCLE;
		static inline ::flixel::addons::display::shapes::FlxShapeType DOUBLE_CIRCLE_dyn() { return DOUBLE_CIRCLE; }
		static ::flixel::addons::display::shapes::FlxShapeType GRID;
		static inline ::flixel::addons::display::shapes::FlxShapeType GRID_dyn() { return GRID; }
		static ::flixel::addons::display::shapes::FlxShapeType LIGHTNING;
		static inline ::flixel::addons::display::shapes::FlxShapeType LIGHTNING_dyn() { return LIGHTNING; }
		static ::flixel::addons::display::shapes::FlxShapeType LINE;
		static inline ::flixel::addons::display::shapes::FlxShapeType LINE_dyn() { return LINE; }
		static ::flixel::addons::display::shapes::FlxShapeType SQUARE_DONUT;
		static inline ::flixel::addons::display::shapes::FlxShapeType SQUARE_DONUT_dyn() { return SQUARE_DONUT; }
		static ::flixel::addons::display::shapes::FlxShapeType UNKNOWN;
		static inline ::flixel::addons::display::shapes::FlxShapeType UNKNOWN_dyn() { return UNKNOWN; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes

#endif /* INCLUDED_flixel_addons_display_shapes_FlxShapeType */ 
