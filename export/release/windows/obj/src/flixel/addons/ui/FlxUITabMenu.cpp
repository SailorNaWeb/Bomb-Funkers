#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_261d41b9609a7d0a_21_new,"flixel.addons.ui.FlxUITabMenu","new",0xc82b8b31,"flixel.addons.ui.FlxUITabMenu.new","flixel/addons/ui/FlxUITabMenu.hx",21,0x21d3489e)
static const ::String _hx_array_data_6a801ebf_3[] = {
	HX_("front",a9,18,8e,06),HX_("back",27,da,10,41),
};
HX_DEFINE_STACK_FRAME(_hx_pos_261d41b9609a7d0a_214_new,"flixel.addons.ui.FlxUITabMenu","new",0xc82b8b31,"flixel.addons.ui.FlxUITabMenu.new","flixel/addons/ui/FlxUITabMenu.hx",214,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_31_get_numTabs,"flixel.addons.ui.FlxUITabMenu","get_numTabs",0xbaaa29cc,"flixel.addons.ui.FlxUITabMenu.get_numTabs","flixel/addons/ui/FlxUITabMenu.hx",31,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_41_getEvent,"flixel.addons.ui.FlxUITabMenu","getEvent",0x34184733,"flixel.addons.ui.FlxUITabMenu.getEvent","flixel/addons/ui/FlxUITabMenu.hx",41,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_48_getRequest,"flixel.addons.ui.FlxUITabMenu","getRequest",0xde0916a8,"flixel.addons.ui.FlxUITabMenu.getRequest","flixel/addons/ui/FlxUITabMenu.hx",48,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_55_set_skipButtonUpdate,"flixel.addons.ui.FlxUITabMenu","set_skipButtonUpdate",0x94812946,"flixel.addons.ui.FlxUITabMenu.set_skipButtonUpdate","flixel/addons/ui/FlxUITabMenu.hx",55,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_79_get_width,"flixel.addons.ui.FlxUITabMenu","get_width",0x5c713fee,"flixel.addons.ui.FlxUITabMenu.get_width","flixel/addons/ui/FlxUITabMenu.hx",79,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_83_get_height,"flixel.addons.ui.FlxUITabMenu","get_height",0x3cf628ff,"flixel.addons.ui.FlxUITabMenu.get_height","flixel/addons/ui/FlxUITabMenu.hx",83,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_93_resize,"flixel.addons.ui.FlxUITabMenu","resize",0xfcd977c3,"flixel.addons.ui.FlxUITabMenu.resize","flixel/addons/ui/FlxUITabMenu.hx",93,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_119_get_selected_tab,"flixel.addons.ui.FlxUITabMenu","get_selected_tab",0xa5609649,"flixel.addons.ui.FlxUITabMenu.get_selected_tab","flixel/addons/ui/FlxUITabMenu.hx",119,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_123_set_selected_tab,"flixel.addons.ui.FlxUITabMenu","set_selected_tab",0xfba283bd,"flixel.addons.ui.FlxUITabMenu.set_selected_tab","flixel/addons/ui/FlxUITabMenu.hx",123,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_132_get_selected_tab_id,"flixel.addons.ui.FlxUITabMenu","get_selected_tab_id",0x4d2a2f51,"flixel.addons.ui.FlxUITabMenu.get_selected_tab_id","flixel/addons/ui/FlxUITabMenu.hx",132,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_136_set_selected_tab_id,"flixel.addons.ui.FlxUITabMenu","set_selected_tab_id",0x89c7225d,"flixel.addons.ui.FlxUITabMenu.set_selected_tab_id","flixel/addons/ui/FlxUITabMenu.hx",136,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_224_destroy,"flixel.addons.ui.FlxUITabMenu","destroy",0x0282244b,"flixel.addons.ui.FlxUITabMenu.destroy","flixel/addons/ui/FlxUITabMenu.hx",224,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_234_getTab,"flixel.addons.ui.FlxUITabMenu","getTab",0x9785b12e,"flixel.addons.ui.FlxUITabMenu.getTab","flixel/addons/ui/FlxUITabMenu.hx",234,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_256_getTabGroup,"flixel.addons.ui.FlxUITabMenu","getTabGroup",0xc2c56b31,"flixel.addons.ui.FlxUITabMenu.getTabGroup","flixel/addons/ui/FlxUITabMenu.hx",256,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_279_getBack,"flixel.addons.ui.FlxUITabMenu","getBack",0xf18f812e,"flixel.addons.ui.FlxUITabMenu.getBack","flixel/addons/ui/FlxUITabMenu.hx",279,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_283_replaceBack,"flixel.addons.ui.FlxUITabMenu","replaceBack",0xe9e4ec4c,"flixel.addons.ui.FlxUITabMenu.replaceBack","flixel/addons/ui/FlxUITabMenu.hx",283,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_301_addGroup,"flixel.addons.ui.FlxUITabMenu","addGroup",0x71ce48ed,"flixel.addons.ui.FlxUITabMenu.addGroup","flixel/addons/ui/FlxUITabMenu.hx",301,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_331__onTabEvent,"flixel.addons.ui.FlxUITabMenu","_onTabEvent",0x28e25eb4,"flixel.addons.ui.FlxUITabMenu._onTabEvent","flixel/addons/ui/FlxUITabMenu.hx",331,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_342_stackTabs,"flixel.addons.ui.FlxUITabMenu","stackTabs",0x2659b577,"flixel.addons.ui.FlxUITabMenu.stackTabs","flixel/addons/ui/FlxUITabMenu.hx",342,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_385_showTabId,"flixel.addons.ui.FlxUITabMenu","showTabId",0x87ad2ce4,"flixel.addons.ui.FlxUITabMenu.showTabId","flixel/addons/ui/FlxUITabMenu.hx",385,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_421_sortTabs,"flixel.addons.ui.FlxUITabMenu","sortTabs",0xaeee7a8b,"flixel.addons.ui.FlxUITabMenu.sortTabs","flixel/addons/ui/FlxUITabMenu.hx",421,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_435_showTabInt,"flixel.addons.ui.FlxUITabMenu","showTabInt",0x2fda23c6,"flixel.addons.ui.FlxUITabMenu.showTabInt","flixel/addons/ui/FlxUITabMenu.hx",435,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_449__showOnlyGroup,"flixel.addons.ui.FlxUITabMenu","_showOnlyGroup",0xbe9f6e86,"flixel.addons.ui.FlxUITabMenu._showOnlyGroup","flixel/addons/ui/FlxUITabMenu.hx",449,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_463_getFirstTab,"flixel.addons.ui.FlxUITabMenu","getFirstTab",0xab440e8c,"flixel.addons.ui.FlxUITabMenu.getFirstTab","flixel/addons/ui/FlxUITabMenu.hx",463,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_473_distributeTabs,"flixel.addons.ui.FlxUITabMenu","distributeTabs",0xcf609f0e,"flixel.addons.ui.FlxUITabMenu.distributeTabs","flixel/addons/ui/FlxUITabMenu.hx",473,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_23_boot,"flixel.addons.ui.FlxUITabMenu","boot",0x56074041,"flixel.addons.ui.FlxUITabMenu.boot","flixel/addons/ui/FlxUITabMenu.hx",23,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_25_boot,"flixel.addons.ui.FlxUITabMenu","boot",0x56074041,"flixel.addons.ui.FlxUITabMenu.boot","flixel/addons/ui/FlxUITabMenu.hx",25,0x21d3489e)
HX_LOCAL_STACK_FRAME(_hx_pos_261d41b9609a7d0a_26_boot,"flixel.addons.ui.FlxUITabMenu","boot",0x56074041,"flixel.addons.ui.FlxUITabMenu.boot","flixel/addons/ui/FlxUITabMenu.hx",26,0x21d3489e)
namespace flixel{
namespace addons{
namespace ui{

void FlxUITabMenu_obj::__construct( ::flixel::FlxSprite back_,::Array< ::Dynamic> tabs_,::Array< ::Dynamic> tab_names_and_labels_, ::flixel::math::FlxBasePoint tab_offset, ::Dynamic __o_stretch_tabs, ::Dynamic tab_spacing,::Array< ::String > tab_stacking){
            		 ::Dynamic stretch_tabs = __o_stretch_tabs;
            		if (::hx::IsNull(__o_stretch_tabs)) stretch_tabs = false;
            	HX_GC_STACKFRAME(&_hx_pos_261d41b9609a7d0a_21_new)
HXLINE( 418)		this->_selected_tab = -1;
HXLINE( 417)		this->_selected_tab_id = HX_("",00,00,00,00);
HXLINE( 415)		this->_tab_offset = null();
HXLINE( 414)		this->_tab_stacking = null();
HXLINE( 413)		this->_tab_spacing = null();
HXLINE( 412)		this->_stretch_tabs = false;
HXLINE( 145)		super::__construct(null(),null());
HXLINE( 147)		if (::hx::IsNull( back_ )) {
HXLINE( 150)			back_ =  ::flixel::addons::ui::FlxUI9SliceSprite_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("flixel/flixel-ui/img/chrome_flat.png",30,cf,0a,80), ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,200,200),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 153)		this->_back = back_;
HXLINE( 154)		this->add(this->_back);
HXLINE( 156)		if (::hx::IsNull( tabs_ )) {
HXLINE( 158)			if (::hx::IsNotNull( tab_names_and_labels_ )) {
HXLINE( 160)				tabs_ = ::Array_obj< ::Dynamic>::__new();
HXLINE( 163)				{
HXLINE( 163)					int _g = 0;
HXDLIN( 163)					while((_g < tab_names_and_labels_->length)){
HXLINE( 163)						 ::Dynamic tdata = tab_names_and_labels_->__get(_g);
HXDLIN( 163)						_g = (_g + 1);
HXLINE( 166)						 ::flixel::addons::ui::FlxUIButton fb =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,( (::String)(tdata->__Field(HX_("label",f4,0d,af,6f),::hx::paccDynamic)) ),null(),null(),null(),null());
HXLINE( 169)						fb->up_color = 16777215;
HXLINE( 170)						fb->down_color = 16777215;
HXLINE( 171)						fb->over_color = 16777215;
HXLINE( 172)						fb->up_toggle_color = 16777215;
HXLINE( 173)						fb->down_toggle_color = 16777215;
HXLINE( 174)						fb->over_toggle_color = 16777215;
HXLINE( 176)						( ( ::flixel::text::FlxText)(fb->label) )->set_color(16777215);
HXLINE( 177)						{
HXLINE( 177)							 ::flixel::addons::ui::FlxUIText _this = ( ( ::flixel::addons::ui::FlxUIText)(fb->label) );
HXDLIN( 177)							_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 177)							_this->set_borderColor(0);
HXDLIN( 177)							_this->set_borderSize(( (Float)(1) ));
HXDLIN( 177)							_this->set_borderQuality(( (Float)(1) ));
            						}
HXLINE( 179)						fb->name = ( (::String)(tdata->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 182)						::cpp::VirtualArray graphic_names = ::cpp::VirtualArray_obj::__new(6)->init(0,HX_("flixel/flixel-ui/img/tab_back.png",d5,c5,cd,aa))->init(1,HX_("flixel/flixel-ui/img/tab_back.png",d5,c5,cd,aa))->init(2,HX_("flixel/flixel-ui/img/tab_back.png",d5,c5,cd,aa))->init(3,HX_("flixel/flixel-ui/img/tab.png",27,2e,82,04))->init(4,HX_("flixel/flixel-ui/img/tab.png",27,2e,82,04))->init(5,HX_("flixel/flixel-ui/img/tab.png",27,2e,82,04));
HXLINE( 190)						::Array< int > slice9tab = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_("6,6,11,11",c0,1f,fa,07));
HXLINE( 191)						::Array< ::Dynamic> slice9_names = ::Array_obj< ::Dynamic>::__new(6)->init(0,slice9tab)->init(1,slice9tab)->init(2,slice9tab)->init(3,slice9tab)->init(4,slice9tab)->init(5,slice9tab);
HXLINE( 192)						fb->loadGraphicSlice9(graphic_names,0,0,slice9_names,0,-1,true,null(),null(),null());
HXLINE( 193)						tabs_->push(fb);
            					}
            				}
            			}
            		}
HXLINE( 198)		this->_tabs = tabs_;
HXLINE( 199)		this->_stretch_tabs = ( (bool)(stretch_tabs) );
HXLINE( 200)		this->_tab_spacing = tab_spacing;
HXLINE( 201)		this->_tab_stacking = tab_stacking;
HXLINE( 202)		if (::hx::IsNull( this->_tab_stacking )) {
HXLINE( 204)			this->_tab_stacking = ::Array_obj< ::String >::fromData( _hx_array_data_6a801ebf_3,2);
            		}
HXLINE( 206)		this->_tab_offset = tab_offset;
HXLINE( 208)		int i = 0;
HXLINE( 209)		 ::flixel::addons::ui::FlxUITypedButton tab = null();
HXLINE( 210)		{
HXLINE( 210)			int _g = 0;
HXDLIN( 210)			::Array< ::Dynamic> _g1 = this->_tabs;
HXDLIN( 210)			while((_g < _g1->length)){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,_g2) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_261d41b9609a7d0a_214_new)
HXLINE( 214)					_g2(name);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 210)				::Dynamic t = _g1->__get(_g);
HXDLIN( 210)				_g = (_g + 1);
HXLINE( 212)				tab = ( ( ::flixel::addons::ui::FlxUITypedButton)(t) );
HXLINE( 213)				this->add(tab);
HXLINE( 214)				 ::Dynamic _g2 = this->_onTabEvent_dyn();
HXDLIN( 214)				::String name = tab->name;
HXDLIN( 214)				 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(name,_g2));
HXDLIN( 214)				tab->onUp->callback = _hx_tmp;
HXLINE( 215)				i = (i + 1);
            			}
            		}
HXLINE( 218)		this->distributeTabs(null());
HXLINE( 220)		this->_tab_groups = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic FlxUITabMenu_obj::__CreateEmpty() { return new FlxUITabMenu_obj; }

void *FlxUITabMenu_obj::_hx_vtable = 0;

Dynamic FlxUITabMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUITabMenu_obj > _hx_result = new FlxUITabMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool FlxUITabMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x398eb8dc) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x398eb8dc;
		}
	} else {
		if (inClassId<=(int)0x7dab0655) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
		} else {
			return inClassId==(int)0x7f2b8171;
		}
	}
}

static ::flixel::addons::ui::interfaces::IEventGetter_obj _hx_flixel_addons_ui_FlxUITabMenu__hx_flixel_addons_ui_interfaces_IEventGetter= {
	( void (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUITabMenu_obj::getEvent,
	(  ::Dynamic (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUITabMenu_obj::getRequest,
};

static ::flixel::addons::ui::interfaces::IFlxUIClickable_obj _hx_flixel_addons_ui_FlxUITabMenu__hx_flixel_addons_ui_interfaces_IFlxUIClickable= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUITabMenu_obj::set_skipButtonUpdate,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUITabMenu__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITabMenu_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITabMenu_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUITabMenu_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUITabMenu_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUITabMenu_obj::resize,
};

void *FlxUITabMenu_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xdcf9e4f9: return &_hx_flixel_addons_ui_FlxUITabMenu__hx_flixel_addons_ui_interfaces_IEventGetter;
		case (int)0x3e998408: return &_hx_flixel_addons_ui_FlxUITabMenu__hx_flixel_addons_ui_interfaces_IFlxUIClickable;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUITabMenu__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

int FlxUITabMenu_obj::get_numTabs(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_31_get_numTabs)
HXLINE(  32)		if (::hx::IsNotNull( this->_tabs )) {
HXLINE(  34)			return this->_tabs->length;
            		}
HXLINE(  36)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_numTabs,return )

void FlxUITabMenu_obj::getEvent(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_41_getEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUITabMenu_obj,getEvent,(void))

 ::Dynamic FlxUITabMenu_obj::getRequest(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_48_getRequest)
HXDLIN(  48)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUITabMenu_obj,getRequest,return )

bool FlxUITabMenu_obj::set_skipButtonUpdate(bool b){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_55_set_skipButtonUpdate)
HXLINE(  56)		this->skipButtonUpdate = b;
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::Array< ::Dynamic> _g1 = this->_tabs;
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				::Dynamic tab = _g1->__get(_g);
HXDLIN(  57)				_g = (_g + 1);
HXLINE(  59)				 ::flixel::addons::ui::FlxUITypedButton tabtyped = ( ( ::flixel::addons::ui::FlxUITypedButton)(tab) );
HXLINE(  60)				tabtyped->set_skipButtonUpdate(b);
            			}
            		}
HXLINE(  62)		{
HXLINE(  62)			int _g2 = 0;
HXDLIN(  62)			::Array< ::Dynamic> _g3 = this->_tab_groups;
HXDLIN(  62)			while((_g2 < _g3->length)){
HXLINE(  62)				 ::flixel::addons::ui::FlxUIGroup group = _g3->__get(_g2).StaticCast<  ::flixel::addons::ui::FlxUIGroup >();
HXDLIN(  62)				_g2 = (_g2 + 1);
HXLINE(  64)				{
HXLINE(  64)					int _g = 0;
HXDLIN(  64)					::Array< ::Dynamic> _g1 = group->group->members;
HXDLIN(  64)					while((_g < _g1->length)){
HXLINE(  64)						 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  64)						_g = (_g + 1);
HXLINE(  66)						if (::Std_obj::isOfType(sprite,::hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIClickable >())) {
HXLINE(  68)							::Dynamic widget = sprite;
HXLINE(  69)							::flixel::addons::ui::interfaces::IFlxUIClickable_obj::set_skipButtonUpdate(widget,b);
            						}
            					}
            				}
            			}
            		}
HXLINE(  73)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_skipButtonUpdate,return )

Float FlxUITabMenu_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_79_get_width)
HXDLIN(  79)		return this->_back->get_width();
            	}


Float FlxUITabMenu_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_83_get_height)
HXLINE(  84)		::Dynamic fbt = this->getFirstTab();
HXLINE(  85)		if (::hx::IsNotNull( fbt )) {
HXLINE(  87)			Float _hx_tmp = this->_back->y;
HXDLIN(  87)			Float _hx_tmp1 = (_hx_tmp + this->_back->get_height());
HXDLIN(  87)			return (_hx_tmp1 - ( (Float)(fbt->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            		}
HXLINE(  89)		return this->_back->get_height();
            	}


void FlxUITabMenu_obj::resize(Float W,Float H){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_93_resize)
HXLINE(  94)		::Dynamic ir;
HXLINE(  95)		if (::Std_obj::isOfType(this->_back,::hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >())) {
HXLINE(  97)			this->distributeTabs(W);
HXLINE(  98)			ir = this->_back;
HXLINE(  99)			 ::flixel::addons::ui::FlxUITypedButton fbt = ( ( ::flixel::addons::ui::FlxUITypedButton)(this->getFirstTab()) );
HXLINE( 100)			if (::hx::IsNotNull( fbt )) {
HXLINE( 102)				::flixel::addons::ui::interfaces::IResizable_obj::resize(ir,W,(H - fbt->get_height()));
            			}
            			else {
HXLINE( 106)				::flixel::addons::ui::interfaces::IResizable_obj::resize(ir,W,H);
            			}
            		}
            		else {
HXLINE( 111)			this->distributeTabs(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,resize,(void))

int FlxUITabMenu_obj::get_selected_tab(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_119_get_selected_tab)
HXDLIN( 119)		return this->_selected_tab;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_selected_tab,return )

int FlxUITabMenu_obj::set_selected_tab(int i){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_123_set_selected_tab)
HXLINE( 124)		this->showTabInt(i);
HXLINE( 125)		return this->_selected_tab;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_selected_tab,return )

::String FlxUITabMenu_obj::get_selected_tab_id(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_132_get_selected_tab_id)
HXDLIN( 132)		return this->_selected_tab_id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_selected_tab_id,return )

::String FlxUITabMenu_obj::set_selected_tab_id(::String str){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_136_set_selected_tab_id)
HXLINE( 137)		this->showTabId(str);
HXLINE( 138)		return this->_selected_tab_id;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_selected_tab_id,return )

void FlxUITabMenu_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_224_destroy)
HXLINE( 225)		this->super::destroy();
HXLINE( 226)		::flixel::addons::ui::U_obj::clearArray(this->_tab_groups);
HXLINE( 227)		::flixel::addons::ui::U_obj::clearArray(this->_tabs);
HXLINE( 228)		this->_back = null();
HXLINE( 229)		this->_tabs = null();
HXLINE( 230)		this->_tab_groups = null();
            	}


::Dynamic FlxUITabMenu_obj::getTab(::String name, ::Dynamic index){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_234_getTab)
HXLINE( 235)		if (::hx::IsNotNull( name )) {
HXLINE( 237)			int _g = 0;
HXDLIN( 237)			::Array< ::Dynamic> _g1 = this->_tabs;
HXDLIN( 237)			while((_g < _g1->length)){
HXLINE( 237)				::Dynamic tab = _g1->__get(_g);
HXDLIN( 237)				_g = (_g + 1);
HXLINE( 239)				if (::hx::IsEq( tab->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 241)					return tab;
            				}
            			}
            		}
HXLINE( 245)		if (::hx::IsNotNull( index )) {
HXLINE( 247)			if (::hx::IsLess( index,this->_tabs->length )) {
HXLINE( 249)				return this->_tabs->__get(( (int)(index) ));
            			}
            		}
HXLINE( 252)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,getTab,return )

 ::flixel::addons::ui::FlxUIGroup FlxUITabMenu_obj::getTabGroup(::String name, ::Dynamic index){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_256_getTabGroup)
HXLINE( 257)		if (::hx::IsNotNull( name )) {
HXLINE( 259)			int _g = 0;
HXDLIN( 259)			::Array< ::Dynamic> _g1 = this->_tab_groups;
HXDLIN( 259)			while((_g < _g1->length)){
HXLINE( 259)				 ::flixel::addons::ui::FlxUIGroup tabGroup = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIGroup >();
HXDLIN( 259)				_g = (_g + 1);
HXLINE( 261)				if ((tabGroup->name == name)) {
HXLINE( 263)					return tabGroup;
            				}
            			}
            		}
HXLINE( 267)		if (::hx::IsNotNull( index )) {
HXLINE( 269)			if (::hx::IsLess( index,this->_tab_groups->length )) {
HXLINE( 271)				return this->_tab_groups->__get(( (int)(index) )).StaticCast<  ::flixel::addons::ui::FlxUIGroup >();
            			}
            		}
HXLINE( 274)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,getTabGroup,return )

 ::flixel::FlxSprite FlxUITabMenu_obj::getBack(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_279_getBack)
HXDLIN( 279)		return this->_back;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,getBack,return )

void FlxUITabMenu_obj::replaceBack( ::flixel::FlxSprite newBack){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_283_replaceBack)
HXLINE( 284)		int i = this->group->members->indexOf(this->_back,null());
HXLINE( 285)		if ((i != -1)) {
HXLINE( 287)			 ::flixel::FlxSprite oldBack = this->_back;
HXLINE( 288)			if (::Std_obj::isOfType(newBack,::hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >())) {
HXLINE( 290)				::Dynamic ir = newBack;
HXLINE( 291)				Float _hx_tmp = oldBack->get_width();
HXDLIN( 291)				::flixel::addons::ui::interfaces::IResizable_obj::resize(ir,_hx_tmp,oldBack->get_height());
            			}
HXLINE( 293)			this->group->members->set(i,newBack);
HXLINE( 294)			newBack->set_x(oldBack->x);
HXLINE( 295)			newBack->set_y(oldBack->y);
HXLINE( 296)			oldBack->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,replaceBack,(void))

void FlxUITabMenu_obj::addGroup( ::flixel::addons::ui::FlxUIGroup g){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_301_addGroup)
HXLINE( 302)		if (::hx::IsInstanceEq( g,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 304)			return;
            		}
HXLINE( 307)		if (!(this->hasThis(g))) {
HXLINE( 309)			g->set_y((this->_back->y - this->y));
HXLINE( 310)			this->add(g);
HXLINE( 311)			this->_tab_groups->push(g);
            		}
HXLINE( 315)		this->_showOnlyGroup(HX_("",00,00,00,00));
HXLINE( 318)		if ((this->_tab_groups->length == 1)) {
HXLINE( 320)			this->set_selected_tab(0);
            		}
HXLINE( 324)		if ((this->_selected_tab != -1)) {
HXLINE( 326)			this->set_selected_tab(this->_selected_tab);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,addGroup,(void))

void FlxUITabMenu_obj::_onTabEvent(::String name){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_331__onTabEvent)
HXLINE( 332)		this->showTabId(name);
HXLINE( 333)		::Dynamic tab = this->getTab(name,null());
HXLINE( 334)		::cpp::VirtualArray params;
HXDLIN( 334)		if (::hx::IsNotNull( tab )) {
HXLINE( 334)			params = ( (::cpp::VirtualArray)(tab->__Field(HX_("params",46,fb,7a,ed),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 334)			params = null();
            		}
HXLINE( 335)		if (this->broadcastToFlxUI) {
HXLINE( 337)			::flixel::addons::ui::FlxUI_obj::event(HX_("tab_menu_click",52,a3,80,94),::hx::ObjectPtr<OBJ_>(this),name,params);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,_onTabEvent,(void))

void FlxUITabMenu_obj::stackTabs(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_342_stackTabs)
HXLINE( 343)		Float _backx = this->_back->x;
HXLINE( 344)		Float _backy = this->_back->y;
HXLINE( 346)		this->group->remove(this->_back,true).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 348)		 ::flixel::addons::ui::FlxUITypedButton tab = null();
HXLINE( 349)		{
HXLINE( 349)			int _g = 0;
HXDLIN( 349)			::Array< ::Dynamic> _g1 = this->_tabs;
HXDLIN( 349)			while((_g < _g1->length)){
HXLINE( 349)				::Dynamic t = _g1->__get(_g);
HXDLIN( 349)				_g = (_g + 1);
HXLINE( 351)				tab = ( ( ::flixel::addons::ui::FlxUITypedButton)(t) );
HXLINE( 352)				if (tab->toggled) {
HXLINE( 354)					this->group->remove(tab,true).StaticCast<  ::flixel::FlxSprite >();
            				}
            			}
            		}
HXLINE( 358)		this->group->add(this->_back).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 360)		{
HXLINE( 360)			int _g2 = 0;
HXDLIN( 360)			::Array< ::Dynamic> _g3 = this->_tabs;
HXDLIN( 360)			while((_g2 < _g3->length)){
HXLINE( 360)				::Dynamic t = _g3->__get(_g2);
HXDLIN( 360)				_g2 = (_g2 + 1);
HXLINE( 362)				tab = ( ( ::flixel::addons::ui::FlxUITypedButton)(t) );
HXLINE( 363)				if (tab->toggled) {
HXLINE( 365)					this->group->add(tab).StaticCast<  ::flixel::FlxSprite >();
            				}
            			}
            		}
HXLINE( 370)		{
HXLINE( 370)			int _g4 = 0;
HXDLIN( 370)			::Array< ::Dynamic> _g5 = this->_tab_groups;
HXDLIN( 370)			while((_g4 < _g5->length)){
HXLINE( 370)				 ::flixel::addons::ui::FlxUIGroup group = _g5->__get(_g4).StaticCast<  ::flixel::addons::ui::FlxUIGroup >();
HXDLIN( 370)				_g4 = (_g4 + 1);
HXLINE( 372)				Float tempX = group->x;
HXLINE( 373)				Float tempY = group->y;
HXLINE( 374)				this->remove(group,true);
HXLINE( 375)				this->add(group);
HXLINE( 376)				group->set_x(tempX);
HXLINE( 377)				group->set_y(tempY);
            			}
            		}
HXLINE( 380)		this->_back->set_x(_backx);
HXLINE( 381)		this->_back->set_y(_backy);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,stackTabs,(void))

void FlxUITabMenu_obj::showTabId(::String name){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_385_showTabId)
HXLINE( 386)		this->_selected_tab = -1;
HXLINE( 387)		this->_selected_tab_id = HX_("",00,00,00,00);
HXLINE( 389)		int i = 0;
HXLINE( 390)		{
HXLINE( 390)			int _g = 0;
HXDLIN( 390)			::Array< ::Dynamic> _g1 = this->_tabs;
HXDLIN( 390)			while((_g < _g1->length)){
HXLINE( 390)				::Dynamic tab = _g1->__get(_g);
HXDLIN( 390)				_g = (_g + 1);
HXLINE( 392)				::flixel::addons::ui::interfaces::IFlxUIButton_obj::set_toggled(tab,false);
HXLINE( 393)				::flixel::addons::ui::interfaces::IFlxUIButton_obj::forceStateHandler(tab,HX_("out_button",c3,20,d2,fb));
HXLINE( 394)				if (::hx::IsEq( tab->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 396)					::flixel::addons::ui::interfaces::IFlxUIButton_obj::set_toggled(tab,true);
HXLINE( 397)					this->_selected_tab_id = name;
HXLINE( 398)					this->_selected_tab = i;
            				}
HXLINE( 400)				i = (i + 1);
            			}
            		}
HXLINE( 403)		this->_showOnlyGroup(name);
HXLINE( 404)		this->stackTabs();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,showTabId,(void))

int FlxUITabMenu_obj::sortTabs(::Dynamic a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_421_sortTabs)
HXLINE( 422)		if (::hx::IsLess( a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),b->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE( 424)			return -1;
            		}
            		else {
HXLINE( 426)			if (::hx::IsGreater( a->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),b->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE( 428)				return 1;
            			}
            		}
HXLINE( 430)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,sortTabs,return )

void FlxUITabMenu_obj::showTabInt(int i){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_435_showTabInt)
HXDLIN( 435)		bool _hx_tmp;
HXDLIN( 435)		bool _hx_tmp1;
HXDLIN( 435)		if ((i >= 0)) {
HXDLIN( 435)			_hx_tmp1 = ::hx::IsNotNull( this->_tabs );
            		}
            		else {
HXDLIN( 435)			_hx_tmp1 = false;
            		}
HXDLIN( 435)		if (_hx_tmp1) {
HXDLIN( 435)			_hx_tmp = (this->_tabs->length > i);
            		}
            		else {
HXDLIN( 435)			_hx_tmp = false;
            		}
HXDLIN( 435)		if (_hx_tmp) {
HXLINE( 437)			::Dynamic _tab = this->_tabs->__get(i);
HXLINE( 438)			::String name = ( (::String)(_tab->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 439)			this->showTabId(name);
            		}
            		else {
HXLINE( 443)			this->showTabId(HX_("",00,00,00,00));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,showTabInt,(void))

void FlxUITabMenu_obj::_showOnlyGroup(::String name){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_449__showOnlyGroup)
HXDLIN( 449)		int _g = 0;
HXDLIN( 449)		::Array< ::Dynamic> _g1 = this->_tab_groups;
HXDLIN( 449)		while((_g < _g1->length)){
HXDLIN( 449)			 ::flixel::addons::ui::FlxUIGroup group = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIGroup >();
HXDLIN( 449)			_g = (_g + 1);
HXLINE( 451)			if ((group->name == name)) {
HXLINE( 453)				group->set_visible(group->set_active(true));
            			}
            			else {
HXLINE( 457)				group->set_visible(group->set_active(false));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,_showOnlyGroup,(void))

::Dynamic FlxUITabMenu_obj::getFirstTab(){
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_463_getFirstTab)
HXLINE( 464)		::Dynamic _the_tab = null();
HXLINE( 465)		bool _hx_tmp;
HXDLIN( 465)		if (::hx::IsNotNull( this->_tabs )) {
HXLINE( 465)			_hx_tmp = (this->_tabs->length > 0);
            		}
            		else {
HXLINE( 465)			_hx_tmp = false;
            		}
HXDLIN( 465)		if (_hx_tmp) {
HXLINE( 467)			_the_tab = this->_tabs->__get(0);
            		}
HXLINE( 469)		return _the_tab;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,getFirstTab,return )

void FlxUITabMenu_obj::distributeTabs(::hx::Null< Float >  __o_W){
            		Float W = __o_W.Default(-1);
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_473_distributeTabs)
HXLINE( 474)		Float xx = ( (Float)(0) );
HXLINE( 476)		Float tab_width = ( (Float)(0) );
HXLINE( 478)		if ((W == -1)) {
HXLINE( 480)			W = this->_back->get_width();
            		}
HXLINE( 483)		Float diff_size = ( (Float)(0) );
HXLINE( 484)		if (this->_stretch_tabs) {
HXLINE( 486)			tab_width = (W / ( (Float)(this->_tabs->length) ));
HXLINE( 487)			int tot_size = ::Std_obj::_hx_int(tab_width);
HXDLIN( 487)			Float tot_size1 = ( (Float)((tot_size * this->_tabs->length)) );
HXLINE( 488)			if ((tot_size1 < W)) {
HXLINE( 490)				diff_size = (W - tot_size1);
            			}
            		}
HXLINE( 494)		this->_tabs->sort(this->sortTabs_dyn());
HXLINE( 496)		int i = 0;
HXLINE( 497)		Float firstHeight = ( (Float)(0) );
HXLINE( 499)		 ::flixel::addons::ui::FlxUITypedButton tab;
HXLINE( 500)		{
HXLINE( 500)			int _g = 0;
HXDLIN( 500)			::Array< ::Dynamic> _g1 = this->_tabs;
HXDLIN( 500)			while((_g < _g1->length)){
HXLINE( 500)				::Dynamic t = _g1->__get(_g);
HXDLIN( 500)				_g = (_g + 1);
HXLINE( 502)				tab = ( ( ::flixel::addons::ui::FlxUITypedButton)(t) );
HXLINE( 504)				tab->set_x((this->x + xx));
HXLINE( 505)				tab->set_y(this->y);
HXLINE( 507)				if (::hx::IsNotNull( this->_tab_offset )) {
HXLINE( 509)					tab->set_x((tab->x + this->_tab_offset->x));
HXLINE( 510)					tab->set_y((tab->y + this->_tab_offset->y));
            				}
HXLINE( 513)				if (this->_stretch_tabs) {
HXLINE( 515)					Float theHeight = tab->get_height();
HXLINE( 516)					if ((i != 0)) {
HXLINE( 521)						theHeight = firstHeight;
HXLINE( 522)						tab->resize_ratio = ( (Float)(-1) );
            					}
HXLINE( 524)					if ((diff_size > 0)) {
HXLINE( 526)						tab->resize((tab_width + 1),theHeight);
HXLINE( 527)						xx = (xx + (::Std_obj::_hx_int(tab_width) + 1));
HXLINE( 528)						diff_size = (diff_size - ( (Float)(1) ));
            					}
            					else {
HXLINE( 532)						tab->resize(tab_width,theHeight);
HXLINE( 533)						xx = (xx + ::Std_obj::_hx_int(tab_width));
            					}
            				}
            				else {
HXLINE( 538)					if (::hx::IsNotNull( this->_tab_spacing )) {
HXLINE( 540)						Float xx1 = tab->get_width();
HXDLIN( 540)						xx = (xx + (xx1 + this->_tab_spacing));
            					}
            					else {
HXLINE( 544)						xx = (xx + tab->get_width());
            					}
            				}
HXLINE( 547)				if ((i == 0)) {
HXLINE( 549)					firstHeight = tab->get_height();
            				}
HXLINE( 551)				i = (i + 1);
            			}
            		}
HXLINE( 554)		bool _hx_tmp;
HXDLIN( 554)		bool _hx_tmp1;
HXDLIN( 554)		if (::hx::IsNotNull( this->_tabs )) {
HXLINE( 554)			_hx_tmp1 = (this->_tabs->length > 0);
            		}
            		else {
HXLINE( 554)			_hx_tmp1 = false;
            		}
HXDLIN( 554)		if (_hx_tmp1) {
HXLINE( 554)			_hx_tmp = ::hx::IsNotNull( this->_tabs->__get(0) );
            		}
            		else {
HXLINE( 554)			_hx_tmp = false;
            		}
HXDLIN( 554)		if (_hx_tmp) {
HXLINE( 556)			 ::flixel::FlxSprite _hx_tmp = this->_back;
HXDLIN( 556)			Float _hx_tmp1 = ( (Float)(this->_tabs->__get(0)->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 556)			_hx_tmp->set_y(((_hx_tmp1 + ::flixel::addons::ui::interfaces::IFlxUIWidget_obj::get_height(this->_tabs->__get(0))) - ( (Float)(2) )));
HXLINE( 557)			if (::hx::IsNotNull( this->_tab_offset )) {
HXLINE( 559)				 ::flixel::FlxSprite fh = this->_back;
HXDLIN( 559)				fh->set_y((fh->y - this->_tab_offset->y));
            			}
            		}
HXLINE( 563)		this->calcBounds(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,distributeTabs,(void))

::String FlxUITabMenu_obj::CLICK_EVENT;

::String FlxUITabMenu_obj::STACK_FRONT;

::String FlxUITabMenu_obj::STACK_BACK;


::hx::ObjectPtr< FlxUITabMenu_obj > FlxUITabMenu_obj::__new( ::flixel::FlxSprite back_,::Array< ::Dynamic> tabs_,::Array< ::Dynamic> tab_names_and_labels_, ::flixel::math::FlxBasePoint tab_offset, ::Dynamic __o_stretch_tabs, ::Dynamic tab_spacing,::Array< ::String > tab_stacking) {
	::hx::ObjectPtr< FlxUITabMenu_obj > __this = new FlxUITabMenu_obj();
	__this->__construct(back_,tabs_,tab_names_and_labels_,tab_offset,__o_stretch_tabs,tab_spacing,tab_stacking);
	return __this;
}

::hx::ObjectPtr< FlxUITabMenu_obj > FlxUITabMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite back_,::Array< ::Dynamic> tabs_,::Array< ::Dynamic> tab_names_and_labels_, ::flixel::math::FlxBasePoint tab_offset, ::Dynamic __o_stretch_tabs, ::Dynamic tab_spacing,::Array< ::String > tab_stacking) {
	FlxUITabMenu_obj *__this = (FlxUITabMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUITabMenu_obj), true, "flixel.addons.ui.FlxUITabMenu"));
	*(void **)__this = FlxUITabMenu_obj::_hx_vtable;
	__this->__construct(back_,tabs_,tab_names_and_labels_,tab_offset,__o_stretch_tabs,tab_spacing,tab_stacking);
	return __this;
}

FlxUITabMenu_obj::FlxUITabMenu_obj()
{
}

void FlxUITabMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITabMenu);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_tabs,"_tabs");
	HX_MARK_MEMBER_NAME(_tab_groups,"_tab_groups");
	HX_MARK_MEMBER_NAME(_stretch_tabs,"_stretch_tabs");
	HX_MARK_MEMBER_NAME(_tab_spacing,"_tab_spacing");
	HX_MARK_MEMBER_NAME(_tab_stacking,"_tab_stacking");
	HX_MARK_MEMBER_NAME(_tab_offset,"_tab_offset");
	HX_MARK_MEMBER_NAME(_selected_tab_id,"_selected_tab_id");
	HX_MARK_MEMBER_NAME(_selected_tab,"_selected_tab");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUITabMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_tabs,"_tabs");
	HX_VISIT_MEMBER_NAME(_tab_groups,"_tab_groups");
	HX_VISIT_MEMBER_NAME(_stretch_tabs,"_stretch_tabs");
	HX_VISIT_MEMBER_NAME(_tab_spacing,"_tab_spacing");
	HX_VISIT_MEMBER_NAME(_tab_stacking,"_tab_stacking");
	HX_VISIT_MEMBER_NAME(_tab_offset,"_tab_offset");
	HX_VISIT_MEMBER_NAME(_selected_tab_id,"_selected_tab_id");
	HX_VISIT_MEMBER_NAME(_selected_tab,"_selected_tab");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUITabMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { return ::hx::Val( _back ); }
		if (HX_FIELD_EQ(inName,"_tabs") ) { return ::hx::Val( _tabs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTab") ) { return ::hx::Val( getTab_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numTabs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numTabs() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBack") ) { return ::hx::Val( getBack_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEvent") ) { return ::hx::Val( getEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGroup") ) { return ::hx::Val( addGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortTabs") ) { return ::hx::Val( sortTabs_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"stackTabs") ) { return ::hx::Val( stackTabs_dyn() ); }
		if (HX_FIELD_EQ(inName,"showTabId") ) { return ::hx::Val( showTabId_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRequest") ) { return ::hx::Val( getRequest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"showTabInt") ) { return ::hx::Val( showTabInt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numTabs") ) { return ::hx::Val( get_numTabs_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTabGroup") ) { return ::hx::Val( getTabGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceBack") ) { return ::hx::Val( replaceBack_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onTabEvent") ) { return ::hx::Val( _onTabEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_tab_groups") ) { return ::hx::Val( _tab_groups ); }
		if (HX_FIELD_EQ(inName,"_tab_offset") ) { return ::hx::Val( _tab_offset ); }
		if (HX_FIELD_EQ(inName,"getFirstTab") ) { return ::hx::Val( getFirstTab_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selected_tab") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected_tab() ); }
		if (HX_FIELD_EQ(inName,"_tab_spacing") ) { return ::hx::Val( _tab_spacing ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stretch_tabs") ) { return ::hx::Val( _stretch_tabs ); }
		if (HX_FIELD_EQ(inName,"_tab_stacking") ) { return ::hx::Val( _tab_stacking ); }
		if (HX_FIELD_EQ(inName,"_selected_tab") ) { return ::hx::Val( _selected_tab ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_showOnlyGroup") ) { return ::hx::Val( _showOnlyGroup_dyn() ); }
		if (HX_FIELD_EQ(inName,"distributeTabs") ) { return ::hx::Val( distributeTabs_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selected_tab_id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selected_tab_id() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return ::hx::Val( skipButtonUpdate ); }
		if (HX_FIELD_EQ(inName,"get_selected_tab") ) { return ::hx::Val( get_selected_tab_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected_tab") ) { return ::hx::Val( set_selected_tab_dyn() ); }
		if (HX_FIELD_EQ(inName,"_selected_tab_id") ) { return ::hx::Val( _selected_tab_id ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_selected_tab_id") ) { return ::hx::Val( get_selected_tab_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected_tab_id") ) { return ::hx::Val( set_selected_tab_id_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return ::hx::Val( set_skipButtonUpdate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUITabMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tabs") ) { _tabs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tab_groups") ) { _tab_groups=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tab_offset") ) { _tab_offset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selected_tab") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected_tab(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"_tab_spacing") ) { _tab_spacing=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stretch_tabs") ) { _stretch_tabs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tab_stacking") ) { _tab_stacking=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected_tab") ) { _selected_tab=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selected_tab_id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selected_tab_id(inValue.Cast< ::String >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_skipButtonUpdate(inValue.Cast< bool >()) );skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected_tab_id") ) { _selected_tab_id=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITabMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numTabs",e4,55,77,a0));
	outFields->push(HX_("skipButtonUpdate",ba,02,f2,13));
	outFields->push(HX_("selected_tab",31,93,e4,e4));
	outFields->push(HX_("selected_tab_id",69,33,a5,8c));
	outFields->push(HX_("_back",06,f6,21,f4));
	outFields->push(HX_("_tabs",5d,cc,07,00));
	outFields->push(HX_("_tab_groups",5d,cd,af,51));
	outFields->push(HX_("_stretch_tabs",17,2f,6b,3f));
	outFields->push(HX_("_tab_spacing",5a,72,e7,32));
	outFields->push(HX_("_tab_stacking",e3,1f,41,ff));
	outFields->push(HX_("_tab_offset",9c,40,c7,95));
	outFields->push(HX_("_selected_tab_id",ea,75,84,77));
	outFields->push(HX_("_selected_tab",10,26,53,c7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUITabMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxUITabMenu_obj,skipButtonUpdate),HX_("skipButtonUpdate",ba,02,f2,13)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxUITabMenu_obj,_back),HX_("_back",06,f6,21,f4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxUITabMenu_obj,_tabs),HX_("_tabs",5d,cc,07,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxUITabMenu_obj,_tab_groups),HX_("_tab_groups",5d,cd,af,51)},
	{::hx::fsBool,(int)offsetof(FlxUITabMenu_obj,_stretch_tabs),HX_("_stretch_tabs",17,2f,6b,3f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUITabMenu_obj,_tab_spacing),HX_("_tab_spacing",5a,72,e7,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FlxUITabMenu_obj,_tab_stacking),HX_("_tab_stacking",e3,1f,41,ff)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxUITabMenu_obj,_tab_offset),HX_("_tab_offset",9c,40,c7,95)},
	{::hx::fsString,(int)offsetof(FlxUITabMenu_obj,_selected_tab_id),HX_("_selected_tab_id",ea,75,84,77)},
	{::hx::fsInt,(int)offsetof(FlxUITabMenu_obj,_selected_tab),HX_("_selected_tab",10,26,53,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUITabMenu_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxUITabMenu_obj::CLICK_EVENT,HX_("CLICK_EVENT",63,89,c0,0d)},
	{::hx::fsString,(void *) &FlxUITabMenu_obj::STACK_FRONT,HX_("STACK_FRONT",f2,04,39,17)},
	{::hx::fsString,(void *) &FlxUITabMenu_obj::STACK_BACK,HX_("STACK_BACK",de,2d,ef,d2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUITabMenu_obj_sMemberFields[] = {
	HX_("get_numTabs",fb,b5,71,26),
	HX_("getEvent",a4,d7,9b,d5),
	HX_("getRequest",59,65,e6,93),
	HX_("skipButtonUpdate",ba,02,f2,13),
	HX_("set_skipButtonUpdate",37,1f,14,ff),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("resize",f4,59,7b,08),
	HX_("get_selected_tab",ba,7f,83,e9),
	HX_("set_selected_tab",2e,6d,c5,3f),
	HX_("get_selected_tab_id",80,02,b0,17),
	HX_("set_selected_tab_id",8c,f5,4c,54),
	HX_("destroy",fa,2c,86,24),
	HX_("getTab",5f,93,27,a3),
	HX_("getTabGroup",60,f7,8c,2e),
	HX_("getBack",dd,89,93,13),
	HX_("replaceBack",7b,78,ac,55),
	HX_("addGroup",5e,d9,51,13),
	HX_("_onTabEvent",e3,ea,a9,94),
	HX_("stackTabs",e6,87,f4,d7),
	HX_("showTabId",53,ff,47,39),
	HX_("_back",06,f6,21,f4),
	HX_("_tabs",5d,cc,07,00),
	HX_("_tab_groups",5d,cd,af,51),
	HX_("_stretch_tabs",17,2f,6b,3f),
	HX_("_tab_spacing",5a,72,e7,32),
	HX_("_tab_stacking",e3,1f,41,ff),
	HX_("_tab_offset",9c,40,c7,95),
	HX_("_selected_tab_id",ea,75,84,77),
	HX_("_selected_tab",10,26,53,c7),
	HX_("sortTabs",fc,0a,72,50),
	HX_("showTabInt",77,72,b7,e5),
	HX_("_showOnlyGroup",b7,69,28,52),
	HX_("getFirstTab",bb,9a,0b,17),
	HX_("distributeTabs",3f,9a,e9,62),
	::String(null()) };

static void FlxUITabMenu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::STACK_FRONT,"STACK_FRONT");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::STACK_BACK,"STACK_BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUITabMenu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::STACK_FRONT,"STACK_FRONT");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::STACK_BACK,"STACK_BACK");
};

#endif

::hx::Class FlxUITabMenu_obj::__mClass;

static ::String FlxUITabMenu_obj_sStaticFields[] = {
	HX_("CLICK_EVENT",63,89,c0,0d),
	HX_("STACK_FRONT",f2,04,39,17),
	HX_("STACK_BACK",de,2d,ef,d2),
	::String(null())
};

void FlxUITabMenu_obj::__register()
{
	FlxUITabMenu_obj _hx_dummy;
	FlxUITabMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUITabMenu",bf,1e,80,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUITabMenu_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUITabMenu_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUITabMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUITabMenu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUITabMenu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUITabMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUITabMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUITabMenu_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_23_boot)
HXDLIN(  23)		CLICK_EVENT = HX_("tab_menu_click",52,a3,80,94);
            	}
{
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_25_boot)
HXDLIN(  25)		STACK_FRONT = HX_("front",a9,18,8e,06);
            	}
{
            	HX_STACKFRAME(&_hx_pos_261d41b9609a7d0a_26_boot)
HXDLIN(  26)		STACK_BACK = HX_("back",27,da,10,41);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
