#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_CustomFadeTransition
#include <backend/CustomFadeTransition.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3eba9f4bcffd4fe_5_new,"backend.CustomFadeTransition","new",0xf568436e,"backend.CustomFadeTransition.new","backend/CustomFadeTransition.hx",5,0x606c63e1)
static const int _hx_array_data_1f92b47c_1[] = {
	(int)0,(int)-16777216,
};
static const int _hx_array_data_1f92b47c_2[] = {
	(int)-16777216,(int)0,
};
HX_DEFINE_STACK_FRAME(_hx_pos_a3eba9f4bcffd4fe_39_new,"backend.CustomFadeTransition","new",0xf568436e,"backend.CustomFadeTransition.new","backend/CustomFadeTransition.hx",39,0x606c63e1)
HX_DEFINE_STACK_FRAME(_hx_pos_a3eba9f4bcffd4fe_47_new,"backend.CustomFadeTransition","new",0xf568436e,"backend.CustomFadeTransition.new","backend/CustomFadeTransition.hx",47,0x606c63e1)
HX_LOCAL_STACK_FRAME(_hx_pos_a3eba9f4bcffd4fe_61_update,"backend.CustomFadeTransition","update",0x033befbb,"backend.CustomFadeTransition.update","backend/CustomFadeTransition.hx",61,0x606c63e1)
HX_LOCAL_STACK_FRAME(_hx_pos_a3eba9f4bcffd4fe_75_destroy,"backend.CustomFadeTransition","destroy",0x57ec3f08,"backend.CustomFadeTransition.destroy","backend/CustomFadeTransition.hx",75,0x606c63e1)
namespace backend{

void CustomFadeTransition_obj::__construct(Float duration,bool isTransIn){
            	HX_GC_STACKFRAME(&_hx_pos_a3eba9f4bcffd4fe_5_new)
HXLINE(   9)		this->isTransIn = false;
HXLINE(   7)		this->leTween = null();
HXLINE(  13)		 ::backend::CustomFadeTransition _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  14)		super::__construct();
HXLINE(  16)		this->isTransIn = isTransIn;
HXLINE(  17)		Float Value = ::flixel::FlxG_obj::camera->zoom;
HXDLIN(  17)		Float lowerBound;
HXDLIN(  17)		if ((Value < ((Float)0.05))) {
HXLINE(  17)			lowerBound = ((Float)0.05);
            		}
            		else {
HXLINE(  17)			lowerBound = Value;
            		}
HXDLIN(  17)		Float zoom;
HXDLIN(  17)		if ((lowerBound > 1)) {
HXLINE(  17)			zoom = ( (Float)(1) );
            		}
            		else {
HXLINE(  17)			zoom = lowerBound;
            		}
HXLINE(  18)		int width = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) / zoom));
HXLINE(  19)		int height = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) / zoom));
HXLINE(  20)		::Array< int > _hx_tmp;
HXDLIN(  20)		if (isTransIn) {
HXLINE(  20)			_hx_tmp = ::Array_obj< int >::fromData( _hx_array_data_1f92b47c_1,2);
            		}
            		else {
HXLINE(  20)			_hx_tmp = ::Array_obj< int >::fromData( _hx_array_data_1f92b47c_2,2);
            		}
HXDLIN(  20)		this->transGradient = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(1,height,_hx_tmp,null(),null(),null());
HXLINE(  21)		this->transGradient->scale->set_x(( (Float)(width) ));
HXLINE(  22)		this->transGradient->updateHitbox();
HXLINE(  23)		{
HXLINE(  23)			 ::flixel::math::FlxBasePoint this1 = this->transGradient->scrollFactor;
HXDLIN(  23)			this1->set_x(( (Float)(0) ));
HXDLIN(  23)			this1->set_y(( (Float)(0) ));
            		}
HXLINE(  24)		this->add(this->transGradient);
HXLINE(  26)		this->transBlack =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(1,(height + 400),-16777216,null(),null());
HXLINE(  27)		this->transBlack->scale->set_x(( (Float)(width) ));
HXLINE(  28)		this->transBlack->updateHitbox();
HXLINE(  29)		{
HXLINE(  29)			 ::flixel::math::FlxBasePoint this2 = this->transBlack->scrollFactor;
HXDLIN(  29)			this2->set_x(( (Float)(0) ));
HXDLIN(  29)			this2->set_y(( (Float)(0) ));
            		}
HXLINE(  30)		this->add(this->transBlack);
HXLINE(  32)		 ::flixel::FlxSprite fh = this->transGradient;
HXDLIN(  32)		fh->set_x((fh->x - (( (Float)((width - ::flixel::FlxG_obj::width)) ) / ( (Float)(2) ))));
HXLINE(  33)		this->transBlack->set_x(this->transGradient->x);
HXLINE(  35)		if (isTransIn) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::backend::CustomFadeTransition,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_a3eba9f4bcffd4fe_39_new)
HXLINE(  39)				_gthis->close();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  36)			 ::flixel::FlxSprite _hx_tmp = this->transGradient;
HXDLIN(  36)			Float _hx_tmp1 = this->transBlack->y;
HXDLIN(  36)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
HXLINE(  37)			 ::flixel::FlxSprite _hx_tmp2 = this->transGradient;
HXDLIN(  37)			Float _hx_tmp3 = (this->transGradient->get_height() + 50);
HXDLIN(  37)			::flixel::tweens::FlxTween_obj::tween(_hx_tmp2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp3)),duration, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_a3eba9f4bcffd4fe_47_new)
HXLINE(  47)				if (::hx::IsNotNull( ::backend::CustomFadeTransition_obj::finishCallback )) {
HXLINE(  48)					::backend::CustomFadeTransition_obj::finishCallback();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  43)			 ::flixel::FlxSprite _hx_tmp = this->transGradient;
HXDLIN(  43)			_hx_tmp->set_y(-(this->transGradient->get_height()));
HXLINE(  44)			 ::flixel::FlxSprite _hx_tmp1 = this->transBlack;
HXDLIN(  44)			Float _hx_tmp2 = this->transGradient->y;
HXDLIN(  44)			_hx_tmp1->set_y(((_hx_tmp2 - this->transBlack->get_height()) + 50));
HXLINE(  45)			 ::flixel::FlxSprite _hx_tmp3 = this->transGradient;
HXDLIN(  45)			Float _hx_tmp4 = (this->transGradient->get_height() + 50);
HXDLIN(  45)			this->leTween = ::flixel::tweens::FlxTween_obj::tween(_hx_tmp3, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp4)),duration, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1()))));
            		}
HXLINE(  54)		if (::hx::IsNotNull( ::backend::CustomFadeTransition_obj::nextCamera )) {
HXLINE(  55)			this->transBlack->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::backend::CustomFadeTransition_obj::nextCamera));
HXLINE(  56)			this->transGradient->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::backend::CustomFadeTransition_obj::nextCamera));
            		}
HXLINE(  58)		::backend::CustomFadeTransition_obj::nextCamera = null();
            	}

Dynamic CustomFadeTransition_obj::__CreateEmpty() { return new CustomFadeTransition_obj; }

void *CustomFadeTransition_obj::_hx_vtable = 0;

Dynamic CustomFadeTransition_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomFadeTransition_obj > _hx_result = new CustomFadeTransition_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CustomFadeTransition_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x3c0818b8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x3c0818b8;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7f0b9ab2;
		}
	}
}

void CustomFadeTransition_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a3eba9f4bcffd4fe_61_update)
HXLINE(  62)		if (this->isTransIn) {
HXLINE(  63)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  63)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  63)			_hx_tmp->set_y((_hx_tmp1 + this->transGradient->get_height()));
            		}
            		else {
HXLINE(  65)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  65)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  65)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
            		}
HXLINE(  67)		this->super::update(elapsed);
HXLINE(  68)		if (this->isTransIn) {
HXLINE(  69)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  69)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  69)			_hx_tmp->set_y((_hx_tmp1 + this->transGradient->get_height()));
            		}
            		else {
HXLINE(  71)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  71)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  71)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
            		}
            	}


void CustomFadeTransition_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a3eba9f4bcffd4fe_75_destroy)
HXLINE(  76)		if (::hx::IsNotNull( this->leTween )) {
HXLINE(  77)			::backend::CustomFadeTransition_obj::finishCallback();
HXLINE(  78)			this->leTween->cancel();
            		}
HXLINE(  80)		this->super::destroy();
            	}


 ::Dynamic CustomFadeTransition_obj::finishCallback;

 ::flixel::FlxCamera CustomFadeTransition_obj::nextCamera;


::hx::ObjectPtr< CustomFadeTransition_obj > CustomFadeTransition_obj::__new(Float duration,bool isTransIn) {
	::hx::ObjectPtr< CustomFadeTransition_obj > __this = new CustomFadeTransition_obj();
	__this->__construct(duration,isTransIn);
	return __this;
}

::hx::ObjectPtr< CustomFadeTransition_obj > CustomFadeTransition_obj::__alloc(::hx::Ctx *_hx_ctx,Float duration,bool isTransIn) {
	CustomFadeTransition_obj *__this = (CustomFadeTransition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomFadeTransition_obj), true, "backend.CustomFadeTransition"));
	*(void **)__this = CustomFadeTransition_obj::_hx_vtable;
	__this->__construct(duration,isTransIn);
	return __this;
}

CustomFadeTransition_obj::CustomFadeTransition_obj()
{
}

void CustomFadeTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomFadeTransition);
	HX_MARK_MEMBER_NAME(leTween,"leTween");
	HX_MARK_MEMBER_NAME(isTransIn,"isTransIn");
	HX_MARK_MEMBER_NAME(transBlack,"transBlack");
	HX_MARK_MEMBER_NAME(transGradient,"transGradient");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CustomFadeTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leTween,"leTween");
	HX_VISIT_MEMBER_NAME(isTransIn,"isTransIn");
	HX_VISIT_MEMBER_NAME(transBlack,"transBlack");
	HX_VISIT_MEMBER_NAME(transGradient,"transGradient");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CustomFadeTransition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leTween") ) { return ::hx::Val( leTween ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isTransIn") ) { return ::hx::Val( isTransIn ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transBlack") ) { return ::hx::Val( transBlack ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transGradient") ) { return ::hx::Val( transGradient ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CustomFadeTransition_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nextCamera") ) { outValue = ( nextCamera ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { outValue = ( finishCallback ); return true; }
	}
	return false;
}

::hx::Val CustomFadeTransition_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leTween") ) { leTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isTransIn") ) { isTransIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transBlack") ) { transBlack=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transGradient") ) { transGradient=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CustomFadeTransition_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nextCamera") ) { nextCamera=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void CustomFadeTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leTween",32,a5,b7,99));
	outFields->push(HX_("isTransIn",63,af,52,93));
	outFields->push(HX_("transBlack",77,1c,bf,de));
	outFields->push(HX_("transGradient",38,f6,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CustomFadeTransition_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CustomFadeTransition_obj,leTween),HX_("leTween",32,a5,b7,99)},
	{::hx::fsBool,(int)offsetof(CustomFadeTransition_obj,isTransIn),HX_("isTransIn",63,af,52,93)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CustomFadeTransition_obj,transBlack),HX_("transBlack",77,1c,bf,de)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CustomFadeTransition_obj,transGradient),HX_("transGradient",38,f6,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CustomFadeTransition_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CustomFadeTransition_obj::finishCallback,HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &CustomFadeTransition_obj::nextCamera,HX_("nextCamera",f8,f7,bd,6c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CustomFadeTransition_obj_sMemberFields[] = {
	HX_("leTween",32,a5,b7,99),
	HX_("isTransIn",63,af,52,93),
	HX_("transBlack",77,1c,bf,de),
	HX_("transGradient",38,f6,20,1d),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void CustomFadeTransition_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomFadeTransition_obj::finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(CustomFadeTransition_obj::nextCamera,"nextCamera");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CustomFadeTransition_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomFadeTransition_obj::finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(CustomFadeTransition_obj::nextCamera,"nextCamera");
};

#endif

::hx::Class CustomFadeTransition_obj::__mClass;

static ::String CustomFadeTransition_obj_sStaticFields[] = {
	HX_("finishCallback",38,a1,bc,b4),
	HX_("nextCamera",f8,f7,bd,6c),
	::String(null())
};

void CustomFadeTransition_obj::__register()
{
	CustomFadeTransition_obj _hx_dummy;
	CustomFadeTransition_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.CustomFadeTransition",7c,b4,92,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CustomFadeTransition_obj::__GetStatic;
	__mClass->mSetStaticField = &CustomFadeTransition_obj::__SetStatic;
	__mClass->mMarkFunc = CustomFadeTransition_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CustomFadeTransition_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomFadeTransition_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomFadeTransition_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CustomFadeTransition_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomFadeTransition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomFadeTransition_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace backend
