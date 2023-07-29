#ifndef INCLUDED_flixel_input_gamepad_id_PSVitaID
#define INCLUDED_flixel_input_gamepad_id_PSVitaID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,PSVitaID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES PSVitaID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PSVitaID_obj OBJ_;
		PSVitaID_obj();

	public:
		enum { _hx_ClassId = 0x17fc0a6c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.PSVitaID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.PSVitaID"); }

		inline static ::hx::ObjectPtr< PSVitaID_obj > __new() {
			::hx::ObjectPtr< PSVitaID_obj > __this = new PSVitaID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PSVitaID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PSVitaID_obj *__this = (PSVitaID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PSVitaID_obj), false, "flixel.input.gamepad.id.PSVitaID"));
			*(void **)__this = PSVitaID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PSVitaID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PSVitaID",9e,b5,f3,7f); }

		static void __boot();
		static int X;
		static int CIRCLE;
		static int SQUARE;
		static int TRIANGLE;
		static int SELECT;
		static int START;
		static int L;
		static int R;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_PSVitaID */ 
