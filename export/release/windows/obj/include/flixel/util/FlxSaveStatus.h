#ifndef INCLUDED_flixel_util_FlxSaveStatus
#define INCLUDED_flixel_util_FlxSaveStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxSaveStatus)
namespace flixel{
namespace util{


class FlxSaveStatus_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxSaveStatus_obj OBJ_;

	public:
		FlxSaveStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.util.FlxSaveStatus",a7,aa,c7,52); }
		::String __ToString() const { return HX_("FlxSaveStatus.",cd,4b,96,ee) + _hx_tag; }

		static ::flixel::util::FlxSaveStatus BOUND(::String name,::String path);
		static ::Dynamic BOUND_dyn();
		static ::flixel::util::FlxSaveStatus EMPTY;
		static inline ::flixel::util::FlxSaveStatus EMPTY_dyn() { return EMPTY; }
		static ::flixel::util::FlxSaveStatus ERROR(::String msg);
		static ::Dynamic ERROR_dyn();
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxSaveStatus */ 
