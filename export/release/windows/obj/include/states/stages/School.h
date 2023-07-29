#ifndef INCLUDED_states_stages_School
#define INCLUDED_states_stages_School

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
HX_DECLARE_CLASS1(backend,BaseStage)
HX_DECLARE_CLASS1(cutscenes,DialogueBox)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(states,stages,School)
HX_DECLARE_CLASS3(states,stages,objects,BackgroundGirls)

namespace states{
namespace stages{


class HXCPP_CLASS_ATTRIBUTES School_obj : public  ::backend::BaseStage_obj
{
	public:
		typedef  ::backend::BaseStage_obj super;
		typedef School_obj OBJ_;
		School_obj();

	public:
		enum { _hx_ClassId = 0x1e7b376f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.School")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.School"); }
		static ::hx::ObjectPtr< School_obj > __new();
		static ::hx::ObjectPtr< School_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~School_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("School",94,2c,5d,75); }

		 ::states::stages::objects::BackgroundGirls bgGirls;
		void create();

		void beatHit();

		void eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime);

		 ::cutscenes::DialogueBox doof;
		void initDoof();
		::Dynamic initDoof_dyn();

		void schoolIntro();
		::Dynamic schoolIntro_dyn();

};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_School */ 
