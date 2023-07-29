#ifndef INCLUDED_options_NotesSubState
#define INCLUDED_options_NotesSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS1(objects,Alphabet)
HX_DECLARE_CLASS1(objects,Note)
HX_DECLARE_CLASS1(options,NotesSubState)
HX_DECLARE_CLASS1(shaders,RGBPalette)

namespace options{


class HXCPP_CLASS_ATTRIBUTES NotesSubState_obj : public  ::backend::MusicBeatSubstate_obj
{
	public:
		typedef  ::backend::MusicBeatSubstate_obj super;
		typedef NotesSubState_obj OBJ_;
		NotesSubState_obj();

	public:
		enum { _hx_ClassId = 0x1154fc14 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.NotesSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.NotesSubState"); }
		static ::hx::ObjectPtr< NotesSubState_obj > __new();
		static ::hx::ObjectPtr< NotesSubState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NotesSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NotesSubState",b2,5d,1f,9a); }

		bool onModeColumn;
		int curSelectedMode;
		int curSelectedNote;
		bool onPixel;
		::Array< ::Dynamic> dataArray;
		 ::flixel::FlxSprite hexTypeLine;
		int hexTypeNum;
		Float hexTypeVisibleTimer;
		 ::flixel::FlxSprite copyButton;
		 ::flixel::FlxSprite pasteButton;
		 ::flixel::FlxSprite colorGradient;
		 ::flixel::FlxSprite colorGradientSelector;
		 ::flixel::FlxSprite colorPalette;
		 ::flixel::FlxSprite colorWheel;
		 ::flixel::FlxSprite colorWheelSelector;
		 ::objects::Alphabet alphabetR;
		 ::objects::Alphabet alphabetG;
		 ::objects::Alphabet alphabetB;
		 ::objects::Alphabet alphabetHex;
		 ::flixel::FlxSprite modeBG;
		 ::flixel::FlxSprite notesBG;
		 ::flixel::FlxSprite controllerPointer;
		bool _lastControllerMode;
		 ::flixel::text::FlxText tipTxt;
		void updateTip();
		::Dynamic updateTip_dyn();

		int _storedColor;
		bool changingNote;
		 ::flixel::FlxSprite holdingOnObj;
		 ::haxe::ds::IntMap allowedTypeKeys;
		void update(Float elapsed);

		bool pointerOverlaps( ::Dynamic obj);
		::Dynamic pointerOverlaps_dyn();

		Float pointerX();
		::Dynamic pointerX_dyn();

		Float pointerY();
		::Dynamic pointerY_dyn();

		 ::flixel::math::FlxBasePoint pointerFlxPoint();
		::Dynamic pointerFlxPoint_dyn();

		void centerHexTypeLine();
		::Dynamic centerHexTypeLine_dyn();

		void changeSelectionMode(::hx::Null< int >  change);
		::Dynamic changeSelectionMode_dyn();

		void changeSelectionNote(::hx::Null< int >  change);
		::Dynamic changeSelectionNote_dyn();

		 ::objects::Alphabet makeColorAlphabet(::hx::Null< Float >  x,::hx::Null< Float >  y);
		::Dynamic makeColorAlphabet_dyn();

		 ::flixel::FlxSprite skinNote;
		 ::flixel::group::FlxTypedGroup modeNotes;
		 ::flixel::group::FlxTypedGroup myNotes;
		 ::objects::Note bigNote;
		void spawnNotes();
		::Dynamic spawnNotes_dyn();

		void updateNotes( ::Dynamic instant);
		::Dynamic updateNotes_dyn();

		void updateColors( ::Dynamic specific);
		::Dynamic updateColors_dyn();

		void setShaderColor(int value);
		::Dynamic setShaderColor_dyn();

		int getShaderColor();
		::Dynamic getShaderColor_dyn();

		 ::shaders::RGBPalette getShader();
		::Dynamic getShader_dyn();

};

} // end namespace options

#endif /* INCLUDED_options_NotesSubState */ 
