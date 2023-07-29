#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_26_new,"flixel.group.FlxTypedSpriteGroup","new",0x9fa77753,"flixel.group.FlxTypedSpriteGroup.new","flixel/group/FlxSpriteGroup.hx",26,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_616_transformChildren_flixel_math_FlxRect,"flixel.group.FlxTypedSpriteGroup","transformChildren_flixel_math_FlxRect",0x5a9c13e1,"flixel.group.FlxTypedSpriteGroup.transformChildren_flixel_math_FlxRect","flixel/group/FlxSpriteGroup.hx",616,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_616_transformChildren_flixel_math_FlxPoint,"flixel.group.FlxTypedSpriteGroup","transformChildren_flixel_math_FlxPoint",0xcdc8d2f3,"flixel.group.FlxTypedSpriteGroup.transformChildren_flixel_math_FlxPoint","flixel/group/FlxSpriteGroup.hx",616,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_616_transformChildren_flash_display_BlendMode,"flixel.group.FlxTypedSpriteGroup","transformChildren_flash_display_BlendMode",0xac8365a7,"flixel.group.FlxTypedSpriteGroup.transformChildren_flash_display_BlendMode","flixel/group/FlxSpriteGroup.hx",616,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_616_transformChildren_flixel_FlxCamera,"flixel.group.FlxTypedSpriteGroup","transformChildren_flixel_FlxCamera",0x864ae155,"flixel.group.FlxTypedSpriteGroup.transformChildren_flixel_FlxCamera","flixel/group/FlxSpriteGroup.hx",616,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_616_transformChildren_Array_flixel_FlxCamera,"flixel.group.FlxTypedSpriteGroup","transformChildren_Array_flixel_FlxCamera",0x8df728db,"flixel.group.FlxTypedSpriteGroup.transformChildren_Array_flixel_FlxCamera","flixel/group/FlxSpriteGroup.hx",616,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_616_transformChildren_Bool,"flixel.group.FlxTypedSpriteGroup","transformChildren_Bool",0xbaf55a6b,"flixel.group.FlxTypedSpriteGroup.transformChildren_Bool","flixel/group/FlxSpriteGroup.hx",616,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_616_transformChildren_Int,"flixel.group.FlxTypedSpriteGroup","transformChildren_Int",0x8f3579ce,"flixel.group.FlxTypedSpriteGroup.transformChildren_Int","flixel/group/FlxSpriteGroup.hx",616,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_635_multiTransformChildren_Float,"flixel.group.FlxTypedSpriteGroup","multiTransformChildren_Float",0x31c44efc,"flixel.group.FlxTypedSpriteGroup.multiTransformChildren_Float","flixel/group/FlxSpriteGroup.hx",635,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_616_transformChildren_Float,"flixel.group.FlxTypedSpriteGroup","transformChildren_Float",0x2758683b,"flixel.group.FlxTypedSpriteGroup.transformChildren_Float","flixel/group/FlxSpriteGroup.hx",616,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_85_initVars,"flixel.group.FlxTypedSpriteGroup","initVars",0xad6ba309,"flixel.group.FlxTypedSpriteGroup.initVars","flixel/group/FlxSpriteGroup.hx",85,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_110_destroy,"flixel.group.FlxTypedSpriteGroup","destroy",0xd803c96d,"flixel.group.FlxTypedSpriteGroup.destroy","flixel/group/FlxSpriteGroup.hx",110,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_129_clone,"flixel.group.FlxTypedSpriteGroup","clone",0x21249d10,"flixel.group.FlxTypedSpriteGroup.clone","flixel/group/FlxSpriteGroup.hx",129,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_148_isOnScreen,"flixel.group.FlxTypedSpriteGroup","isOnScreen",0xe3a8b162,"flixel.group.FlxTypedSpriteGroup.isOnScreen","flixel/group/FlxSpriteGroup.hx",148,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_167_overlapsPoint,"flixel.group.FlxTypedSpriteGroup","overlapsPoint",0xe77cba57,"flixel.group.FlxTypedSpriteGroup.overlapsPoint","flixel/group/FlxSpriteGroup.hx",167,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_190_pixelsOverlapPoint,"flixel.group.FlxTypedSpriteGroup","pixelsOverlapPoint",0xc3b2a483,"flixel.group.FlxTypedSpriteGroup.pixelsOverlapPoint","flixel/group/FlxSpriteGroup.hx",190,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_204_update,"flixel.group.FlxTypedSpriteGroup","update",0x579c78f6,"flixel.group.FlxTypedSpriteGroup.update","flixel/group/FlxSpriteGroup.hx",204,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_213_draw,"flixel.group.FlxTypedSpriteGroup","draw",0x0c4e99b1,"flixel.group.FlxTypedSpriteGroup.draw","flixel/group/FlxSpriteGroup.hx",213,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_231_replaceColor,"flixel.group.FlxTypedSpriteGroup","replaceColor",0x6ca2bf3c,"flixel.group.FlxTypedSpriteGroup.replaceColor","flixel/group/FlxSpriteGroup.hx",231,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_261_add,"flixel.group.FlxTypedSpriteGroup","add",0x9f9d9914,"flixel.group.FlxTypedSpriteGroup.add","flixel/group/FlxSpriteGroup.hx",261,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_276_insert,"flixel.group.FlxTypedSpriteGroup","insert",0x6e743626,"flixel.group.FlxTypedSpriteGroup.insert","flixel/group/FlxSpriteGroup.hx",276,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_288_preAdd,"flixel.group.FlxTypedSpriteGroup","preAdd",0x7f31b4ab,"flixel.group.FlxTypedSpriteGroup.preAdd","flixel/group/FlxSpriteGroup.hx",288,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_327_recycle,"flixel.group.FlxTypedSpriteGroup","recycle",0xeb09ac86,"flixel.group.FlxTypedSpriteGroup.recycle","flixel/group/FlxSpriteGroup.hx",327,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_338_remove,"flixel.group.FlxTypedSpriteGroup","remove",0xd51f8f31,"flixel.group.FlxTypedSpriteGroup.remove","flixel/group/FlxSpriteGroup.hx",338,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_356_replace,"flixel.group.FlxTypedSpriteGroup","replace",0x5ea5e4a7,"flixel.group.FlxTypedSpriteGroup.replace","flixel/group/FlxSpriteGroup.hx",356,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_371_sort,"flixel.group.FlxTypedSpriteGroup","sort",0x1636950b,"flixel.group.FlxTypedSpriteGroup.sort","flixel/group/FlxSpriteGroup.hx",371,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_385_getFirstAvailable,"flixel.group.FlxTypedSpriteGroup","getFirstAvailable",0x44b6b4e2,"flixel.group.FlxTypedSpriteGroup.getFirstAvailable","flixel/group/FlxSpriteGroup.hx",385,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_396_getFirstNull,"flixel.group.FlxTypedSpriteGroup","getFirstNull",0x3deb1a0e,"flixel.group.FlxTypedSpriteGroup.getFirstNull","flixel/group/FlxSpriteGroup.hx",396,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_407_getFirstExisting,"flixel.group.FlxTypedSpriteGroup","getFirstExisting",0x25cf6192,"flixel.group.FlxTypedSpriteGroup.getFirstExisting","flixel/group/FlxSpriteGroup.hx",407,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_418_getFirstAlive,"flixel.group.FlxTypedSpriteGroup","getFirstAlive",0x6da0fe66,"flixel.group.FlxTypedSpriteGroup.getFirstAlive","flixel/group/FlxSpriteGroup.hx",418,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_429_getFirstDead,"flixel.group.FlxTypedSpriteGroup","getFirstDead",0x3742ca2b,"flixel.group.FlxTypedSpriteGroup.getFirstDead","flixel/group/FlxSpriteGroup.hx",429,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_439_countLiving,"flixel.group.FlxTypedSpriteGroup","countLiving",0xa01b2b4b,"flixel.group.FlxTypedSpriteGroup.countLiving","flixel/group/FlxSpriteGroup.hx",439,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_449_countDead,"flixel.group.FlxTypedSpriteGroup","countDead",0x17fab246,"flixel.group.FlxTypedSpriteGroup.countDead","flixel/group/FlxSpriteGroup.hx",449,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_462_getRandom,"flixel.group.FlxTypedSpriteGroup","getRandom",0xf7598a6c,"flixel.group.FlxTypedSpriteGroup.getRandom","flixel/group/FlxSpriteGroup.hx",462,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_472_iterator,"flixel.group.FlxTypedSpriteGroup","iterator",0xee05921b,"flixel.group.FlxTypedSpriteGroup.iterator","flixel/group/FlxSpriteGroup.hx",472,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_483_forEach,"flixel.group.FlxTypedSpriteGroup","forEach",0x783bc61d,"flixel.group.FlxTypedSpriteGroup.forEach","flixel/group/FlxSpriteGroup.hx",483,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_494_forEachAlive,"flixel.group.FlxTypedSpriteGroup","forEachAlive",0xc86ec470,"flixel.group.FlxTypedSpriteGroup.forEachAlive","flixel/group/FlxSpriteGroup.hx",494,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_505_forEachDead,"flixel.group.FlxTypedSpriteGroup","forEachDead",0xe8751361,"flixel.group.FlxTypedSpriteGroup.forEachDead","flixel/group/FlxSpriteGroup.hx",505,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_516_forEachExists,"flixel.group.FlxTypedSpriteGroup","forEachExists",0x1ab74bd9,"flixel.group.FlxTypedSpriteGroup.forEachExists","flixel/group/FlxSpriteGroup.hx",516,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_528_forEachOfType,"flixel.group.FlxTypedSpriteGroup","forEachOfType",0xaf35856e,"flixel.group.FlxTypedSpriteGroup.forEachOfType","flixel/group/FlxSpriteGroup.hx",528,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_537_clear,"flixel.group.FlxTypedSpriteGroup","clear",0x211cfb40,"flixel.group.FlxTypedSpriteGroup.clear","flixel/group/FlxSpriteGroup.hx",537,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_545_kill,"flixel.group.FlxTypedSpriteGroup","kill",0x10e84d4b,"flixel.group.FlxTypedSpriteGroup.kill","flixel/group/FlxSpriteGroup.hx",545,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_556_revive,"flixel.group.FlxTypedSpriteGroup","revive",0xdb0ded42,"flixel.group.FlxTypedSpriteGroup.revive","flixel/group/FlxSpriteGroup.hx",556,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_564_reset,"flixel.group.FlxTypedSpriteGroup","reset",0xbf89d382,"flixel.group.FlxTypedSpriteGroup.reset","flixel/group/FlxSpriteGroup.hx",564,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_594_setPosition,"flixel.group.FlxTypedSpriteGroup","setPosition",0x6aebbc5e,"flixel.group.FlxTypedSpriteGroup.setPosition","flixel/group/FlxSpriteGroup.hx",594,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_660_set_camera,"flixel.group.FlxTypedSpriteGroup","set_camera",0xed80c24f,"flixel.group.FlxTypedSpriteGroup.set_camera","flixel/group/FlxSpriteGroup.hx",660,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_667_set_cameras,"flixel.group.FlxTypedSpriteGroup","set_cameras",0xe3294344,"flixel.group.FlxTypedSpriteGroup.set_cameras","flixel/group/FlxSpriteGroup.hx",667,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_674_set_exists,"flixel.group.FlxTypedSpriteGroup","set_exists",0xf5d49986,"flixel.group.FlxTypedSpriteGroup.set_exists","flixel/group/FlxSpriteGroup.hx",674,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_681_set_visible,"flixel.group.FlxTypedSpriteGroup","set_visible",0xa31c3188,"flixel.group.FlxTypedSpriteGroup.set_visible","flixel/group/FlxSpriteGroup.hx",681,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_688_set_active,"flixel.group.FlxTypedSpriteGroup","set_active",0x4c3abd70,"flixel.group.FlxTypedSpriteGroup.set_active","flixel/group/FlxSpriteGroup.hx",688,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_695_set_alive,"flixel.group.FlxTypedSpriteGroup","set_alive",0x0bff8b63,"flixel.group.FlxTypedSpriteGroup.set_alive","flixel/group/FlxSpriteGroup.hx",695,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_702_set_x,"flixel.group.FlxTypedSpriteGroup","set_x",0x52f1250e,"flixel.group.FlxTypedSpriteGroup.set_x","flixel/group/FlxSpriteGroup.hx",702,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_709_set_y,"flixel.group.FlxTypedSpriteGroup","set_y",0x52f1250f,"flixel.group.FlxTypedSpriteGroup.set_y","flixel/group/FlxSpriteGroup.hx",709,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_716_set_angle,"flixel.group.FlxTypedSpriteGroup","set_angle",0x0d506b69,"flixel.group.FlxTypedSpriteGroup.set_angle","flixel/group/FlxSpriteGroup.hx",716,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_723_set_alpha,"flixel.group.FlxTypedSpriteGroup","set_alpha",0x0c04cef4,"flixel.group.FlxTypedSpriteGroup.set_alpha","flixel/group/FlxSpriteGroup.hx",723,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_738_set_facing,"flixel.group.FlxTypedSpriteGroup","set_facing",0x19f9bac4,"flixel.group.FlxTypedSpriteGroup.set_facing","flixel/group/FlxSpriteGroup.hx",738,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_745_set_flipX,"flixel.group.FlxTypedSpriteGroup","set_flipX",0xed006ca1,"flixel.group.FlxTypedSpriteGroup.set_flipX","flixel/group/FlxSpriteGroup.hx",745,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_752_set_flipY,"flixel.group.FlxTypedSpriteGroup","set_flipY",0xed006ca2,"flixel.group.FlxTypedSpriteGroup.set_flipY","flixel/group/FlxSpriteGroup.hx",752,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_759_set_moves,"flixel.group.FlxTypedSpriteGroup","set_moves",0xf6d3f3d8,"flixel.group.FlxTypedSpriteGroup.set_moves","flixel/group/FlxSpriteGroup.hx",759,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_766_set_immovable,"flixel.group.FlxTypedSpriteGroup","set_immovable",0xdf98d1a0,"flixel.group.FlxTypedSpriteGroup.set_immovable","flixel/group/FlxSpriteGroup.hx",766,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_773_set_solid,"flixel.group.FlxTypedSpriteGroup","set_solid",0x6b33dbc1,"flixel.group.FlxTypedSpriteGroup.set_solid","flixel/group/FlxSpriteGroup.hx",773,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_780_set_color,"flixel.group.FlxTypedSpriteGroup","set_color",0x34ca98f9,"flixel.group.FlxTypedSpriteGroup.set_color","flixel/group/FlxSpriteGroup.hx",780,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_787_set_blend,"flixel.group.FlxTypedSpriteGroup","set_blend",0x9f630fe7,"flixel.group.FlxTypedSpriteGroup.set_blend","flixel/group/FlxSpriteGroup.hx",787,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_794_set_clipRect,"flixel.group.FlxTypedSpriteGroup","set_clipRect",0x5134ca3e,"flixel.group.FlxTypedSpriteGroup.set_clipRect","flixel/group/FlxSpriteGroup.hx",794,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_801_set_pixelPerfectRender,"flixel.group.FlxTypedSpriteGroup","set_pixelPerfectRender",0x5163ac87,"flixel.group.FlxTypedSpriteGroup.set_pixelPerfectRender","flixel/group/FlxSpriteGroup.hx",801,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_812_set_width,"flixel.group.FlxTypedSpriteGroup","set_width",0xb4d0dd9c,"flixel.group.FlxTypedSpriteGroup.set_width","flixel/group/FlxSpriteGroup.hx",812,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_816_get_width,"flixel.group.FlxTypedSpriteGroup","get_width",0xd17ff190,"flixel.group.FlxTypedSpriteGroup.get_width","flixel/group/FlxSpriteGroup.hx",816,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_831_findMinX,"flixel.group.FlxTypedSpriteGroup","findMinX",0xf55ba38c,"flixel.group.FlxTypedSpriteGroup.findMinX","flixel/group/FlxSpriteGroup.hx",831,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_835_findMinXHelper,"flixel.group.FlxTypedSpriteGroup","findMinXHelper",0x0cd7c61a,"flixel.group.FlxTypedSpriteGroup.findMinXHelper","flixel/group/FlxSpriteGroup.hx",835,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_862_findMaxX,"flixel.group.FlxTypedSpriteGroup","findMaxX",0xf5559a3a,"flixel.group.FlxTypedSpriteGroup.findMaxX","flixel/group/FlxSpriteGroup.hx",862,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_866_findMaxXHelper,"flixel.group.FlxTypedSpriteGroup","findMaxXHelper",0xb144f348,"flixel.group.FlxTypedSpriteGroup.findMaxXHelper","flixel/group/FlxSpriteGroup.hx",866,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_890_set_height,"flixel.group.FlxTypedSpriteGroup","set_height",0x38408391,"flixel.group.FlxTypedSpriteGroup.set_height","flixel/group/FlxSpriteGroup.hx",890,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_894_get_height,"flixel.group.FlxTypedSpriteGroup","get_height",0x34c2e51d,"flixel.group.FlxTypedSpriteGroup.get_height","flixel/group/FlxSpriteGroup.hx",894,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_909_findMinY,"flixel.group.FlxTypedSpriteGroup","findMinY",0xf55ba38d,"flixel.group.FlxTypedSpriteGroup.findMinY","flixel/group/FlxSpriteGroup.hx",909,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_913_findMinYHelper,"flixel.group.FlxTypedSpriteGroup","findMinYHelper",0x366d3cdb,"flixel.group.FlxTypedSpriteGroup.findMinYHelper","flixel/group/FlxSpriteGroup.hx",913,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_940_findMaxY,"flixel.group.FlxTypedSpriteGroup","findMaxY",0xf5559a3b,"flixel.group.FlxTypedSpriteGroup.findMaxY","flixel/group/FlxSpriteGroup.hx",940,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_944_findMaxYHelper,"flixel.group.FlxTypedSpriteGroup","findMaxYHelper",0xdada6a09,"flixel.group.FlxTypedSpriteGroup.findMaxYHelper","flixel/group/FlxSpriteGroup.hx",944,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_967_get_length,"flixel.group.FlxTypedSpriteGroup","get_length",0xd17e721c,"flixel.group.FlxTypedSpriteGroup.get_length","flixel/group/FlxSpriteGroup.hx",967,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_972_get_maxSize,"flixel.group.FlxTypedSpriteGroup","get_maxSize",0xc20eab8f,"flixel.group.FlxTypedSpriteGroup.get_maxSize","flixel/group/FlxSpriteGroup.hx",972,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_977_set_maxSize,"flixel.group.FlxTypedSpriteGroup","set_maxSize",0xcc7bb29b,"flixel.group.FlxTypedSpriteGroup.set_maxSize","flixel/group/FlxSpriteGroup.hx",977,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_982_get_members,"flixel.group.FlxTypedSpriteGroup","get_members",0x0ffadee3,"flixel.group.FlxTypedSpriteGroup.get_members","flixel/group/FlxSpriteGroup.hx",982,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_988_xTransform,"flixel.group.FlxTypedSpriteGroup","xTransform",0x4c3dab41,"flixel.group.FlxTypedSpriteGroup.xTransform","flixel/group/FlxSpriteGroup.hx",988,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_991_yTransform,"flixel.group.FlxTypedSpriteGroup","yTransform",0x0c882320,"flixel.group.FlxTypedSpriteGroup.yTransform","flixel/group/FlxSpriteGroup.hx",991,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_994_angleTransform,"flixel.group.FlxTypedSpriteGroup","angleTransform",0x285b5f06,"flixel.group.FlxTypedSpriteGroup.angleTransform","flixel/group/FlxSpriteGroup.hx",994,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_998_alphaTransform,"flixel.group.FlxTypedSpriteGroup","alphaTransform",0xe7f1b21b,"flixel.group.FlxTypedSpriteGroup.alphaTransform","flixel/group/FlxSpriteGroup.hx",998,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1005_directAlphaTransform,"flixel.group.FlxTypedSpriteGroup","directAlphaTransform",0x680196e4,"flixel.group.FlxTypedSpriteGroup.directAlphaTransform","flixel/group/FlxSpriteGroup.hx",1005,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1008_facingTransform,"flixel.group.FlxTypedSpriteGroup","facingTransform",0x8cbce265,"flixel.group.FlxTypedSpriteGroup.facingTransform","flixel/group/FlxSpriteGroup.hx",1008,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1011_flipXTransform,"flixel.group.FlxTypedSpriteGroup","flipXTransform",0x2d6d76ce,"flixel.group.FlxTypedSpriteGroup.flipXTransform","flixel/group/FlxSpriteGroup.hx",1011,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1014_flipYTransform,"flixel.group.FlxTypedSpriteGroup","flipYTransform",0xedb7eead,"flixel.group.FlxTypedSpriteGroup.flipYTransform","flixel/group/FlxSpriteGroup.hx",1014,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1017_movesTransform,"flixel.group.FlxTypedSpriteGroup","movesTransform",0x6670d0b7,"flixel.group.FlxTypedSpriteGroup.movesTransform","flixel/group/FlxSpriteGroup.hx",1017,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1020_pixelPerfectTransform,"flixel.group.FlxTypedSpriteGroup","pixelPerfectTransform",0x21312cf8,"flixel.group.FlxTypedSpriteGroup.pixelPerfectTransform","flixel/group/FlxSpriteGroup.hx",1020,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1023_gColorTransform,"flixel.group.FlxTypedSpriteGroup","gColorTransform",0x1fbe79c3,"flixel.group.FlxTypedSpriteGroup.gColorTransform","flixel/group/FlxSpriteGroup.hx",1023,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1026_blendTransform,"flixel.group.FlxTypedSpriteGroup","blendTransform",0x1d7b3ac8,"flixel.group.FlxTypedSpriteGroup.blendTransform","flixel/group/FlxSpriteGroup.hx",1026,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1029_immovableTransform,"flixel.group.FlxTypedSpriteGroup","immovableTransform",0x108fd76f,"flixel.group.FlxTypedSpriteGroup.immovableTransform","flixel/group/FlxSpriteGroup.hx",1029,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1032_visibleTransform,"flixel.group.FlxTypedSpriteGroup","visibleTransform",0x807eb3c7,"flixel.group.FlxTypedSpriteGroup.visibleTransform","flixel/group/FlxSpriteGroup.hx",1032,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1035_activeTransform,"flixel.group.FlxTypedSpriteGroup","activeTransform",0x51542a39,"flixel.group.FlxTypedSpriteGroup.activeTransform","flixel/group/FlxSpriteGroup.hx",1035,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1038_solidTransform,"flixel.group.FlxTypedSpriteGroup","solidTransform",0x242323ae,"flixel.group.FlxTypedSpriteGroup.solidTransform","flixel/group/FlxSpriteGroup.hx",1038,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1041_aliveTransform,"flixel.group.FlxTypedSpriteGroup","aliveTransform",0x29096fcc,"flixel.group.FlxTypedSpriteGroup.aliveTransform","flixel/group/FlxSpriteGroup.hx",1041,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1044_existsTransform,"flixel.group.FlxTypedSpriteGroup","existsTransform",0xb2051b63,"flixel.group.FlxTypedSpriteGroup.existsTransform","flixel/group/FlxSpriteGroup.hx",1044,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1047_cameraTransform,"flixel.group.FlxTypedSpriteGroup","cameraTransform",0x020c117a,"flixel.group.FlxTypedSpriteGroup.cameraTransform","flixel/group/FlxSpriteGroup.hx",1047,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1050_camerasTransform,"flixel.group.FlxTypedSpriteGroup","camerasTransform",0x7f778a8b,"flixel.group.FlxTypedSpriteGroup.camerasTransform","flixel/group/FlxSpriteGroup.hx",1050,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1053_offsetTransform,"flixel.group.FlxTypedSpriteGroup","offsetTransform",0x35aa32cc,"flixel.group.FlxTypedSpriteGroup.offsetTransform","flixel/group/FlxSpriteGroup.hx",1053,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1056_originTransform,"flixel.group.FlxTypedSpriteGroup","originTransform",0x93cd4e19,"flixel.group.FlxTypedSpriteGroup.originTransform","flixel/group/FlxSpriteGroup.hx",1056,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1059_scaleTransform,"flixel.group.FlxTypedSpriteGroup","scaleTransform",0x4ec9456f,"flixel.group.FlxTypedSpriteGroup.scaleTransform","flixel/group/FlxSpriteGroup.hx",1059,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1062_scrollFactorTransform,"flixel.group.FlxTypedSpriteGroup","scrollFactorTransform",0x4d8808c3,"flixel.group.FlxTypedSpriteGroup.scrollFactorTransform","flixel/group/FlxSpriteGroup.hx",1062,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1066_clipRectTransform,"flixel.group.FlxTypedSpriteGroup","clipRectTransform",0x59fda4eb,"flixel.group.FlxTypedSpriteGroup.clipRectTransform","flixel/group/FlxSpriteGroup.hx",1066,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1074_offsetCallback,"flixel.group.FlxTypedSpriteGroup","offsetCallback",0xeadd6065,"flixel.group.FlxTypedSpriteGroup.offsetCallback","flixel/group/FlxSpriteGroup.hx",1074,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1077_originCallback,"flixel.group.FlxTypedSpriteGroup","originCallback",0xfa35edb8,"flixel.group.FlxTypedSpriteGroup.originCallback","flixel/group/FlxSpriteGroup.hx",1077,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1080_scaleCallback,"flixel.group.FlxTypedSpriteGroup","scaleCallback",0xf9e6b322,"flixel.group.FlxTypedSpriteGroup.scaleCallback","flixel/group/FlxSpriteGroup.hx",1080,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1083_scrollFactorCallback,"flixel.group.FlxTypedSpriteGroup","scrollFactorCallback",0x26aab64e,"flixel.group.FlxTypedSpriteGroup.scrollFactorCallback","flixel/group/FlxSpriteGroup.hx",1083,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1097_loadGraphicFromSprite,"flixel.group.FlxTypedSpriteGroup","loadGraphicFromSprite",0x6f12dc84,"flixel.group.FlxTypedSpriteGroup.loadGraphicFromSprite","flixel/group/FlxSpriteGroup.hx",1097,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1107_loadGraphic,"flixel.group.FlxTypedSpriteGroup","loadGraphic",0xb4356b15,"flixel.group.FlxTypedSpriteGroup.loadGraphic","flixel/group/FlxSpriteGroup.hx",1107,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1120_loadRotatedGraphic,"flixel.group.FlxTypedSpriteGroup","loadRotatedGraphic",0x45e23732,"flixel.group.FlxTypedSpriteGroup.loadRotatedGraphic","flixel/group/FlxSpriteGroup.hx",1120,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1132_makeGraphic,"flixel.group.FlxTypedSpriteGroup","makeGraphic",0x27a1d44d,"flixel.group.FlxTypedSpriteGroup.makeGraphic","flixel/group/FlxSpriteGroup.hx",1132,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1137_set_pixels,"flixel.group.FlxTypedSpriteGroup","set_pixels",0xc29e6ad7,"flixel.group.FlxTypedSpriteGroup.set_pixels","flixel/group/FlxSpriteGroup.hx",1137,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1142_set_frame,"flixel.group.FlxTypedSpriteGroup","set_frame",0xf0f19fc3,"flixel.group.FlxTypedSpriteGroup.set_frame","flixel/group/FlxSpriteGroup.hx",1142,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1147_get_pixels,"flixel.group.FlxTypedSpriteGroup","get_pixels",0xbf20cc63,"flixel.group.FlxTypedSpriteGroup.get_pixels","flixel/group/FlxSpriteGroup.hx",1147,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1156_calcFrame,"flixel.group.FlxTypedSpriteGroup","calcFrame",0xbd00728b,"flixel.group.FlxTypedSpriteGroup.calcFrame","flixel/group/FlxSpriteGroup.hx",1156,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1163_resetHelpers,"flixel.group.FlxTypedSpriteGroup","resetHelpers",0x60f4ebe3,"flixel.group.FlxTypedSpriteGroup.resetHelpers","flixel/group/FlxSpriteGroup.hx",1163,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1168_stamp,"flixel.group.FlxTypedSpriteGroup","stamp",0x5cccf9b6,"flixel.group.FlxTypedSpriteGroup.stamp","flixel/group/FlxSpriteGroup.hx",1168,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1172_set_frames,"flixel.group.FlxTypedSpriteGroup","set_frames",0xe27a2b50,"flixel.group.FlxTypedSpriteGroup.set_frames","flixel/group/FlxSpriteGroup.hx",1172,0xeb1fa7f3)
HX_LOCAL_STACK_FRAME(_hx_pos_790ec110ce1e7f7f_1178_updateColorTransform,"flixel.group.FlxTypedSpriteGroup","updateColorTransform",0x64df671f,"flixel.group.FlxTypedSpriteGroup.updateColorTransform","flixel/group/FlxSpriteGroup.hx",1178,0xeb1fa7f3)
namespace flixel{
namespace group{

void FlxTypedSpriteGroup_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int MaxSize = __o_MaxSize.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_26_new)
HXLINE(  59)		this->_skipTransformChildren = false;
HXLINE(  49)		this->directAlpha = false;
HXLINE(  74)		super::__construct(X,Y,null());
HXLINE(  75)		this->group =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,MaxSize);
HXLINE(  76)		this->_sprites = this->group->members;
            	}

Dynamic FlxTypedSpriteGroup_obj::__CreateEmpty() { return new FlxTypedSpriteGroup_obj; }

void *FlxTypedSpriteGroup_obj::_hx_vtable = 0;

Dynamic FlxTypedSpriteGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedSpriteGroup_obj > _hx_result = new FlxTypedSpriteGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxTypedSpriteGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTypedSpriteGroup_obj::transformChildren_flixel_math_FlxRect( ::Dynamic Function, ::flixel::math::FlxRect Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_616_transformChildren_flixel_math_FlxRect)
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (!(this->_skipTransformChildren)) {
HXLINE( 617)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 617)			_hx_tmp = true;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			return;
            		}
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 620)			while((_g < _g1->length)){
HXLINE( 620)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 620)				_g = (_g + 1);
HXLINE( 622)				if (::hx::IsNotNull( sprite )) {
HXLINE( 623)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flixel_math_FlxRect,(void))

void FlxTypedSpriteGroup_obj::transformChildren_flixel_math_FlxPoint( ::Dynamic Function, ::flixel::math::FlxBasePoint Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_616_transformChildren_flixel_math_FlxPoint)
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (!(this->_skipTransformChildren)) {
HXLINE( 617)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 617)			_hx_tmp = true;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			return;
            		}
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 620)			while((_g < _g1->length)){
HXLINE( 620)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 620)				_g = (_g + 1);
HXLINE( 622)				if (::hx::IsNotNull( sprite )) {
HXLINE( 623)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flixel_math_FlxPoint,(void))

void FlxTypedSpriteGroup_obj::transformChildren_flash_display_BlendMode( ::Dynamic Function, ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_616_transformChildren_flash_display_BlendMode)
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (!(this->_skipTransformChildren)) {
HXLINE( 617)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 617)			_hx_tmp = true;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			return;
            		}
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 620)			while((_g < _g1->length)){
HXLINE( 620)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 620)				_g = (_g + 1);
HXLINE( 622)				if (::hx::IsNotNull( sprite )) {
HXLINE( 623)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flash_display_BlendMode,(void))

void FlxTypedSpriteGroup_obj::transformChildren_flixel_FlxCamera( ::Dynamic Function, ::flixel::FlxCamera Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_616_transformChildren_flixel_FlxCamera)
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (!(this->_skipTransformChildren)) {
HXLINE( 617)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 617)			_hx_tmp = true;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			return;
            		}
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 620)			while((_g < _g1->length)){
HXLINE( 620)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 620)				_g = (_g + 1);
HXLINE( 622)				if (::hx::IsNotNull( sprite )) {
HXLINE( 623)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_flixel_FlxCamera,(void))

void FlxTypedSpriteGroup_obj::transformChildren_Array_flixel_FlxCamera( ::Dynamic Function,::Array< ::Dynamic> Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_616_transformChildren_Array_flixel_FlxCamera)
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (!(this->_skipTransformChildren)) {
HXLINE( 617)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 617)			_hx_tmp = true;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			return;
            		}
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 620)			while((_g < _g1->length)){
HXLINE( 620)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 620)				_g = (_g + 1);
HXLINE( 622)				if (::hx::IsNotNull( sprite )) {
HXLINE( 623)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Array_flixel_FlxCamera,(void))

void FlxTypedSpriteGroup_obj::transformChildren_Bool( ::Dynamic Function,bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_616_transformChildren_Bool)
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (!(this->_skipTransformChildren)) {
HXLINE( 617)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 617)			_hx_tmp = true;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			return;
            		}
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 620)			while((_g < _g1->length)){
HXLINE( 620)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 620)				_g = (_g + 1);
HXLINE( 622)				if (::hx::IsNotNull( sprite )) {
HXLINE( 623)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Bool,(void))

void FlxTypedSpriteGroup_obj::transformChildren_Int( ::Dynamic Function,int Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_616_transformChildren_Int)
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (!(this->_skipTransformChildren)) {
HXLINE( 617)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 617)			_hx_tmp = true;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			return;
            		}
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 620)			while((_g < _g1->length)){
HXLINE( 620)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 620)				_g = (_g + 1);
HXLINE( 622)				if (::hx::IsNotNull( sprite )) {
HXLINE( 623)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Int,(void))

void FlxTypedSpriteGroup_obj::multiTransformChildren_Float(::Array< ::Dynamic> FunctionArray,::Array< Float > ValueArray){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_635_multiTransformChildren_Float)
HXLINE( 636)		bool _hx_tmp;
HXDLIN( 636)		if (!(this->_skipTransformChildren)) {
HXLINE( 636)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 636)			_hx_tmp = true;
            		}
HXDLIN( 636)		if (_hx_tmp) {
HXLINE( 637)			return;
            		}
HXLINE( 639)		int numProps = FunctionArray->length;
HXLINE( 640)		if ((numProps > ValueArray->length)) {
HXLINE( 641)			return;
            		}
HXLINE( 643)		 ::Dynamic lambda;
HXLINE( 644)		{
HXLINE( 644)			int _g = 0;
HXDLIN( 644)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 644)			while((_g < _g1->length)){
HXLINE( 644)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 644)				_g = (_g + 1);
HXLINE( 646)				bool _hx_tmp;
HXDLIN( 646)				if (::hx::IsNotNull( sprite )) {
HXLINE( 646)					_hx_tmp = sprite->exists;
            				}
            				else {
HXLINE( 646)					_hx_tmp = false;
            				}
HXDLIN( 646)				if (_hx_tmp) {
HXLINE( 648)					int _g = 0;
HXDLIN( 648)					int _g1 = numProps;
HXDLIN( 648)					while((_g < _g1)){
HXLINE( 648)						_g = (_g + 1);
HXDLIN( 648)						int i = (_g - 1);
HXLINE( 650)						lambda = FunctionArray->__get(i);
HXLINE( 651)						lambda(sprite,ValueArray->__get(i));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,multiTransformChildren_Float,(void))

void FlxTypedSpriteGroup_obj::transformChildren_Float( ::Dynamic Function,Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_616_transformChildren_Float)
HXLINE( 617)		bool _hx_tmp;
HXDLIN( 617)		if (!(this->_skipTransformChildren)) {
HXLINE( 617)			_hx_tmp = ::hx::IsNull( this->group );
            		}
            		else {
HXLINE( 617)			_hx_tmp = true;
            		}
HXDLIN( 617)		if (_hx_tmp) {
HXLINE( 618)			return;
            		}
HXLINE( 620)		{
HXLINE( 620)			int _g = 0;
HXDLIN( 620)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 620)			while((_g < _g1->length)){
HXLINE( 620)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 620)				_g = (_g + 1);
HXLINE( 622)				if (::hx::IsNotNull( sprite )) {
HXLINE( 623)					Function(sprite,Value);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,transformChildren_Float,(void))

void FlxTypedSpriteGroup_obj::initVars(){
            	HX_GC_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_85_initVars)
HXLINE(  86)		this->flixelType = 4;
HXLINE(  88)		this->offset =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->offsetCallback_dyn(),null(),null());
HXLINE(  89)		this->origin =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->originCallback_dyn(),null(),null());
HXLINE(  90)		this->scale =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->scaleCallback_dyn(),null(),null());
HXLINE(  91)		this->scrollFactor =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->scrollFactorCallback_dyn(),null(),null());
HXLINE(  93)		{
HXLINE(  93)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN(  93)			this1->set_x(( (Float)(1) ));
HXDLIN(  93)			this1->set_y(( (Float)(1) ));
            		}
HXLINE(  94)		{
HXLINE(  94)			 ::flixel::math::FlxBasePoint this2 = this->scrollFactor;
HXDLIN(  94)			this2->set_x(( (Float)(1) ));
HXDLIN(  94)			this2->set_y(( (Float)(1) ));
            		}
HXLINE(  96)		{
HXLINE(  96)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  96)			point->_inPool = false;
HXDLIN(  96)			this->velocity = point;
HXDLIN(  96)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  96)			point1->_inPool = false;
HXDLIN(  96)			this->acceleration = point1;
HXDLIN(  96)			 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  96)			point2->_inPool = false;
HXDLIN(  96)			this->drag = point2;
HXDLIN(  96)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(10000,10000);
HXDLIN(  96)			point3->_inPool = false;
HXDLIN(  96)			this->maxVelocity = point3;
            		}
            	}


void FlxTypedSpriteGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_110_destroy)
HXLINE( 112)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->offset)) );
HXLINE( 113)		this->origin = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->origin)) );
HXLINE( 114)		this->scale = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->scale)) );
HXLINE( 115)		this->scrollFactor = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->scrollFactor)) );
HXLINE( 117)		this->group = ( ( ::flixel::group::FlxTypedGroup)(::flixel::util::FlxDestroyUtil_obj::destroy(this->group)) );
HXLINE( 118)		this->_sprites = null();
HXLINE( 120)		this->super::destroy();
            	}


 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_129_clone)
HXLINE( 130)		 ::flixel::group::FlxTypedSpriteGroup newGroup =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,this->x,this->y,this->group->maxSize);
HXLINE( 131)		{
HXLINE( 131)			int _g = 0;
HXDLIN( 131)			::cpp::VirtualArray _g1 = this->group->members;
HXDLIN( 131)			while((_g < _g1->get_length())){
HXLINE( 131)				 ::Dynamic sprite = _g1->__get(_g);
HXDLIN( 131)				_g = (_g + 1);
HXLINE( 133)				if (::hx::IsNotNull( sprite )) {
HXLINE( 135)					newGroup->add(( ( ::flixel::FlxSprite)(sprite) )->clone());
            				}
            			}
            		}
HXLINE( 138)		return newGroup;
            	}


bool FlxTypedSpriteGroup_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_148_isOnScreen)
HXLINE( 149)		{
HXLINE( 149)			int _g = 0;
HXDLIN( 149)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 149)			while((_g < _g1->length)){
HXLINE( 149)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 149)				_g = (_g + 1);
HXLINE( 151)				bool _hx_tmp;
HXDLIN( 151)				bool _hx_tmp1;
HXDLIN( 151)				bool _hx_tmp2;
HXDLIN( 151)				if (::hx::IsNotNull( sprite )) {
HXLINE( 151)					_hx_tmp2 = sprite->exists;
            				}
            				else {
HXLINE( 151)					_hx_tmp2 = false;
            				}
HXDLIN( 151)				if (_hx_tmp2) {
HXLINE( 151)					_hx_tmp1 = sprite->visible;
            				}
            				else {
HXLINE( 151)					_hx_tmp1 = false;
            				}
HXDLIN( 151)				if (_hx_tmp1) {
HXLINE( 151)					_hx_tmp = sprite->isOnScreen(Camera);
            				}
            				else {
HXLINE( 151)					_hx_tmp = false;
            				}
HXDLIN( 151)				if (_hx_tmp) {
HXLINE( 152)					return true;
            				}
            			}
            		}
HXLINE( 155)		return false;
            	}


bool FlxTypedSpriteGroup_obj::overlapsPoint( ::flixel::math::FlxBasePoint point,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_167_overlapsPoint)
HXLINE( 168)		bool result = false;
HXLINE( 169)		{
HXLINE( 169)			int _g = 0;
HXDLIN( 169)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 169)			while((_g < _g1->length)){
HXLINE( 169)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 169)				_g = (_g + 1);
HXLINE( 171)				bool _hx_tmp;
HXDLIN( 171)				bool _hx_tmp1;
HXDLIN( 171)				if (::hx::IsNotNull( sprite )) {
HXLINE( 171)					_hx_tmp1 = sprite->exists;
            				}
            				else {
HXLINE( 171)					_hx_tmp1 = false;
            				}
HXDLIN( 171)				if (_hx_tmp1) {
HXLINE( 171)					_hx_tmp = sprite->visible;
            				}
            				else {
HXLINE( 171)					_hx_tmp = false;
            				}
HXDLIN( 171)				if (_hx_tmp) {
HXLINE( 173)					if (!(result)) {
HXLINE( 173)						result = sprite->overlapsPoint(point,InScreenSpace,Camera);
            					}
            					else {
HXLINE( 173)						result = true;
            					}
            				}
            			}
            		}
HXLINE( 177)		return result;
            	}


bool FlxTypedSpriteGroup_obj::pixelsOverlapPoint( ::flixel::math::FlxBasePoint point,::hx::Null< int >  __o_Mask, ::flixel::FlxCamera Camera){
            		int Mask = __o_Mask.Default(255);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_190_pixelsOverlapPoint)
HXLINE( 191)		bool result = false;
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 192)			while((_g < _g1->length)){
HXLINE( 192)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 192)				_g = (_g + 1);
HXLINE( 194)				bool _hx_tmp;
HXDLIN( 194)				bool _hx_tmp1;
HXDLIN( 194)				if (::hx::IsNotNull( sprite )) {
HXLINE( 194)					_hx_tmp1 = sprite->exists;
            				}
            				else {
HXLINE( 194)					_hx_tmp1 = false;
            				}
HXDLIN( 194)				if (_hx_tmp1) {
HXLINE( 194)					_hx_tmp = sprite->visible;
            				}
            				else {
HXLINE( 194)					_hx_tmp = false;
            				}
HXDLIN( 194)				if (_hx_tmp) {
HXLINE( 196)					if (!(result)) {
HXLINE( 196)						result = sprite->pixelsOverlapPoint(point,Mask,Camera);
            					}
            					else {
HXLINE( 196)						result = true;
            					}
            				}
            			}
            		}
HXLINE( 200)		return result;
            	}


void FlxTypedSpriteGroup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_204_update)
HXLINE( 205)		this->group->update(elapsed);
HXLINE( 207)		if (this->moves) {
HXLINE( 208)			this->updateMotion(elapsed);
            		}
            	}


void FlxTypedSpriteGroup_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_213_draw)
HXDLIN( 213)		this->group->draw();
            	}


::Array< ::Dynamic> FlxTypedSpriteGroup_obj::replaceColor(int _tmp_Color,int _tmp_NewColor,::hx::Null< bool >  __o_FetchPositions){
            		bool FetchPositions = __o_FetchPositions.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_231_replaceColor)
HXLINE( 232)		int Color = _tmp_Color;
HXDLIN( 232)		int NewColor = _tmp_NewColor;
HXDLIN( 232)		::Array< ::Dynamic> positions = null();
HXLINE( 233)		if (FetchPositions) {
HXLINE( 235)			positions = ::Array_obj< ::Dynamic>::__new();
            		}
HXLINE( 238)		::Array< ::Dynamic> spritePositions;
HXLINE( 239)		{
HXLINE( 239)			int _g = 0;
HXDLIN( 239)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 239)			while((_g < _g1->length)){
HXLINE( 239)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 239)				_g = (_g + 1);
HXLINE( 241)				if (::hx::IsNotNull( sprite )) {
HXLINE( 243)					spritePositions = sprite->replaceColor(Color,NewColor,FetchPositions);
HXLINE( 244)					if (FetchPositions) {
HXLINE( 246)						positions = positions->concat(spritePositions);
            					}
            				}
            			}
            		}
HXLINE( 251)		return positions;
            	}


 ::Dynamic FlxTypedSpriteGroup_obj::add( ::Dynamic Sprite){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_261_add)
HXLINE( 262)		this->preAdd(Sprite);
HXLINE( 263)		return this->group->add(Sprite);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,add,return )

 ::Dynamic FlxTypedSpriteGroup_obj::insert(int Position, ::Dynamic Sprite){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_276_insert)
HXLINE( 277)		this->preAdd(Sprite);
HXLINE( 278)		return this->group->insert(Position,Sprite);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,insert,return )

void FlxTypedSpriteGroup_obj::preAdd( ::Dynamic Sprite){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_288_preAdd)
HXLINE( 289)		 ::flixel::FlxSprite sprite = ( ( ::flixel::FlxSprite)(Sprite) );
HXLINE( 290)		sprite->set_x((sprite->x + this->x));
HXLINE( 291)		sprite->set_y((sprite->y + this->y));
HXLINE( 292)		sprite->set_alpha((sprite->alpha * this->alpha));
HXLINE( 293)		{
HXLINE( 293)			 ::flixel::math::FlxBasePoint this1 = sprite->scrollFactor;
HXDLIN( 293)			 ::flixel::math::FlxBasePoint p = this->scrollFactor;
HXDLIN( 293)			{
HXLINE( 293)				Float y = p->y;
HXDLIN( 293)				this1->set_x(p->x);
HXDLIN( 293)				this1->set_y(y);
            			}
HXDLIN( 293)			if (p->_weak) {
HXLINE( 293)				p->put();
            			}
            		}
HXLINE( 294)		sprite->set_cameras(this->_cameras);
HXLINE( 296)		if (::hx::IsNotNull( this->clipRect )) {
HXLINE( 297)			 ::flixel::math::FlxRect ClipRect = this->clipRect;
HXDLIN( 297)			if (::hx::IsNull( ClipRect )) {
HXLINE( 297)				sprite->set_clipRect(null());
            			}
            			else {
HXLINE( 297)				Float X = ((ClipRect->x - sprite->x) + this->x);
HXDLIN( 297)				Float Y = ((ClipRect->y - sprite->y) + this->y);
HXDLIN( 297)				Float Width = ClipRect->width;
HXDLIN( 297)				Float Height = ClipRect->height;
HXDLIN( 297)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 297)				_this->x = X;
HXDLIN( 297)				_this->y = Y;
HXDLIN( 297)				_this->width = Width;
HXDLIN( 297)				_this->height = Height;
HXDLIN( 297)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 297)				rect->_inPool = false;
HXDLIN( 297)				sprite->set_clipRect(rect);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,preAdd,(void))

 ::Dynamic FlxTypedSpriteGroup_obj::recycle(::hx::Class ObjectClass, ::Dynamic ObjectFactory,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Revive){
            		bool Force = __o_Force.Default(false);
            		bool Revive = __o_Revive.Default(true);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_327_recycle)
HXDLIN( 327)		return this->group->recycle(ObjectClass,ObjectFactory,Force,Revive);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedSpriteGroup_obj,recycle,return )

 ::Dynamic FlxTypedSpriteGroup_obj::remove( ::Dynamic Sprite,::hx::Null< bool >  __o_Splice){
            		bool Splice = __o_Splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_338_remove)
HXLINE( 339)		 ::flixel::FlxSprite sprite = ( ( ::flixel::FlxSprite)(Sprite) );
HXLINE( 340)		sprite->set_x((sprite->x - this->x));
HXLINE( 341)		sprite->set_y((sprite->y - this->y));
HXLINE( 343)		sprite->set_cameras(null());
HXLINE( 344)		return this->group->remove(Sprite,Splice);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,remove,return )

 ::Dynamic FlxTypedSpriteGroup_obj::replace( ::Dynamic OldObject, ::Dynamic NewObject){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_356_replace)
HXDLIN( 356)		return this->group->replace(OldObject,NewObject);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,replace,return )

void FlxTypedSpriteGroup_obj::sort( ::Dynamic Function,::hx::Null< int >  __o_Order){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,a1, ::Dynamic,_g) HXARGC(2)
            		int _hx_run( ::Dynamic a2, ::Dynamic a3){
            			HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_371_sort)
HXDLIN( 371)			return ( (int)(_g(a1,a2,a3)) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int Order = __o_Order.Default(-1);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_371_sort)
HXDLIN( 371)		 ::Dynamic _g = Function;
HXDLIN( 371)		int a1 = Order;
HXDLIN( 371)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN( 371)		this->group->members->sort(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,sort,(void))

 ::Dynamic FlxTypedSpriteGroup_obj::getFirstAvailable(::hx::Class ObjectClass,::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_385_getFirstAvailable)
HXDLIN( 385)		return this->group->getFirstAvailable(ObjectClass,Force);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,getFirstAvailable,return )

int FlxTypedSpriteGroup_obj::getFirstNull(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_396_getFirstNull)
HXDLIN( 396)		return this->group->getFirstNull();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstNull,return )

 ::Dynamic FlxTypedSpriteGroup_obj::getFirstExisting(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_407_getFirstExisting)
HXDLIN( 407)		return this->group->getFirstExisting();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstExisting,return )

 ::Dynamic FlxTypedSpriteGroup_obj::getFirstAlive(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_418_getFirstAlive)
HXDLIN( 418)		return this->group->getFirstAlive();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstAlive,return )

 ::Dynamic FlxTypedSpriteGroup_obj::getFirstDead(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_429_getFirstDead)
HXDLIN( 429)		return this->group->getFirstDead();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,getFirstDead,return )

int FlxTypedSpriteGroup_obj::countLiving(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_439_countLiving)
HXDLIN( 439)		return this->group->countLiving();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,countLiving,return )

int FlxTypedSpriteGroup_obj::countDead(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_449_countDead)
HXDLIN( 449)		return this->group->countDead();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,countDead,return )

 ::Dynamic FlxTypedSpriteGroup_obj::getRandom(::hx::Null< int >  __o_StartIndex,::hx::Null< int >  __o_Length){
            		int StartIndex = __o_StartIndex.Default(0);
            		int Length = __o_Length.Default(0);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_462_getRandom)
HXDLIN( 462)		return this->group->getRandom(StartIndex,Length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,getRandom,return )

 ::flixel::group::FlxTypedGroupIterator FlxTypedSpriteGroup_obj::iterator( ::Dynamic filter){
            	HX_GC_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_472_iterator)
HXDLIN( 472)		return  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->group->members,filter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,iterator,return )

void FlxTypedSpriteGroup_obj::forEach( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_483_forEach)
HXDLIN( 483)		this->group->forEach(Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEach,(void))

void FlxTypedSpriteGroup_obj::forEachAlive( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_494_forEachAlive)
HXDLIN( 494)		this->group->forEachAlive(Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachAlive,(void))

void FlxTypedSpriteGroup_obj::forEachDead( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_505_forEachDead)
HXDLIN( 505)		this->group->forEachDead(Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachDead,(void))

void FlxTypedSpriteGroup_obj::forEachExists( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_516_forEachExists)
HXDLIN( 516)		this->group->forEachExists(Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,forEachExists,(void))

void FlxTypedSpriteGroup_obj::forEachOfType(::hx::Class ObjectClass, ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_528_forEachOfType)
HXDLIN( 528)		this->group->forEachOfType(ObjectClass,Function,Recurse);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedSpriteGroup_obj,forEachOfType,(void))

void FlxTypedSpriteGroup_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_537_clear)
HXDLIN( 537)		this->group->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,clear,(void))

void FlxTypedSpriteGroup_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_545_kill)
HXLINE( 546)		this->_skipTransformChildren = true;
HXLINE( 547)		this->super::kill();
HXLINE( 548)		this->_skipTransformChildren = false;
HXLINE( 549)		this->group->kill();
            	}


void FlxTypedSpriteGroup_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_556_revive)
HXLINE( 557)		this->_skipTransformChildren = true;
HXLINE( 558)		this->super::revive();
HXLINE( 559)		this->_skipTransformChildren = false;
HXLINE( 560)		this->group->revive();
            	}


void FlxTypedSpriteGroup_obj::reset(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_564_reset)
HXLINE( 565)		{
HXLINE( 565)			int _g = 0;
HXDLIN( 565)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 565)			while((_g < _g1->length)){
HXLINE( 565)				 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 565)				_g = (_g + 1);
HXLINE( 567)				if (::hx::IsNotNull( sprite )) {
HXLINE( 568)					sprite->reset(((sprite->x + X) - this->x),((sprite->y + Y) - this->y));
            				}
            			}
            		}
HXLINE( 572)		this->_skipTransformChildren = true;
HXLINE( 575)		this->touching = 0;
HXLINE( 576)		this->wasTouching = 0;
HXLINE( 577)		this->set_x(X);
HXLINE( 578)		this->set_y(Y);
HXLINE( 580)		{
HXLINE( 580)			 ::flixel::math::FlxBasePoint this1 = this->velocity;
HXDLIN( 580)			this1->set_x(( (Float)(0) ));
HXDLIN( 580)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 581)		this->super::revive();
HXLINE( 583)		this->_skipTransformChildren = false;
            	}


void FlxTypedSpriteGroup_obj::setPosition(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_594_setPosition)
HXLINE( 596)		Float dx = (X - this->x);
HXLINE( 597)		Float dy = (Y - this->y);
HXLINE( 598)		this->multiTransformChildren_Float(::Array_obj< ::Dynamic>::__new(2)->init(0,this->xTransform_dyn())->init(1,this->yTransform_dyn()),::Array_obj< Float >::__new(2)->init(0,dx)->init(1,dy));
HXLINE( 601)		this->_skipTransformChildren = true;
HXLINE( 602)		this->set_x(X);
HXLINE( 603)		this->set_y(Y);
HXLINE( 604)		this->_skipTransformChildren = false;
            	}


 ::flixel::FlxCamera FlxTypedSpriteGroup_obj::set_camera( ::flixel::FlxCamera Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_660_set_camera)
HXLINE( 661)		if (::hx::IsInstanceNotEq( this->get_camera(),Value )) {
HXLINE( 662)			this->transformChildren_flixel_FlxCamera(this->cameraTransform_dyn(),Value);
            		}
HXLINE( 663)		return this->super::set_camera(Value);
            	}


::Array< ::Dynamic> FlxTypedSpriteGroup_obj::set_cameras(::Array< ::Dynamic> Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_667_set_cameras)
HXLINE( 668)		if (::hx::IsPointerNotEq( this->get_cameras(),Value )) {
HXLINE( 669)			this->transformChildren_Array_flixel_FlxCamera(this->camerasTransform_dyn(),Value);
            		}
HXLINE( 670)		return this->super::set_cameras(Value);
            	}


bool FlxTypedSpriteGroup_obj::set_exists(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_674_set_exists)
HXLINE( 675)		if ((this->exists != Value)) {
HXLINE( 676)			this->transformChildren_Bool(this->existsTransform_dyn(),Value);
            		}
HXLINE( 677)		return this->super::set_exists(Value);
            	}


bool FlxTypedSpriteGroup_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_681_set_visible)
HXLINE( 682)		bool _hx_tmp;
HXDLIN( 682)		if (this->exists) {
HXLINE( 682)			_hx_tmp = (this->visible != Value);
            		}
            		else {
HXLINE( 682)			_hx_tmp = false;
            		}
HXDLIN( 682)		if (_hx_tmp) {
HXLINE( 683)			this->transformChildren_Bool(this->visibleTransform_dyn(),Value);
            		}
HXLINE( 684)		return this->super::set_visible(Value);
            	}


bool FlxTypedSpriteGroup_obj::set_active(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_688_set_active)
HXLINE( 689)		bool _hx_tmp;
HXDLIN( 689)		if (this->exists) {
HXLINE( 689)			_hx_tmp = (this->active != Value);
            		}
            		else {
HXLINE( 689)			_hx_tmp = false;
            		}
HXDLIN( 689)		if (_hx_tmp) {
HXLINE( 690)			this->transformChildren_Bool(this->activeTransform_dyn(),Value);
            		}
HXLINE( 691)		return this->super::set_active(Value);
            	}


bool FlxTypedSpriteGroup_obj::set_alive(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_695_set_alive)
HXLINE( 696)		if ((this->alive != Value)) {
HXLINE( 697)			this->transformChildren_Bool(this->aliveTransform_dyn(),Value);
            		}
HXLINE( 698)		return this->super::set_alive(Value);
            	}


Float FlxTypedSpriteGroup_obj::set_x(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_702_set_x)
HXLINE( 703)		bool _hx_tmp;
HXDLIN( 703)		if (this->exists) {
HXLINE( 703)			_hx_tmp = (this->x != Value);
            		}
            		else {
HXLINE( 703)			_hx_tmp = false;
            		}
HXDLIN( 703)		if (_hx_tmp) {
HXLINE( 704)			this->transformChildren_Float(this->xTransform_dyn(),(Value - this->x));
            		}
HXLINE( 705)		return (this->x = Value);
            	}


Float FlxTypedSpriteGroup_obj::set_y(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_709_set_y)
HXLINE( 710)		bool _hx_tmp;
HXDLIN( 710)		if (this->exists) {
HXLINE( 710)			_hx_tmp = (this->y != Value);
            		}
            		else {
HXLINE( 710)			_hx_tmp = false;
            		}
HXDLIN( 710)		if (_hx_tmp) {
HXLINE( 711)			this->transformChildren_Float(this->yTransform_dyn(),(Value - this->y));
            		}
HXLINE( 712)		return (this->y = Value);
            	}


Float FlxTypedSpriteGroup_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_716_set_angle)
HXLINE( 717)		bool _hx_tmp;
HXDLIN( 717)		if (this->exists) {
HXLINE( 717)			_hx_tmp = (this->angle != Value);
            		}
            		else {
HXLINE( 717)			_hx_tmp = false;
            		}
HXDLIN( 717)		if (_hx_tmp) {
HXLINE( 718)			this->transformChildren_Float(this->angleTransform_dyn(),(Value - this->angle));
            		}
HXLINE( 719)		return (this->angle = Value);
            	}


Float FlxTypedSpriteGroup_obj::set_alpha(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_723_set_alpha)
HXLINE( 724)		Float lowerBound;
HXDLIN( 724)		if ((Value < 0)) {
HXLINE( 724)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 724)			lowerBound = Value;
            		}
HXDLIN( 724)		if ((lowerBound > 1)) {
HXLINE( 724)			Value = ( (Float)(1) );
            		}
            		else {
HXLINE( 724)			Value = lowerBound;
            		}
HXLINE( 726)		bool _hx_tmp;
HXDLIN( 726)		if (this->exists) {
HXLINE( 726)			_hx_tmp = (this->alpha != Value);
            		}
            		else {
HXLINE( 726)			_hx_tmp = false;
            		}
HXDLIN( 726)		if (_hx_tmp) {
HXLINE( 728)			Float factor;
HXDLIN( 728)			if ((this->alpha > 0)) {
HXLINE( 728)				factor = (Value / this->alpha);
            			}
            			else {
HXLINE( 728)				factor = ( (Float)(0) );
            			}
HXLINE( 729)			bool _hx_tmp;
HXDLIN( 729)			if (!(this->directAlpha)) {
HXLINE( 729)				_hx_tmp = (this->alpha != 0);
            			}
            			else {
HXLINE( 729)				_hx_tmp = false;
            			}
HXDLIN( 729)			if (_hx_tmp) {
HXLINE( 730)				this->transformChildren_Float(this->alphaTransform_dyn(),factor);
            			}
            			else {
HXLINE( 732)				this->transformChildren_Float(this->directAlphaTransform_dyn(),Value);
            			}
            		}
HXLINE( 734)		return (this->alpha = Value);
            	}


int FlxTypedSpriteGroup_obj::set_facing(int _tmp_Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_738_set_facing)
HXLINE( 739)		int Value = _tmp_Value;
HXDLIN( 739)		bool _hx_tmp;
HXDLIN( 739)		if (this->exists) {
HXLINE( 739)			_hx_tmp = (this->facing != Value);
            		}
            		else {
HXLINE( 739)			_hx_tmp = false;
            		}
HXDLIN( 739)		if (_hx_tmp) {
HXLINE( 740)			this->transformChildren_Int(this->facingTransform_dyn(),Value);
            		}
HXLINE( 741)		return (this->facing = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_flipX(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_745_set_flipX)
HXLINE( 746)		bool _hx_tmp;
HXDLIN( 746)		if (this->exists) {
HXLINE( 746)			_hx_tmp = (this->flipX != Value);
            		}
            		else {
HXLINE( 746)			_hx_tmp = false;
            		}
HXDLIN( 746)		if (_hx_tmp) {
HXLINE( 747)			this->transformChildren_Bool(this->flipXTransform_dyn(),Value);
            		}
HXLINE( 748)		return (this->flipX = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_flipY(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_752_set_flipY)
HXLINE( 753)		bool _hx_tmp;
HXDLIN( 753)		if (this->exists) {
HXLINE( 753)			_hx_tmp = (this->flipY != Value);
            		}
            		else {
HXLINE( 753)			_hx_tmp = false;
            		}
HXDLIN( 753)		if (_hx_tmp) {
HXLINE( 754)			this->transformChildren_Bool(this->flipYTransform_dyn(),Value);
            		}
HXLINE( 755)		return (this->flipY = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_moves(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_759_set_moves)
HXLINE( 760)		bool _hx_tmp;
HXDLIN( 760)		if (this->exists) {
HXLINE( 760)			_hx_tmp = (this->moves != Value);
            		}
            		else {
HXLINE( 760)			_hx_tmp = false;
            		}
HXDLIN( 760)		if (_hx_tmp) {
HXLINE( 761)			this->transformChildren_Bool(this->movesTransform_dyn(),Value);
            		}
HXLINE( 762)		return (this->moves = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_immovable(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_766_set_immovable)
HXLINE( 767)		bool _hx_tmp;
HXDLIN( 767)		if (this->exists) {
HXLINE( 767)			_hx_tmp = (this->immovable != Value);
            		}
            		else {
HXLINE( 767)			_hx_tmp = false;
            		}
HXDLIN( 767)		if (_hx_tmp) {
HXLINE( 768)			this->transformChildren_Bool(this->immovableTransform_dyn(),Value);
            		}
HXLINE( 769)		return (this->immovable = Value);
            	}


bool FlxTypedSpriteGroup_obj::set_solid(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_773_set_solid)
HXLINE( 774)		bool _hx_tmp;
HXDLIN( 774)		if (this->exists) {
HXLINE( 774)			_hx_tmp = (((this->allowCollisions & 4369) > 0) != Value);
            		}
            		else {
HXLINE( 774)			_hx_tmp = false;
            		}
HXDLIN( 774)		if (_hx_tmp) {
HXLINE( 775)			this->transformChildren_Bool(this->solidTransform_dyn(),Value);
            		}
HXLINE( 776)		return this->super::set_solid(Value);
            	}


int FlxTypedSpriteGroup_obj::set_color(int _tmp_Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_780_set_color)
HXLINE( 781)		int Value = _tmp_Value;
HXDLIN( 781)		bool _hx_tmp;
HXDLIN( 781)		if (this->exists) {
HXLINE( 781)			_hx_tmp = (this->color != Value);
            		}
            		else {
HXLINE( 781)			_hx_tmp = false;
            		}
HXDLIN( 781)		if (_hx_tmp) {
HXLINE( 782)			this->transformChildren_Int(this->gColorTransform_dyn(),Value);
            		}
HXLINE( 783)		return (this->color = Value);
            	}


 ::Dynamic FlxTypedSpriteGroup_obj::set_blend( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_787_set_blend)
HXLINE( 788)		bool _hx_tmp;
HXDLIN( 788)		if (this->exists) {
HXLINE( 788)			_hx_tmp = ::hx::IsNotEq( this->blend,Value );
            		}
            		else {
HXLINE( 788)			_hx_tmp = false;
            		}
HXDLIN( 788)		if (_hx_tmp) {
HXLINE( 789)			this->transformChildren_flash_display_BlendMode(this->blendTransform_dyn(),Value);
            		}
HXLINE( 790)		return (this->blend = Value);
            	}


 ::flixel::math::FlxRect FlxTypedSpriteGroup_obj::set_clipRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_794_set_clipRect)
HXLINE( 795)		if (this->exists) {
HXLINE( 796)			this->transformChildren_flixel_math_FlxRect(this->clipRectTransform_dyn(),rect);
            		}
HXLINE( 797)		return this->super::set_clipRect(rect);
            	}


bool FlxTypedSpriteGroup_obj::set_pixelPerfectRender(bool Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_801_set_pixelPerfectRender)
HXLINE( 802)		bool _hx_tmp;
HXDLIN( 802)		if (this->exists) {
HXLINE( 802)			_hx_tmp = ::hx::IsNotEq( this->pixelPerfectRender,Value );
            		}
            		else {
HXLINE( 802)			_hx_tmp = false;
            		}
HXDLIN( 802)		if (_hx_tmp) {
HXLINE( 803)			this->transformChildren_Bool(this->pixelPerfectTransform_dyn(),Value);
            		}
HXLINE( 804)		return this->super::set_pixelPerfectRender(Value);
            	}


Float FlxTypedSpriteGroup_obj::set_width(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_812_set_width)
HXDLIN( 812)		return Value;
            	}


Float FlxTypedSpriteGroup_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_816_get_width)
HXLINE( 817)		if ((this->group->length == 0)) {
HXLINE( 818)			return ( (Float)(0) );
            		}
HXLINE( 820)		Float _hx_tmp = this->findMaxXHelper();
HXDLIN( 820)		return (_hx_tmp - this->findMinXHelper());
            	}


Float FlxTypedSpriteGroup_obj::findMinX(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_831_findMinX)
HXDLIN( 831)		if ((this->group->length == 0)) {
HXDLIN( 831)			return this->x;
            		}
            		else {
HXDLIN( 831)			return this->findMinXHelper();
            		}
HXDLIN( 831)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMinX,return )

Float FlxTypedSpriteGroup_obj::findMinXHelper(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_835_findMinXHelper)
HXLINE( 836)		Float value = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 837)		{
HXLINE( 837)			int _g = 0;
HXDLIN( 837)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 837)			while((_g < _g1->length)){
HXLINE( 837)				 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 837)				_g = (_g + 1);
HXLINE( 839)				if (::hx::IsNull( member )) {
HXLINE( 840)					continue;
            				}
HXLINE( 842)				Float minX;
HXLINE( 843)				if ((member->flixelType == 4)) {
HXLINE( 844)					minX = ( ( ::flixel::group::FlxTypedSpriteGroup)(member) )->findMinX();
            				}
            				else {
HXLINE( 846)					minX = member->x;
            				}
HXLINE( 848)				if ((minX < value)) {
HXLINE( 849)					value = minX;
            				}
            			}
            		}
HXLINE( 851)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMinXHelper,return )

Float FlxTypedSpriteGroup_obj::findMaxX(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_862_findMaxX)
HXDLIN( 862)		if ((this->group->length == 0)) {
HXDLIN( 862)			return this->x;
            		}
            		else {
HXDLIN( 862)			return this->findMaxXHelper();
            		}
HXDLIN( 862)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMaxX,return )

Float FlxTypedSpriteGroup_obj::findMaxXHelper(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_866_findMaxXHelper)
HXLINE( 867)		Float value = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 868)		{
HXLINE( 868)			int _g = 0;
HXDLIN( 868)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 868)			while((_g < _g1->length)){
HXLINE( 868)				 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 868)				_g = (_g + 1);
HXLINE( 870)				if (::hx::IsNull( member )) {
HXLINE( 871)					continue;
            				}
HXLINE( 873)				Float maxX;
HXLINE( 874)				if ((member->flixelType == 4)) {
HXLINE( 875)					maxX = ( ( ::flixel::group::FlxTypedSpriteGroup)(member) )->findMaxX();
            				}
            				else {
HXLINE( 877)					Float member1 = member->x;
HXDLIN( 877)					maxX = (member1 + member->get_width());
            				}
HXLINE( 879)				if ((maxX > value)) {
HXLINE( 880)					value = maxX;
            				}
            			}
            		}
HXLINE( 882)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMaxXHelper,return )

Float FlxTypedSpriteGroup_obj::set_height(Float Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_890_set_height)
HXDLIN( 890)		return Value;
            	}


Float FlxTypedSpriteGroup_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_894_get_height)
HXLINE( 895)		if ((this->group->length == 0)) {
HXLINE( 896)			return ( (Float)(0) );
            		}
HXLINE( 898)		Float _hx_tmp = this->findMaxYHelper();
HXDLIN( 898)		return (_hx_tmp - this->findMinYHelper());
            	}


Float FlxTypedSpriteGroup_obj::findMinY(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_909_findMinY)
HXDLIN( 909)		if ((this->group->length == 0)) {
HXDLIN( 909)			return this->y;
            		}
            		else {
HXDLIN( 909)			return this->findMinYHelper();
            		}
HXDLIN( 909)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMinY,return )

Float FlxTypedSpriteGroup_obj::findMinYHelper(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_913_findMinYHelper)
HXLINE( 914)		Float value = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 915)		{
HXLINE( 915)			int _g = 0;
HXDLIN( 915)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 915)			while((_g < _g1->length)){
HXLINE( 915)				 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 915)				_g = (_g + 1);
HXLINE( 917)				if (::hx::IsNull( member )) {
HXLINE( 918)					continue;
            				}
HXLINE( 920)				Float minY;
HXLINE( 921)				if ((member->flixelType == 4)) {
HXLINE( 922)					minY = ( ( ::flixel::group::FlxTypedSpriteGroup)(member) )->findMinY();
            				}
            				else {
HXLINE( 924)					minY = member->y;
            				}
HXLINE( 926)				if ((minY < value)) {
HXLINE( 927)					value = minY;
            				}
            			}
            		}
HXLINE( 929)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMinYHelper,return )

Float FlxTypedSpriteGroup_obj::findMaxY(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_940_findMaxY)
HXDLIN( 940)		if ((this->group->length == 0)) {
HXDLIN( 940)			return this->y;
            		}
            		else {
HXDLIN( 940)			return this->findMaxYHelper();
            		}
HXDLIN( 940)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMaxY,return )

Float FlxTypedSpriteGroup_obj::findMaxYHelper(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_944_findMaxYHelper)
HXLINE( 945)		Float value = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 946)		{
HXLINE( 946)			int _g = 0;
HXDLIN( 946)			::Array< ::Dynamic> _g1 = this->_sprites;
HXDLIN( 946)			while((_g < _g1->length)){
HXLINE( 946)				 ::flixel::FlxSprite member = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 946)				_g = (_g + 1);
HXLINE( 948)				if (::hx::IsNull( member )) {
HXLINE( 949)					continue;
            				}
HXLINE( 951)				Float maxY;
HXLINE( 952)				if ((member->flixelType == 4)) {
HXLINE( 953)					maxY = ( ( ::flixel::group::FlxTypedSpriteGroup)(member) )->findMaxY();
            				}
            				else {
HXLINE( 955)					Float member1 = member->y;
HXDLIN( 955)					maxY = (member1 + member->get_height());
            				}
HXLINE( 957)				if ((maxY > value)) {
HXLINE( 958)					value = maxY;
            				}
            			}
            		}
HXLINE( 960)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,findMaxYHelper,return )

int FlxTypedSpriteGroup_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_967_get_length)
HXDLIN( 967)		return this->group->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_length,return )

int FlxTypedSpriteGroup_obj::get_maxSize(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_972_get_maxSize)
HXDLIN( 972)		return this->group->maxSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_maxSize,return )

int FlxTypedSpriteGroup_obj::set_maxSize(int Size){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_977_set_maxSize)
HXDLIN( 977)		return this->group->set_maxSize(Size);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,set_maxSize,return )

::cpp::VirtualArray FlxTypedSpriteGroup_obj::get_members(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_982_get_members)
HXDLIN( 982)		return this->group->members;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedSpriteGroup_obj,get_members,return )

void FlxTypedSpriteGroup_obj::xTransform( ::flixel::FlxSprite Sprite,Float X){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_988_xTransform)
HXDLIN( 988)		Sprite->set_x((Sprite->x + X));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,xTransform,(void))

void FlxTypedSpriteGroup_obj::yTransform( ::flixel::FlxSprite Sprite,Float Y){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_991_yTransform)
HXDLIN( 991)		Sprite->set_y((Sprite->y + Y));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,yTransform,(void))

void FlxTypedSpriteGroup_obj::angleTransform( ::flixel::FlxSprite Sprite,Float Angle){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_994_angleTransform)
HXDLIN( 994)		Sprite->set_angle((Sprite->angle + Angle));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,angleTransform,(void))

void FlxTypedSpriteGroup_obj::alphaTransform( ::flixel::FlxSprite Sprite,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_998_alphaTransform)
HXDLIN( 998)		bool _hx_tmp;
HXDLIN( 998)		if ((Sprite->alpha == 0)) {
HXDLIN( 998)			_hx_tmp = (Alpha == 0);
            		}
            		else {
HXDLIN( 998)			_hx_tmp = true;
            		}
HXDLIN( 998)		if (_hx_tmp) {
HXLINE( 999)			Sprite->set_alpha((Sprite->alpha * Alpha));
            		}
            		else {
HXLINE(1001)			Sprite->set_alpha((( (Float)(1) ) / Alpha));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,alphaTransform,(void))

void FlxTypedSpriteGroup_obj::directAlphaTransform( ::flixel::FlxSprite Sprite,Float Alpha){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1005_directAlphaTransform)
HXDLIN(1005)		Sprite->set_alpha(Alpha);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,directAlphaTransform,(void))

void FlxTypedSpriteGroup_obj::facingTransform( ::flixel::FlxSprite Sprite,int Facing){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1008_facingTransform)
HXDLIN(1008)		Sprite->set_facing(Facing);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,facingTransform,(void))

void FlxTypedSpriteGroup_obj::flipXTransform( ::flixel::FlxSprite Sprite,bool FlipX){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1011_flipXTransform)
HXDLIN(1011)		Sprite->set_flipX(FlipX);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,flipXTransform,(void))

void FlxTypedSpriteGroup_obj::flipYTransform( ::flixel::FlxSprite Sprite,bool FlipY){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1014_flipYTransform)
HXDLIN(1014)		Sprite->set_flipY(FlipY);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,flipYTransform,(void))

void FlxTypedSpriteGroup_obj::movesTransform( ::flixel::FlxSprite Sprite,bool Moves){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1017_movesTransform)
HXDLIN(1017)		Sprite->set_moves(Moves);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,movesTransform,(void))

void FlxTypedSpriteGroup_obj::pixelPerfectTransform( ::flixel::FlxSprite Sprite,bool PixelPerfect){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1020_pixelPerfectTransform)
HXDLIN(1020)		Sprite->set_pixelPerfectRender(PixelPerfect);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,pixelPerfectTransform,(void))

void FlxTypedSpriteGroup_obj::gColorTransform( ::flixel::FlxSprite Sprite,int Color){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1023_gColorTransform)
HXDLIN(1023)		Sprite->set_color(Color);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,gColorTransform,(void))

void FlxTypedSpriteGroup_obj::blendTransform( ::flixel::FlxSprite Sprite, ::Dynamic Blend){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1026_blendTransform)
HXDLIN(1026)		Sprite->set_blend(Blend);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,blendTransform,(void))

void FlxTypedSpriteGroup_obj::immovableTransform( ::flixel::FlxSprite Sprite,bool Immovable){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1029_immovableTransform)
HXDLIN(1029)		Sprite->set_immovable(Immovable);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,immovableTransform,(void))

void FlxTypedSpriteGroup_obj::visibleTransform( ::flixel::FlxSprite Sprite,bool Visible){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1032_visibleTransform)
HXDLIN(1032)		Sprite->set_visible(Visible);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,visibleTransform,(void))

void FlxTypedSpriteGroup_obj::activeTransform( ::flixel::FlxSprite Sprite,bool Active){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1035_activeTransform)
HXDLIN(1035)		Sprite->set_active(Active);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,activeTransform,(void))

void FlxTypedSpriteGroup_obj::solidTransform( ::flixel::FlxSprite Sprite,bool Solid){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1038_solidTransform)
HXDLIN(1038)		Sprite->set_solid(Solid);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,solidTransform,(void))

void FlxTypedSpriteGroup_obj::aliveTransform( ::flixel::FlxSprite Sprite,bool Alive){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1041_aliveTransform)
HXDLIN(1041)		Sprite->set_alive(Alive);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,aliveTransform,(void))

void FlxTypedSpriteGroup_obj::existsTransform( ::flixel::FlxSprite Sprite,bool Exists){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1044_existsTransform)
HXDLIN(1044)		Sprite->set_exists(Exists);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,existsTransform,(void))

void FlxTypedSpriteGroup_obj::cameraTransform( ::flixel::FlxSprite Sprite, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1047_cameraTransform)
HXDLIN(1047)		Sprite->set_camera(Camera);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,cameraTransform,(void))

void FlxTypedSpriteGroup_obj::camerasTransform( ::flixel::FlxSprite Sprite,::Array< ::Dynamic> Cameras){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1050_camerasTransform)
HXDLIN(1050)		Sprite->set_cameras(Cameras);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,camerasTransform,(void))

void FlxTypedSpriteGroup_obj::offsetTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Offset){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1053_offsetTransform)
HXDLIN(1053)		 ::flixel::math::FlxBasePoint this1 = Sprite->offset;
HXDLIN(1053)		{
HXDLIN(1053)			Float y = Offset->y;
HXDLIN(1053)			this1->set_x(Offset->x);
HXDLIN(1053)			this1->set_y(y);
            		}
HXDLIN(1053)		if (Offset->_weak) {
HXDLIN(1053)			Offset->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,offsetTransform,(void))

void FlxTypedSpriteGroup_obj::originTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Origin){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1056_originTransform)
HXDLIN(1056)		 ::flixel::math::FlxBasePoint this1 = Sprite->origin;
HXDLIN(1056)		{
HXDLIN(1056)			Float y = Origin->y;
HXDLIN(1056)			this1->set_x(Origin->x);
HXDLIN(1056)			this1->set_y(y);
            		}
HXDLIN(1056)		if (Origin->_weak) {
HXDLIN(1056)			Origin->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,originTransform,(void))

void FlxTypedSpriteGroup_obj::scaleTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint Scale){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1059_scaleTransform)
HXDLIN(1059)		 ::flixel::math::FlxBasePoint this1 = Sprite->scale;
HXDLIN(1059)		{
HXDLIN(1059)			Float y = Scale->y;
HXDLIN(1059)			this1->set_x(Scale->x);
HXDLIN(1059)			this1->set_y(y);
            		}
HXDLIN(1059)		if (Scale->_weak) {
HXDLIN(1059)			Scale->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,scaleTransform,(void))

void FlxTypedSpriteGroup_obj::scrollFactorTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxBasePoint ScrollFactor){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1062_scrollFactorTransform)
HXDLIN(1062)		 ::flixel::math::FlxBasePoint this1 = Sprite->scrollFactor;
HXDLIN(1062)		{
HXDLIN(1062)			Float y = ScrollFactor->y;
HXDLIN(1062)			this1->set_x(ScrollFactor->x);
HXDLIN(1062)			this1->set_y(y);
            		}
HXDLIN(1062)		if (ScrollFactor->_weak) {
HXDLIN(1062)			ScrollFactor->put();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,scrollFactorTransform,(void))

void FlxTypedSpriteGroup_obj::clipRectTransform( ::flixel::FlxSprite Sprite, ::flixel::math::FlxRect ClipRect){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1066_clipRectTransform)
HXDLIN(1066)		if (::hx::IsNull( ClipRect )) {
HXLINE(1067)			Sprite->set_clipRect(null());
            		}
            		else {
HXLINE(1069)			Float X = ((ClipRect->x - Sprite->x) + this->x);
HXDLIN(1069)			Float Y = ((ClipRect->y - Sprite->y) + this->y);
HXDLIN(1069)			Float Width = ClipRect->width;
HXDLIN(1069)			Float Height = ClipRect->height;
HXDLIN(1069)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1069)			_this->x = X;
HXDLIN(1069)			_this->y = Y;
HXDLIN(1069)			_this->width = Width;
HXDLIN(1069)			_this->height = Height;
HXDLIN(1069)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1069)			rect->_inPool = false;
HXDLIN(1069)			Sprite->set_clipRect(rect);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSpriteGroup_obj,clipRectTransform,(void))

void FlxTypedSpriteGroup_obj::offsetCallback( ::flixel::math::FlxBasePoint Offset){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1074_offsetCallback)
HXDLIN(1074)		this->transformChildren_flixel_math_FlxPoint(this->offsetTransform_dyn(),Offset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,offsetCallback,(void))

void FlxTypedSpriteGroup_obj::originCallback( ::flixel::math::FlxBasePoint Origin){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1077_originCallback)
HXDLIN(1077)		this->transformChildren_flixel_math_FlxPoint(this->originTransform_dyn(),Origin);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,originCallback,(void))

void FlxTypedSpriteGroup_obj::scaleCallback( ::flixel::math::FlxBasePoint Scale){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1080_scaleCallback)
HXDLIN(1080)		this->transformChildren_flixel_math_FlxPoint(this->scaleTransform_dyn(),Scale);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,scaleCallback,(void))

void FlxTypedSpriteGroup_obj::scrollFactorCallback( ::flixel::math::FlxBasePoint ScrollFactor){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1083_scrollFactorCallback)
HXDLIN(1083)		this->transformChildren_flixel_math_FlxPoint(this->scrollFactorTransform_dyn(),ScrollFactor);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSpriteGroup_obj,scrollFactorCallback,(void))

 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1097_loadGraphicFromSprite)
HXDLIN(1097)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadGraphic( ::Dynamic Graphic,::hx::Null< bool >  __o_Animated,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Animated = __o_Animated.Default(false);
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1107_loadGraphic)
HXDLIN(1107)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::loadRotatedGraphic( ::Dynamic Graphic,::hx::Null< int >  __o_Rotations,::hx::Null< int >  __o_Frame,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer,::String Key){
            		int Rotations = __o_Rotations.Default(16);
            		int Frame = __o_Frame.Default(-1);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1120_loadRotatedGraphic)
HXDLIN(1120)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::flixel::FlxSprite FlxTypedSpriteGroup_obj::makeGraphic(int Width,int Height,::hx::Null< int >  __o__tmp_Color,::hx::Null< bool >  __o_Unique,::String Key){
            		int _tmp_Color = __o__tmp_Color.Default(-1);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1132_makeGraphic)
HXDLIN(1132)		int Color = _tmp_Color;
HXDLIN(1132)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


 ::openfl::display::BitmapData FlxTypedSpriteGroup_obj::set_pixels( ::openfl::display::BitmapData Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1137_set_pixels)
HXDLIN(1137)		return Value;
            	}


 ::flixel::graphics::frames::FlxFrame FlxTypedSpriteGroup_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1142_set_frame)
HXDLIN(1142)		return Value;
            	}


 ::openfl::display::BitmapData FlxTypedSpriteGroup_obj::get_pixels(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1147_get_pixels)
HXDLIN(1147)		return null();
            	}


void FlxTypedSpriteGroup_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1156_calcFrame)
            	}


void FlxTypedSpriteGroup_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1163_resetHelpers)
            	}


void FlxTypedSpriteGroup_obj::stamp( ::flixel::FlxSprite Brush,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y){
            		int X = __o_X.Default(0);
            		int Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1168_stamp)
            	}


 ::flixel::graphics::frames::FlxFramesCollection FlxTypedSpriteGroup_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1172_set_frames)
HXDLIN(1172)		return Frames;
            	}


void FlxTypedSpriteGroup_obj::updateColorTransform(){
            	HX_STACKFRAME(&_hx_pos_790ec110ce1e7f7f_1178_updateColorTransform)
            	}



::hx::ObjectPtr< FlxTypedSpriteGroup_obj > FlxTypedSpriteGroup_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize) {
	::hx::ObjectPtr< FlxTypedSpriteGroup_obj > __this = new FlxTypedSpriteGroup_obj();
	__this->__construct(__o_X,__o_Y,__o_MaxSize);
	return __this;
}

::hx::ObjectPtr< FlxTypedSpriteGroup_obj > FlxTypedSpriteGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_MaxSize) {
	FlxTypedSpriteGroup_obj *__this = (FlxTypedSpriteGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedSpriteGroup_obj), true, "flixel.group.FlxTypedSpriteGroup"));
	*(void **)__this = FlxTypedSpriteGroup_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_MaxSize);
	return __this;
}

FlxTypedSpriteGroup_obj::FlxTypedSpriteGroup_obj()
{
}

void FlxTypedSpriteGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedSpriteGroup);
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(directAlpha,"directAlpha");
	HX_MARK_MEMBER_NAME(_skipTransformChildren,"_skipTransformChildren");
	HX_MARK_MEMBER_NAME(_sprites,"_sprites");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(directAlpha,"directAlpha");
	HX_VISIT_MEMBER_NAME(_skipTransformChildren,"_skipTransformChildren");
	HX_VISIT_MEMBER_NAME(_sprites,"_sprites");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedSpriteGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return ::hx::Val( group ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return ::hx::Val( stamp_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"preAdd") ) { return ::hx::Val( preAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_members() ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxSize() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprites") ) { return ::hx::Val( _sprites ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMinX") ) { return ::hx::Val( findMinX_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMaxX") ) { return ::hx::Val( findMaxX_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMinY") ) { return ::hx::Val( findMinY_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMaxY") ) { return ::hx::Val( findMaxY_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return ::hx::Val( countDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return ::hx::Val( getRandom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alive") ) { return ::hx::Val( set_alive_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return ::hx::Val( set_flipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return ::hx::Val( set_flipY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return ::hx::Val( set_moves_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return ::hx::Val( set_solid_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return ::hx::Val( set_blend_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_camera") ) { return ::hx::Val( set_camera_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_exists") ) { return ::hx::Val( set_exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_active") ) { return ::hx::Val( set_active_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return ::hx::Val( set_facing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"xTransform") ) { return ::hx::Val( xTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"yTransform") ) { return ::hx::Val( yTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return ::hx::Val( set_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return ::hx::Val( get_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directAlpha") ) { return ::hx::Val( directAlpha ); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return ::hx::Val( countLiving_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return ::hx::Val( forEachDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cameras") ) { return ::hx::Val( set_cameras_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxSize") ) { return ::hx::Val( get_maxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return ::hx::Val( set_maxSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_members") ) { return ::hx::Val( get_members_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return ::hx::Val( loadGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return ::hx::Val( makeGraphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return ::hx::Val( replaceColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return ::hx::Val( getFirstNull_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return ::hx::Val( getFirstDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return ::hx::Val( forEachAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clipRect") ) { return ::hx::Val( set_clipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return ::hx::Val( resetHelpers_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return ::hx::Val( getFirstAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return ::hx::Val( forEachExists_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return ::hx::Val( forEachOfType_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return ::hx::Val( set_immovable_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleCallback") ) { return ::hx::Val( scaleCallback_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findMinXHelper") ) { return ::hx::Val( findMinXHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMaxXHelper") ) { return ::hx::Val( findMaxXHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMinYHelper") ) { return ::hx::Val( findMinYHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"findMaxYHelper") ) { return ::hx::Val( findMaxYHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"angleTransform") ) { return ::hx::Val( angleTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"alphaTransform") ) { return ::hx::Val( alphaTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"flipXTransform") ) { return ::hx::Val( flipXTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"flipYTransform") ) { return ::hx::Val( flipYTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"movesTransform") ) { return ::hx::Val( movesTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"blendTransform") ) { return ::hx::Val( blendTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"solidTransform") ) { return ::hx::Val( solidTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"aliveTransform") ) { return ::hx::Val( aliveTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"scaleTransform") ) { return ::hx::Val( scaleTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"offsetCallback") ) { return ::hx::Val( offsetCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"originCallback") ) { return ::hx::Val( originCallback_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"facingTransform") ) { return ::hx::Val( facingTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"gColorTransform") ) { return ::hx::Val( gColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"activeTransform") ) { return ::hx::Val( activeTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"existsTransform") ) { return ::hx::Val( existsTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"cameraTransform") ) { return ::hx::Val( cameraTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"offsetTransform") ) { return ::hx::Val( offsetTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"originTransform") ) { return ::hx::Val( originTransform_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return ::hx::Val( getFirstExisting_dyn() ); }
		if (HX_FIELD_EQ(inName,"visibleTransform") ) { return ::hx::Val( visibleTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"camerasTransform") ) { return ::hx::Val( camerasTransform_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return ::hx::Val( getFirstAvailable_dyn() ); }
		if (HX_FIELD_EQ(inName,"clipRectTransform") ) { return ::hx::Val( clipRectTransform_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return ::hx::Val( pixelsOverlapPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"immovableTransform") ) { return ::hx::Val( immovableTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return ::hx::Val( loadRotatedGraphic_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"directAlphaTransform") ) { return ::hx::Val( directAlphaTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollFactorCallback") ) { return ::hx::Val( scrollFactorCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transformChildren_Int") ) { return ::hx::Val( transformChildren_Int_dyn() ); }
		if (HX_FIELD_EQ(inName,"pixelPerfectTransform") ) { return ::hx::Val( pixelPerfectTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"scrollFactorTransform") ) { return ::hx::Val( scrollFactorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return ::hx::Val( loadGraphicFromSprite_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"transformChildren_Bool") ) { return ::hx::Val( transformChildren_Bool_dyn() ); }
		if (HX_FIELD_EQ(inName,"_skipTransformChildren") ) { return ::hx::Val( _skipTransformChildren ); }
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return ::hx::Val( set_pixelPerfectRender_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformChildren_Float") ) { return ::hx::Val( transformChildren_Float_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"multiTransformChildren_Float") ) { return ::hx::Val( multiTransformChildren_Float_dyn() ); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"transformChildren_flixel_FlxCamera") ) { return ::hx::Val( transformChildren_flixel_FlxCamera_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"transformChildren_flixel_math_FlxRect") ) { return ::hx::Val( transformChildren_flixel_math_FlxRect_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"transformChildren_flixel_math_FlxPoint") ) { return ::hx::Val( transformChildren_flixel_math_FlxPoint_dyn() ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"transformChildren_Array_flixel_FlxCamera") ) { return ::hx::Val( transformChildren_Array_flixel_FlxCamera_dyn() ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"transformChildren_flash_display_BlendMode") ) { return ::hx::Val( transformChildren_flash_display_BlendMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTypedSpriteGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxSize(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprites") ) { _sprites=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directAlpha") ) { directAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_skipTransformChildren") ) { _skipTransformChildren=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedSpriteGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("group",3f,b3,f4,99));
	outFields->push(HX_("members",d9,2c,70,1a));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("directAlpha",75,b7,cb,e0));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	outFields->push(HX_("_skipTransformChildren",8d,52,b5,7c));
	outFields->push(HX_("_sprites",4f,02,43,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedSpriteGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(FlxTypedSpriteGroup_obj,group),HX_("group",3f,b3,f4,99)},
	{::hx::fsBool,(int)offsetof(FlxTypedSpriteGroup_obj,directAlpha),HX_("directAlpha",75,b7,cb,e0)},
	{::hx::fsBool,(int)offsetof(FlxTypedSpriteGroup_obj,_skipTransformChildren),HX_("_skipTransformChildren",8d,52,b5,7c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTypedSpriteGroup_obj,_sprites),HX_("_sprites",4f,02,43,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedSpriteGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedSpriteGroup_obj_sMemberFields[] = {
	HX_("transformChildren_flixel_math_FlxRect",2e,de,92,aa),
	HX_("transformChildren_flixel_math_FlxPoint",06,0c,c3,75),
	HX_("transformChildren_flash_display_BlendMode",74,da,81,76),
	HX_("transformChildren_flixel_FlxCamera",e8,54,28,43),
	HX_("transformChildren_Array_flixel_FlxCamera",ae,0c,c0,d3),
	HX_("transformChildren_Bool",7e,fd,20,26),
	HX_("transformChildren_Int",1b,1a,96,58),
	HX_("multiTransformChildren_Float",4f,02,e4,0f),
	HX_("transformChildren_Float",c8,75,5b,82),
	HX_("group",3f,b3,f4,99),
	HX_("directAlpha",75,b7,cb,e0),
	HX_("_skipTransformChildren",8d,52,b5,7c),
	HX_("_sprites",4f,02,43,99),
	HX_("initVars",dc,5a,00,53),
	HX_("destroy",fa,2c,86,24),
	HX_("clone",5d,13,63,48),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("pixelsOverlapPoint",16,82,44,e0),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("replaceColor",8f,5c,eb,3d),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("preAdd",be,c1,9a,ae),
	HX_("recycle",13,10,8c,37),
	HX_("remove",44,9c,88,04),
	HX_("replace",34,48,28,ab),
	HX_("sort",5e,27,58,4c),
	HX_("getFirstAvailable",af,ea,b3,05),
	HX_("getFirstNull",61,b7,33,0f),
	HX_("getFirstExisting",65,a4,6c,ee),
	HX_("getFirstAlive",b3,09,e2,bb),
	HX_("getFirstDead",7e,67,8b,08),
	HX_("countLiving",58,d9,8a,30),
	HX_("countDead",13,d3,86,54),
	HX_("getRandom",39,ab,e5,33),
	HX_("iterator",ee,49,9a,93),
	HX_("forEach",aa,29,be,c4),
	HX_("forEachAlive",c3,61,b7,99),
	HX_("forEachDead",6e,c1,e4,78),
	HX_("forEachExists",26,57,f8,68),
	HX_("forEachOfType",bb,90,76,fd),
	HX_("clear",8d,71,5b,48),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	HX_("reset",cf,49,c8,e6),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("set_camera",e2,54,91,ab),
	HX_("set_cameras",51,f1,98,73),
	HX_("set_exists",19,2c,e5,b3),
	HX_("set_visible",95,df,8b,33),
	HX_("set_active",03,50,4b,0a),
	HX_("set_alive",30,ac,8b,48),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_angle",36,8c,dc,49),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_facing",57,4d,0a,d8),
	HX_("set_flipX",6e,8d,8c,29),
	HX_("set_flipY",6f,8d,8c,29),
	HX_("set_moves",a5,14,60,33),
	HX_("set_immovable",ed,dc,d9,2d),
	HX_("set_solid",8e,fc,bf,a7),
	HX_("set_color",c6,b9,56,71),
	HX_("set_blend",b4,30,ef,db),
	HX_("set_clipRect",91,67,7d,22),
	HX_("set_pixelPerfectRender",9a,4f,8f,bc),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_width",5d,12,0c,0e),
	HX_("findMinX",5f,5b,f0,9a),
	HX_("findMinXHelper",2d,9e,80,37),
	HX_("findMaxX",0d,52,ea,9a),
	HX_("findMaxXHelper",5b,cb,ed,db),
	HX_("set_height",24,16,51,f6),
	HX_("get_height",b0,77,d3,f2),
	HX_("findMinY",60,5b,f0,9a),
	HX_("findMinYHelper",ee,14,16,61),
	HX_("findMaxY",0e,52,ea,9a),
	HX_("findMaxYHelper",1c,42,83,05),
	HX_("get_length",af,04,8f,8f),
	HX_("get_maxSize",9c,59,7e,52),
	HX_("set_maxSize",a8,60,eb,5c),
	HX_("get_members",f0,8c,6a,a0),
	HX_("xTransform",d4,3d,4e,0a),
	HX_("yTransform",b3,b5,98,ca),
	HX_("angleTransform",19,37,04,53),
	HX_("alphaTransform",2e,8a,9a,12),
	HX_("directAlphaTransform",37,3f,f4,32),
	HX_("facingTransform",f2,1a,d1,b5),
	HX_("flipXTransform",e1,4e,16,58),
	HX_("flipYTransform",c0,c6,60,18),
	HX_("movesTransform",ca,a8,19,91),
	HX_("pixelPerfectTransform",45,cd,91,ea),
	HX_("gColorTransform",50,b2,d2,48),
	HX_("blendTransform",db,12,24,48),
	HX_("immovableTransform",02,b5,21,2d),
	HX_("visibleTransform",9a,f6,1b,49),
	HX_("activeTransform",c6,62,68,7a),
	HX_("solidTransform",c1,fb,cb,4e),
	HX_("aliveTransform",df,47,b2,53),
	HX_("existsTransform",f0,53,19,db),
	HX_("cameraTransform",07,4a,20,2b),
	HX_("camerasTransform",5e,cd,14,48),
	HX_("offsetTransform",59,6b,be,5e),
	HX_("originTransform",a6,86,e1,bc),
	HX_("scaleTransform",82,1d,72,79),
	HX_("scrollFactorTransform",10,a9,e8,16),
	HX_("clipRectTransform",b8,da,fa,1a),
	HX_("offsetCallback",78,38,86,15),
	HX_("originCallback",cb,c5,de,24),
	HX_("scaleCallback",6f,be,27,48),
	HX_("scrollFactorCallback",a1,5e,9d,f1),
	HX_("loadGraphicFromSprite",d1,7c,73,38),
	HX_("loadGraphic",22,19,a5,44),
	HX_("loadRotatedGraphic",c5,14,74,62),
	HX_("makeGraphic",5a,82,11,b8),
	HX_("set_pixels",6a,fd,ae,80),
	HX_("set_frame",90,c0,7d,2d),
	HX_("get_pixels",f6,5e,31,7d),
	HX_("calcFrame",58,93,8c,f9),
	HX_("resetHelpers",36,89,3d,32),
	HX_("stamp",03,70,0b,84),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("updateColorTransform",72,0f,d2,2f),
	::String(null()) };

::hx::Class FlxTypedSpriteGroup_obj::__mClass;

void FlxTypedSpriteGroup_obj::__register()
{
	FlxTypedSpriteGroup_obj _hx_dummy;
	FlxTypedSpriteGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedSpriteGroup",e1,d1,86,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedSpriteGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedSpriteGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedSpriteGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedSpriteGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group
