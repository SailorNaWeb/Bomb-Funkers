#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ce87859da0fe064b_17_new,"flixel.addons.ui.FlxUICheckBox","new",0x24a5788a,"flixel.addons.ui.FlxUICheckBox.new","flixel/addons/ui/FlxUICheckBox.hx",17,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_44_set_skipButtonUpdate,"flixel.addons.ui.FlxUICheckBox","set_skipButtonUpdate",0x88caa7cd,"flixel.addons.ui.FlxUICheckBox.set_skipButtonUpdate","flixel/addons/ui/FlxUICheckBox.hx",44,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_51_set_params,"flixel.addons.ui.FlxUICheckBox","set_params",0xd67a1a99,"flixel.addons.ui.FlxUICheckBox.set_params","flixel/addons/ui/FlxUICheckBox.hx",51,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_63_set_color,"flixel.addons.ui.FlxUICheckBox","set_color",0x10dbdd70,"flixel.addons.ui.FlxUICheckBox.set_color","flixel/addons/ui/FlxUICheckBox.hx",63,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_158_setLabel,"flixel.addons.ui.FlxUICheckBox","setLabel",0xd38df688,"flixel.addons.ui.FlxUICheckBox.setLabel","flixel/addons/ui/FlxUICheckBox.hx",158,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_168_getLabel,"flixel.addons.ui.FlxUICheckBox","getLabel",0x25309d14,"flixel.addons.ui.FlxUICheckBox.getLabel","flixel/addons/ui/FlxUICheckBox.hx",168,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_177_set_visible,"flixel.addons.ui.FlxUICheckBox","set_visible",0x9960c1bf,"flixel.addons.ui.FlxUICheckBox.set_visible","flixel/addons/ui/FlxUICheckBox.hx",177,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_185_anchorTime,"flixel.addons.ui.FlxUICheckBox","anchorTime",0xb5482238,"flixel.addons.ui.FlxUICheckBox.anchorTime","flixel/addons/ui/FlxUICheckBox.hx",185,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_189_set_textX,"flixel.addons.ui.FlxUICheckBox","set_textX",0xd418b718,"flixel.addons.ui.FlxUICheckBox.set_textX","flixel/addons/ui/FlxUICheckBox.hx",189,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_196_set_textY,"flixel.addons.ui.FlxUICheckBox","set_textY",0xd418b719,"flixel.addons.ui.FlxUICheckBox.set_textY","flixel/addons/ui/FlxUICheckBox.hx",196,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_204_anchorLabelX,"flixel.addons.ui.FlxUICheckBox","anchorLabelX",0xdbea9ecf,"flixel.addons.ui.FlxUICheckBox.anchorLabelX","flixel/addons/ui/FlxUICheckBox.hx",204,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_212_anchorLabelY,"flixel.addons.ui.FlxUICheckBox","anchorLabelY",0xdbea9ed0,"flixel.addons.ui.FlxUICheckBox.anchorLabelY","flixel/addons/ui/FlxUICheckBox.hx",212,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_219_destroy,"flixel.addons.ui.FlxUICheckBox","destroy",0xc5a03224,"flixel.addons.ui.FlxUICheckBox.destroy","flixel/addons/ui/FlxUICheckBox.hx",219,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_242_get_text,"flixel.addons.ui.FlxUICheckBox","get_text",0x225f07cc,"flixel.addons.ui.FlxUICheckBox.get_text","flixel/addons/ui/FlxUICheckBox.hx",242,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_246_set_text,"flixel.addons.ui.FlxUICheckBox","set_text",0xd0bc6140,"flixel.addons.ui.FlxUICheckBox.set_text","flixel/addons/ui/FlxUICheckBox.hx",246,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_253_update,"flixel.addons.ui.FlxUICheckBox","update",0x52efd41f,"flixel.addons.ui.FlxUICheckBox.update","flixel/addons/ui/FlxUICheckBox.hx",253,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_276_set_checked,"flixel.addons.ui.FlxUICheckBox","set_checked",0x0960fc74,"flixel.addons.ui.FlxUICheckBox.set_checked","flixel/addons/ui/FlxUICheckBox.hx",276,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_283__clickCheck,"flixel.addons.ui.FlxUICheckBox","_clickCheck",0xbe94b6a9,"flixel.addons.ui.FlxUICheckBox._clickCheck","flixel/addons/ui/FlxUICheckBox.hx",283,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_41_boot,"flixel.addons.ui.FlxUICheckBox","boot",0xe43d00c8,"flixel.addons.ui.FlxUICheckBox.boot","flixel/addons/ui/FlxUICheckBox.hx",41,0xab9d9a07)
namespace flixel{
namespace addons{
namespace ui{

void FlxUICheckBox_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		 ::Dynamic LabelW = __o_LabelW;
            		if (::hx::IsNull(__o_LabelW)) LabelW = 100;
            	HX_GC_STACKFRAME(&_hx_pos_ce87859da0fe064b_17_new)
HXLINE(  37)		this->skipButtonUpdate = false;
HXLINE(  35)		this->box_space = ((Float)2);
HXLINE(  33)		this->textY = ((Float)0);
HXLINE(  32)		this->textX = ((Float)0);
HXLINE(  30)		this->checkbox_dirty = false;
HXLINE(  28)		this->textIsClickable = true;
HXLINE(  24)		this->checked = false;
HXLINE(  22)		this->max_width = ((Float)-1);
HXLINE(  73)		super::__construct(null(),null());
HXLINE(  75)		this->callback = Callback;
HXLINE(  77)		this->set_params(Params);
HXLINE(  79)		if (::hx::IsNull( Box )) {
HXLINE(  82)			Box = HX_("flixel/flixel-ui/img/check_box.png",66,4a,70,4f);
            		}
HXLINE(  85)		if (::Std_obj::isOfType(Box,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE(  87)			this->box = ( ( ::flixel::FlxSprite)(Box) );
            		}
            		else {
HXLINE(  91)			this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  92)			this->box->loadGraphic(Box,true,null(),null(),null(),null());
            		}
HXLINE(  95)		this->button =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,Label,this->_clickCheck_dyn(),null(),null(),null());
HXLINE(  98)		( ( ::flixel::text::FlxText)(this->button->label) )->setFormat(null(),8,16777215,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE(  99)		( ( ::flixel::text::FlxText)(this->button->label) )->set_fieldWidth(( (Float)(LabelW) ));
HXLINE( 100)		this->button->up_color = 16777215;
HXLINE( 101)		this->button->down_color = 16777215;
HXLINE( 102)		this->button->over_color = 16777215;
HXLINE( 103)		this->button->up_toggle_color = 16777215;
HXLINE( 104)		this->button->down_toggle_color = 16777215;
HXLINE( 105)		this->button->over_toggle_color = 16777215;
HXLINE( 107)		 ::flixel::addons::ui::FlxUIButton _hx_tmp = this->button;
HXDLIN( 107)		Float _hx_tmp1 = this->box->get_width();
HXDLIN( 107)		int _hx_tmp2 = ::Std_obj::_hx_int(((_hx_tmp1 + this->box_space) + LabelW));
HXDLIN( 107)		_hx_tmp->loadGraphicSlice9(::cpp::VirtualArray_obj::__new(3)->init(0,HX_("",00,00,00,00))->init(1,HX_("",00,00,00,00))->init(2,HX_("",00,00,00,00)),_hx_tmp2,::Std_obj::_hx_int(this->box->get_height()),null(),null(),null(),null(),null(),null(),null());
HXLINE( 109)		Float _hx_tmp3 = this->box->get_width();
HXDLIN( 109)		this->max_width = ( (Float)(::Std_obj::_hx_int(((_hx_tmp3 + this->box_space) + LabelW))) );
HXLINE( 111)		this->button->onUp->callback = this->_clickCheck_dyn();
HXLINE( 113)		if (::hx::IsNull( Check )) {
HXLINE( 116)			Check = HX_("flixel/flixel-ui/img/check_mark.png",28,e6,7d,ef);
            		}
HXLINE( 119)		if (::Std_obj::isOfType(Check,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 121)			this->mark = ( ( ::flixel::FlxSprite)(Check) );
            		}
            		else {
HXLINE( 125)			this->mark =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 126)			this->mark->loadGraphic(Check,null(),null(),null(),null(),null());
            		}
HXLINE( 129)		this->add(this->box);
HXLINE( 130)		this->add(this->mark);
HXLINE( 131)		this->add(this->button);
HXLINE( 133)		this->anchorLabelX();
HXLINE( 134)		this->anchorLabelY();
HXLINE( 136)		this->set_checked(false);
HXLINE( 139)		this->button->setAllLabelOffsets(( (Float)(0) ),( (Float)(0) ));
HXLINE( 141)		this->set_x(X);
HXLINE( 142)		this->set_y(Y);
HXLINE( 144)		this->set_textX(( (Float)(0) ));
HXLINE( 145)		this->set_textY(( (Float)(0) ));
            	}

Dynamic FlxUICheckBox_obj::__CreateEmpty() { return new FlxUICheckBox_obj; }

void *FlxUICheckBox_obj::_hx_vtable = 0;

Dynamic FlxUICheckBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUICheckBox_obj > _hx_result = new FlxUICheckBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxUICheckBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x398eb8dc) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x398eb8dc;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x3b526ac2 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

static ::flixel::addons::ui::interfaces::ICursorPointable_obj _hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_ICursorPointable= {
};

static ::flixel::addons::ui::interfaces::ILabeled_obj _hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_ILabeled= {
	(  ::flixel::addons::ui::FlxUIText (::hx::Object::*)())&::flixel::addons::ui::FlxUICheckBox_obj::getLabel,
	(  ::flixel::addons::ui::FlxUIText (::hx::Object::*)( ::flixel::addons::ui::FlxUIText))&::flixel::addons::ui::FlxUICheckBox_obj::setLabel,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUICheckBox_obj::set_params,
};

static ::flixel::addons::ui::interfaces::IFlxUIClickable_obj _hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_IFlxUIClickable= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUICheckBox_obj::set_skipButtonUpdate,
};

void *FlxUICheckBox_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x82c13468: return &_hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_ICursorPointable;
		case (int)0xa7145b87: return &_hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_ILabeled;
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_IHasParams;
		case (int)0x3e998408: return &_hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_IFlxUIClickable;
	}
	return super::_hx_getInterface(inHash);
}

bool FlxUICheckBox_obj::set_skipButtonUpdate(bool b){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_44_set_skipButtonUpdate)
HXLINE(  45)		this->skipButtonUpdate = b;
HXLINE(  46)		this->button->set_skipButtonUpdate(this->skipButtonUpdate);
HXLINE(  47)		return this->skipButtonUpdate;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_skipButtonUpdate,return )

::cpp::VirtualArray FlxUICheckBox_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_51_set_params)
HXLINE(  52)		this->params = p;
HXLINE(  53)		if (::hx::IsNull( this->params )) {
HXLINE(  55)			this->params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE(  57)		 ::Dynamic nb =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("value",71,7f,b8,31),false)
            			->setFixed(1,HX_("name",4b,72,ff,48),HX_("checked",27,b3,24,13)));
HXLINE(  58)		this->params->push(nb);
HXLINE(  59)		return this->params;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_params,return )

int FlxUICheckBox_obj::set_color(int _tmp_Value){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_63_set_color)
HXLINE(  64)		int Value = _tmp_Value;
HXDLIN(  64)		if (::hx::IsNotNull( this->button )) {
HXLINE(  66)			( ( ::flixel::text::FlxText)(this->button->label) )->set_color(Value);
            		}
HXLINE(  68)		return this->super::set_color(Value);
            	}


 ::flixel::addons::ui::FlxUIText FlxUICheckBox_obj::setLabel( ::flixel::addons::ui::FlxUIText t){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_158_setLabel)
HXLINE( 159)		if (::hx::IsNull( this->button )) {
HXLINE( 161)			return null();
            		}
HXLINE( 163)		this->button->set_label(t).StaticCast<  ::flixel::addons::ui::FlxUIText >();
HXLINE( 164)		return ( ( ::flixel::addons::ui::FlxUIText)(this->button->label) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,setLabel,return )

 ::flixel::addons::ui::FlxUIText FlxUICheckBox_obj::getLabel(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_168_getLabel)
HXLINE( 169)		if (::hx::IsNull( this->button )) {
HXLINE( 171)			return null();
            		}
HXLINE( 173)		return ( ( ::flixel::addons::ui::FlxUIText)(this->button->label) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,getLabel,return )

bool FlxUICheckBox_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_177_set_visible)
HXLINE( 179)		this->visible = Value;
HXLINE( 180)		return this->visible;
            	}


void FlxUICheckBox_obj::anchorTime( ::flixel::util::FlxTimer f){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_185_anchorTime)
HXDLIN( 185)		this->anchorLabelY();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,anchorTime,(void))

Float FlxUICheckBox_obj::set_textX(Float n){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_189_set_textX)
HXLINE( 190)		this->textX = n;
HXLINE( 191)		this->anchorLabelX();
HXLINE( 192)		return this->textX;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_textX,return )

Float FlxUICheckBox_obj::set_textY(Float n){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_196_set_textY)
HXLINE( 197)		this->textY = n;
HXLINE( 198)		this->anchorLabelY();
HXLINE( 199)		return this->textY;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_textY,return )

void FlxUICheckBox_obj::anchorLabelX(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_204_anchorLabelX)
HXDLIN( 204)		if (::hx::IsNotNull( this->button )) {
HXLINE( 206)			 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::FlxSprite)(this->button->label) )->offset;
HXDLIN( 206)			Float x = this->box->get_width();
HXDLIN( 206)			this1->set_x(-(((x + this->box_space) + this->textX)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,anchorLabelX,(void))

void FlxUICheckBox_obj::anchorLabelY(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_212_anchorLabelY)
HXDLIN( 212)		if (::hx::IsNotNull( this->button )) {
HXLINE( 214)			 ::flixel::addons::ui::FlxUIButton _hx_tmp = this->button;
HXDLIN( 214)			Float _hx_tmp1 = this->box->y;
HXDLIN( 214)			Float _hx_tmp2 = this->box->get_height();
HXDLIN( 214)			Float _hx_tmp3 = (_hx_tmp1 + ((_hx_tmp2 - this->button->get_height()) / ( (Float)(2) )));
HXDLIN( 214)			_hx_tmp->set_y((_hx_tmp3 + this->textY));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,anchorLabelY,(void))

void FlxUICheckBox_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_219_destroy)
HXLINE( 220)		this->super::destroy();
HXLINE( 221)		if (::hx::IsNotNull( this->mark )) {
HXLINE( 223)			this->mark->destroy();
HXLINE( 224)			this->mark = null();
            		}
HXLINE( 226)		if (::hx::IsNotNull( this->box )) {
HXLINE( 228)			this->box->destroy();
HXLINE( 229)			this->box = null();
            		}
HXLINE( 231)		if (::hx::IsNotNull( this->button )) {
HXLINE( 233)			this->button->destroy();
HXLINE( 234)			this->button = null();
            		}
            	}


::String FlxUICheckBox_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_242_get_text)
HXDLIN( 242)		return ( ( ::flixel::text::FlxText)(this->button->label) )->text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,get_text,return )

::String FlxUICheckBox_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_246_set_text)
HXLINE( 247)		( ( ::flixel::text::FlxText)(this->button->label) )->set_text(value);
HXLINE( 248)		this->checkbox_dirty = true;
HXLINE( 249)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_text,return )

void FlxUICheckBox_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_253_update)
HXLINE( 254)		this->super::update(elapsed);
HXLINE( 256)		if (this->checkbox_dirty) {
HXLINE( 258)			if (::hx::IsNotNull( this->button->label )) {
HXLINE( 260)				if (::Std_obj::isOfType(this->button->label,::hx::ClassOf< ::flixel::addons::ui::FlxUIText >())) {
HXLINE( 262)					 ::flixel::addons::ui::FlxUIText ftu = ( ( ::flixel::addons::ui::FlxUIText)(this->button->label) );
HXLINE( 263)					ftu->drawFrame(null());
            				}
HXLINE( 265)				this->anchorLabelX();
HXLINE( 266)				this->anchorLabelY();
HXLINE( 267)				 ::flixel::addons::ui::FlxUIButton _hx_tmp = this->button;
HXDLIN( 267)				Float _hx_tmp1 = (this->box->frameWidth + this->box_space);
HXDLIN( 267)				_hx_tmp->set_width((_hx_tmp1 + ( ( ::flixel::text::FlxText)(this->button->label) )->textField->get_textWidth()));
HXLINE( 269)				this->checkbox_dirty = false;
            			}
            		}
            	}


bool FlxUICheckBox_obj::set_checked(bool b){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_276_set_checked)
HXLINE( 277)		this->mark->set_visible(b);
HXLINE( 278)		return (this->checked = b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_checked,return )

void FlxUICheckBox_obj::_clickCheck(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_283__clickCheck)
HXLINE( 284)		if (!(this->visible)) {
HXLINE( 286)			return;
            		}
HXLINE( 288)		this->set_checked(!(this->checked));
HXLINE( 289)		if (::hx::IsNotNull( this->callback )) {
HXLINE( 291)			this->callback();
            		}
HXLINE( 293)		if (this->broadcastToFlxUI) {
HXLINE( 295)			::flixel::addons::ui::FlxUI_obj::event(HX_("click_check_box",dd,c1,1e,a8),::hx::ObjectPtr<OBJ_>(this),this->checked,this->params);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,_clickCheck,(void))

::String FlxUICheckBox_obj::CLICK_EVENT;


::hx::ObjectPtr< FlxUICheckBox_obj > FlxUICheckBox_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback) {
	::hx::ObjectPtr< FlxUICheckBox_obj > __this = new FlxUICheckBox_obj();
	__this->__construct(__o_X,__o_Y,Box,Check,Label,__o_LabelW,Params,Callback);
	return __this;
}

::hx::ObjectPtr< FlxUICheckBox_obj > FlxUICheckBox_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback) {
	FlxUICheckBox_obj *__this = (FlxUICheckBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUICheckBox_obj), true, "flixel.addons.ui.FlxUICheckBox"));
	*(void **)__this = FlxUICheckBox_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Box,Check,Label,__o_LabelW,Params,Callback);
	return __this;
}

FlxUICheckBox_obj::FlxUICheckBox_obj()
{
}

void FlxUICheckBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUICheckBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(mark,"mark");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(max_width,"max_width");
	HX_MARK_MEMBER_NAME(checked,"checked");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(textIsClickable,"textIsClickable");
	HX_MARK_MEMBER_NAME(checkbox_dirty,"checkbox_dirty");
	HX_MARK_MEMBER_NAME(textX,"textX");
	HX_MARK_MEMBER_NAME(textY,"textY");
	HX_MARK_MEMBER_NAME(box_space,"box_space");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(callback,"callback");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUICheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(mark,"mark");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(max_width,"max_width");
	HX_VISIT_MEMBER_NAME(checked,"checked");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(textIsClickable,"textIsClickable");
	HX_VISIT_MEMBER_NAME(checkbox_dirty,"checkbox_dirty");
	HX_VISIT_MEMBER_NAME(textX,"textX");
	HX_VISIT_MEMBER_NAME(textY,"textY");
	HX_VISIT_MEMBER_NAME(box_space,"box_space");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUICheckBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { return ::hx::Val( mark ); }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { return ::hx::Val( textX ); }
		if (HX_FIELD_EQ(inName,"textY") ) { return ::hx::Val( textY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"checked") ) { return ::hx::Val( checked ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return ::hx::Val( setLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return ::hx::Val( getLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_width") ) { return ::hx::Val( max_width ); }
		if (HX_FIELD_EQ(inName,"box_space") ) { return ::hx::Val( box_space ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textX") ) { return ::hx::Val( set_textX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textY") ) { return ::hx::Val( set_textY_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		if (HX_FIELD_EQ(inName,"anchorTime") ) { return ::hx::Val( anchorTime_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_checked") ) { return ::hx::Val( set_checked_dyn() ); }
		if (HX_FIELD_EQ(inName,"_clickCheck") ) { return ::hx::Val( _clickCheck_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"anchorLabelX") ) { return ::hx::Val( anchorLabelX_dyn() ); }
		if (HX_FIELD_EQ(inName,"anchorLabelY") ) { return ::hx::Val( anchorLabelY_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkbox_dirty") ) { return ::hx::Val( checkbox_dirty ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textIsClickable") ) { return ::hx::Val( textIsClickable ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return ::hx::Val( skipButtonUpdate ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return ::hx::Val( set_skipButtonUpdate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUICheckBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { mark=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textX(inValue.Cast< Float >()) );textX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textY(inValue.Cast< Float >()) );textY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"checked") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_checked(inValue.Cast< bool >()) );checked=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_width") ) { max_width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"box_space") ) { box_space=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkbox_dirty") ) { checkbox_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textIsClickable") ) { textIsClickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_skipButtonUpdate(inValue.Cast< bool >()) );skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUICheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("mark",0d,40,56,48));
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("max_width",eb,9a,40,c1));
	outFields->push(HX_("checked",27,b3,24,13));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("textIsClickable",eb,c4,a0,c4));
	outFields->push(HX_("checkbox_dirty",d6,fd,f4,a5));
	outFields->push(HX_("textX",0b,4b,99,0d));
	outFields->push(HX_("textY",0c,4b,99,0d));
	outFields->push(HX_("box_space",52,2c,a7,88));
	outFields->push(HX_("skipButtonUpdate",ba,02,f2,13));
	outFields->push(HX_("text",ad,cc,f9,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUICheckBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxUICheckBox_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxUICheckBox_obj,mark),HX_("mark",0d,40,56,48)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIButton */ ,(int)offsetof(FlxUICheckBox_obj,button),HX_("button",f2,61,e0,d9)},
	{::hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,max_width),HX_("max_width",eb,9a,40,c1)},
	{::hx::fsBool,(int)offsetof(FlxUICheckBox_obj,checked),HX_("checked",27,b3,24,13)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxUICheckBox_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsBool,(int)offsetof(FlxUICheckBox_obj,textIsClickable),HX_("textIsClickable",eb,c4,a0,c4)},
	{::hx::fsBool,(int)offsetof(FlxUICheckBox_obj,checkbox_dirty),HX_("checkbox_dirty",d6,fd,f4,a5)},
	{::hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,textX),HX_("textX",0b,4b,99,0d)},
	{::hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,textY),HX_("textY",0c,4b,99,0d)},
	{::hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,box_space),HX_("box_space",52,2c,a7,88)},
	{::hx::fsBool,(int)offsetof(FlxUICheckBox_obj,skipButtonUpdate),HX_("skipButtonUpdate",ba,02,f2,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUICheckBox_obj,callback),HX_("callback",c5,99,06,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUICheckBox_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxUICheckBox_obj::CLICK_EVENT,HX_("CLICK_EVENT",63,89,c0,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUICheckBox_obj_sMemberFields[] = {
	HX_("box",0b,be,4a,00),
	HX_("mark",0d,40,56,48),
	HX_("button",f2,61,e0,d9),
	HX_("max_width",eb,9a,40,c1),
	HX_("checked",27,b3,24,13),
	HX_("params",46,fb,7a,ed),
	HX_("textIsClickable",eb,c4,a0,c4),
	HX_("checkbox_dirty",d6,fd,f4,a5),
	HX_("textX",0b,4b,99,0d),
	HX_("textY",0c,4b,99,0d),
	HX_("box_space",52,2c,a7,88),
	HX_("skipButtonUpdate",ba,02,f2,13),
	HX_("callback",c5,99,06,7f),
	HX_("set_skipButtonUpdate",37,1f,14,ff),
	HX_("set_params",83,09,80,e1),
	HX_("set_color",c6,b9,56,71),
	HX_("setLabel",f2,76,e3,7d),
	HX_("getLabel",7e,1d,86,cf),
	HX_("set_visible",95,df,8b,33),
	HX_("anchorTime",22,11,4e,c0),
	HX_("set_textX",6e,93,93,34),
	HX_("set_textY",6f,93,93,34),
	HX_("anchorLabelX",39,9c,79,27),
	HX_("anchorLabelY",3a,9c,79,27),
	HX_("destroy",fa,2c,86,24),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("update",09,86,05,87),
	HX_("set_checked",4a,1a,8c,a3),
	HX_("_clickCheck",7f,d4,bf,58),
	::String(null()) };

static void FlxUICheckBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUICheckBox_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUICheckBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUICheckBox_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

::hx::Class FlxUICheckBox_obj::__mClass;

static ::String FlxUICheckBox_obj_sStaticFields[] = {
	HX_("CLICK_EVENT",63,89,c0,0d),
	::String(null())
};

void FlxUICheckBox_obj::__register()
{
	FlxUICheckBox_obj _hx_dummy;
	FlxUICheckBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUICheckBox",98,2b,10,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUICheckBox_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUICheckBox_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUICheckBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUICheckBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUICheckBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUICheckBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUICheckBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUICheckBox_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_41_boot)
HXDLIN(  41)		CLICK_EVENT = HX_("click_check_box",dd,c1,1e,a8);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
