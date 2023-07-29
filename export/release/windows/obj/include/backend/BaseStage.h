#ifndef INCLUDED_backend_BaseStage
#define INCLUDED_backend_BaseStage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(backend,BaseStage)
HX_DECLARE_CLASS1(backend,Countdown)
HX_DECLARE_CLASS1(backend,MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Character)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES BaseStage_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef BaseStage_obj OBJ_;
		BaseStage_obj();

	public:
		enum { _hx_ClassId = 0x230cab9d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.BaseStage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.BaseStage"); }
		static ::hx::ObjectPtr< BaseStage_obj > __new();
		static ::hx::ObjectPtr< BaseStage_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseStage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseStage",cd,f4,c2,35); }

		 ::Dynamic game;
		bool onPlayState;
		virtual void create();
		::Dynamic create_dyn();

		virtual void createPost();
		::Dynamic createPost_dyn();

		virtual void countdownTick( ::backend::Countdown count,int num);
		::Dynamic countdownTick_dyn();

		int curBeat;
		Float curDecBeat;
		int curStep;
		Float curDecStep;
		int curSection;
		virtual void beatHit();
		::Dynamic beatHit_dyn();

		void stepHit();
		::Dynamic stepHit_dyn();

		void sectionHit();
		::Dynamic sectionHit_dyn();

		virtual void closeSubState();
		::Dynamic closeSubState_dyn();

		virtual void openSubState( ::flixel::FlxSubState SubState);
		::Dynamic openSubState_dyn();

		virtual void eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime);
		::Dynamic eventCalled_dyn();

		virtual void eventPushed( ::Dynamic event);
		::Dynamic eventPushed_dyn();

		void eventPushedUnique( ::Dynamic event);
		::Dynamic eventPushedUnique_dyn();

		void add( ::flixel::FlxBasic object);
		::Dynamic add_dyn();

		void remove( ::flixel::FlxBasic object);
		::Dynamic remove_dyn();

		void insert(int position, ::flixel::FlxBasic object);
		::Dynamic insert_dyn();

		void addBehindGF( ::flixel::FlxBasic obj);
		::Dynamic addBehindGF_dyn();

		void addBehindBF( ::flixel::FlxBasic obj);
		::Dynamic addBehindBF_dyn();

		void addBehindDad( ::flixel::FlxBasic obj);
		::Dynamic addBehindDad_dyn();

		void setDefaultGF(::String name);
		::Dynamic setDefaultGF_dyn();

		void setStartCallback( ::Dynamic myfn);
		::Dynamic setStartCallback_dyn();

		void setEndCallback( ::Dynamic myfn);
		::Dynamic setEndCallback_dyn();

		void precacheImage(::String key);
		::Dynamic precacheImage_dyn();

		void precacheSound(::String key);
		::Dynamic precacheSound_dyn();

		void precacheMusic(::String key);
		::Dynamic precacheMusic_dyn();

		void precache(::String key,::String type);
		::Dynamic precache_dyn();

		bool startCountdown();
		::Dynamic startCountdown_dyn();

		bool endSong();
		::Dynamic endSong_dyn();

		void moveCameraSection();
		::Dynamic moveCameraSection_dyn();

		void moveCamera(bool isDad);
		::Dynamic moveCamera_dyn();

		bool get_paused();
		::Dynamic get_paused_dyn();

		::String get_songName();
		::Dynamic get_songName_dyn();

		bool get_isStoryMode();
		::Dynamic get_isStoryMode_dyn();

		bool get_seenCutscene();
		::Dynamic get_seenCutscene_dyn();

		bool get_inCutscene();
		::Dynamic get_inCutscene_dyn();

		bool set_inCutscene(bool value);
		::Dynamic set_inCutscene_dyn();

		bool get_canPause();
		::Dynamic get_canPause_dyn();

		bool set_canPause(bool value);
		::Dynamic set_canPause_dyn();

		 ::Dynamic get_members();
		::Dynamic get_members_dyn();

		 ::backend::MusicBeatState set_game( ::backend::MusicBeatState value);
		::Dynamic set_game_dyn();

		 ::objects::Character get_boyfriend();
		::Dynamic get_boyfriend_dyn();

		 ::objects::Character get_dad();
		::Dynamic get_dad_dyn();

		 ::objects::Character get_gf();
		::Dynamic get_gf_dyn();

		 ::flixel::group::FlxTypedSpriteGroup get_boyfriendGroup();
		::Dynamic get_boyfriendGroup_dyn();

		 ::flixel::group::FlxTypedSpriteGroup get_dadGroup();
		::Dynamic get_dadGroup_dyn();

		 ::flixel::group::FlxTypedSpriteGroup get_gfGroup();
		::Dynamic get_gfGroup_dyn();

		 ::flixel::FlxCamera get_camGame();
		::Dynamic get_camGame_dyn();

		 ::flixel::FlxCamera get_camHUD();
		::Dynamic get_camHUD_dyn();

		 ::flixel::FlxCamera get_camOther();
		::Dynamic get_camOther_dyn();

		Float get_defaultCamZoom();
		::Dynamic get_defaultCamZoom_dyn();

		Float set_defaultCamZoom(Float value);
		::Dynamic set_defaultCamZoom_dyn();

		 ::flixel::FlxObject get_camFollow();
		::Dynamic get_camFollow_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_BaseStage */ 
