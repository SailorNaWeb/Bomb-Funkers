#ifndef INCLUDED_flixel_addons_ui_FlxUIPopup
#define INCLUDED_flixel_addons_ui_FlxUIPopup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUISubState
#include <flixel/addons/ui/FlxUISubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIPopup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISubState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIPopup_obj : public  ::flixel::addons::ui::FlxUISubState_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUISubState_obj super;
		typedef FlxUIPopup_obj OBJ_;
		FlxUIPopup_obj();

	public:
		enum { _hx_ClassId = 0x662f0fc9 };

		void __construct( ::Dynamic BGColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIPopup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIPopup"); }
		static ::hx::ObjectPtr< FlxUIPopup_obj > __new( ::Dynamic BGColor);
		static ::hx::ObjectPtr< FlxUIPopup_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIPopup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUIPopup",26,d1,4a,ba); }

		static void __boot();
		static ::String CLICK_EVENT;
		::String name;
		bool broadcastToFlxUI;
		bool immovable;
		bool set_immovable(bool Immovable);
		::Dynamic set_immovable_dyn();

		Float angle;
		int facing;
		bool moves;
		 ::flixel::math::FlxBasePoint offset;
		 ::flixel::math::FlxBasePoint origin;
		 ::flixel::math::FlxBasePoint scale;
		 ::flixel::math::FlxBasePoint velocity;
		 ::flixel::math::FlxBasePoint maxVelocity;
		 ::flixel::math::FlxBasePoint acceleration;
		 ::flixel::math::FlxBasePoint drag;
		 ::flixel::math::FlxBasePoint scrollFactor;
		Float set_x(Float Value);
		::Dynamic set_x_dyn();

		Float set_y(Float Value);
		::Dynamic set_y_dyn();

		Float get_width();
		::Dynamic get_width_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float set_width(Float Value);
		::Dynamic set_width_dyn();

		Float set_height(Float Value);
		::Dynamic set_height_dyn();

		Float set_angle(Float Value);
		::Dynamic set_angle_dyn();

		Float set_alpha(Float Value);
		::Dynamic set_alpha_dyn();

		int set_facing(int Value);
		::Dynamic set_facing_dyn();

		bool set_moves(bool Value);
		::Dynamic set_moves_dyn();

		 ::flixel::math::FlxBasePoint set_offset( ::flixel::math::FlxBasePoint Value);
		::Dynamic set_offset_dyn();

		 ::flixel::math::FlxBasePoint set_origin( ::flixel::math::FlxBasePoint Value);
		::Dynamic set_origin_dyn();

		 ::flixel::math::FlxBasePoint set_scale( ::flixel::math::FlxBasePoint Value);
		::Dynamic set_scale_dyn();

		 ::flixel::math::FlxBasePoint set_scrollFactor( ::flixel::math::FlxBasePoint Value);
		::Dynamic set_scrollFactor_dyn();

		void reset(Float X,Float Y);
		::Dynamic reset_dyn();

		void setPosition(::hx::Null< Float >  X,::hx::Null< Float >  Y);
		::Dynamic setPosition_dyn();

		Float x;
		Float y;
		::cpp::VirtualArray params;
		Float alpha;
		Float _width;
		Float _height;
		void create();

		void quickSetup(::String title,::String body,::Array< ::String > button_labels);
		::Dynamic quickSetup_dyn();

		void getEvent(::String id,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray eventParams);

		::Dynamic castParent();
		::Dynamic castParent_dyn();

		 ::Dynamic _quickSetupParams;
		::String myGetTextFallback(::String flag,::String context,::hx::Null< bool >  safe);
		::Dynamic myGetTextFallback_dyn();

		void _doQuickSetup();
		::Dynamic _doQuickSetup_dyn();

		void _doQuickSetupButtons();
		::Dynamic _doQuickSetupButtons_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIPopup */ 
