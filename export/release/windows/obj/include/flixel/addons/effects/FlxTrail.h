#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#define INCLUDED_flixel_addons_effects_FlxTrail

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrail)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES FlxTrail_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef FlxTrail_obj OBJ_;
		FlxTrail_obj();

	public:
		enum { _hx_ClassId = 0x1dbd5e03 };

		void __construct( ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< int >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.FlxTrail")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.FlxTrail"); }
		static ::hx::ObjectPtr< FlxTrail_obj > __new( ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< int >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff);
		static ::hx::ObjectPtr< FlxTrail_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite Target, ::Dynamic Graphic,::hx::Null< int >  __o_Length,::hx::Null< int >  __o_Delay,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Diff);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTrail_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTrail",14,9e,f9,d2); }

		 ::flixel::FlxSprite target;
		int delay;
		bool xEnabled;
		bool yEnabled;
		bool rotationsEnabled;
		bool scalesEnabled;
		bool framesEnabled;
		int _counter;
		int _trailLength;
		 ::Dynamic _graphic;
		Float _transp;
		Float _difference;
		::Array< ::Dynamic> _recentPositions;
		::Array< Float > _recentAngles;
		::Array< ::Dynamic> _recentScales;
		::Array< int > _recentFrames;
		::Array< bool > _recentFlipX;
		::Array< bool > _recentFlipY;
		::Array< ::Dynamic> _recentAnimations;
		 ::flixel::math::FlxBasePoint _spriteOrigin;
		void destroy();

		void update(Float elapsed);

		void cacheValue(::cpp::VirtualArray array, ::Dynamic value);
		::Dynamic cacheValue_dyn();

		void resetTrail();
		::Dynamic resetTrail_dyn();

		void increaseLength(int Amount);
		::Dynamic increaseLength_dyn();

		void changeGraphic( ::Dynamic Image);
		::Dynamic changeGraphic_dyn();

		void changeValuesEnabled(bool Angle,::hx::Null< bool >  X,::hx::Null< bool >  Y,::hx::Null< bool >  Scale);
		::Dynamic changeValuesEnabled_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects

#endif /* INCLUDED_flixel_addons_effects_FlxTrail */ 
