#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageQuality_StageQuality_Impl_
#include <openfl/display/_StageQuality/StageQuality_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_40_fromString,"openfl.display._StageQuality.StageQuality_Impl_","fromString",0xd5e08bb0,"openfl.display._StageQuality.StageQuality_Impl_.fromString","openfl/display/StageQuality.hx",40,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_52_toString,"openfl.display._StageQuality.StageQuality_Impl_","toString",0x0c5a9f41,"openfl.display._StageQuality.StageQuality_Impl_.toString","openfl/display/StageQuality.hx",52,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_17_boot,"openfl.display._StageQuality.StageQuality_Impl_","boot",0xf44d2447,"openfl.display._StageQuality.StageQuality_Impl_.boot","openfl/display/StageQuality.hx",17,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_23_boot,"openfl.display._StageQuality.StageQuality_Impl_","boot",0xf44d2447,"openfl.display._StageQuality.StageQuality_Impl_.boot","openfl/display/StageQuality.hx",23,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_29_boot,"openfl.display._StageQuality.StageQuality_Impl_","boot",0xf44d2447,"openfl.display._StageQuality.StageQuality_Impl_.boot","openfl/display/StageQuality.hx",29,0x4c0ba3d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0c0edf02bce9ade1_36_boot,"openfl.display._StageQuality.StageQuality_Impl_","boot",0xf44d2447,"openfl.display._StageQuality.StageQuality_Impl_.boot","openfl/display/StageQuality.hx",36,0x4c0ba3d1)
namespace openfl{
namespace display{
namespace _StageQuality{

void StageQuality_Impl__obj::__construct() { }

Dynamic StageQuality_Impl__obj::__CreateEmpty() { return new StageQuality_Impl__obj; }

void *StageQuality_Impl__obj::_hx_vtable = 0;

Dynamic StageQuality_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StageQuality_Impl__obj > _hx_result = new StageQuality_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageQuality_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08aa0033;
}

 ::Dynamic StageQuality_Impl__obj::BEST;

 ::Dynamic StageQuality_Impl__obj::HIGH;

 ::Dynamic StageQuality_Impl__obj::LOW;

 ::Dynamic StageQuality_Impl__obj::MEDIUM;

 ::Dynamic StageQuality_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_40_fromString)
HXDLIN(  40)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("best",24,f1,13,41)) ){
HXLINE(  42)			return 0;
HXDLIN(  42)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("high",62,37,0e,45)) ){
HXLINE(  43)			return 1;
HXDLIN(  43)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("low",94,54,52,00)) ){
HXLINE(  44)			return 2;
HXDLIN(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("medium",75,54,c8,fe)) ){
HXLINE(  45)			return 3;
HXDLIN(  45)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  46)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageQuality_Impl__obj,fromString,return )

::String StageQuality_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_52_toString)
HXDLIN(  52)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  54)			return HX_("best",24,f1,13,41);
HXDLIN(  54)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  55)			return HX_("high",62,37,0e,45);
HXDLIN(  55)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  56)			return HX_("low",94,54,52,00);
HXDLIN(  56)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  57)			return HX_("medium",75,54,c8,fe);
HXDLIN(  57)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  58)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  52)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageQuality_Impl__obj,toString,return )


StageQuality_Impl__obj::StageQuality_Impl__obj()
{
}

bool StageQuality_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StageQuality_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StageQuality_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageQuality_Impl__obj::BEST,HX_("BEST",24,b9,d4,2b)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageQuality_Impl__obj::HIGH,HX_("HIGH",62,ff,ce,2f)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageQuality_Impl__obj::LOW,HX_("LOW",74,f0,39,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &StageQuality_Impl__obj::MEDIUM,HX_("MEDIUM",75,00,4b,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StageQuality_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::BEST,"BEST");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::HIGH,"HIGH");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::LOW,"LOW");
	HX_MARK_MEMBER_NAME(StageQuality_Impl__obj::MEDIUM,"MEDIUM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageQuality_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::BEST,"BEST");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::HIGH,"HIGH");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::LOW,"LOW");
	HX_VISIT_MEMBER_NAME(StageQuality_Impl__obj::MEDIUM,"MEDIUM");
};

#endif

::hx::Class StageQuality_Impl__obj::__mClass;

static ::String StageQuality_Impl__obj_sStaticFields[] = {
	HX_("BEST",24,b9,d4,2b),
	HX_("HIGH",62,ff,ce,2f),
	HX_("LOW",74,f0,39,00),
	HX_("MEDIUM",75,00,4b,b1),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void StageQuality_Impl__obj::__register()
{
	StageQuality_Impl__obj _hx_dummy;
	StageQuality_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._StageQuality.StageQuality_Impl_",79,b8,d0,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageQuality_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StageQuality_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StageQuality_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StageQuality_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageQuality_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageQuality_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageQuality_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageQuality_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_17_boot)
HXDLIN(  17)		BEST = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_23_boot)
HXDLIN(  23)		HIGH = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_29_boot)
HXDLIN(  29)		LOW = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0c0edf02bce9ade1_36_boot)
HXDLIN(  36)		MEDIUM = 3;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageQuality
