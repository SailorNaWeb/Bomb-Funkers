#ifndef INCLUDED_cutscenes_DialogueBoxPsych
#define INCLUDED_cutscenes_DialogueBoxPsych

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(cutscenes,DialogueBoxPsych)
HX_DECLARE_CLASS1(cutscenes,DialogueCharacter)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Alphabet)
HX_DECLARE_CLASS1(objects,TypedAlphabet)

namespace cutscenes{


class HXCPP_CLASS_ATTRIBUTES DialogueBoxPsych_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef DialogueBoxPsych_obj OBJ_;
		DialogueBoxPsych_obj();

	public:
		enum { _hx_ClassId = 0x35dbe371 };

		void __construct( ::Dynamic dialogueList,::String song);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cutscenes.DialogueBoxPsych")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"cutscenes.DialogueBoxPsych"); }
		static ::hx::ObjectPtr< DialogueBoxPsych_obj > __new( ::Dynamic dialogueList,::String song);
		static ::hx::ObjectPtr< DialogueBoxPsych_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic dialogueList,::String song);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogueBoxPsych_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DialogueBoxPsych",88,30,b7,c9); }

		static void __boot();
		static int DEFAULT_TEXT_X;
		static int DEFAULT_TEXT_Y;
		static int LONG_TEXT_ADD;
		static Float LEFT_CHAR_X;
		static Float RIGHT_CHAR_X;
		static Float DEFAULT_CHAR_Y;
		static  ::Dynamic parseDialogue(::String path);
		static ::Dynamic parseDialogue_dyn();

		static void updateBoxOffsets( ::flixel::FlxSprite box);
		static ::Dynamic updateBoxOffsets_dyn();

		int scrollSpeed;
		 ::objects::TypedAlphabet dialogue;
		 ::Dynamic dialogueList;
		 ::Dynamic finishThing;
		Dynamic finishThing_dyn() { return finishThing;}
		 ::Dynamic nextDialogueThing;
		Dynamic nextDialogueThing_dyn() { return nextDialogueThing;}
		 ::Dynamic skipDialogueThing;
		Dynamic skipDialogueThing_dyn() { return skipDialogueThing;}
		 ::flixel::FlxSprite bgFade;
		 ::flixel::FlxSprite box;
		::String textToType;
		::Array< ::Dynamic> arrayCharacters;
		int currentText;
		Float offsetPos;
		::Array< ::String > textBoxTypes;
		::String curCharacter;
		bool dialogueStarted;
		bool dialogueEnded;
		void spawnCharacters();
		::Dynamic spawnCharacters_dyn();

		 ::objects::TypedAlphabet daText;
		bool ignoreThisFrame;
		::String closeSound;
		Float closeVolume;
		void update(Float elapsed);

		int lastCharacter;
		::String lastBoxType;
		void startNextDialog();
		::Dynamic startNextDialog_dyn();

};

} // end namespace cutscenes

#endif /* INCLUDED_cutscenes_DialogueBoxPsych */ 
