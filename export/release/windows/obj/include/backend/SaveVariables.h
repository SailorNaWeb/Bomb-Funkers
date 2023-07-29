#ifndef INCLUDED_backend_SaveVariables
#define INCLUDED_backend_SaveVariables

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,SaveVariables)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES SaveVariables_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SaveVariables_obj OBJ_;
		SaveVariables_obj();

	public:
		enum { _hx_ClassId = 0x65c3166a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.SaveVariables")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.SaveVariables"); }
		static ::hx::ObjectPtr< SaveVariables_obj > __new();
		static ::hx::ObjectPtr< SaveVariables_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SaveVariables_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SaveVariables",9a,b7,0d,ef); }

		bool downScroll;
		bool middleScroll;
		bool opponentStrums;
		bool showFPS;
		bool flashing;
		bool autoPause;
		bool antialiasing;
		::String noteSkin;
		::String splashSkin;
		Float splashAlpha;
		bool lowQuality;
		bool shaders;
		bool cacheOnGPU;
		int framerate;
		bool camZooms;
		bool hideHud;
		int noteOffset;
		::Array< ::Dynamic> arrowRGB;
		::Array< ::Dynamic> arrowRGBPixel;
		bool ghostTapping;
		::String timeBarType;
		bool scoreZoom;
		bool noReset;
		Float healthBarAlpha;
		Float hitsoundVolume;
		::String pauseMusic;
		bool checkForUpdates;
		bool comboStacking;
		 ::haxe::ds::StringMap gameplaySettings;
		::Array< int > comboOffset;
		int ratingOffset;
		int sickWindow;
		int goodWindow;
		int badWindow;
		Float safeFrames;
		bool discordRPC;
};

} // end namespace backend

#endif /* INCLUDED_backend_SaveVariables */ 
