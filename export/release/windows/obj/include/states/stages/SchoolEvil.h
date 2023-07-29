#ifndef INCLUDED_states_stages_SchoolEvil
#define INCLUDED_states_stages_SchoolEvil

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
HX_DECLARE_CLASS1(objects,BGSprite)
HX_DECLARE_CLASS2(states,stages,SchoolEvil)

namespace states{
namespace stages{


class HXCPP_CLASS_ATTRIBUTES SchoolEvil_obj : public  ::backend::BaseStage_obj
{
	public:
		typedef  ::backend::BaseStage_obj super;
		typedef SchoolEvil_obj OBJ_;
		SchoolEvil_obj();

	public:
		enum { _hx_ClassId = 0x49f7ab3f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.SchoolEvil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.SchoolEvil"); }
		static ::hx::ObjectPtr< SchoolEvil_obj > __new();
		static ::hx::ObjectPtr< SchoolEvil_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SchoolEvil_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SchoolEvil",48,a5,a6,ee); }

		void create();

		void createPost();

		 ::objects::BGSprite bgGhouls;
		void eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime);

		void eventPushed( ::Dynamic event);

		 ::cutscenes::DialogueBox doof;
		void initDoof();
		::Dynamic initDoof_dyn();

		void schoolIntro();
		::Dynamic schoolIntro_dyn();

};

} // end namespace states
} // end namespace stages

#endif /* INCLUDED_states_stages_SchoolEvil */ 
