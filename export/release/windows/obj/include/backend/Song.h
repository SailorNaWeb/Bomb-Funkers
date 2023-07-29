#ifndef INCLUDED_backend_Song
#define INCLUDED_backend_Song

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_db09ff2b98ac40f1_38_new)
HX_DECLARE_CLASS1(backend,Song)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES Song_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Song_obj OBJ_;
		Song_obj();

	public:
		enum { _hx_ClassId = 0x55e30b25 };

		void __construct(::String song,::Array< ::Dynamic> notes,Float bpm);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="backend.Song")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"backend.Song"); }

		inline static ::hx::ObjectPtr< Song_obj > __new(::String song,::Array< ::Dynamic> notes,Float bpm) {
			::hx::ObjectPtr< Song_obj > __this = new Song_obj();
			__this->__construct(song,notes,bpm);
			return __this;
		}

		inline static ::hx::ObjectPtr< Song_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,::Array< ::Dynamic> notes,Float bpm) {
			Song_obj *__this = (Song_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Song_obj), true, "backend.Song"));
			*(void **)__this = Song_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_db09ff2b98ac40f1_38_new)
HXLINE(  56)		( ( ::backend::Song)(__this) )->gfVersion = HX_("gf",1f,5a,00,00);
HXLINE(  55)		( ( ::backend::Song)(__this) )->player2 = HX_("dad",47,36,4c,00);
HXLINE(  54)		( ( ::backend::Song)(__this) )->player1 = HX_("bf",c4,55,00,00);
HXLINE(  52)		( ( ::backend::Song)(__this) )->speed = ((Float)1);
HXLINE(  51)		( ( ::backend::Song)(__this) )->disableNoteRGB = false;
HXLINE(  44)		( ( ::backend::Song)(__this) )->needsVoices = true;
HXLINE(  93)		( ( ::backend::Song)(__this) )->song = song;
HXLINE(  94)		( ( ::backend::Song)(__this) )->notes = notes;
HXLINE(  95)		( ( ::backend::Song)(__this) )->bpm = bpm;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Song_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Song",f5,4f,31,37); }

		static void onLoadJson( ::Dynamic songJson);
		static ::Dynamic onLoadJson_dyn();

		static  ::Dynamic loadFromJson(::String jsonInput,::String folder);
		static ::Dynamic loadFromJson_dyn();

		static  ::Dynamic parseJSONshit(::String rawJson);
		static ::Dynamic parseJSONshit_dyn();

		::String song;
		::Array< ::Dynamic> notes;
		::cpp::VirtualArray events;
		Float bpm;
		bool needsVoices;
		::String arrowSkin;
		::String splashSkin;
		::String gameOverChar;
		::String gameOverSound;
		::String gameOverLoop;
		::String gameOverEnd;
		bool disableNoteRGB;
		Float speed;
		::String stage;
		::String player1;
		::String player2;
		::String gfVersion;
};

} // end namespace backend

#endif /* INCLUDED_backend_Song */ 
