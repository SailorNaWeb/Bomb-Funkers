#ifndef INCLUDED_states_stages_Philly
#define INCLUDED_states_stages_Philly

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
HX_DECLARE_CLASS1(backend,BaseStage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS2(states,stages,Philly)
HX_DECLARE_CLASS3(states,stages,objects,PhillyGlowGradient)
HX_DECLARE_CLASS3(states,stages,objects,PhillyTrain)

namespace states{
namespace stages{


class HXCPP_CLASS_ATTRIBUTES Philly_obj : public  ::backend::BaseStage_obj
{
	public:
		typedef  ::backend::BaseStage_obj super;
		typedef Philly_obj OBJ_;
		Philly_obj();

	public:
		enum { _hx_ClassId = 0x463de9bf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.Philly")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.Philly"); }
		static ::hx::ObjectPtr< Philly_obj > __new();
		static ::hx::ObjectPtr< Philly_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Philly_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Philly",48,eb,f2,23); }

		::Array< int > phillyLightsColors;
		 ::objects::BGSprite phillyWindow;
		 ::objects::BGSprite phillyStreet;
		 ::states::stages::objects::PhillyTrain phillyTrain;
		int curLight;
		 ::flixel::FlxSprite blammedLightsBlack;
		 ::states::stages::objects::PhillyGlowGradient phillyGlowGradient;
		 ::flixel::group::FlxTypedGroup phillyGlowParticles;
		 ::objects::BGSprite phillyWindowEvent;
		int curLightEvent;
		void create();

		void eventPushed( ::Dynamic event);

		void update(Float elapsed);

		void beatHit();

		void eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime);

		void doFlash();
		::Dynamic doFlash_dyn();

};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_Philly */ 
