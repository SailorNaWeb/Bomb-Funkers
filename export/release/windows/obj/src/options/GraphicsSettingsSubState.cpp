#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Character
#include <objects/Character.h>
#endif
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_GraphicsSettingsSubState
#include <options/GraphicsSettingsSubState.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d30d54fdd7b0ca4_18_new,"options.GraphicsSettingsSubState","new",0x716f7b01,"options.GraphicsSettingsSubState.new","options/GraphicsSettingsSubState.hx",18,0x60b97b2e)
HX_DEFINE_STACK_FRAME(_hx_pos_0d30d54fdd7b0ca4_5_new,"options.GraphicsSettingsSubState","new",0x716f7b01,"options.GraphicsSettingsSubState.new","options/GraphicsSettingsSubState.hx",5,0x60b97b2e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d30d54fdd7b0ca4_67_onChangeAntiAliasing,"options.GraphicsSettingsSubState","onChangeAntiAliasing",0x62f8a1e2,"options.GraphicsSettingsSubState.onChangeAntiAliasing","options/GraphicsSettingsSubState.hx",67,0x60b97b2e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d30d54fdd7b0ca4_78_onChangeFramerate,"options.GraphicsSettingsSubState","onChangeFramerate",0x9c8ce9ff,"options.GraphicsSettingsSubState.onChangeFramerate","options/GraphicsSettingsSubState.hx",78,0x60b97b2e)
HX_LOCAL_STACK_FRAME(_hx_pos_0d30d54fdd7b0ca4_91_changeSelection,"options.GraphicsSettingsSubState","changeSelection",0x27b730dd,"options.GraphicsSettingsSubState.changeSelection","options/GraphicsSettingsSubState.hx",91,0x60b97b2e)
namespace options{

void GraphicsSettingsSubState_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::options::GraphicsSettingsSubState,_gthis) HXARGC(1)
            		void _hx_run(::String name){
            			HX_GC_STACKFRAME(&_hx_pos_0d30d54fdd7b0ca4_18_new)
HXLINE(  18)			_gthis->boyfriend->dance();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_0d30d54fdd7b0ca4_5_new)
HXLINE(   8)		this->boyfriend = null();
HXLINE(  10)		 ::options::GraphicsSettingsSubState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  11)		this->title = HX_("Graphics",eb,b4,19,ec);
HXLINE(  12)		this->rpcTitle = HX_("Graphics Settings Menu",07,04,2c,0e);
HXLINE(  14)		this->boyfriend =  ::objects::Character_obj::__alloc( HX_CTX ,( (Float)(840) ),( (Float)(170) ),HX_("bf",c4,55,00,00),true);
HXLINE(  15)		 ::objects::Character _hx_tmp = this->boyfriend;
HXDLIN(  15)		_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->boyfriend->get_width() * ((Float)0.75))),null());
HXLINE(  16)		this->boyfriend->updateHitbox();
HXLINE(  17)		this->boyfriend->dance();
HXLINE(  18)		this->boyfriend->animation->finishCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  19)		this->boyfriend->set_visible(false);
HXLINE(  22)		 ::options::Option option =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Low Quality",f3,10,75,e8),HX_("If checked, disables some background details,\ndecreases loading times and improves performance.",14,52,02,0c),HX_("lowQuality",8b,52,27,3e),HX_("bool",2a,84,1b,41),null());
HXLINE(  26)		this->addOption(option);
HXLINE(  28)		 ::options::Option option1 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Anti-Aliasing",9d,02,6c,80),HX_("If unchecked, disables anti-aliasing, increases performance\nat the cost of sharper visuals.",52,74,f6,10),HX_("antialiasing",f4,16,b3,48),HX_("bool",2a,84,1b,41),null());
HXLINE(  32)		option1->onChange = this->onChangeAntiAliasing_dyn();
HXLINE(  33)		this->addOption(option1);
HXLINE(  34)		this->antialiasingOption = (this->optionsArray->length - 1);
HXLINE(  36)		 ::options::Option option2 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Shaders",8e,a9,d7,2c),HX_("If unchecked, disables shaders.\nIt's used for some visual effects, and also CPU intensive for weaker PCs.",64,92,e2,47),HX_("shaders",ae,81,86,5f),HX_("bool",2a,84,1b,41),null());
HXLINE(  40)		this->addOption(option2);
HXLINE(  42)		 ::options::Option option3 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("GPU Caching",cb,15,e1,f5),HX_("If checked, allows the GPU to be used for caching textures, decreasing RAM usage.\nDon't turn this on if you have a shitty Graphics Card.",43,90,32,b2),HX_("cacheOnGPU",ab,68,1e,75),HX_("bool",2a,84,1b,41),null());
HXLINE(  46)		this->addOption(option3);
HXLINE(  49)		 ::options::Option option4 =  ::options::Option_obj::__alloc( HX_CTX ,HX_("Framerate",6d,c5,1e,f0),HX_("Pretty self explanatory, isn't it?",b4,ed,8b,6f),HX_("framerate",8d,e5,4b,4e),HX_("int",ef,0c,50,00),null());
HXLINE(  53)		this->addOption(option4);
HXLINE(  55)		option4->minValue = 60;
HXLINE(  56)		option4->maxValue = 240;
HXLINE(  57)		option4->displayFormat = HX_("%v FPS",da,04,d9,d1);
HXLINE(  58)		option4->onChange = this->onChangeFramerate_dyn();
HXLINE(  61)		super::__construct();
HXLINE(  62)		this->insert(1,this->boyfriend);
            	}

Dynamic GraphicsSettingsSubState_obj::__CreateEmpty() { return new GraphicsSettingsSubState_obj; }

void *GraphicsSettingsSubState_obj::_hx_vtable = 0;

Dynamic GraphicsSettingsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsSettingsSubState_obj > _hx_result = new GraphicsSettingsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GraphicsSettingsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x3c0818b8) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
			} else {
				return inClassId==(int)0x3c0818b8;
			}
		} else {
			return inClassId==(int)0x5661ffbf || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x776f905d || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GraphicsSettingsSubState_obj::onChangeAntiAliasing(){
            	HX_STACKFRAME(&_hx_pos_0d30d54fdd7b0ca4_67_onChangeAntiAliasing)
HXDLIN(  67)		int _g = 0;
HXDLIN(  67)		::Array< ::Dynamic> _g1 = this->members;
HXDLIN(  67)		while((_g < _g1->length)){
HXDLIN(  67)			 ::flixel::FlxBasic sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxBasic >();
HXDLIN(  67)			_g = (_g + 1);
HXLINE(  69)			 ::flixel::FlxSprite sprite1 = ( ( ::flixel::FlxSprite)(sprite) );
HXLINE(  70)			bool _hx_tmp;
HXDLIN(  70)			bool _hx_tmp1;
HXDLIN(  70)			if (::hx::IsNotNull( sprite1 )) {
HXLINE(  70)				_hx_tmp1 = ::Std_obj::isOfType(sprite1,::hx::ClassOf< ::flixel::FlxSprite >());
            			}
            			else {
HXLINE(  70)				_hx_tmp1 = false;
            			}
HXDLIN(  70)			if (_hx_tmp1) {
HXLINE(  70)				_hx_tmp = !(::Std_obj::isOfType(sprite1,::hx::ClassOf< ::flixel::text::FlxText >()));
            			}
            			else {
HXLINE(  70)				_hx_tmp = false;
            			}
HXDLIN(  70)			if (_hx_tmp) {
HXLINE(  71)				sprite1->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsSettingsSubState_obj,onChangeAntiAliasing,(void))

void GraphicsSettingsSubState_obj::onChangeFramerate(){
            	HX_STACKFRAME(&_hx_pos_0d30d54fdd7b0ca4_78_onChangeFramerate)
HXDLIN(  78)		if ((::backend::ClientPrefs_obj::data->framerate > ::flixel::FlxG_obj::drawFramerate)) {
HXLINE(  80)			::flixel::FlxG_obj::set_updateFramerate(::backend::ClientPrefs_obj::data->framerate);
HXLINE(  81)			::flixel::FlxG_obj::set_drawFramerate(::backend::ClientPrefs_obj::data->framerate);
            		}
            		else {
HXLINE(  85)			::flixel::FlxG_obj::set_drawFramerate(::backend::ClientPrefs_obj::data->framerate);
HXLINE(  86)			::flixel::FlxG_obj::set_updateFramerate(::backend::ClientPrefs_obj::data->framerate);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsSettingsSubState_obj,onChangeFramerate,(void))

void GraphicsSettingsSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_0d30d54fdd7b0ca4_91_changeSelection)
HXLINE(  92)		this->super::changeSelection(change);
HXLINE(  93)		this->boyfriend->set_visible((this->antialiasingOption == this->curSelected));
            	}



::hx::ObjectPtr< GraphicsSettingsSubState_obj > GraphicsSettingsSubState_obj::__new() {
	::hx::ObjectPtr< GraphicsSettingsSubState_obj > __this = new GraphicsSettingsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GraphicsSettingsSubState_obj > GraphicsSettingsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GraphicsSettingsSubState_obj *__this = (GraphicsSettingsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsSettingsSubState_obj), true, "options.GraphicsSettingsSubState"));
	*(void **)__this = GraphicsSettingsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GraphicsSettingsSubState_obj::GraphicsSettingsSubState_obj()
{
}

void GraphicsSettingsSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsSettingsSubState);
	HX_MARK_MEMBER_NAME(antialiasingOption,"antialiasingOption");
	HX_MARK_MEMBER_NAME(boyfriend,"boyfriend");
	 ::options::BaseOptionsMenu_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GraphicsSettingsSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antialiasingOption,"antialiasingOption");
	HX_VISIT_MEMBER_NAME(boyfriend,"boyfriend");
	 ::options::BaseOptionsMenu_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GraphicsSettingsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { return ::hx::Val( boyfriend ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onChangeFramerate") ) { return ::hx::Val( onChangeFramerate_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"antialiasingOption") ) { return ::hx::Val( antialiasingOption ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onChangeAntiAliasing") ) { return ::hx::Val( onChangeAntiAliasing_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsSettingsSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"boyfriend") ) { boyfriend=inValue.Cast<  ::objects::Character >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"antialiasingOption") ) { antialiasingOption=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsSettingsSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("antialiasingOption",89,0d,ac,2b));
	outFields->push(HX_("boyfriend",6a,29,b8,e6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsSettingsSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(GraphicsSettingsSubState_obj,antialiasingOption),HX_("antialiasingOption",89,0d,ac,2b)},
	{::hx::fsObject /*  ::objects::Character */ ,(int)offsetof(GraphicsSettingsSubState_obj,boyfriend),HX_("boyfriend",6a,29,b8,e6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsSettingsSubState_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsSettingsSubState_obj_sMemberFields[] = {
	HX_("antialiasingOption",89,0d,ac,2b),
	HX_("boyfriend",6a,29,b8,e6),
	HX_("onChangeAntiAliasing",a3,51,fa,d4),
	HX_("onChangeFramerate",9e,47,dc,c7),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class GraphicsSettingsSubState_obj::__mClass;

void GraphicsSettingsSubState_obj::__register()
{
	GraphicsSettingsSubState_obj _hx_dummy;
	GraphicsSettingsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.GraphicsSettingsSubState",8f,e6,7b,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsSettingsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsSettingsSubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsSettingsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsSettingsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
