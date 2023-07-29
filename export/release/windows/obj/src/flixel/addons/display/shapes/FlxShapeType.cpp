#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeType
#include <flixel/addons/display/shapes/FlxShapeType.h>
#endif
namespace flixel{
namespace addons{
namespace display{
namespace shapes{

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::ARROW;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::BOX;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::CIRCLE;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::CROSS;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::DONUT;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::DOUBLE_CIRCLE;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::GRID;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::LIGHTNING;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::LINE;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::SQUARE_DONUT;

::flixel::addons::display::shapes::FlxShapeType FlxShapeType_obj::UNKNOWN;

bool FlxShapeType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ARROW",a9,b1,7d,a3)) { outValue = FlxShapeType_obj::ARROW; return true; }
	if (inName==HX_("BOX",eb,59,32,00)) { outValue = FlxShapeType_obj::BOX; return true; }
	if (inName==HX_("CIRCLE",10,1e,90,08)) { outValue = FlxShapeType_obj::CIRCLE; return true; }
	if (inName==HX_("CROSS",60,97,48,ca)) { outValue = FlxShapeType_obj::CROSS; return true; }
	if (inName==HX_("DONUT",82,c7,b2,5b)) { outValue = FlxShapeType_obj::DONUT; return true; }
	if (inName==HX_("DOUBLE_CIRCLE",be,cc,8b,af)) { outValue = FlxShapeType_obj::DOUBLE_CIRCLE; return true; }
	if (inName==HX_("GRID",c6,9e,2c,2f)) { outValue = FlxShapeType_obj::GRID; return true; }
	if (inName==HX_("LIGHTNING",ea,a8,a2,d2)) { outValue = FlxShapeType_obj::LIGHTNING; return true; }
	if (inName==HX_("LINE",f4,df,73,32)) { outValue = FlxShapeType_obj::LINE; return true; }
	if (inName==HX_("SQUARE_DONUT",20,8f,81,5e)) { outValue = FlxShapeType_obj::SQUARE_DONUT; return true; }
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) { outValue = FlxShapeType_obj::UNKNOWN; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxShapeType_obj)

int FlxShapeType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ARROW",a9,b1,7d,a3)) return 0;
	if (inName==HX_("BOX",eb,59,32,00)) return 1;
	if (inName==HX_("CIRCLE",10,1e,90,08)) return 2;
	if (inName==HX_("CROSS",60,97,48,ca)) return 3;
	if (inName==HX_("DONUT",82,c7,b2,5b)) return 4;
	if (inName==HX_("DOUBLE_CIRCLE",be,cc,8b,af)) return 5;
	if (inName==HX_("GRID",c6,9e,2c,2f)) return 6;
	if (inName==HX_("LIGHTNING",ea,a8,a2,d2)) return 7;
	if (inName==HX_("LINE",f4,df,73,32)) return 8;
	if (inName==HX_("SQUARE_DONUT",20,8f,81,5e)) return 9;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 10;
	return super::__FindIndex(inName);
}

int FlxShapeType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ARROW",a9,b1,7d,a3)) return 0;
	if (inName==HX_("BOX",eb,59,32,00)) return 0;
	if (inName==HX_("CIRCLE",10,1e,90,08)) return 0;
	if (inName==HX_("CROSS",60,97,48,ca)) return 0;
	if (inName==HX_("DONUT",82,c7,b2,5b)) return 0;
	if (inName==HX_("DOUBLE_CIRCLE",be,cc,8b,af)) return 0;
	if (inName==HX_("GRID",c6,9e,2c,2f)) return 0;
	if (inName==HX_("LIGHTNING",ea,a8,a2,d2)) return 0;
	if (inName==HX_("LINE",f4,df,73,32)) return 0;
	if (inName==HX_("SQUARE_DONUT",20,8f,81,5e)) return 0;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxShapeType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ARROW",a9,b1,7d,a3)) return ARROW;
	if (inName==HX_("BOX",eb,59,32,00)) return BOX;
	if (inName==HX_("CIRCLE",10,1e,90,08)) return CIRCLE;
	if (inName==HX_("CROSS",60,97,48,ca)) return CROSS;
	if (inName==HX_("DONUT",82,c7,b2,5b)) return DONUT;
	if (inName==HX_("DOUBLE_CIRCLE",be,cc,8b,af)) return DOUBLE_CIRCLE;
	if (inName==HX_("GRID",c6,9e,2c,2f)) return GRID;
	if (inName==HX_("LIGHTNING",ea,a8,a2,d2)) return LIGHTNING;
	if (inName==HX_("LINE",f4,df,73,32)) return LINE;
	if (inName==HX_("SQUARE_DONUT",20,8f,81,5e)) return SQUARE_DONUT;
	if (inName==HX_("UNKNOWN",6a,f7,4e,61)) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String FlxShapeType_obj_sStaticFields[] = {
	HX_("ARROW",a9,b1,7d,a3),
	HX_("BOX",eb,59,32,00),
	HX_("CIRCLE",10,1e,90,08),
	HX_("CROSS",60,97,48,ca),
	HX_("DONUT",82,c7,b2,5b),
	HX_("DOUBLE_CIRCLE",be,cc,8b,af),
	HX_("GRID",c6,9e,2c,2f),
	HX_("LIGHTNING",ea,a8,a2,d2),
	HX_("LINE",f4,df,73,32),
	HX_("SQUARE_DONUT",20,8f,81,5e),
	HX_("UNKNOWN",6a,f7,4e,61),
	::String(null())
};

::hx::Class FlxShapeType_obj::__mClass;

Dynamic __Create_FlxShapeType_obj() { return new FlxShapeType_obj; }

void FlxShapeType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.display.shapes.FlxShapeType",30,c6,9e,b2), ::hx::TCanCast< FlxShapeType_obj >,FlxShapeType_obj_sStaticFields,0,
	&__Create_FlxShapeType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxShapeType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxShapeType_obj::__GetStatic;
}

void FlxShapeType_obj::__boot()
{
ARROW = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("ARROW",a9,b1,7d,a3),0);
BOX = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("BOX",eb,59,32,00),1);
CIRCLE = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("CIRCLE",10,1e,90,08),2);
CROSS = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("CROSS",60,97,48,ca),3);
DONUT = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("DONUT",82,c7,b2,5b),4);
DOUBLE_CIRCLE = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("DOUBLE_CIRCLE",be,cc,8b,af),5);
GRID = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("GRID",c6,9e,2c,2f),6);
LIGHTNING = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("LIGHTNING",ea,a8,a2,d2),7);
LINE = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("LINE",f4,df,73,32),8);
SQUARE_DONUT = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("SQUARE_DONUT",20,8f,81,5e),9);
UNKNOWN = ::hx::CreateConstEnum< FlxShapeType_obj >(HX_("UNKNOWN",6a,f7,4e,61),10);
}


} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes
