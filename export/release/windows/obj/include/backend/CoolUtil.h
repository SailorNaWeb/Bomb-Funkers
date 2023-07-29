#ifndef INCLUDED_backend_CoolUtil
#define INCLUDED_backend_CoolUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,CoolUtil)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES CoolUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CoolUtil_obj OBJ_;
		CoolUtil_obj();

	public:
		enum { _hx_ClassId = 0x2704589f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.CoolUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.CoolUtil"); }

		inline static ::hx::ObjectPtr< CoolUtil_obj > __new() {
			::hx::ObjectPtr< CoolUtil_obj > __this = new CoolUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CoolUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CoolUtil_obj *__this = (CoolUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CoolUtil_obj), false, "backend.CoolUtil"));
			*(void **)__this = CoolUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CoolUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CoolUtil",8b,93,6d,c9); }

		static Float quantize(Float f,Float snap);
		static ::Dynamic quantize_dyn();

		static ::String capitalize(::String text);
		static ::Dynamic capitalize_dyn();

		static ::Array< ::String > coolTextFile(::String path);
		static ::Dynamic coolTextFile_dyn();

		static int colorFromString(::String color);
		static ::Dynamic colorFromString_dyn();

		static ::Array< ::String > listFromString(::String string);
		static ::Dynamic listFromString_dyn();

		static Float floorDecimal(Float value,int decimals);
		static ::Dynamic floorDecimal_dyn();

		static int dominantColor( ::flixel::FlxSprite sprite);
		static ::Dynamic dominantColor_dyn();

		static ::Array< int > numberArray(int max, ::Dynamic min);
		static ::Dynamic numberArray_dyn();

		static void browserLoad(::String site);
		static ::Dynamic browserLoad_dyn();

		static ::String getSavePath(::String folder);
		static ::Dynamic getSavePath_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_CoolUtil */ 
