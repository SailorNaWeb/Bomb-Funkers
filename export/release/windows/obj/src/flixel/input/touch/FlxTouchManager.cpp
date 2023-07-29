#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_Multitouch
#include <openfl/ui/Multitouch.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_267129cd6cd94d38_160_new,"flixel.input.touch.FlxTouchManager","new",0x0e972b2d,"flixel.input.touch.FlxTouchManager.new","flixel/input/touch/FlxTouchManager.hx",160,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_39_getByID,"flixel.input.touch.FlxTouchManager","getByID",0x18c2ee75,"flixel.input.touch.FlxTouchManager.getByID","flixel/input/touch/FlxTouchManager.hx",39,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_47_getFirst,"flixel.input.touch.FlxTouchManager","getFirst",0xd4f3e5cd,"flixel.input.touch.FlxTouchManager.getFirst","flixel/input/touch/FlxTouchManager.hx",47,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_62_destroy,"flixel.input.touch.FlxTouchManager","destroy",0x29a37247,"flixel.input.touch.FlxTouchManager.destroy","flixel/input/touch/FlxTouchManager.hx",62,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_85_justStarted,"flixel.input.touch.FlxTouchManager","justStarted",0x4159d442,"flixel.input.touch.FlxTouchManager.justStarted","flixel/input/touch/FlxTouchManager.hx",85,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_116_justReleased,"flixel.input.touch.FlxTouchManager","justReleased",0x217e7e9c,"flixel.input.touch.FlxTouchManager.justReleased","flixel/input/touch/FlxTouchManager.hx",116,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_143_reset,"flixel.input.touch.FlxTouchManager","reset",0x90b1b1dc,"flixel.input.touch.FlxTouchManager.reset","flixel/input/touch/FlxTouchManager.hx",143,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_176_handleTouchBegin,"flixel.input.touch.FlxTouchManager","handleTouchBegin",0x51a5a0c5,"flixel.input.touch.FlxTouchManager.handleTouchBegin","flixel/input/touch/FlxTouchManager.hx",176,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_194_handleTouchEnd,"flixel.input.touch.FlxTouchManager","handleTouchEnd",0xa3529b77,"flixel.input.touch.FlxTouchManager.handleTouchEnd","flixel/input/touch/FlxTouchManager.hx",194,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_207_handleTouchMove,"flixel.input.touch.FlxTouchManager","handleTouchMove",0x4a3ff3f5,"flixel.input.touch.FlxTouchManager.handleTouchMove","flixel/input/touch/FlxTouchManager.hx",207,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_224_add,"flixel.input.touch.FlxTouchManager","add",0x0e8d4cee,"flixel.input.touch.FlxTouchManager.add","flixel/input/touch/FlxTouchManager.hx",224,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_239_recycle,"flixel.input.touch.FlxTouchManager","recycle",0x3ca95560,"flixel.input.touch.FlxTouchManager.recycle","flixel/input/touch/FlxTouchManager.hx",239,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_254_update,"flixel.input.touch.FlxTouchManager","update",0x8957295c,"flixel.input.touch.FlxTouchManager.update","flixel/input/touch/FlxTouchManager.hx",254,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_279_onFocus,"flixel.input.touch.FlxTouchManager","onFocus",0x9fe44386,"flixel.input.touch.FlxTouchManager.onFocus","flixel/input/touch/FlxTouchManager.hx",279,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_283_onFocusLost,"flixel.input.touch.FlxTouchManager","onFocusLost",0x9504548a,"flixel.input.touch.FlxTouchManager.onFocusLost","flixel/input/touch/FlxTouchManager.hx",283,0xc27259e6)
HX_LOCAL_STACK_FRAME(_hx_pos_267129cd6cd94d38_17_boot,"flixel.input.touch.FlxTouchManager","boot",0xadc79cc5,"flixel.input.touch.FlxTouchManager.boot","flixel/input/touch/FlxTouchManager.hx",17,0xc27259e6)
namespace flixel{
namespace input{
namespace touch{

void FlxTouchManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_267129cd6cd94d38_160_new)
HXLINE( 161)		this->list = ::Array_obj< ::Dynamic>::__new();
HXLINE( 162)		this->_inactiveTouches = ::Array_obj< ::Dynamic>::__new();
HXLINE( 163)		this->_touchesCache =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 164)		::flixel::input::touch::FlxTouchManager_obj::maxTouchPoints = ::openfl::ui::Multitouch_obj::maxTouchPoints;
HXLINE( 165)		::openfl::ui::Multitouch_obj::inputMode = 2;
HXLINE( 167)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("touchBegin",ea,cd,e6,a9),this->handleTouchBegin_dyn(),null(),null(),null());
HXLINE( 168)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("touchEnd",5c,c5,09,00),this->handleTouchEnd_dyn(),null(),null(),null());
HXLINE( 169)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("touchMove",70,72,cd,0d),this->handleTouchMove_dyn(),null(),null(),null());
            	}

Dynamic FlxTouchManager_obj::__CreateEmpty() { return new FlxTouchManager_obj; }

void *FlxTouchManager_obj::_hx_vtable = 0;

Dynamic FlxTouchManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTouchManager_obj > _hx_result = new FlxTouchManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTouchManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3f93d6ef;
}

static ::flixel::input::IFlxInputManager_obj _hx_flixel_input_touch_FlxTouchManager__hx_flixel_input_IFlxInputManager= {
	( void (::hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::destroy,
	( void (::hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::reset,
	( void (::hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::update,
	( void (::hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::onFocus,
	( void (::hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::onFocusLost,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_touch_FlxTouchManager__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::touch::FlxTouchManager_obj::destroy,
};

void *FlxTouchManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x65dd217a: return &_hx_flixel_input_touch_FlxTouchManager__hx_flixel_input_IFlxInputManager;
		case (int)0xd4fe2fcd: return &_hx_flixel_input_touch_FlxTouchManager__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::input::touch::FlxTouch FlxTouchManager_obj::getByID(int TouchPointID){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_39_getByID)
HXDLIN(  39)		return ( ( ::flixel::input::touch::FlxTouch)(this->_touchesCache->get(TouchPointID)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,getByID,return )

 ::flixel::input::touch::FlxTouch FlxTouchManager_obj::getFirst(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_47_getFirst)
HXDLIN(  47)		if (::hx::IsNotNull( this->list->__get(0).StaticCast<  ::flixel::input::touch::FlxTouch >() )) {
HXLINE(  49)			return this->list->__get(0).StaticCast<  ::flixel::input::touch::FlxTouch >();
            		}
            		else {
HXLINE(  53)			return null();
            		}
HXLINE(  47)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,getFirst,return )

void FlxTouchManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_62_destroy)
HXLINE(  63)		{
HXLINE(  63)			int _g = 0;
HXDLIN(  63)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  63)			while((_g < _g1->length)){
HXLINE(  63)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN(  63)				_g = (_g + 1);
HXLINE(  65)				touch->destroy();
            			}
            		}
HXLINE(  67)		this->list = null();
HXLINE(  69)		{
HXLINE(  69)			int _g2 = 0;
HXDLIN(  69)			::Array< ::Dynamic> _g3 = this->_inactiveTouches;
HXDLIN(  69)			while((_g2 < _g3->length)){
HXLINE(  69)				 ::flixel::input::touch::FlxTouch touch = _g3->__get(_g2).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN(  69)				_g2 = (_g2 + 1);
HXLINE(  71)				touch->destroy();
            			}
            		}
HXLINE(  73)		this->_inactiveTouches = null();
HXLINE(  75)		this->_touchesCache = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,destroy,(void))

::Array< ::Dynamic> FlxTouchManager_obj::justStarted(::Array< ::Dynamic> TouchArray){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_85_justStarted)
HXLINE(  86)		if (::hx::IsNull( TouchArray )) {
HXLINE(  88)			TouchArray = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE(  91)		int touchLen = TouchArray->length;
HXLINE(  93)		if ((touchLen > 0)) {
HXLINE(  95)			TouchArray->removeRange(0,touchLen);
            		}
HXLINE(  98)		{
HXLINE(  98)			int _g = 0;
HXDLIN(  98)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN(  98)			while((_g < _g1->length)){
HXLINE(  98)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN(  98)				_g = (_g + 1);
HXLINE( 100)				if ((touch->input->current == 2)) {
HXLINE( 102)					TouchArray->push(touch);
            				}
            			}
            		}
HXLINE( 106)		return TouchArray;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justStarted,return )

::Array< ::Dynamic> FlxTouchManager_obj::justReleased(::Array< ::Dynamic> TouchArray){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_116_justReleased)
HXLINE( 117)		if (::hx::IsNull( TouchArray )) {
HXLINE( 119)			TouchArray = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 122)		int touchLen = TouchArray->length;
HXLINE( 123)		if ((touchLen > 0)) {
HXLINE( 125)			TouchArray->removeRange(0,touchLen);
            		}
HXLINE( 128)		{
HXLINE( 128)			int _g = 0;
HXDLIN( 128)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 128)			while((_g < _g1->length)){
HXLINE( 128)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 128)				_g = (_g + 1);
HXLINE( 130)				if ((touch->input->current == -1)) {
HXLINE( 132)					TouchArray->push(touch);
            				}
            			}
            		}
HXLINE( 136)		return TouchArray;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justReleased,return )

void FlxTouchManager_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_143_reset)
HXLINE( 144)		{
HXLINE( 144)			 ::Dynamic key = this->_touchesCache->keys();
HXDLIN( 144)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 144)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 146)				this->_touchesCache->remove(key1);
            			}
            		}
HXLINE( 149)		{
HXLINE( 149)			int _g = 0;
HXDLIN( 149)			::Array< ::Dynamic> _g1 = this->list;
HXDLIN( 149)			while((_g < _g1->length)){
HXLINE( 149)				 ::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXDLIN( 149)				_g = (_g + 1);
HXLINE( 151)				touch->input->reset();
HXLINE( 152)				this->_inactiveTouches->push(touch);
            			}
            		}
HXLINE( 155)		this->list->removeRange(0,this->list->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,reset,(void))

void FlxTouchManager_obj::handleTouchBegin( ::openfl::events::TouchEvent FlashEvent){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_176_handleTouchBegin)
HXLINE( 177)		 ::flixel::input::touch::FlxTouch touch = ( ( ::flixel::input::touch::FlxTouch)(this->_touchesCache->get(FlashEvent->touchPointID)) );
HXLINE( 178)		if (::hx::IsNotNull( touch )) {
HXLINE( 180)			int _hx_tmp = ::Std_obj::_hx_int(FlashEvent->stageX);
HXDLIN( 180)			touch->setXY(_hx_tmp,::Std_obj::_hx_int(FlashEvent->stageY));
HXLINE( 181)			touch->pressure = FlashEvent->pressure;
            		}
            		else {
HXLINE( 185)			int touch1 = ::Std_obj::_hx_int(FlashEvent->stageX);
HXDLIN( 185)			int touch2 = ::Std_obj::_hx_int(FlashEvent->stageY);
HXDLIN( 185)			touch = this->recycle(touch1,touch2,FlashEvent->touchPointID,FlashEvent->pressure);
            		}
HXLINE( 187)		touch->input->press();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchBegin,(void))

void FlxTouchManager_obj::handleTouchEnd( ::openfl::events::TouchEvent FlashEvent){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_194_handleTouchEnd)
HXLINE( 195)		 ::flixel::input::touch::FlxTouch touch = ( ( ::flixel::input::touch::FlxTouch)(this->_touchesCache->get(FlashEvent->touchPointID)) );
HXLINE( 197)		if (::hx::IsNotNull( touch )) {
HXLINE( 199)			touch->input->release();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchEnd,(void))

void FlxTouchManager_obj::handleTouchMove( ::openfl::events::TouchEvent FlashEvent){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_207_handleTouchMove)
HXLINE( 208)		 ::flixel::input::touch::FlxTouch touch = ( ( ::flixel::input::touch::FlxTouch)(this->_touchesCache->get(FlashEvent->touchPointID)) );
HXLINE( 210)		if (::hx::IsNotNull( touch )) {
HXLINE( 212)			int _hx_tmp = ::Std_obj::_hx_int(FlashEvent->stageX);
HXDLIN( 212)			touch->setXY(_hx_tmp,::Std_obj::_hx_int(FlashEvent->stageY));
HXLINE( 213)			touch->pressure = FlashEvent->pressure;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchMove,(void))

 ::flixel::input::touch::FlxTouch FlxTouchManager_obj::add( ::flixel::input::touch::FlxTouch Touch){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_224_add)
HXLINE( 225)		this->list->push(Touch);
HXLINE( 226)		this->_touchesCache->set(( (int)(Touch->input->ID) ),Touch);
HXLINE( 227)		return Touch;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,add,return )

 ::flixel::input::touch::FlxTouch FlxTouchManager_obj::recycle(int X,int Y,int PointID,Float pressure){
            	HX_GC_STACKFRAME(&_hx_pos_267129cd6cd94d38_239_recycle)
HXLINE( 240)		if ((this->_inactiveTouches->length > 0)) {
HXLINE( 242)			 ::flixel::input::touch::FlxTouch touch = this->_inactiveTouches->pop().StaticCast<  ::flixel::input::touch::FlxTouch >();
HXLINE( 243)			touch->recycle(X,Y,PointID,pressure);
HXLINE( 244)			return this->add(touch);
            		}
HXLINE( 246)		return this->add( ::flixel::input::touch::FlxTouch_obj::__alloc( HX_CTX ,X,Y,PointID,pressure));
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTouchManager_obj,recycle,return )

void FlxTouchManager_obj::update(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_254_update)
HXLINE( 255)		int i = (this->list->length - 1);
HXLINE( 256)		 ::flixel::input::touch::FlxTouch touch;
HXLINE( 258)		while((i >= 0)){
HXLINE( 260)			touch = this->list->__get(i).StaticCast<  ::flixel::input::touch::FlxTouch >();
HXLINE( 263)			bool _hx_tmp;
HXDLIN( 263)			 ::flixel::input::FlxInput _this = touch->input;
HXDLIN( 263)			bool _hx_tmp1;
HXDLIN( 263)			if ((_this->current != 0)) {
HXLINE( 263)				_hx_tmp1 = (_this->current == -1);
            			}
            			else {
HXLINE( 263)				_hx_tmp1 = true;
            			}
HXDLIN( 263)			if (_hx_tmp1) {
HXLINE( 263)				_hx_tmp = (touch->input->current != -1);
            			}
            			else {
HXLINE( 263)				_hx_tmp = false;
            			}
HXDLIN( 263)			if (_hx_tmp) {
HXLINE( 265)				touch->input->reset();
HXLINE( 266)				this->_touchesCache->remove(( (int)(touch->input->ID) ));
HXLINE( 267)				this->list->removeRange(i,1);
HXLINE( 268)				this->_inactiveTouches->push(touch);
            			}
            			else {
HXLINE( 272)				touch->update();
            			}
HXLINE( 275)			i = (i - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,update,(void))

void FlxTouchManager_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_279_onFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocus,(void))

void FlxTouchManager_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_283_onFocusLost)
HXDLIN( 283)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocusLost,(void))

int FlxTouchManager_obj::maxTouchPoints;


::hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__new() {
	::hx::ObjectPtr< FlxTouchManager_obj > __this = new FlxTouchManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTouchManager_obj *__this = (FlxTouchManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTouchManager_obj), true, "flixel.input.touch.FlxTouchManager"));
	*(void **)__this = FlxTouchManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTouchManager_obj::FlxTouchManager_obj()
{
}

void FlxTouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouchManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_END_CLASS();
}

void FlxTouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
}

::hx::Val FlxTouchManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return ::hx::Val( getByID_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return ::hx::Val( getFirst_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justStarted") ) { return ::hx::Val( justStarted_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return ::hx::Val( justReleased_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return ::hx::Val( _touchesCache ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return ::hx::Val( handleTouchEnd_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return ::hx::Val( handleTouchMove_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return ::hx::Val( _inactiveTouches ); }
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return ::hx::Val( handleTouchBegin_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTouchManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { outValue = ( maxTouchPoints ); return true; }
	}
	return false;
}

::hx::Val FlxTouchManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTouchManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FlxTouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("list",5e,1c,b3,47));
	outFields->push(HX_("_inactiveTouches",43,04,4f,3d));
	outFields->push(HX_("_touchesCache",f4,e3,c3,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTouchManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTouchManager_obj,list),HX_("list",5e,1c,b3,47)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTouchManager_obj,_inactiveTouches),HX_("_inactiveTouches",43,04,4f,3d)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxTouchManager_obj,_touchesCache),HX_("_touchesCache",f4,e3,c3,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxTouchManager_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxTouchManager_obj::maxTouchPoints,HX_("maxTouchPoints",fe,7e,0e,64)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxTouchManager_obj_sMemberFields[] = {
	HX_("list",5e,1c,b3,47),
	HX_("_inactiveTouches",43,04,4f,3d),
	HX_("_touchesCache",f4,e3,c3,76),
	HX_("getByID",28,a9,a5,13),
	HX_("getFirst",ba,87,74,60),
	HX_("destroy",fa,2c,86,24),
	HX_("justStarted",75,64,db,ed),
	HX_("justReleased",09,1b,5b,66),
	HX_("reset",cf,49,c8,e6),
	HX_("handleTouchBegin",b2,77,ad,79),
	HX_("handleTouchEnd",24,ed,e0,4d),
	HX_("handleTouchMove",a8,19,39,dc),
	HX_("add",21,f2,49,00),
	HX_("recycle",13,10,8c,37),
	HX_("update",09,86,05,87),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	::String(null()) };

static void FlxTouchManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTouchManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#endif

::hx::Class FlxTouchManager_obj::__mClass;

static ::String FlxTouchManager_obj_sStaticFields[] = {
	HX_("maxTouchPoints",fe,7e,0e,64),
	::String(null())
};

void FlxTouchManager_obj::__register()
{
	FlxTouchManager_obj _hx_dummy;
	FlxTouchManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.touch.FlxTouchManager",bb,10,25,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTouchManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTouchManager_obj::__SetStatic;
	__mClass->mMarkFunc = FlxTouchManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTouchManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTouchManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTouchManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTouchManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTouchManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTouchManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxTouchManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_267129cd6cd94d38_17_boot)
HXDLIN(  17)		maxTouchPoints = 0;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
