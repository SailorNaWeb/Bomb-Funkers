#ifndef INCLUDED_flixel_input_touch_FlxTouch
#define INCLUDED_flixel_input_touch_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES FlxTouch_obj : public  ::flixel::input::FlxPointer_obj
{
	public:
		typedef  ::flixel::input::FlxPointer_obj super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();

	public:
		enum { _hx_ClassId = 0x4252a31e };

		void __construct(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< int >  __o_pointID,::hx::Null< Float >  __o_pressure);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.touch.FlxTouch")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.touch.FlxTouch"); }
		static ::hx::ObjectPtr< FlxTouch_obj > __new(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< int >  __o_pointID,::hx::Null< Float >  __o_pressure);
		static ::hx::ObjectPtr< FlxTouch_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< int >  __o_pointID,::hx::Null< Float >  __o_pressure);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTouch_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTouch",0d,22,0d,d1); }

		Float pressure;
		 ::flixel::input::FlxInput input;
		 ::openfl::geom::Point flashPoint;
		 ::flixel::math::FlxBasePoint justPressedPosition;
		int justPressedTimeInTicks;
		void destroy();
		::Dynamic destroy_dyn();

		void recycle(int x,int y,int pointID,Float pressure);
		::Dynamic recycle_dyn();

		void update();
		::Dynamic update_dyn();

		void setXY(int X,int Y);
		::Dynamic setXY_dyn();

		int get_touchPointID();
		::Dynamic get_touchPointID_dyn();

		bool get_justReleased();
		::Dynamic get_justReleased_dyn();

		bool get_released();
		::Dynamic get_released_dyn();

		bool get_pressed();
		::Dynamic get_pressed_dyn();

		bool get_justPressed();
		::Dynamic get_justPressed_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouch */ 
