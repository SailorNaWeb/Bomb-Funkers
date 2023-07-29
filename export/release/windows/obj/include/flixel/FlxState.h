#ifndef INCLUDED_flixel_FlxState
#define INCLUDED_flixel_FlxState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxState_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef FlxState_obj OBJ_;
		FlxState_obj();

	public:
		enum { _hx_ClassId = 0x7c795c9f };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.FlxState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.FlxState"); }
		static ::hx::ObjectPtr< FlxState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< FlxState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxState",5f,80,e5,40); }

		bool persistentUpdate;
		bool persistentDraw;
		bool destroySubStates;
		 ::flixel::FlxSubState subState;
		 ::flixel::FlxSubState _requestedSubState;
		bool _requestSubStateReset;
		 ::flixel::util::_FlxSignal::FlxSignal1 _subStateOpened;
		 ::flixel::util::_FlxSignal::FlxSignal1 _subStateClosed;
		virtual void create();
		::Dynamic create_dyn();

		virtual void draw();

		virtual void openSubState( ::flixel::FlxSubState SubState);
		::Dynamic openSubState_dyn();

		virtual void closeSubState();
		::Dynamic closeSubState_dyn();

		void resetSubState();
		::Dynamic resetSubState_dyn();

		virtual void destroy();

		virtual bool switchTo( ::flixel::FlxState nextState);
		::Dynamic switchTo_dyn();

		void startOutro( ::Dynamic onOutroComplete);
		::Dynamic startOutro_dyn();

		virtual void onFocusLost();
		::Dynamic onFocusLost_dyn();

		virtual void onFocus();
		::Dynamic onFocus_dyn();

		virtual void onResize(int Width,int Height);
		::Dynamic onResize_dyn();

		void tryUpdate(Float elapsed);
		::Dynamic tryUpdate_dyn();

		virtual int get_bgColor();
		::Dynamic get_bgColor_dyn();

		virtual int set_bgColor(int Value);
		::Dynamic set_bgColor_dyn();

		 ::flixel::util::_FlxSignal::FlxSignal1 get_subStateOpened();
		::Dynamic get_subStateOpened_dyn();

		 ::flixel::util::_FlxSignal::FlxSignal1 get_subStateClosed();
		::Dynamic get_subStateClosed_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxState */ 
