#ifndef INCLUDED_openfl_display__internal_CanvasDisplayObjectContainer
#define INCLUDED_openfl_display__internal_CanvasDisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,display,_internal,CanvasDisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CanvasDisplayObjectContainer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasDisplayObjectContainer_obj OBJ_;
		CanvasDisplayObjectContainer_obj();

	public:
		enum { _hx_ClassId = 0x037cffa2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CanvasDisplayObjectContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CanvasDisplayObjectContainer"); }

		inline static ::hx::ObjectPtr< CanvasDisplayObjectContainer_obj > __new() {
			::hx::ObjectPtr< CanvasDisplayObjectContainer_obj > __this = new CanvasDisplayObjectContainer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasDisplayObjectContainer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasDisplayObjectContainer_obj *__this = (CanvasDisplayObjectContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasDisplayObjectContainer_obj), false, "openfl.display._internal.CanvasDisplayObjectContainer"));
			*(void **)__this = CanvasDisplayObjectContainer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasDisplayObjectContainer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasDisplayObjectContainer",78,35,f8,85); }

		static void renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CanvasDisplayObjectContainer */ 
