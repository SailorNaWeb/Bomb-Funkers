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
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShape
#include <flixel/addons/display/shapes/FlxShape.h>
#endif
#ifndef INCLUDED_flixel_addons_display_shapes_FlxShapeType
#include <flixel/addons/display/shapes/FlxShapeType.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3f95af7519c5c220_15_new,"flixel.addons.display.shapes.FlxShape","new",0x99784848,"flixel.addons.display.shapes.FlxShape.new","flixel/addons/display/shapes/FlxShape.hx",15,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_96_destroy,"flixel.addons.display.shapes.FlxShape","destroy",0x63a8b8e2,"flixel.addons.display.shapes.FlxShape.destroy","flixel/addons/display/shapes/FlxShape.hx",96,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_102_drawSpecificShape,"flixel.addons.display.shapes.FlxShape","drawSpecificShape",0x2fc8bc53,"flixel.addons.display.shapes.FlxShape.drawSpecificShape","flixel/addons/display/shapes/FlxShape.hx",102,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_108_redrawShape,"flixel.addons.display.shapes.FlxShape","redrawShape",0x444fc652,"flixel.addons.display.shapes.FlxShape.redrawShape","flixel/addons/display/shapes/FlxShape.hx",108,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_135_draw,"flixel.addons.display.shapes.FlxShape","draw",0xa9349f1c,"flixel.addons.display.shapes.FlxShape.draw","flixel/addons/display/shapes/FlxShape.hx",135,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_156_fixBoundaries,"flixel.addons.display.shapes.FlxShape","fixBoundaries",0x7367f7e5,"flixel.addons.display.shapes.FlxShape.fixBoundaries","flixel/addons/display/shapes/FlxShape.hx",156,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_168_getStrokeOffsetX,"flixel.addons.display.shapes.FlxShape","getStrokeOffsetX",0x2d61452f,"flixel.addons.display.shapes.FlxShape.getStrokeOffsetX","flixel/addons/display/shapes/FlxShape.hx",168,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_173_getStrokeOffsetY,"flixel.addons.display.shapes.FlxShape","getStrokeOffsetY",0x2d614530,"flixel.addons.display.shapes.FlxShape.getStrokeOffsetY","flixel/addons/display/shapes/FlxShape.hx",173,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_178_get_strokeBuffer,"flixel.addons.display.shapes.FlxShape","get_strokeBuffer",0xdea32279,"flixel.addons.display.shapes.FlxShape.get_strokeBuffer","flixel/addons/display/shapes/FlxShape.hx",178,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_182_getStrokeOffsetMatrix,"flixel.addons.display.shapes.FlxShape","getStrokeOffsetMatrix",0xde9f7a2a,"flixel.addons.display.shapes.FlxShape.getStrokeOffsetMatrix","flixel/addons/display/shapes/FlxShape.hx",182,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_190_set_fillColor,"flixel.addons.display.shapes.FlxShape","set_fillColor",0x3afdb7ab,"flixel.addons.display.shapes.FlxShape.set_fillColor","flixel/addons/display/shapes/FlxShape.hx",190,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_197_set_lineStyle,"flixel.addons.display.shapes.FlxShape","set_lineStyle",0xed12c868,"flixel.addons.display.shapes.FlxShape.set_lineStyle","flixel/addons/display/shapes/FlxShape.hx",197,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_204_set_shapeWidth,"flixel.addons.display.shapes.FlxShape","set_shapeWidth",0x4984fcfa,"flixel.addons.display.shapes.FlxShape.set_shapeWidth","flixel/addons/display/shapes/FlxShape.hx",204,0x1d167428)
HX_LOCAL_STACK_FRAME(_hx_pos_3f95af7519c5c220_211_set_shapeHeight,"flixel.addons.display.shapes.FlxShape","set_shapeHeight",0xc127d673,"flixel.addons.display.shapes.FlxShape.set_shapeHeight","flixel/addons/display/shapes/FlxShape.hx",211,0x1d167428)
namespace flixel{
namespace addons{
namespace display{
namespace shapes{

void FlxShape_obj::__construct(Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,::hx::Null< Float >  __o_TrueWidth,::hx::Null< Float >  __o_TrueHeight){
            		Float TrueWidth = __o_TrueWidth.Default(0);
            		Float TrueHeight = __o_TrueHeight.Default(0);
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_15_new)
HXLINE(  25)		this->shapeDirty = false;
HXLINE(  24)		this->shape_id = ::flixel::addons::display::shapes::FlxShapeType_obj::UNKNOWN_dyn();
HXLINE(  43)		super::__construct(X,Y,null());
HXLINE(  45)		{
HXLINE(  45)			this->lineStyle = LineStyle_;
HXDLIN(  45)			this->shapeDirty = true;
            		}
HXLINE(  46)		{
HXLINE(  46)			this->fillColor = FillColor;
HXDLIN(  46)			this->shapeDirty = true;
            		}
HXLINE(  48)		bool _hx_tmp;
HXDLIN(  48)		if ((CanvasWidth == 0)) {
HXLINE(  48)			_hx_tmp = (TrueWidth != 0);
            		}
            		else {
HXLINE(  48)			_hx_tmp = false;
            		}
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  50)			CanvasWidth = (TrueWidth + this->get_strokeBuffer());
            		}
HXLINE(  52)		bool _hx_tmp1;
HXDLIN(  52)		if ((CanvasHeight == 0)) {
HXLINE(  52)			_hx_tmp1 = (TrueHeight != 0);
            		}
            		else {
HXLINE(  52)			_hx_tmp1 = false;
            		}
HXDLIN(  52)		if (_hx_tmp1) {
HXLINE(  54)			CanvasHeight = (TrueHeight + this->get_strokeBuffer());
            		}
HXLINE(  57)		if ((CanvasWidth < 1)) {
HXLINE(  59)			CanvasWidth = ( (Float)(1) );
            		}
HXLINE(  61)		if ((CanvasHeight < 1)) {
HXLINE(  63)			CanvasHeight = ( (Float)(1) );
            		}
HXLINE(  66)		{
HXLINE(  66)			this->shapeWidth = TrueWidth;
HXDLIN(  66)			this->shapeDirty = true;
            		}
HXLINE(  67)		{
HXLINE(  67)			this->shapeHeight = TrueHeight;
HXDLIN(  67)			this->shapeDirty = true;
            		}
HXLINE(  69)		this->set_width(CanvasWidth);
HXLINE(  70)		this->set_height(CanvasHeight);
HXLINE(  72)		int _hx_tmp2 = ::Std_obj::_hx_int(this->get_width());
HXDLIN(  72)		this->makeGraphic(_hx_tmp2,::Std_obj::_hx_int(this->get_height()),0,true,null());
HXLINE(  76)		this->_drawStyle =  ::Dynamic(::hx::Anon_obj::Create(5)
            			->setFixed(0,HX_("smoothing",74,d5,e1,95),true)
            			->setFixed(1,HX_("colorTransform",89,d7,3f,ad),null())
            			->setFixed(2,HX_("matrix",41,36,c8,bb),null())
            			->setFixed(3,HX_("blendMode",54,e4,37,0c),10)
            			->setFixed(4,HX_("clipRect",14,90,6a,58),null()));
HXLINE(  84)		bool _hx_tmp3;
HXDLIN(  84)		if ((this->shapeWidth != 0)) {
HXLINE(  84)			_hx_tmp3 = (this->shapeHeight != 0);
            		}
            		else {
HXLINE(  84)			_hx_tmp3 = false;
            		}
HXDLIN(  84)		if (_hx_tmp3) {
HXLINE(  86)			bool _hx_tmp;
HXDLIN(  86)			if ((this->shapeWidth < CanvasWidth)) {
HXLINE(  86)				_hx_tmp = (this->shapeHeight < CanvasHeight);
            			}
            			else {
HXLINE(  86)				_hx_tmp = false;
            			}
HXDLIN(  86)			if (_hx_tmp) {
HXLINE(  88)				this->fixBoundaries(this->shapeWidth,this->shapeHeight);
            			}
            		}
HXLINE(  92)		this->shapeDirty = true;
            	}

Dynamic FlxShape_obj::__CreateEmpty() { return new FlxShape_obj; }

void *FlxShape_obj::_hx_vtable = 0;

Dynamic FlxShape_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxShape_obj > _hx_result = new FlxShape_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxShape_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x159bd734) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x159bd734;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxShape_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_96_destroy)
HXLINE(  97)		{
HXLINE(  97)			 ::Dynamic ls = null();
HXDLIN(  97)			this->lineStyle = ls;
HXDLIN(  97)			this->shapeDirty = true;
            		}
HXLINE(  98)		this->super::destroy();
            	}


void FlxShape_obj::drawSpecificShape( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_102_drawSpecificShape)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,drawSpecificShape,(void))

void FlxShape_obj::redrawShape(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_108_redrawShape)
HXLINE( 109)		int diffX = ::Std_obj::_hx_int(this->shapeWidth);
HXDLIN( 109)		int diffX1 = (diffX - this->get_pixels()->width);
HXLINE( 110)		int diffY = ::Std_obj::_hx_int(this->shapeHeight);
HXDLIN( 110)		int diffY1 = (diffY - this->get_pixels()->height);
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if ((diffX1 == 0)) {
HXLINE( 112)			_hx_tmp = (diffY1 != 0);
            		}
            		else {
HXLINE( 112)			_hx_tmp = true;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 114)			Float trueWidth = this->shapeWidth;
HXLINE( 115)			Float trueHeight = this->shapeHeight;
HXLINE( 116)			Float _hx_tmp = this->get_width();
HXDLIN( 116)			int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp + this->get_strokeBuffer()));
HXDLIN( 116)			Float _hx_tmp2 = this->get_height();
HXDLIN( 116)			this->makeGraphic(_hx_tmp1,::Std_obj::_hx_int((_hx_tmp2 + this->get_strokeBuffer())),0,true,null());
HXLINE( 117)			this->fixBoundaries(trueWidth,trueHeight);
            		}
            		else {
HXLINE( 121)			 ::openfl::display::BitmapData _hx_tmp = this->get_pixels();
HXDLIN( 121)			_hx_tmp->fillRect(this->get_pixels()->rect,0);
            		}
HXLINE( 123)		if (::hx::IsGreater( this->lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic),1 )) {
HXLINE( 125)			 ::openfl::geom::Matrix matrix = this->getStrokeOffsetMatrix(this->_matrix);
HXLINE( 126)			this->drawSpecificShape(matrix);
            		}
            		else {
HXLINE( 130)			this->drawSpecificShape(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShape_obj,redrawShape,(void))

void FlxShape_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_135_draw)
HXLINE( 136)		if (this->shapeDirty) {
HXLINE( 138)			this->redrawShape();
HXLINE( 139)			this->shapeDirty = false;
            		}
HXLINE( 141)		this->super::draw();
            	}


void FlxShape_obj::fixBoundaries(Float trueWidth,Float trueHeight){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_156_fixBoundaries)
HXLINE( 157)		this->set_width(trueWidth);
HXLINE( 158)		this->set_height(trueHeight);
HXLINE( 160)		{
HXLINE( 160)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 160)			this1->set_x(this->getStrokeOffsetX());
            		}
HXLINE( 161)		{
HXLINE( 161)			 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 161)			this2->set_y(this->getStrokeOffsetY());
            		}
HXLINE( 163)		this->shapeDirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxShape_obj,fixBoundaries,(void))

Float FlxShape_obj::getStrokeOffsetX(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_168_getStrokeOffsetX)
HXDLIN( 168)		return (this->get_strokeBuffer() / ( (Float)(4) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShape_obj,getStrokeOffsetX,return )

Float FlxShape_obj::getStrokeOffsetY(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_173_getStrokeOffsetY)
HXDLIN( 173)		return (this->get_strokeBuffer() / ( (Float)(4) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShape_obj,getStrokeOffsetY,return )

Float FlxShape_obj::get_strokeBuffer(){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_178_get_strokeBuffer)
HXDLIN( 178)		return (( (Float)(this->lineStyle->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic)) ) * ((Float)2.0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShape_obj,get_strokeBuffer,return )

 ::openfl::geom::Matrix FlxShape_obj::getStrokeOffsetMatrix( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_182_getStrokeOffsetMatrix)
HXLINE( 183)		Float buffer = (this->get_strokeBuffer() / ( (Float)(2) ));
HXLINE( 184)		matrix->identity();
HXLINE( 185)		matrix->translate(buffer,buffer);
HXLINE( 186)		return matrix;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,getStrokeOffsetMatrix,return )

int FlxShape_obj::set_fillColor(int fc){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_190_set_fillColor)
HXLINE( 191)		this->fillColor = fc;
HXLINE( 192)		this->shapeDirty = true;
HXLINE( 193)		return this->fillColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,set_fillColor,return )

 ::Dynamic FlxShape_obj::set_lineStyle( ::Dynamic ls){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_197_set_lineStyle)
HXLINE( 198)		this->lineStyle = ls;
HXLINE( 199)		this->shapeDirty = true;
HXLINE( 200)		return this->lineStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,set_lineStyle,return )

Float FlxShape_obj::set_shapeWidth(Float f){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_204_set_shapeWidth)
HXLINE( 205)		this->shapeWidth = f;
HXLINE( 206)		this->shapeDirty = true;
HXLINE( 207)		return this->shapeWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,set_shapeWidth,return )

Float FlxShape_obj::set_shapeHeight(Float f){
            	HX_STACKFRAME(&_hx_pos_3f95af7519c5c220_211_set_shapeHeight)
HXLINE( 212)		this->shapeHeight = f;
HXLINE( 213)		this->shapeDirty = true;
HXLINE( 214)		return this->shapeHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShape_obj,set_shapeHeight,return )


::hx::ObjectPtr< FlxShape_obj > FlxShape_obj::__new(Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,::hx::Null< Float >  __o_TrueWidth,::hx::Null< Float >  __o_TrueHeight) {
	::hx::ObjectPtr< FlxShape_obj > __this = new FlxShape_obj();
	__this->__construct(X,Y,CanvasWidth,CanvasHeight,LineStyle_,FillColor,__o_TrueWidth,__o_TrueHeight);
	return __this;
}

::hx::ObjectPtr< FlxShape_obj > FlxShape_obj::__alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,Float CanvasWidth,Float CanvasHeight, ::Dynamic LineStyle_,int FillColor,::hx::Null< Float >  __o_TrueWidth,::hx::Null< Float >  __o_TrueHeight) {
	FlxShape_obj *__this = (FlxShape_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxShape_obj), true, "flixel.addons.display.shapes.FlxShape"));
	*(void **)__this = FlxShape_obj::_hx_vtable;
	__this->__construct(X,Y,CanvasWidth,CanvasHeight,LineStyle_,FillColor,__o_TrueWidth,__o_TrueHeight);
	return __this;
}

FlxShape_obj::FlxShape_obj()
{
}

void FlxShape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxShape);
	HX_MARK_MEMBER_NAME(lineStyle,"lineStyle");
	HX_MARK_MEMBER_NAME(fillColor,"fillColor");
	HX_MARK_MEMBER_NAME(shapeWidth,"shapeWidth");
	HX_MARK_MEMBER_NAME(shapeHeight,"shapeHeight");
	HX_MARK_MEMBER_NAME(shape_id,"shape_id");
	HX_MARK_MEMBER_NAME(shapeDirty,"shapeDirty");
	HX_MARK_MEMBER_NAME(_drawStyle,"_drawStyle");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxShape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lineStyle,"lineStyle");
	HX_VISIT_MEMBER_NAME(fillColor,"fillColor");
	HX_VISIT_MEMBER_NAME(shapeWidth,"shapeWidth");
	HX_VISIT_MEMBER_NAME(shapeHeight,"shapeHeight");
	HX_VISIT_MEMBER_NAME(shape_id,"shape_id");
	HX_VISIT_MEMBER_NAME(shapeDirty,"shapeDirty");
	HX_VISIT_MEMBER_NAME(_drawStyle,"_drawStyle");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxShape_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shape_id") ) { return ::hx::Val( shape_id ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return ::hx::Val( lineStyle ); }
		if (HX_FIELD_EQ(inName,"fillColor") ) { return ::hx::Val( fillColor ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shapeWidth") ) { return ::hx::Val( shapeWidth ); }
		if (HX_FIELD_EQ(inName,"shapeDirty") ) { return ::hx::Val( shapeDirty ); }
		if (HX_FIELD_EQ(inName,"_drawStyle") ) { return ::hx::Val( _drawStyle ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shapeHeight") ) { return ::hx::Val( shapeHeight ); }
		if (HX_FIELD_EQ(inName,"redrawShape") ) { return ::hx::Val( redrawShape_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"strokeBuffer") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_strokeBuffer() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixBoundaries") ) { return ::hx::Val( fixBoundaries_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fillColor") ) { return ::hx::Val( set_fillColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lineStyle") ) { return ::hx::Val( set_lineStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_shapeWidth") ) { return ::hx::Val( set_shapeWidth_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_shapeHeight") ) { return ::hx::Val( set_shapeHeight_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getStrokeOffsetX") ) { return ::hx::Val( getStrokeOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStrokeOffsetY") ) { return ::hx::Val( getStrokeOffsetY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_strokeBuffer") ) { return ::hx::Val( get_strokeBuffer_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawSpecificShape") ) { return ::hx::Val( drawSpecificShape_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getStrokeOffsetMatrix") ) { return ::hx::Val( getStrokeOffsetMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxShape_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"shape_id") ) { shape_id=inValue.Cast<  ::flixel::addons::display::shapes::FlxShapeType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lineStyle(inValue.Cast<  ::Dynamic >()) );lineStyle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fillColor(inValue.Cast< int >()) );fillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shapeWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shapeWidth(inValue.Cast< Float >()) );shapeWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapeDirty") ) { shapeDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawStyle") ) { _drawStyle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shapeHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_shapeHeight(inValue.Cast< Float >()) );shapeHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxShape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lineStyle",9d,a8,18,cb));
	outFields->push(HX_("fillColor",e0,97,03,19));
	outFields->push(HX_("shapeWidth",25,4b,a3,b0));
	outFields->push(HX_("shapeHeight",e8,ed,8d,94));
	outFields->push(HX_("shape_id",79,79,eb,1e));
	outFields->push(HX_("shapeDirty",31,e5,10,c0));
	outFields->push(HX_("strokeBuffer",d8,7e,d3,5a));
	outFields->push(HX_("_drawStyle",4e,56,cb,a7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxShape_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxShape_obj,lineStyle),HX_("lineStyle",9d,a8,18,cb)},
	{::hx::fsInt,(int)offsetof(FlxShape_obj,fillColor),HX_("fillColor",e0,97,03,19)},
	{::hx::fsFloat,(int)offsetof(FlxShape_obj,shapeWidth),HX_("shapeWidth",25,4b,a3,b0)},
	{::hx::fsFloat,(int)offsetof(FlxShape_obj,shapeHeight),HX_("shapeHeight",e8,ed,8d,94)},
	{::hx::fsObject /*  ::flixel::addons::display::shapes::FlxShapeType */ ,(int)offsetof(FlxShape_obj,shape_id),HX_("shape_id",79,79,eb,1e)},
	{::hx::fsBool,(int)offsetof(FlxShape_obj,shapeDirty),HX_("shapeDirty",31,e5,10,c0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxShape_obj,_drawStyle),HX_("_drawStyle",4e,56,cb,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxShape_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxShape_obj_sMemberFields[] = {
	HX_("lineStyle",9d,a8,18,cb),
	HX_("fillColor",e0,97,03,19),
	HX_("shapeWidth",25,4b,a3,b0),
	HX_("shapeHeight",e8,ed,8d,94),
	HX_("shape_id",79,79,eb,1e),
	HX_("shapeDirty",31,e5,10,c0),
	HX_("destroy",fa,2c,86,24),
	HX_("drawSpecificShape",6b,3e,59,64),
	HX_("redrawShape",6a,26,95,84),
	HX_("draw",04,2c,70,42),
	HX_("_drawStyle",4e,56,cb,a7),
	HX_("fixBoundaries",fd,8d,d7,57),
	HX_("getStrokeOffsetX",17,8e,30,ae),
	HX_("getStrokeOffsetY",18,8e,30,ae),
	HX_("get_strokeBuffer",61,6b,72,5f),
	HX_("getStrokeOffsetMatrix",42,e8,36,84),
	HX_("set_fillColor",c3,4d,6d,1f),
	HX_("set_lineStyle",80,5e,82,d1),
	HX_("set_shapeWidth",e2,bb,b8,46),
	HX_("set_shapeHeight",8b,22,3b,51),
	::String(null()) };

::hx::Class FlxShape_obj::__mClass;

void FlxShape_obj::__register()
{
	FlxShape_obj _hx_dummy;
	FlxShape_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.shapes.FlxShape",56,c4,94,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxShape_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxShape_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxShape_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
} // end namespace shapes
