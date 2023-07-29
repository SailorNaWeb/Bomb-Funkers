#ifndef INCLUDED_flixel_addons_ui_FlxUITooltipManager
#define INCLUDED_flixel_addons_ui_FlxUITooltipManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,Anchor)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISubState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITooltip)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITooltipManager)
HX_DECLARE_CLASS4(flixel,addons,ui,_FlxUITooltipManager,FlxUITooltipEntry)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUITooltipManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxUITooltipManager_obj OBJ_;
		FlxUITooltipManager_obj();

	public:
		enum { _hx_ClassId = 0x5beea589 };

		void __construct( ::flixel::addons::ui::FlxUIState State, ::flixel::addons::ui::FlxUISubState SubState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUITooltipManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUITooltipManager"); }
		static ::hx::ObjectPtr< FlxUITooltipManager_obj > __new( ::flixel::addons::ui::FlxUIState State, ::flixel::addons::ui::FlxUISubState SubState);
		static ::hx::ObjectPtr< FlxUITooltipManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::ui::FlxUIState State, ::flixel::addons::ui::FlxUISubState SubState);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUITooltipManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUITooltipManager",70,8d,d7,b1); }

		bool autoFlipAnchor;
		 ::flixel::addons::ui::Anchor defaultAnchor;
		 ::Dynamic fixedPosition;
		 ::Dynamic defaultStyle;
		bool showOnClick;
		Float delay;
		bool showTooltipArrow;
		::Array< ::Dynamic> cameras;
		void init();
		::Dynamic init_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void clear();
		::Dynamic clear_dyn();

		void hideCurrent();
		::Dynamic hideCurrent_dyn();

		bool isVisible();
		::Dynamic isVisible_dyn();

		bool doesCurrentTooltipBelongTo( ::flixel::FlxSprite thing,::hx::Null< bool >  checkChildren);
		::Dynamic doesCurrentTooltipBelongTo_dyn();

		void stickyTooltipFor( ::flixel::FlxObject thing,::hx::Null< bool >  sticky);
		::Dynamic stickyTooltipFor_dyn();

		void showTooltipFor( ::flixel::FlxObject thing,::hx::Null< bool >  value);
		::Dynamic showTooltipFor_dyn();

		bool enableTooltipFor( ::flixel::FlxObject thing,bool enabled);
		::Dynamic enableTooltipFor_dyn();

		void add( ::flixel::FlxObject thing, ::Dynamic data);
		::Dynamic add_dyn();

		void remove( ::flixel::FlxObject thing);
		::Dynamic remove_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		bool _init;
		::Array< ::Dynamic> list;
		 ::flixel::addons::ui::FlxUITooltip tooltip;
		int current;
		 ::flixel::math::FlxBasePoint lastPosition;
		 ::flixel::addons::ui::FlxUIState state;
		 ::flixel::addons::ui::FlxUISubState subState;
		void hide(int i);
		::Dynamic hide_dyn();

		int findThing( ::flixel::FlxObject thing);
		::Dynamic findThing_dyn();

		int findBtn(::Dynamic btn);
		::Dynamic findBtn_dyn();

		int findObj( ::flixel::FlxObject obj);
		::Dynamic findObj_dyn();

		 ::Dynamic set_fixedPosition( ::Dynamic value);
		::Dynamic set_fixedPosition_dyn();

		bool set_showTooltipArrow(bool b);
		::Dynamic set_showTooltipArrow_dyn();

		void show(int i);
		::Dynamic show_dyn();

		bool checkAutoFlip( ::flixel::addons::ui::FlxUITooltip tooltip, ::flixel::addons::ui::Anchor anchor);
		::Dynamic checkAutoFlip_dyn();

		::Array< ::Dynamic> set_cameras(::Array< ::Dynamic> value);
		::Dynamic set_cameras_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITooltipManager */ 
