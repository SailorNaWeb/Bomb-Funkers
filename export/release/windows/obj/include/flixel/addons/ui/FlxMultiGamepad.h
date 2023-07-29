#ifndef INCLUDED_flixel_addons_ui_FlxMultiGamepad
#define INCLUDED_flixel_addons_ui_FlxMultiGamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxBaseMultiInput
#include <flixel/addons/ui/FlxBaseMultiInput.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,ui,FlxBaseMultiInput)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxMultiGamepad)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxMultiGamepad_obj : public  ::flixel::addons::ui::FlxBaseMultiInput_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxBaseMultiInput_obj super;
		typedef FlxMultiGamepad_obj OBJ_;
		FlxMultiGamepad_obj();

	public:
		enum { _hx_ClassId = 0x60c98233 };

		void __construct( ::flixel::input::gamepad::FlxGamepad Gamepad,int Input,::Array< int > Combos,::Array< int > Forbiddens);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxMultiGamepad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxMultiGamepad"); }
		static ::hx::ObjectPtr< FlxMultiGamepad_obj > __new( ::flixel::input::gamepad::FlxGamepad Gamepad,int Input,::Array< int > Combos,::Array< int > Forbiddens);
		static ::hx::ObjectPtr< FlxMultiGamepad_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad Gamepad,int Input,::Array< int > Combos,::Array< int > Forbiddens);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMultiGamepad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxMultiGamepad",9a,aa,b8,bd); }

		 ::flixel::input::gamepad::FlxGamepad gamepad;
		virtual void destroy();

		virtual bool checkJustPressed();

		virtual bool checkJustReleased();

		virtual bool checkPressed();

		virtual bool checkCombos(bool value);

		virtual bool checkForbiddens(bool value);

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxMultiGamepad */ 
