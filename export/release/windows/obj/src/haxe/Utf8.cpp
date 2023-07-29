#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37807d8ab8df9b7c_32_new,"haxe.Utf8","new",0x67cc940b,"haxe.Utf8.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",32,0xf320feca)
HX_LOCAL_STACK_FRAME(_hx_pos_37807d8ab8df9b7c_39_addChar,"haxe.Utf8","addChar",0x9a1816c2,"haxe.Utf8.addChar","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",39,0xf320feca)
HX_LOCAL_STACK_FRAME(_hx_pos_37807d8ab8df9b7c_43_toString,"haxe.Utf8","toString",0xb459e121,"haxe.Utf8.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",43,0xf320feca)
namespace haxe{

void Utf8_obj::__construct( ::Dynamic size){
            	HX_STACKFRAME(&_hx_pos_37807d8ab8df9b7c_32_new)
HXLINE(  33)		this->__s = ::Array_obj< int >::__new();
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if (::hx::IsNotNull( size )) {
HXLINE(  34)			_hx_tmp = ::hx::IsGreater( size,0 );
            		}
            		else {
HXLINE(  34)			_hx_tmp = false;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  35)			this->__s->reserve(( (int)(size) ));
            		}
            	}

Dynamic Utf8_obj::__CreateEmpty() { return new Utf8_obj; }

void *Utf8_obj::_hx_vtable = 0;

Dynamic Utf8_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Utf8_obj > _hx_result = new Utf8_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Utf8_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29920b77;
}

void Utf8_obj::addChar(int c){
            	HX_STACKFRAME(&_hx_pos_37807d8ab8df9b7c_39_addChar)
HXDLIN(  39)		this->__s->push(c);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,addChar,(void))

::String Utf8_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_37807d8ab8df9b7c_43_toString)
HXDLIN(  43)		return  ::__hxcpp_char_array_to_utf8_string(this->__s);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toString,return )


Utf8_obj::Utf8_obj()
{
}

void Utf8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utf8);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void Utf8_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

::hx::Val Utf8_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return ::hx::Val( __s ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addChar") ) { return ::hx::Val( addChar_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Utf8_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Utf8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__s",53,69,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Utf8_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Utf8_obj,__s),HX_("__s",53,69,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Utf8_obj_sStaticStorageInfo = 0;
#endif

static ::String Utf8_obj_sMemberFields[] = {
	HX_("__s",53,69,48,00),
	HX_("addChar",97,a1,fc,7d),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Utf8_obj::__mClass;

void Utf8_obj::__register()
{
	Utf8_obj _hx_dummy;
	Utf8_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.Utf8",99,32,41,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Utf8_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Utf8_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utf8_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utf8_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
