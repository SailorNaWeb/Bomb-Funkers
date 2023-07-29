#ifndef INCLUDED_objects_AlphaCharacter
#define INCLUDED_objects_AlphaCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(objects,AlphaCharacter)
HX_DECLARE_CLASS1(objects,Alphabet)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES AlphaCharacter_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef AlphaCharacter_obj OBJ_;
		AlphaCharacter_obj();

	public:
		enum { _hx_ClassId = 0x7c11c55f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.AlphaCharacter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.AlphaCharacter"); }
		static ::hx::ObjectPtr< AlphaCharacter_obj > __new();
		static ::hx::ObjectPtr< AlphaCharacter_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AlphaCharacter_obj();

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
		::String __ToString() const { return HX_("AlphaCharacter",8b,cc,2e,b9); }

		static void __boot();
		static  ::haxe::ds::StringMap allLetters;
		static bool isTypeAlphabet(::String c);
		static ::Dynamic isTypeAlphabet_dyn();

		::String image;
		 ::objects::Alphabet parent;
		Float alignOffset;
		::Array< Float > letterOffset;
		int row;
		Float rowWidth;
		::String character;
		 ::Dynamic curLetter;
		void setupAlphaCharacter(Float x,Float y,::String character, ::Dynamic bold);
		::Dynamic setupAlphaCharacter_dyn();

		::String set_image(::String name);
		::Dynamic set_image_dyn();

		void updateLetterOffset();
		::Dynamic updateLetterOffset_dyn();

		void updateHitbox();

};

} // end namespace objects

#endif /* INCLUDED_objects_AlphaCharacter */ 
