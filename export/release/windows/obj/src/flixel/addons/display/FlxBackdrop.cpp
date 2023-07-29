#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem
#include <flixel/graphics/tile/FlxDrawQuadsItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3781a4bff19fd598_23_new,"flixel.addons.display.FlxBackdrop","new",0xbcdf9a65,"flixel.addons.display.FlxBackdrop.new","flixel/addons/display/FlxBackdrop.hx",23,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_87_destroy,"flixel.addons.display.FlxBackdrop","destroy",0x54bfdd7f,"flixel.addons.display.FlxBackdrop.destroy","flixel/addons/display/FlxBackdrop.hx",87,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_100_loadGraphic,"flixel.addons.display.FlxBackdrop","loadGraphic",0x9fc1f027,"flixel.addons.display.FlxBackdrop.loadGraphic","flixel/addons/display/FlxBackdrop.hx",100,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_116_loadFrame,"flixel.addons.display.FlxBackdrop","loadFrame",0x18255fec,"flixel.addons.display.FlxBackdrop.loadFrame","flixel/addons/display/FlxBackdrop.hx",116,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_131_draw,"flixel.addons.display.FlxBackdrop","draw",0x8035265f,"flixel.addons.display.FlxBackdrop.draw","flixel/addons/display/FlxBackdrop.hx",131,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_219_regenGraphic,"flixel.addons.display.FlxBackdrop","regenGraphic",0xe958a2c6,"flixel.addons.display.FlxBackdrop.regenGraphic","flixel/addons/display/FlxBackdrop.hx",219,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_302_onGameResize,"flixel.addons.display.FlxBackdrop","onGameResize",0x815432e0,"flixel.addons.display.FlxBackdrop.onGameResize","flixel/addons/display/FlxBackdrop.hx",302,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_308_scaleCallback,"flixel.addons.display.FlxBackdrop","scaleCallback",0x456c20b4,"flixel.addons.display.FlxBackdrop.scaleCallback","flixel/addons/display/FlxBackdrop.hx",308,0x7f3b228c)
HX_LOCAL_STACK_FRAME(_hx_pos_3781a4bff19fd598_313_setTileFrame,"flixel.addons.display.FlxBackdrop","setTileFrame",0x144de378,"flixel.addons.display.FlxBackdrop.setTileFrame","flixel/addons/display/FlxBackdrop.hx",313,0x7f3b228c)
namespace flixel{
namespace addons{
namespace display{

void FlxBackdrop_obj::__construct( ::Dynamic Graphic,::hx::Null< Float >  __o_ScrollX,::hx::Null< Float >  __o_ScrollY,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY,::hx::Null< int >  __o_SpaceX,::hx::Null< int >  __o_SpaceY){
            		Float ScrollX = __o_ScrollX.Default(1);
            		Float ScrollY = __o_ScrollY.Default(1);
            		bool RepeatX = __o_RepeatX.Default(true);
            		bool RepeatY = __o_RepeatY.Default(true);
            		int SpaceX = __o_SpaceX.Default(0);
            		int SpaceY = __o_SpaceY.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_3781a4bff19fd598_23_new)
HXLINE(  48)		this->useScaleHack = true;
HXLINE(  40)		this->_numTiles = 0;
HXLINE(  32)		this->_spaceY = 0;
HXLINE(  31)		this->_spaceX = 0;
HXLINE(  29)		this->_repeatY = false;
HXLINE(  28)		this->_repeatX = false;
HXLINE(  27)		this->_scrollH = 0;
HXLINE(  26)		this->_scrollW = 0;
HXLINE(  64)		super::__construct(null(),null(),null());
HXLINE(  66)		this->scale =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->scaleCallback_dyn(),null(),null());
HXLINE(  67)		{
HXLINE(  67)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  67)			this1->set_x(( (Float)(1) ));
HXDLIN(  67)			this1->set_y(( (Float)(1) ));
            		}
HXLINE(  69)		this->_repeatX = RepeatX;
HXLINE(  70)		this->_repeatY = RepeatY;
HXLINE(  72)		this->_spaceX = SpaceX;
HXLINE(  73)		this->_spaceY = SpaceY;
HXLINE(  75)		this->_ppoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  77)		this->scrollFactor->set_x(ScrollX);
HXLINE(  78)		this->scrollFactor->set_y(ScrollY);
HXLINE(  80)		if (::hx::IsNotNull( Graphic )) {
HXLINE(  81)			this->loadGraphic(Graphic,null(),null(),null(),null(),null());
            		}
HXLINE(  83)		::flixel::FlxG_obj::signals->gameResized->add(this->onGameResize_dyn());
            	}

Dynamic FlxBackdrop_obj::__CreateEmpty() { return new FlxBackdrop_obj; }

void *FlxBackdrop_obj::_hx_vtable = 0;

Dynamic FlxBackdrop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBackdrop_obj > _hx_result = new FlxBackdrop_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool FlxBackdrop_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5ae97639) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5ae97639;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxBackdrop_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_87_destroy)
HXLINE(  88)		this->_tileInfo = null();
HXLINE(  89)		this->_ppoint = null();
HXLINE(  90)		this->scale = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->scale)) );
HXLINE(  91)		this->setTileFrame(null());
HXLINE(  93)		::flixel::FlxG_obj::signals->gameResized->remove(this->onGameResize_dyn());
HXLINE(  95)		this->super::destroy();
            	}


 ::flixel::FlxSprite FlxBackdrop_obj::loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  __o_Animated,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Animated = __o_Animated.Default(false);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_100_loadGraphic)
HXLINE( 101)		 ::flixel::graphics::FlxGraphic tileGraphic = ::flixel::FlxG_obj::bitmap->add(Graphic,null(),null());
HXLINE( 102)		this->setTileFrame(tileGraphic->get_imageFrame()->get_frame());
HXLINE( 104)		int w = ::Std_obj::_hx_int((this->_tileFrame->sourceSize->x + this->_spaceX));
HXLINE( 105)		int h = ::Std_obj::_hx_int((this->_tileFrame->sourceSize->y + this->_spaceY));
HXLINE( 107)		this->_scrollW = w;
HXLINE( 108)		this->_scrollH = h;
HXLINE( 110)		this->regenGraphic();
HXLINE( 112)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::flixel::addons::display::FlxBackdrop FlxBackdrop_obj::loadFrame( ::flixel::graphics::frames::FlxFrame Frame){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_116_loadFrame)
HXLINE( 117)		this->setTileFrame(Frame);
HXLINE( 119)		int w = ::Std_obj::_hx_int((this->_tileFrame->sourceSize->x + this->_spaceX));
HXLINE( 120)		int h = ::Std_obj::_hx_int((this->_tileFrame->sourceSize->y + this->_spaceY));
HXLINE( 122)		this->_scrollW = w;
HXLINE( 123)		this->_scrollH = h;
HXLINE( 125)		this->regenGraphic();
HXLINE( 127)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBackdrop_obj,loadFrame,return )

void FlxBackdrop_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_131_draw)
HXLINE( 132)		bool isColored;
HXDLIN( 132)		if ((this->alpha == 1)) {
HXLINE( 132)			isColored = (this->color != 16777215);
            		}
            		else {
HXLINE( 132)			isColored = true;
            		}
HXLINE( 133)		bool hasColorOffsets;
HXDLIN( 133)		if (::hx::IsNotNull( this->colorTransform )) {
HXLINE( 133)			hasColorOffsets = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(this->colorTransform);
            		}
            		else {
HXLINE( 133)			hasColorOffsets = false;
            		}
HXLINE( 135)		{
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 135)			while((_g < _g1->length)){
HXLINE( 135)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 135)				_g = (_g + 1);
HXLINE( 137)				bool _hx_tmp;
HXDLIN( 137)				if (camera->visible) {
HXLINE( 137)					_hx_tmp = !(camera->exists);
            				}
            				else {
HXLINE( 137)					_hx_tmp = true;
            				}
HXDLIN( 137)				if (_hx_tmp) {
HXLINE( 138)					continue;
            				}
HXLINE( 140)				Float ssw = (( (Float)(this->_scrollW) ) * ::Math_obj::abs(this->scale->x));
HXLINE( 141)				Float ssh = (( (Float)(this->_scrollH) ) * ::Math_obj::abs(this->scale->y));
HXLINE( 144)				if (this->_repeatX) {
HXLINE( 146)					this->_ppoint->x = ::hx::Mod(((this->x - this->offset->x) - (camera->scroll->x * this->scrollFactor->x)),ssw);
HXLINE( 148)					if ((this->_ppoint->x > 0)) {
HXLINE( 149)						 ::openfl::geom::Point fh = this->_ppoint;
HXDLIN( 149)						fh->x = (fh->x - ssw);
            					}
            				}
            				else {
HXLINE( 153)					this->_ppoint->x = ((this->x - this->offset->x) - (camera->scroll->x * this->scrollFactor->x));
            				}
HXLINE( 157)				if (this->_repeatY) {
HXLINE( 159)					this->_ppoint->y = ::hx::Mod(((this->y - this->offset->y) - (camera->scroll->y * this->scrollFactor->y)),ssh);
HXLINE( 161)					if ((this->_ppoint->y > 0)) {
HXLINE( 162)						 ::openfl::geom::Point fh = this->_ppoint;
HXDLIN( 162)						fh->y = (fh->y - ssh);
            					}
            				}
            				else {
HXLINE( 166)					this->_ppoint->y = ((this->y - this->offset->y) - (camera->scroll->y * this->scrollFactor->y));
            				}
HXLINE( 170)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 172)					if (::hx::IsNull( this->graphic )) {
HXLINE( 173)						return;
            					}
HXLINE( 175)					if (this->dirty) {
HXLINE( 176)						this->calcFrame(this->useFramePixels);
            					}
HXLINE( 178)					this->_flashRect2->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->graphic->width) ),( (Float)(this->graphic->height) ));
HXLINE( 179)					camera->copyPixels(this->frame,this->framePixels,this->_flashRect2,this->_ppoint,null(),null(),null(),null());
            				}
            				else {
HXLINE( 183)					if (::hx::IsNull( this->_tileFrame )) {
HXLINE( 184)						return;
            					}
HXLINE( 186)					 ::flixel::graphics::tile::FlxDrawQuadsItem drawItem = camera->startQuadBatch(this->_tileFrame->parent,isColored,hasColorOffsets,null(),null(),null());
HXLINE( 188)					this->_tileFrame->prepareMatrix(this->_matrix,null(),null(),null());
HXLINE( 190)					Float scaleX = this->scale->x;
HXLINE( 191)					Float scaleY = this->scale->y;
HXLINE( 193)					if (this->useScaleHack) {
HXLINE( 195)						scaleX = (scaleX + (( (Float)(1) ) / (this->_tileFrame->sourceSize->x * camera->totalScaleX)));
HXLINE( 196)						scaleY = (scaleY + (( (Float)(1) ) / (this->_tileFrame->sourceSize->y * camera->totalScaleY)));
            					}
HXLINE( 199)					this->_matrix->scale(scaleX,scaleY);
HXLINE( 201)					Float tx = this->_matrix->tx;
HXLINE( 202)					Float ty = this->_matrix->ty;
HXLINE( 204)					{
HXLINE( 204)						int _g = 0;
HXDLIN( 204)						int _g1 = this->_numTiles;
HXDLIN( 204)						while((_g < _g1)){
HXLINE( 204)							_g = (_g + 1);
HXDLIN( 204)							int j = (_g - 1);
HXLINE( 206)							Float currTileX = this->_tileInfo->__get((j * 2));
HXLINE( 207)							Float currTileY = this->_tileInfo->__get(((j * 2) + 1));
HXLINE( 209)							this->_matrix->tx = (tx + (this->_ppoint->x + currTileX));
HXLINE( 210)							this->_matrix->ty = (ty + (this->_ppoint->y + currTileY));
HXLINE( 212)							drawItem->addQuad(this->_tileFrame,this->_matrix,this->colorTransform);
            						}
            					}
            				}
            			}
            		}
            	}


void FlxBackdrop_obj::regenGraphic(){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_219_regenGraphic)
HXLINE( 220)		Float sx = ::Math_obj::abs(this->scale->x);
HXLINE( 221)		Float sy = ::Math_obj::abs(this->scale->y);
HXLINE( 223)		int ssw = ::Std_obj::_hx_int((( (Float)(this->_scrollW) ) * sx));
HXLINE( 224)		int ssh = ::Std_obj::_hx_int((( (Float)(this->_scrollH) ) * sy));
HXLINE( 226)		int w = ssw;
HXLINE( 227)		int h = ssh;
HXLINE( 229)		 ::openfl::display::BitmapData frameBitmap = null();
HXLINE( 231)		if (this->_repeatX) {
HXLINE( 232)			w = (w + ::flixel::FlxG_obj::width);
            		}
HXLINE( 233)		if (this->_repeatY) {
HXLINE( 234)			h = (h + ::flixel::FlxG_obj::height);
            		}
HXLINE( 236)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 238)			bool _hx_tmp;
HXDLIN( 238)			if (::hx::IsNotNull( this->graphic )) {
HXLINE( 238)				if ((this->graphic->width == w)) {
HXLINE( 238)					_hx_tmp = (this->graphic->height != h);
            				}
            				else {
HXLINE( 238)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 238)				_hx_tmp = true;
            			}
HXDLIN( 238)			if (_hx_tmp) {
HXLINE( 240)				this->makeGraphic(w,h,0,true,null());
            			}
            		}
            		else {
HXLINE( 245)			this->_tileInfo = ::Array_obj< Float >::__new(0);
HXLINE( 246)			this->_numTiles = 0;
HXLINE( 248)			this->set_width(( (Float)((this->frameWidth = w)) ));
HXLINE( 249)			this->set_height(( (Float)((this->frameHeight = h)) ));
            		}
HXLINE( 252)		this->_ppoint->x = (this->_ppoint->y = ( (Float)(0) ));
HXLINE( 254)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 256)			this->get_pixels()->lock();
HXLINE( 257)			this->_flashRect2->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->graphic->width) ),( (Float)(this->graphic->height) ));
HXLINE( 258)			this->get_pixels()->fillRect(this->_flashRect2,0);
HXLINE( 259)			this->_matrix->identity();
HXLINE( 260)			this->_matrix->scale(sx,sy);
HXLINE( 261)			frameBitmap = this->_tileFrame->paint(null(),null(),null(),null());
            		}
HXLINE( 264)		while((this->_ppoint->y < h)){
HXLINE( 266)			while((this->_ppoint->x < w)){
HXLINE( 268)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 270)					this->get_pixels()->draw(frameBitmap,this->_matrix,null(),null(),null(),null());
HXLINE( 271)					 ::flixel::math::FlxMatrix fh = this->_matrix;
HXDLIN( 271)					fh->tx = (fh->tx + ssw);
            				}
            				else {
HXLINE( 275)					this->_tileInfo->push(this->_ppoint->x);
HXLINE( 276)					this->_tileInfo->push(this->_ppoint->y);
HXLINE( 277)					this->_numTiles++;
            				}
HXLINE( 279)				 ::openfl::geom::Point fh = this->_ppoint;
HXDLIN( 279)				fh->x = (fh->x + ssw);
            			}
HXLINE( 281)			if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 283)				this->_matrix->tx = ( (Float)(0) );
HXLINE( 284)				 ::flixel::math::FlxMatrix fh = this->_matrix;
HXDLIN( 284)				fh->ty = (fh->ty + ssh);
            			}
HXLINE( 287)			this->_ppoint->x = ( (Float)(0) );
HXLINE( 288)			 ::openfl::geom::Point fh = this->_ppoint;
HXDLIN( 288)			fh->y = (fh->y + ssh);
            		}
HXLINE( 291)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 293)			frameBitmap->dispose();
HXLINE( 294)			this->get_pixels()->unlock(null());
HXLINE( 295)			this->dirty = true;
HXLINE( 296)			this->calcFrame(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBackdrop_obj,regenGraphic,(void))

void FlxBackdrop_obj::onGameResize(int _,int _1){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_302_onGameResize)
HXDLIN( 302)		if (::hx::IsNotNull( this->_tileFrame )) {
HXLINE( 303)			this->regenGraphic();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBackdrop_obj,onGameResize,(void))

void FlxBackdrop_obj::scaleCallback( ::flixel::math::FlxBasePoint Scale){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_308_scaleCallback)
HXDLIN( 308)		if (::hx::IsNotNull( this->_tileFrame )) {
HXLINE( 309)			this->regenGraphic();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBackdrop_obj,scaleCallback,(void))

 ::flixel::graphics::frames::FlxFrame FlxBackdrop_obj::setTileFrame( ::flixel::graphics::frames::FlxFrame Frame){
            	HX_STACKFRAME(&_hx_pos_3781a4bff19fd598_313_setTileFrame)
HXLINE( 314)		if (::hx::IsInstanceNotEq( Frame,this->_tileFrame )) {
HXLINE( 316)			if (::hx::IsNotNull( this->_tileFrame )) {
HXLINE( 317)				 ::flixel::graphics::FlxGraphic fh = this->_tileFrame->parent;
HXDLIN( 317)				fh->set_useCount((fh->get_useCount() - 1));
            			}
HXLINE( 319)			if (::hx::IsNotNull( Frame )) {
HXLINE( 320)				 ::flixel::graphics::FlxGraphic fh = Frame->parent;
HXDLIN( 320)				fh->set_useCount((fh->get_useCount() + 1));
            			}
            		}
HXLINE( 323)		return (this->_tileFrame = Frame);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBackdrop_obj,setTileFrame,return )


::hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__new( ::Dynamic Graphic,::hx::Null< Float >  __o_ScrollX,::hx::Null< Float >  __o_ScrollY,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY,::hx::Null< int >  __o_SpaceX,::hx::Null< int >  __o_SpaceY) {
	::hx::ObjectPtr< FlxBackdrop_obj > __this = new FlxBackdrop_obj();
	__this->__construct(Graphic,__o_ScrollX,__o_ScrollY,__o_RepeatX,__o_RepeatY,__o_SpaceX,__o_SpaceY);
	return __this;
}

::hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Graphic,::hx::Null< Float >  __o_ScrollX,::hx::Null< Float >  __o_ScrollY,::hx::Null< bool >  __o_RepeatX,::hx::Null< bool >  __o_RepeatY,::hx::Null< int >  __o_SpaceX,::hx::Null< int >  __o_SpaceY) {
	FlxBackdrop_obj *__this = (FlxBackdrop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBackdrop_obj), true, "flixel.addons.display.FlxBackdrop"));
	*(void **)__this = FlxBackdrop_obj::_hx_vtable;
	__this->__construct(Graphic,__o_ScrollX,__o_ScrollY,__o_RepeatX,__o_RepeatY,__o_SpaceX,__o_SpaceY);
	return __this;
}

FlxBackdrop_obj::FlxBackdrop_obj()
{
}

void FlxBackdrop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBackdrop);
	HX_MARK_MEMBER_NAME(_ppoint,"_ppoint");
	HX_MARK_MEMBER_NAME(_scrollW,"_scrollW");
	HX_MARK_MEMBER_NAME(_scrollH,"_scrollH");
	HX_MARK_MEMBER_NAME(_repeatX,"_repeatX");
	HX_MARK_MEMBER_NAME(_repeatY,"_repeatY");
	HX_MARK_MEMBER_NAME(_spaceX,"_spaceX");
	HX_MARK_MEMBER_NAME(_spaceY,"_spaceY");
	HX_MARK_MEMBER_NAME(_tileFrame,"_tileFrame");
	HX_MARK_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_MARK_MEMBER_NAME(_numTiles,"_numTiles");
	HX_MARK_MEMBER_NAME(useScaleHack,"useScaleHack");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBackdrop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ppoint,"_ppoint");
	HX_VISIT_MEMBER_NAME(_scrollW,"_scrollW");
	HX_VISIT_MEMBER_NAME(_scrollH,"_scrollH");
	HX_VISIT_MEMBER_NAME(_repeatX,"_repeatX");
	HX_VISIT_MEMBER_NAME(_repeatY,"_repeatY");
	HX_VISIT_MEMBER_NAME(_spaceX,"_spaceX");
	HX_VISIT_MEMBER_NAME(_spaceY,"_spaceY");
	HX_VISIT_MEMBER_NAME(_tileFrame,"_tileFrame");
	HX_VISIT_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_VISIT_MEMBER_NAME(_numTiles,"_numTiles");
	HX_VISIT_MEMBER_NAME(useScaleHack,"useScaleHack");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxBackdrop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ppoint") ) { return ::hx::Val( _ppoint ); }
		if (HX_FIELD_EQ(inName,"_spaceX") ) { return ::hx::Val( _spaceX ); }
		if (HX_FIELD_EQ(inName,"_spaceY") ) { return ::hx::Val( _spaceY ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollW") ) { return ::hx::Val( _scrollW ); }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { return ::hx::Val( _scrollH ); }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { return ::hx::Val( _repeatX ); }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { return ::hx::Val( _repeatY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { return ::hx::Val( _tileInfo ); }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { return ::hx::Val( _numTiles ); }
		if (HX_FIELD_EQ(inName,"loadFrame") ) { return ::hx::Val( loadFrame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileFrame") ) { return ::hx::Val( _tileFrame ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return ::hx::Val( loadGraphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { return ::hx::Val( useScaleHack ); }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return ::hx::Val( regenGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"onGameResize") ) { return ::hx::Val( onGameResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileFrame") ) { return ::hx::Val( setTileFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scaleCallback") ) { return ::hx::Val( scaleCallback_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBackdrop_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_ppoint") ) { _ppoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spaceX") ) { _spaceX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spaceY") ) { _spaceY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollW") ) { _scrollW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { _scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { _repeatX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { _repeatY=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { _tileInfo=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { _numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileFrame") ) { _tileFrame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { useScaleHack=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBackdrop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ppoint",7f,2f,ff,fc));
	outFields->push(HX_("_scrollW",2b,8d,90,6a));
	outFields->push(HX_("_scrollH",1c,8d,90,6a));
	outFields->push(HX_("_repeatX",1e,32,40,e0));
	outFields->push(HX_("_repeatY",1f,32,40,e0));
	outFields->push(HX_("_spaceX",71,b2,cb,26));
	outFields->push(HX_("_spaceY",72,b2,cb,26));
	outFields->push(HX_("_tileFrame",e0,51,81,ed));
	outFields->push(HX_("_tileInfo",1b,56,57,c7));
	outFields->push(HX_("_numTiles",be,08,db,14));
	outFields->push(HX_("useScaleHack",44,9c,16,98));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBackdrop_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxBackdrop_obj,_ppoint),HX_("_ppoint",7f,2f,ff,fc)},
	{::hx::fsInt,(int)offsetof(FlxBackdrop_obj,_scrollW),HX_("_scrollW",2b,8d,90,6a)},
	{::hx::fsInt,(int)offsetof(FlxBackdrop_obj,_scrollH),HX_("_scrollH",1c,8d,90,6a)},
	{::hx::fsBool,(int)offsetof(FlxBackdrop_obj,_repeatX),HX_("_repeatX",1e,32,40,e0)},
	{::hx::fsBool,(int)offsetof(FlxBackdrop_obj,_repeatY),HX_("_repeatY",1f,32,40,e0)},
	{::hx::fsInt,(int)offsetof(FlxBackdrop_obj,_spaceX),HX_("_spaceX",71,b2,cb,26)},
	{::hx::fsInt,(int)offsetof(FlxBackdrop_obj,_spaceY),HX_("_spaceY",72,b2,cb,26)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxBackdrop_obj,_tileFrame),HX_("_tileFrame",e0,51,81,ed)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxBackdrop_obj,_tileInfo),HX_("_tileInfo",1b,56,57,c7)},
	{::hx::fsInt,(int)offsetof(FlxBackdrop_obj,_numTiles),HX_("_numTiles",be,08,db,14)},
	{::hx::fsBool,(int)offsetof(FlxBackdrop_obj,useScaleHack),HX_("useScaleHack",44,9c,16,98)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxBackdrop_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBackdrop_obj_sMemberFields[] = {
	HX_("_ppoint",7f,2f,ff,fc),
	HX_("_scrollW",2b,8d,90,6a),
	HX_("_scrollH",1c,8d,90,6a),
	HX_("_repeatX",1e,32,40,e0),
	HX_("_repeatY",1f,32,40,e0),
	HX_("_spaceX",71,b2,cb,26),
	HX_("_spaceY",72,b2,cb,26),
	HX_("_tileFrame",e0,51,81,ed),
	HX_("_tileInfo",1b,56,57,c7),
	HX_("_numTiles",be,08,db,14),
	HX_("useScaleHack",44,9c,16,98),
	HX_("destroy",fa,2c,86,24),
	HX_("loadGraphic",22,19,a5,44),
	HX_("loadFrame",27,c4,ba,21),
	HX_("draw",04,2c,70,42),
	HX_("regenGraphic",6b,55,39,8b),
	HX_("onGameResize",85,e5,34,23),
	HX_("scaleCallback",6f,be,27,48),
	HX_("setTileFrame",1d,96,2e,b6),
	::String(null()) };

::hx::Class FlxBackdrop_obj::__mClass;

void FlxBackdrop_obj::__register()
{
	FlxBackdrop_obj _hx_dummy;
	FlxBackdrop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.FlxBackdrop",f3,83,47,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBackdrop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBackdrop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBackdrop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBackdrop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
