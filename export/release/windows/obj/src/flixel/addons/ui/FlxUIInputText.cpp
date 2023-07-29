#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3220fe253d6a28c5_10_new,"flixel.addons.ui.FlxUIInputText","new",0x1be658b4,"flixel.addons.ui.FlxUIInputText.new","flixel/addons/ui/FlxUIInputText.hx",10,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_25_resize,"flixel.addons.ui.FlxUIInputText","resize",0x10b3be20,"flixel.addons.ui.FlxUIInputText.resize","flixel/addons/ui/FlxUIInputText.hx",25,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_32_onChange,"flixel.addons.ui.FlxUIInputText","onChange",0x695a4f1b,"flixel.addons.ui.FlxUIInputText.onChange","flixel/addons/ui/FlxUIInputText.hx",32,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_16_boot,"flixel.addons.ui.FlxUIInputText","boot",0x45c0455e,"flixel.addons.ui.FlxUIInputText.boot","flixel/addons/ui/FlxUIInputText.hx",16,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_17_boot,"flixel.addons.ui.FlxUIInputText","boot",0x45c0455e,"flixel.addons.ui.FlxUIInputText.boot","flixel/addons/ui/FlxUIInputText.hx",17,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_18_boot,"flixel.addons.ui.FlxUIInputText","boot",0x45c0455e,"flixel.addons.ui.FlxUIInputText.boot","flixel/addons/ui/FlxUIInputText.hx",18,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_19_boot,"flixel.addons.ui.FlxUIInputText","boot",0x45c0455e,"flixel.addons.ui.FlxUIInputText.boot","flixel/addons/ui/FlxUIInputText.hx",19,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_20_boot,"flixel.addons.ui.FlxUIInputText","boot",0x45c0455e,"flixel.addons.ui.FlxUIInputText.boot","flixel/addons/ui/FlxUIInputText.hx",20,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_21_boot,"flixel.addons.ui.FlxUIInputText","boot",0x45c0455e,"flixel.addons.ui.FlxUIInputText.boot","flixel/addons/ui/FlxUIInputText.hx",21,0x43f86a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_3220fe253d6a28c5_22_boot,"flixel.addons.ui.FlxUIInputText","boot",0x45c0455e,"flixel.addons.ui.FlxUIInputText.boot","flixel/addons/ui/FlxUIInputText.hx",22,0x43f86a3b)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIInputText_obj::__construct( ::Dynamic X, ::Dynamic Y, ::Dynamic Width,::String Text, ::Dynamic size, ::Dynamic TextColor, ::Dynamic BackgroundColor, ::Dynamic EmbeddedFont){
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_10_new)
HXLINE(  14)		this->broadcastToFlxUI = true;
HXLINE(  10)		super::__construct(X,Y,Width,Text,size,TextColor,BackgroundColor,EmbeddedFont);
            	}

Dynamic FlxUIInputText_obj::__CreateEmpty() { return new FlxUIInputText_obj; }

void *FlxUIInputText_obj::_hx_vtable = 0;

Dynamic FlxUIInputText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIInputText_obj > _hx_result = new FlxUIInputText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxUIInputText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e702350) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x2bf43458) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2bf43458;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x2e702350;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x752f90b6 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUIInputText__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIInputText_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIInputText_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIInputText_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUIInputText__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUIInputText__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIInputText_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIInputText_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIInputText_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIInputText_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUIInputText__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUIInputText_obj::set_params,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUIInputText__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIInputText_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIInputText_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIInputText_obj::resize,
};

void *FlxUIInputText_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUIInputText__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUIInputText__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUIInputText__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUIInputText__hx_flixel_addons_ui_interfaces_IHasParams;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUIInputText__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUIInputText_obj::resize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_25_resize)
HXLINE(  26)		this->set_width(w);
HXLINE(  27)		this->set_height(h);
HXLINE(  28)		this->calcFrame(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIInputText_obj,resize,(void))

void FlxUIInputText_obj::onChange(::String action){
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_32_onChange)
HXLINE(  33)		this->super::onChange(action);
HXLINE(  34)		if (this->broadcastToFlxUI) {
HXLINE(  36)			::String _hx_switch_0 = action;
            			if (  (_hx_switch_0==HX_("backspace",3f,85,ea,ca)) ||  (_hx_switch_0==HX_("delete",2b,c0,d8,6a)) ){
HXLINE(  41)				::flixel::addons::ui::FlxUI_obj::event(HX_("delete_input_text",16,b7,28,af),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXLINE(  42)				::flixel::addons::ui::FlxUI_obj::event(HX_("change_input_text",f1,11,47,68),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXLINE(  40)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("copy",b5,bb,c4,41)) ){
HXLINE(  47)				::flixel::addons::ui::FlxUI_obj::event(HX_("copy_input_text",cc,b3,c9,5b),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXDLIN(  47)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("cut",82,85,4b,00)) ){
HXLINE(  52)				::flixel::addons::ui::FlxUI_obj::event(HX_("cut_input_text",1f,53,60,b2),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXLINE(  53)				::flixel::addons::ui::FlxUI_obj::event(HX_("change_input_text",f1,11,47,68),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXLINE(  51)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("enter",18,6d,86,70)) ){
HXLINE(  39)				::flixel::addons::ui::FlxUI_obj::event(HX_("enter_input_text",49,07,7b,5a),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXDLIN(  39)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("input",0a,c4,1d,be)) ){
HXLINE(  44)				::flixel::addons::ui::FlxUI_obj::event(HX_("input_input_text",97,11,0d,4c),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXLINE(  45)				::flixel::addons::ui::FlxUI_obj::event(HX_("change_input_text",f1,11,47,68),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXLINE(  43)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("paste",53,53,56,bd)) ){
HXLINE(  49)				::flixel::addons::ui::FlxUI_obj::event(HX_("paste_input_text",ee,24,a7,55),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXLINE(  50)				::flixel::addons::ui::FlxUI_obj::event(HX_("change_input_text",f1,11,47,68),::hx::ObjectPtr<OBJ_>(this),this->text,this->params);
HXLINE(  48)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            	}


::String FlxUIInputText_obj::CHANGE_EVENT;

::String FlxUIInputText_obj::ENTER_EVENT;

::String FlxUIInputText_obj::DELETE_EVENT;

::String FlxUIInputText_obj::INPUT_EVENT;

::String FlxUIInputText_obj::COPY_EVENT;

::String FlxUIInputText_obj::PASTE_EVENT;

::String FlxUIInputText_obj::CUT_EVENT;


::hx::ObjectPtr< FlxUIInputText_obj > FlxUIInputText_obj::__new( ::Dynamic X, ::Dynamic Y, ::Dynamic Width,::String Text, ::Dynamic size, ::Dynamic TextColor, ::Dynamic BackgroundColor, ::Dynamic EmbeddedFont) {
	::hx::ObjectPtr< FlxUIInputText_obj > __this = new FlxUIInputText_obj();
	__this->__construct(X,Y,Width,Text,size,TextColor,BackgroundColor,EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxUIInputText_obj > FlxUIInputText_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic Width,::String Text, ::Dynamic size, ::Dynamic TextColor, ::Dynamic BackgroundColor, ::Dynamic EmbeddedFont) {
	FlxUIInputText_obj *__this = (FlxUIInputText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIInputText_obj), true, "flixel.addons.ui.FlxUIInputText"));
	*(void **)__this = FlxUIInputText_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Text,size,TextColor,BackgroundColor,EmbeddedFont);
	return __this;
}

FlxUIInputText_obj::FlxUIInputText_obj()
{
}

void FlxUIInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIInputText);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	 ::flixel::addons::ui::FlxInputText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	 ::flixel::addons::ui::FlxInputText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIInputText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIInputText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIInputText_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxUIInputText_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsBool,(int)offsetof(FlxUIInputText_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUIInputText_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxUIInputText_obj::CHANGE_EVENT,HX_("CHANGE_EVENT",ab,38,ff,8d)},
	{::hx::fsString,(void *) &FlxUIInputText_obj::ENTER_EVENT,HX_("ENTER_EVENT",33,f6,ec,35)},
	{::hx::fsString,(void *) &FlxUIInputText_obj::DELETE_EVENT,HX_("DELETE_EVENT",a6,a5,69,0d)},
	{::hx::fsString,(void *) &FlxUIInputText_obj::INPUT_EVENT,HX_("INPUT_EVENT",a5,0e,f3,d3)},
	{::hx::fsString,(void *) &FlxUIInputText_obj::COPY_EVENT,HX_("COPY_EVENT",b0,00,51,b0)},
	{::hx::fsString,(void *) &FlxUIInputText_obj::PASTE_EVENT,HX_("PASTE_EVENT",ae,ba,1f,66)},
	{::hx::fsString,(void *) &FlxUIInputText_obj::CUT_EVENT,HX_("CUT_EVENT",1d,9e,93,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUIInputText_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("broadcastToFlxUI",ca,32,56,1a),
	HX_("resize",f4,59,7b,08),
	HX_("onChange",ef,87,1f,97),
	::String(null()) };

static void FlxUIInputText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::CHANGE_EVENT,"CHANGE_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::ENTER_EVENT,"ENTER_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::DELETE_EVENT,"DELETE_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::INPUT_EVENT,"INPUT_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::COPY_EVENT,"COPY_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::PASTE_EVENT,"PASTE_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::CUT_EVENT,"CUT_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUIInputText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::CHANGE_EVENT,"CHANGE_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::ENTER_EVENT,"ENTER_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::DELETE_EVENT,"DELETE_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::INPUT_EVENT,"INPUT_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::COPY_EVENT,"COPY_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::PASTE_EVENT,"PASTE_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::CUT_EVENT,"CUT_EVENT");
};

#endif

::hx::Class FlxUIInputText_obj::__mClass;

static ::String FlxUIInputText_obj_sStaticFields[] = {
	HX_("CHANGE_EVENT",ab,38,ff,8d),
	HX_("ENTER_EVENT",33,f6,ec,35),
	HX_("DELETE_EVENT",a6,a5,69,0d),
	HX_("INPUT_EVENT",a5,0e,f3,d3),
	HX_("COPY_EVENT",b0,00,51,b0),
	HX_("PASTE_EVENT",ae,ba,1f,66),
	HX_("CUT_EVENT",1d,9e,93,c7),
	::String(null())
};

void FlxUIInputText_obj::__register()
{
	FlxUIInputText_obj _hx_dummy;
	FlxUIInputText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIInputText",c2,2e,3f,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUIInputText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUIInputText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIInputText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIInputText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUIInputText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIInputText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIInputText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUIInputText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_16_boot)
HXDLIN(  16)		CHANGE_EVENT = HX_("change_input_text",f1,11,47,68);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_17_boot)
HXDLIN(  17)		ENTER_EVENT = HX_("enter_input_text",49,07,7b,5a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_18_boot)
HXDLIN(  18)		DELETE_EVENT = HX_("delete_input_text",16,b7,28,af);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_19_boot)
HXDLIN(  19)		INPUT_EVENT = HX_("input_input_text",97,11,0d,4c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_20_boot)
HXDLIN(  20)		COPY_EVENT = HX_("copy_input_text",cc,b3,c9,5b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_21_boot)
HXDLIN(  21)		PASTE_EVENT = HX_("paste_input_text",ee,24,a7,55);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3220fe253d6a28c5_22_boot)
HXDLIN(  22)		CUT_EVENT = HX_("cut_input_text",1f,53,60,b2);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
