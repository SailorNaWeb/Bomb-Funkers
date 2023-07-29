#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8344d6e231fc33c4_33_new,"flixel.addons.ui.FlxUIButton","new",0x9a0e8c99,"flixel.addons.ui.FlxUIButton.new","flixel/addons/ui/FlxUIButton.hx",33,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_107_setLabelFormat,"flixel.addons.ui.FlxUIButton","setLabelFormat",0xd4f36830,"flixel.addons.ui.FlxUIButton.setLabelFormat","flixel/addons/ui/FlxUIButton.hx",107,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_125_autoCenterLabel,"flixel.addons.ui.FlxUIButton","autoCenterLabel",0xdc3a6269,"flixel.addons.ui.FlxUIButton.autoCenterLabel","flixel/addons/ui/FlxUIButton.hx",125,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_129_clone,"flixel.addons.ui.FlxUIButton","clone",0xd3700fd6,"flixel.addons.ui.FlxUIButton.clone","flixel/addons/ui/FlxUIButton.hx",129,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_137_copyStyle,"flixel.addons.ui.FlxUIButton","copyStyle",0xb0cff635,"flixel.addons.ui.FlxUIButton.copyStyle","flixel/addons/ui/FlxUIButton.hx",137,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_172_setLabel,"flixel.addons.ui.FlxUIButton","setLabel",0x4416cc19,"flixel.addons.ui.FlxUIButton.setLabel","flixel/addons/ui/FlxUIButton.hx",172,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_179_getLabel,"flixel.addons.ui.FlxUIButton","getLabel",0x95b972a5,"flixel.addons.ui.FlxUIButton.getLabel","flixel/addons/ui/FlxUIButton.hx",179,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_185_resize,"flixel.addons.ui.FlxUIButton","resize",0x28cb475b,"flixel.addons.ui.FlxUIButton.resize","flixel/addons/ui/FlxUIButton.hx",185,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_189_addIcon,"flixel.addons.ui.FlxUIButton","addIcon",0xa78ff6f3,"flixel.addons.ui.FlxUIButton.addIcon","flixel/addons/ui/FlxUIButton.hx",189,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_224_removeIcon,"flixel.addons.ui.FlxUIButton","removeIcon",0xfc624ec4,"flixel.addons.ui.FlxUIButton.removeIcon","flixel/addons/ui/FlxUIButton.hx",224,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_238_changeIcon,"flixel.addons.ui.FlxUIButton","changeIcon",0x598c49f0,"flixel.addons.ui.FlxUIButton.changeIcon","flixel/addons/ui/FlxUIButton.hx",238,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_244_destroy,"flixel.addons.ui.FlxUIButton","destroy",0x4a25f9b3,"flixel.addons.ui.FlxUIButton.destroy","flixel/addons/ui/FlxUIButton.hx",244,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_251_loadDefaultGraphic,"flixel.addons.ui.FlxUIButton","loadDefaultGraphic",0xa27a0494,"flixel.addons.ui.FlxUIButton.loadDefaultGraphic","flixel/addons/ui/FlxUIButton.hx",251,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_259_resetHelpers,"flixel.addons.ui.FlxUIButton","resetHelpers",0x11dffddd,"flixel.addons.ui.FlxUIButton.resetHelpers","flixel/addons/ui/FlxUIButton.hx",259,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_271_onDownHandler,"flixel.addons.ui.FlxUIButton","onDownHandler",0x9da54a22,"flixel.addons.ui.FlxUIButton.onDownHandler","flixel/addons/ui/FlxUIButton.hx",271,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_301_onOverHandler,"flixel.addons.ui.FlxUIButton","onOverHandler",0x790d9370,"flixel.addons.ui.FlxUIButton.onOverHandler","flixel/addons/ui/FlxUIButton.hx",301,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_331_onOutHandler,"flixel.addons.ui.FlxUIButton","onOutHandler",0x7e879b82,"flixel.addons.ui.FlxUIButton.onOutHandler","flixel/addons/ui/FlxUIButton.hx",331,0xbb6c9298)
HX_LOCAL_STACK_FRAME(_hx_pos_8344d6e231fc33c4_361_onUpHandler,"flixel.addons.ui.FlxUIButton","onUpHandler",0xc867c2c9,"flixel.addons.ui.FlxUIButton.onUpHandler","flixel/addons/ui/FlxUIButton.hx",361,0xbb6c9298)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIButton_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Label, ::Dynamic OnClick, ::Dynamic __o_LoadDefaultGraphics, ::Dynamic __o_LoadBlank, ::Dynamic __o_Color){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		 ::Dynamic LoadDefaultGraphics = __o_LoadDefaultGraphics;
            		if (::hx::IsNull(__o_LoadDefaultGraphics)) LoadDefaultGraphics = true;
            		 ::Dynamic LoadBlank = __o_LoadBlank;
            		if (::hx::IsNull(__o_LoadBlank)) LoadBlank = false;
            		 ::Dynamic Color = __o_Color;
            		if (::hx::IsNull(__o_Color)) Color = -1;
            	HX_GC_STACKFRAME(&_hx_pos_8344d6e231fc33c4_33_new)
HXLINE(  43)		this->down_toggle_style = null();
HXLINE(  42)		this->over_toggle_style = null();
HXLINE(  41)		this->up_toggle_style = null();
HXLINE(  39)		this->down_style = null();
HXLINE(  38)		this->over_style = null();
HXLINE(  37)		this->up_style = null();
HXLINE(  58)		super::__construct(X,Y,OnClick);
HXLINE(  59)		this->set_color(( (int)(Color) ));
HXLINE(  60)		if (::hx::IsNotNull( Label )) {
HXLINE(  63)			this->set_label( ::flixel::addons::ui::FlxUIText_obj::__alloc( HX_CTX ,0,0,80,Label,8,null()));
HXLINE(  64)			( ( ::flixel::text::FlxText)(this->label) )->setFormat(null(),8,3355443,HX_("center",d5,25,db,05),null(),null(),null());
            		}
HXLINE(  67)		if (( (bool)(LoadBlank) )) {
HXLINE(  69)			this->_no_graphic = true;
            		}
HXLINE(  72)		if (( (bool)(LoadDefaultGraphics) )) {
HXLINE(  74)			Float _hx_tmp = this->get_width();
HXDLIN(  74)			this->resize(_hx_tmp,this->get_height());
            		}
            		else {
HXLINE(  78)			if ((this->_no_graphic == false)) {
HXLINE(  80)				Float _hx_tmp = this->get_width();
HXDLIN(  80)				this->doResize(_hx_tmp,this->get_height(),false);
            			}
            			else {
HXLINE(  87)				Float _hx_tmp = this->get_width();
HXDLIN(  87)				this->doResize(_hx_tmp,this->get_height(),true);
            			}
            		}
            	}

Dynamic FlxUIButton_obj::__CreateEmpty() { return new FlxUIButton_obj; }

void *FlxUIButton_obj::_hx_vtable = 0;

Dynamic FlxUIButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIButton_obj > _hx_result = new FlxUIButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool FlxUIButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x2a6d0b59) {
			if (inClassId<=(int)0x028d8cd1) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x028d8cd1;
			} else {
				return inClassId==(int)0x2a6d0b59;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x6b3699ba || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

static ::flixel::addons::ui::interfaces::IFlxUIButton_obj _hx_flixel_addons_ui_FlxUIButton__hx_flixel_addons_ui_interfaces_IFlxUIButton= {
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::destroy,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_toggled,
	(  ::flixel::FlxSprite (::hx::Object::*)( ::flixel::FlxSprite))&::flixel::addons::ui::FlxUIButton_obj::set_toggle_label,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::get_justMousedOver,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::get_mouseIsOver,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::get_mouseIsOut,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::get_justMousedOut,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIButton_obj::set_status,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::autoCenterLabel,
	( void (::hx::Object::*)(::cpp::VirtualArray,::hx::Null< int > ,::hx::Null< int > ,::Array< ::Dynamic>,::hx::Null< int > ,::hx::Null< Float > ,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< int > ,::Array< int >))&::flixel::addons::ui::FlxUIButton_obj::loadGraphicSlice9,
	( void (::hx::Object::*)(::cpp::VirtualArray,::String))&::flixel::addons::ui::FlxUIButton_obj::loadGraphicsMultiple,
	( void (::hx::Object::*)( ::Dynamic,::hx::Null< bool > ,::String))&::flixel::addons::ui::FlxUIButton_obj::loadGraphicsUpOverDown,
	( void (::hx::Object::*)(::String))&::flixel::addons::ui::FlxUIButton_obj::forceStateHandler,
};

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUIButton__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIButton_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIButton_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIButton_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUIButton__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::toString,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_ui_FlxUIButton__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::destroy,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUIButton__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIButton_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIButton_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIButton_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIButton_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIButton_obj::set_height,
};

static ::flixel::addons::ui::interfaces::ILabeled_obj _hx_flixel_addons_ui_FlxUIButton__hx_flixel_addons_ui_interfaces_ILabeled= {
	(  ::flixel::addons::ui::FlxUIText (::hx::Object::*)())&::flixel::addons::ui::FlxUIButton_obj::getLabel,
	(  ::flixel::addons::ui::FlxUIText (::hx::Object::*)( ::flixel::addons::ui::FlxUIText))&::flixel::addons::ui::FlxUIButton_obj::setLabel,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUIButton__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUIButton_obj::set_params,
};

void *FlxUIButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x2772d80c: return &_hx_flixel_addons_ui_FlxUIButton__hx_flixel_addons_ui_interfaces_IFlxUIButton;
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUIButton__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUIButton__hx_flixel_IFlxBasic;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_ui_FlxUIButton__hx_flixel_util_IFlxDestroyable;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUIButton__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0xa7145b87: return &_hx_flixel_addons_ui_FlxUIButton__hx_flixel_addons_ui_interfaces_ILabeled;
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUIButton__hx_flixel_addons_ui_interfaces_IHasParams;
	}
	return super::_hx_getInterface(inHash);
}

 ::flixel::text::FlxText FlxUIButton_obj::setLabelFormat(::String Font,::hx::Null< int >  __o_Size,::hx::Null< int >  __o_Color,::String Alignment, ::flixel::text::FlxTextBorderStyle BorderStyle,::hx::Null< int >  __o_BorderColor,::hx::Null< bool >  __o_Embedded){
            		int Size = __o_Size.Default(8);
            		int Color = __o_Color.Default(-1);
            		int BorderColor = __o_BorderColor.Default(0);
            		bool Embedded = __o_Embedded.Default(true);
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_107_setLabelFormat)
HXLINE( 108)		if (::hx::IsNotNull( this->label )) {
HXLINE( 110)			( ( ::flixel::text::FlxText)(this->label) )->setFormat(Font,Size,Color,Alignment,BorderStyle,BorderColor,Embedded);
HXLINE( 118)			return ( ( ::flixel::text::FlxText)(this->label) );
            		}
HXLINE( 120)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxUIButton_obj,setLabelFormat,return )

void FlxUIButton_obj::autoCenterLabel(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_125_autoCenterLabel)
HXDLIN( 125)		this->super::autoCenterLabel();
            	}


 ::flixel::FlxSprite FlxUIButton_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_8344d6e231fc33c4_129_clone)
HXLINE( 130)		::String newButton;
HXDLIN( 130)		if (::hx::IsNull( this->label )) {
HXLINE( 130)			newButton = null();
            		}
            		else {
HXLINE( 130)			newButton = ( ( ::flixel::text::FlxText)(this->label) )->text;
            		}
HXDLIN( 130)		 ::flixel::addons::ui::FlxUIButton newButton1 =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,newButton,this->onUp->callback,false,null(),null());
HXLINE( 131)		newButton1->copyGraphic(( ( ::flixel::addons::ui::FlxUITypedButton)(::hx::ObjectPtr<OBJ_>(this)) ));
HXLINE( 132)		newButton1->copyStyle(( ( ::flixel::addons::ui::FlxUITypedButton)(::hx::ObjectPtr<OBJ_>(this)) ));
HXLINE( 133)		return newButton1;
            	}


void FlxUIButton_obj::copyStyle( ::flixel::addons::ui::FlxUITypedButton other){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_137_copyStyle)
HXLINE( 138)		this->super::copyStyle(other);
HXLINE( 139)		if (::Std_obj::isOfType(other,::hx::ClassOf< ::flixel::addons::ui::FlxUIButton >())) {
HXLINE( 141)			 ::flixel::addons::ui::FlxUIButton fuib = ( ( ::flixel::addons::ui::FlxUIButton)(other) );
HXLINE( 143)			this->up_style = fuib->up_style;
HXLINE( 144)			this->over_style = fuib->over_style;
HXLINE( 145)			this->down_style = fuib->down_style;
HXLINE( 147)			this->up_toggle_style = fuib->up_toggle_style;
HXLINE( 148)			this->over_toggle_style = fuib->over_toggle_style;
HXLINE( 149)			this->down_toggle_style = fuib->down_toggle_style;
HXLINE( 151)			 ::flixel::addons::ui::FlxUIText t = ( ( ::flixel::addons::ui::FlxUIText)(fuib->label) );
HXLINE( 153)			 ::openfl::text::TextFormat tf = t->textField->get_defaultTextFormat();
HXLINE( 155)			if ((t->_font.indexOf(::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT,null()) == -1)) {
HXLINE( 157)				 ::flixel::addons::ui::FontDef fd = ::flixel::addons::ui::FontDef_obj::copyFromFlxText(t);
HXLINE( 158)				fd->apply(null(),( ( ::flixel::text::FlxText)(this->label) ));
            			}
            			else {
HXLINE( 162)				::String flxAlign = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(tf->align);
HXLINE( 165)				 ::flixel::addons::ui::FlxUIText _hx_tmp = ( ( ::flixel::addons::ui::FlxUIText)(this->label) );
HXDLIN( 165)				int _hx_tmp1 = ::Std_obj::_hx_int(( (Float)(tf->size) ));
HXDLIN( 165)				 ::Dynamic tf1 = tf->color;
HXDLIN( 165)				 ::flixel::text::FlxTextBorderStyle t1 = t->borderStyle;
HXDLIN( 165)				int t2 = t->borderColor;
HXDLIN( 165)				_hx_tmp->setFormat(null(),_hx_tmp1,tf1,flxAlign,t1,t2,t->textField->get_embedFonts());
            			}
            		}
            	}


 ::flixel::addons::ui::FlxUIText FlxUIButton_obj::setLabel( ::flixel::addons::ui::FlxUIText t){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_172_setLabel)
HXLINE( 173)		this->set_label(t);
HXLINE( 174)		return ( ( ::flixel::addons::ui::FlxUIText)(this->label) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIButton_obj,setLabel,return )

 ::flixel::addons::ui::FlxUIText FlxUIButton_obj::getLabel(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_179_getLabel)
HXDLIN( 179)		return ( ( ::flixel::addons::ui::FlxUIText)(this->label) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIButton_obj,getLabel,return )

void FlxUIButton_obj::resize(Float W,Float H){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_185_resize)
HXDLIN( 185)		this->super::resize(W,H);
            	}


void FlxUIButton_obj::addIcon( ::flixel::FlxSprite icon,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y, ::Dynamic __o_center){
            		int X = __o_X.Default(0);
            		int Y = __o_Y.Default(0);
            		 ::Dynamic center = __o_center;
            		if (::hx::IsNull(__o_center)) center = true;
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_189_addIcon)
HXLINE( 191)		this->_noIconGraphicsBkup = this->graphic->bitmap->clone();
HXLINE( 194)		 ::openfl::display::BitmapData newBmp = this->_noIconGraphicsBkup->clone();
HXLINE( 197)		::String key = ((this->graphic->key + HX_(",icon:",f5,82,8b,4e)) + icon->graphic->key);
HXLINE( 198)		 ::flixel::graphics::FlxGraphic newGraphic = ::flixel::FlxG_obj::bitmap->add(newBmp,false,key);
HXLINE( 201)		int _hx_tmp = ::Std_obj::_hx_int(this->get_width());
HXDLIN( 201)		this->loadGraphic(newGraphic,true,_hx_tmp,::Std_obj::_hx_int(this->get_height()),null(),null());
HXLINE( 203)		int sx = X;
HXLINE( 204)		int sy = Y;
HXLINE( 206)		if (( (bool)(center) )) {
HXLINE( 208)			Float sx1 = this->get_width();
HXDLIN( 208)			sx = ::Std_obj::_hx_int(((sx1 - icon->get_width()) / ( (Float)(2) )));
HXLINE( 209)			Float sy1 = this->get_height();
HXDLIN( 209)			sy = ::Std_obj::_hx_int(((sy1 - icon->get_height()) / ( (Float)(2) )));
            		}
HXLINE( 213)		{
HXLINE( 213)			int _g = 0;
HXDLIN( 213)			int _g1 = this->numFrames;
HXDLIN( 213)			while((_g < _g1)){
HXLINE( 213)				_g = (_g + 1);
HXDLIN( 213)				int i = (_g - 1);
HXLINE( 216)				int _hx_tmp;
HXDLIN( 216)				if ((i > 2)) {
HXLINE( 216)					_hx_tmp = 2;
            				}
            				else {
HXLINE( 216)					_hx_tmp = i;
            				}
HXLINE( 215)				int _hx_tmp1 = (sx + ::Std_obj::_hx_int(this->labelOffsets->__get(_hx_tmp).StaticCast<  ::flixel::math::FlxBasePoint >()->x));
HXLINE( 216)				int _hx_tmp2 = (sy + ::Std_obj::_hx_int((( (Float)(i) ) * this->get_height())));
HXLINE( 218)				int _hx_tmp3;
HXDLIN( 218)				if ((i > 2)) {
HXLINE( 218)					_hx_tmp3 = 2;
            				}
            				else {
HXLINE( 218)					_hx_tmp3 = i;
            				}
HXLINE( 215)				this->stamp(icon,_hx_tmp1,(_hx_tmp2 + ::Std_obj::_hx_int(this->labelOffsets->__get(_hx_tmp3).StaticCast<  ::flixel::math::FlxBasePoint >()->y)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUIButton_obj,addIcon,(void))

void FlxUIButton_obj::removeIcon(){
            	HX_GC_STACKFRAME(&_hx_pos_8344d6e231fc33c4_224_removeIcon)
HXDLIN( 224)		if (::hx::IsNotNull( this->_noIconGraphicsBkup )) {
HXLINE( 227)			this->graphic->bitmap->fillRect(this->graphic->bitmap->rect,0);
HXLINE( 228)			 ::openfl::display::BitmapData _hx_tmp = this->graphic->bitmap;
HXDLIN( 228)			 ::openfl::display::BitmapData _hx_tmp1 = this->_noIconGraphicsBkup;
HXDLIN( 228)			 ::openfl::geom::Rectangle _hx_tmp2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,this->_noIconGraphicsBkup->width,this->_noIconGraphicsBkup->height);
HXDLIN( 228)			_hx_tmp->copyPixels(_hx_tmp1,_hx_tmp2, ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()),null(),null(),null());
HXLINE( 229)			this->dirty = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIButton_obj,removeIcon,(void))

void FlxUIButton_obj::changeIcon( ::flixel::FlxSprite newIcon){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_238_changeIcon)
HXLINE( 239)		this->removeIcon();
HXLINE( 240)		this->addIcon(newIcon,null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIButton_obj,changeIcon,(void))

void FlxUIButton_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_244_destroy)
HXLINE( 245)		this->_noIconGraphicsBkup = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_noIconGraphicsBkup);
HXLINE( 246)		this->super::destroy();
            	}


void FlxUIButton_obj::loadDefaultGraphic(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_251_loadDefaultGraphic)
            	}


void FlxUIButton_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_259_resetHelpers)
HXLINE( 260)		this->super::resetHelpers();
HXLINE( 262)		if (::hx::IsNotNull( this->label )) {
HXLINE( 264)			 ::flixel::addons::ui::FlxUIText _hx_tmp = ( ( ::flixel::addons::ui::FlxUIText)(this->label) );
HXDLIN( 264)			Float _hx_tmp1 = this->get_width();
HXDLIN( 264)			_hx_tmp->set_width(( (Float)((( ( ::flixel::FlxSprite)(this->label) )->frameWidth = ::Std_obj::_hx_int(_hx_tmp1))) ));
HXLINE( 265)			 ::flixel::addons::ui::FlxUIText _hx_tmp2 = ( ( ::flixel::addons::ui::FlxUIText)(this->label) );
HXDLIN( 265)			_hx_tmp2->set_fieldWidth(( ( ::flixel::text::FlxText)(this->label) )->get_width());
HXLINE( 266)			 ::flixel::addons::ui::FlxUIText _hx_tmp3 = ( ( ::flixel::addons::ui::FlxUIText)(this->label) );
HXDLIN( 266)			_hx_tmp3->set_size(::Std_obj::_hx_int(( (Float)(( ( ::flixel::text::FlxText)(this->label) )->_defaultFormat->size) )));
            		}
            	}


void FlxUIButton_obj::onDownHandler(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_271_onDownHandler)
HXLINE( 272)		this->super::onDownHandler();
HXLINE( 273)		if (::hx::IsNotNull( this->label )) {
HXLINE( 275)			bool _hx_tmp;
HXDLIN( 275)			if (this->toggled) {
HXLINE( 275)				_hx_tmp = ::hx::IsNotNull( this->down_toggle_style );
            			}
            			else {
HXLINE( 275)				_hx_tmp = false;
            			}
HXDLIN( 275)			if (_hx_tmp) {
HXLINE( 277)				( ( ::flixel::text::FlxText)(this->label) )->set_color(( (int)(this->down_toggle_style->color) ));
HXLINE( 278)				if (::hx::IsNotNull( this->down_toggle_style->border )) {
HXLINE( 280)					( ( ::flixel::text::FlxText)(this->label) )->set_borderStyle(this->down_toggle_style->border->style);
HXLINE( 281)					( ( ::flixel::text::FlxText)(this->label) )->set_borderColor(this->down_toggle_style->border->color);
HXLINE( 282)					( ( ::flixel::text::FlxText)(this->label) )->set_borderSize(this->down_toggle_style->border->size);
HXLINE( 283)					( ( ::flixel::text::FlxText)(this->label) )->set_borderQuality(this->down_toggle_style->border->quality);
            				}
            			}
            			else {
HXLINE( 286)				bool _hx_tmp;
HXDLIN( 286)				if (!(this->toggled)) {
HXLINE( 286)					_hx_tmp = ::hx::IsNotNull( this->down_style );
            				}
            				else {
HXLINE( 286)					_hx_tmp = false;
            				}
HXDLIN( 286)				if (_hx_tmp) {
HXLINE( 288)					( ( ::flixel::text::FlxText)(this->label) )->set_color(( (int)(this->down_style->color) ));
HXLINE( 289)					if (::hx::IsNotNull( this->down_style->border )) {
HXLINE( 291)						( ( ::flixel::text::FlxText)(this->label) )->set_borderStyle(this->down_style->border->style);
HXLINE( 292)						( ( ::flixel::text::FlxText)(this->label) )->set_borderColor(this->down_style->border->color);
HXLINE( 293)						( ( ::flixel::text::FlxText)(this->label) )->set_borderSize(this->down_style->border->size);
HXLINE( 294)						( ( ::flixel::text::FlxText)(this->label) )->set_borderQuality(this->down_style->border->quality);
            					}
            				}
            			}
            		}
            	}


void FlxUIButton_obj::onOverHandler(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_301_onOverHandler)
HXLINE( 302)		this->super::onOverHandler();
HXLINE( 303)		if (::hx::IsNotNull( this->label )) {
HXLINE( 305)			bool _hx_tmp;
HXDLIN( 305)			if (this->toggled) {
HXLINE( 305)				_hx_tmp = ::hx::IsNotNull( this->over_toggle_style );
            			}
            			else {
HXLINE( 305)				_hx_tmp = false;
            			}
HXDLIN( 305)			if (_hx_tmp) {
HXLINE( 307)				( ( ::flixel::text::FlxText)(this->label) )->set_color(( (int)(this->over_toggle_style->color) ));
HXLINE( 308)				if (::hx::IsNotNull( this->over_toggle_style->border )) {
HXLINE( 310)					( ( ::flixel::text::FlxText)(this->label) )->set_borderStyle(this->over_toggle_style->border->style);
HXLINE( 311)					( ( ::flixel::text::FlxText)(this->label) )->set_borderColor(this->over_toggle_style->border->color);
HXLINE( 312)					( ( ::flixel::text::FlxText)(this->label) )->set_borderSize(this->over_toggle_style->border->size);
HXLINE( 313)					( ( ::flixel::text::FlxText)(this->label) )->set_borderQuality(this->over_toggle_style->border->quality);
            				}
            			}
            			else {
HXLINE( 316)				bool _hx_tmp;
HXDLIN( 316)				if (!(this->toggled)) {
HXLINE( 316)					_hx_tmp = ::hx::IsNotNull( this->over_style );
            				}
            				else {
HXLINE( 316)					_hx_tmp = false;
            				}
HXDLIN( 316)				if (_hx_tmp) {
HXLINE( 318)					( ( ::flixel::text::FlxText)(this->label) )->set_color(( (int)(this->over_style->color) ));
HXLINE( 319)					if (::hx::IsNotNull( this->over_style->border )) {
HXLINE( 321)						( ( ::flixel::text::FlxText)(this->label) )->set_borderStyle(this->over_style->border->style);
HXLINE( 322)						( ( ::flixel::text::FlxText)(this->label) )->set_borderColor(this->over_style->border->color);
HXLINE( 323)						( ( ::flixel::text::FlxText)(this->label) )->set_borderSize(this->over_style->border->size);
HXLINE( 324)						( ( ::flixel::text::FlxText)(this->label) )->set_borderQuality(this->over_style->border->quality);
            					}
            				}
            			}
            		}
            	}


void FlxUIButton_obj::onOutHandler(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_331_onOutHandler)
HXLINE( 332)		this->super::onOutHandler();
HXLINE( 333)		if (::hx::IsNotNull( this->label )) {
HXLINE( 335)			bool _hx_tmp;
HXDLIN( 335)			if (this->toggled) {
HXLINE( 335)				_hx_tmp = ::hx::IsNotNull( this->up_toggle_style );
            			}
            			else {
HXLINE( 335)				_hx_tmp = false;
            			}
HXDLIN( 335)			if (_hx_tmp) {
HXLINE( 337)				( ( ::flixel::text::FlxText)(this->label) )->set_color(( (int)(this->up_toggle_style->color) ));
HXLINE( 338)				if (::hx::IsNotNull( this->up_toggle_style->border )) {
HXLINE( 340)					( ( ::flixel::text::FlxText)(this->label) )->set_borderStyle(this->up_toggle_style->border->style);
HXLINE( 341)					( ( ::flixel::text::FlxText)(this->label) )->set_borderColor(this->up_toggle_style->border->color);
HXLINE( 342)					( ( ::flixel::text::FlxText)(this->label) )->set_borderSize(this->up_toggle_style->border->size);
HXLINE( 343)					( ( ::flixel::text::FlxText)(this->label) )->set_borderQuality(this->up_toggle_style->border->quality);
            				}
            			}
            			else {
HXLINE( 346)				bool _hx_tmp;
HXDLIN( 346)				if (!(this->toggled)) {
HXLINE( 346)					_hx_tmp = ::hx::IsNotNull( this->up_style );
            				}
            				else {
HXLINE( 346)					_hx_tmp = false;
            				}
HXDLIN( 346)				if (_hx_tmp) {
HXLINE( 348)					( ( ::flixel::text::FlxText)(this->label) )->set_color(( (int)(this->up_style->color) ));
HXLINE( 349)					if (::hx::IsNotNull( this->up_style->border )) {
HXLINE( 351)						( ( ::flixel::text::FlxText)(this->label) )->set_borderStyle(this->up_style->border->style);
HXLINE( 352)						( ( ::flixel::text::FlxText)(this->label) )->set_borderColor(this->up_style->border->color);
HXLINE( 353)						( ( ::flixel::text::FlxText)(this->label) )->set_borderSize(this->up_style->border->size);
HXLINE( 354)						( ( ::flixel::text::FlxText)(this->label) )->set_borderQuality(this->up_style->border->quality);
            					}
            				}
            			}
            		}
            	}


void FlxUIButton_obj::onUpHandler(){
            	HX_STACKFRAME(&_hx_pos_8344d6e231fc33c4_361_onUpHandler)
HXLINE( 362)		this->super::onUpHandler();
HXLINE( 363)		if (::hx::IsNotNull( this->label )) {
HXLINE( 365)			bool _hx_tmp;
HXDLIN( 365)			if (this->toggled) {
HXLINE( 365)				_hx_tmp = ::hx::IsNotNull( this->up_toggle_style );
            			}
            			else {
HXLINE( 365)				_hx_tmp = false;
            			}
HXDLIN( 365)			if (_hx_tmp) {
HXLINE( 367)				( ( ::flixel::text::FlxText)(this->label) )->set_color(( (int)(this->up_toggle_style->color) ));
HXLINE( 368)				if (::hx::IsNotNull( this->up_toggle_style->border )) {
HXLINE( 370)					( ( ::flixel::text::FlxText)(this->label) )->set_borderStyle(this->up_toggle_style->border->style);
HXLINE( 371)					( ( ::flixel::text::FlxText)(this->label) )->set_borderColor(this->up_toggle_style->border->color);
HXLINE( 372)					( ( ::flixel::text::FlxText)(this->label) )->set_borderSize(this->up_toggle_style->border->size);
HXLINE( 373)					( ( ::flixel::text::FlxText)(this->label) )->set_borderQuality(this->up_toggle_style->border->quality);
            				}
            			}
            			else {
HXLINE( 376)				bool _hx_tmp;
HXDLIN( 376)				if (!(this->toggled)) {
HXLINE( 376)					_hx_tmp = ::hx::IsNotNull( this->up_style );
            				}
            				else {
HXLINE( 376)					_hx_tmp = false;
            				}
HXDLIN( 376)				if (_hx_tmp) {
HXLINE( 378)					( ( ::flixel::text::FlxText)(this->label) )->set_color(( (int)(this->up_style->color) ));
HXLINE( 379)					if (::hx::IsNotNull( this->up_style->border )) {
HXLINE( 381)						( ( ::flixel::text::FlxText)(this->label) )->set_borderStyle(this->up_style->border->style);
HXLINE( 382)						( ( ::flixel::text::FlxText)(this->label) )->set_borderColor(this->up_style->border->color);
HXLINE( 383)						( ( ::flixel::text::FlxText)(this->label) )->set_borderSize(this->up_style->border->size);
HXLINE( 384)						( ( ::flixel::text::FlxText)(this->label) )->set_borderQuality(this->up_style->border->quality);
            					}
            				}
            			}
            		}
            	}



::hx::ObjectPtr< FlxUIButton_obj > FlxUIButton_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Label, ::Dynamic OnClick, ::Dynamic __o_LoadDefaultGraphics, ::Dynamic __o_LoadBlank, ::Dynamic __o_Color) {
	::hx::ObjectPtr< FlxUIButton_obj > __this = new FlxUIButton_obj();
	__this->__construct(__o_X,__o_Y,Label,OnClick,__o_LoadDefaultGraphics,__o_LoadBlank,__o_Color);
	return __this;
}

::hx::ObjectPtr< FlxUIButton_obj > FlxUIButton_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::String Label, ::Dynamic OnClick, ::Dynamic __o_LoadDefaultGraphics, ::Dynamic __o_LoadBlank, ::Dynamic __o_Color) {
	FlxUIButton_obj *__this = (FlxUIButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIButton_obj), true, "flixel.addons.ui.FlxUIButton"));
	*(void **)__this = FlxUIButton_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Label,OnClick,__o_LoadDefaultGraphics,__o_LoadBlank,__o_Color);
	return __this;
}

FlxUIButton_obj::FlxUIButton_obj()
{
}

void FlxUIButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIButton);
	HX_MARK_MEMBER_NAME(_noIconGraphicsBkup,"_noIconGraphicsBkup");
	HX_MARK_MEMBER_NAME(up_style,"up_style");
	HX_MARK_MEMBER_NAME(over_style,"over_style");
	HX_MARK_MEMBER_NAME(down_style,"down_style");
	HX_MARK_MEMBER_NAME(up_toggle_style,"up_toggle_style");
	HX_MARK_MEMBER_NAME(over_toggle_style,"over_toggle_style");
	HX_MARK_MEMBER_NAME(down_toggle_style,"down_toggle_style");
	 ::flixel::addons::ui::FlxUITypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_noIconGraphicsBkup,"_noIconGraphicsBkup");
	HX_VISIT_MEMBER_NAME(up_style,"up_style");
	HX_VISIT_MEMBER_NAME(over_style,"over_style");
	HX_VISIT_MEMBER_NAME(down_style,"down_style");
	HX_VISIT_MEMBER_NAME(up_toggle_style,"up_toggle_style");
	HX_VISIT_MEMBER_NAME(over_toggle_style,"over_toggle_style");
	HX_VISIT_MEMBER_NAME(down_toggle_style,"down_toggle_style");
	 ::flixel::addons::ui::FlxUITypedButton_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addIcon") ) { return ::hx::Val( addIcon_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_style") ) { return ::hx::Val( up_style ); }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return ::hx::Val( setLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return ::hx::Val( getLabel_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyStyle") ) { return ::hx::Val( copyStyle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"over_style") ) { return ::hx::Val( over_style ); }
		if (HX_FIELD_EQ(inName,"down_style") ) { return ::hx::Val( down_style ); }
		if (HX_FIELD_EQ(inName,"removeIcon") ) { return ::hx::Val( removeIcon_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return ::hx::Val( onUpHandler_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return ::hx::Val( resetHelpers_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return ::hx::Val( onOutHandler_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return ::hx::Val( onDownHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return ::hx::Val( onOverHandler_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setLabelFormat") ) { return ::hx::Val( setLabelFormat_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_style") ) { return ::hx::Val( up_toggle_style ); }
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return ::hx::Val( autoCenterLabel_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_style") ) { return ::hx::Val( over_toggle_style ); }
		if (HX_FIELD_EQ(inName,"down_toggle_style") ) { return ::hx::Val( down_toggle_style ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadDefaultGraphic") ) { return ::hx::Val( loadDefaultGraphic_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_noIconGraphicsBkup") ) { return ::hx::Val( _noIconGraphicsBkup ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"up_style") ) { up_style=inValue.Cast<  ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"over_style") ) { over_style=inValue.Cast<  ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_style") ) { down_style=inValue.Cast<  ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_style") ) { up_toggle_style=inValue.Cast<  ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_style") ) { over_toggle_style=inValue.Cast<  ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_style") ) { down_toggle_style=inValue.Cast<  ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_noIconGraphicsBkup") ) { _noIconGraphicsBkup=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_noIconGraphicsBkup",68,7e,8a,62));
	outFields->push(HX_("up_style",0d,09,77,d5));
	outFields->push(HX_("over_style",c6,34,0b,31));
	outFields->push(HX_("down_style",54,5a,74,88));
	outFields->push(HX_("up_toggle_style",aa,a2,cd,16));
	outFields->push(HX_("over_toggle_style",11,50,59,e4));
	outFields->push(HX_("down_toggle_style",43,18,8a,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIButton_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxUIButton_obj,_noIconGraphicsBkup),HX_("_noIconGraphicsBkup",68,7e,8a,62)},
	{::hx::fsObject /*  ::flixel::addons::ui::ButtonLabelStyle */ ,(int)offsetof(FlxUIButton_obj,up_style),HX_("up_style",0d,09,77,d5)},
	{::hx::fsObject /*  ::flixel::addons::ui::ButtonLabelStyle */ ,(int)offsetof(FlxUIButton_obj,over_style),HX_("over_style",c6,34,0b,31)},
	{::hx::fsObject /*  ::flixel::addons::ui::ButtonLabelStyle */ ,(int)offsetof(FlxUIButton_obj,down_style),HX_("down_style",54,5a,74,88)},
	{::hx::fsObject /*  ::flixel::addons::ui::ButtonLabelStyle */ ,(int)offsetof(FlxUIButton_obj,up_toggle_style),HX_("up_toggle_style",aa,a2,cd,16)},
	{::hx::fsObject /*  ::flixel::addons::ui::ButtonLabelStyle */ ,(int)offsetof(FlxUIButton_obj,over_toggle_style),HX_("over_toggle_style",11,50,59,e4)},
	{::hx::fsObject /*  ::flixel::addons::ui::ButtonLabelStyle */ ,(int)offsetof(FlxUIButton_obj,down_toggle_style),HX_("down_toggle_style",43,18,8a,40)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUIButton_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUIButton_obj_sMemberFields[] = {
	HX_("_noIconGraphicsBkup",68,7e,8a,62),
	HX_("up_style",0d,09,77,d5),
	HX_("over_style",c6,34,0b,31),
	HX_("down_style",54,5a,74,88),
	HX_("up_toggle_style",aa,a2,cd,16),
	HX_("over_toggle_style",11,50,59,e4),
	HX_("down_toggle_style",43,18,8a,40),
	HX_("setLabelFormat",c9,3b,4d,f0),
	HX_("autoCenterLabel",b0,b4,79,af),
	HX_("clone",5d,13,63,48),
	HX_("copyStyle",3c,c9,18,0a),
	HX_("setLabel",f2,76,e3,7d),
	HX_("getLabel",7e,1d,86,cf),
	HX_("resize",f4,59,7b,08),
	HX_("addIcon",3a,2a,f0,81),
	HX_("removeIcon",dd,21,d2,c2),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("destroy",fa,2c,86,24),
	HX_("loadDefaultGraphic",ad,18,08,83),
	HX_("resetHelpers",36,89,3d,32),
	HX_("onDownHandler",a9,ac,21,cf),
	HX_("onOverHandler",f7,f5,89,aa),
	HX_("onOutHandler",db,26,e5,9e),
	HX_("onUpHandler",90,a5,d0,a3),
	::String(null()) };

::hx::Class FlxUIButton_obj::__mClass;

void FlxUIButton_obj::__register()
{
	FlxUIButton_obj _hx_dummy;
	FlxUIButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIButton",27,4c,9c,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
