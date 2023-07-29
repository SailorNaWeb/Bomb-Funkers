#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_f6e4a6bd16e728f7
#define INCLUDED_f6e4a6bd16e728f7
#include "vlc/vlc.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxcodec_openfl_Video
#include <hxcodec/openfl/Video.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ce6549ff18c97568_115_new,"hxcodec.openfl.Video","new",0x1209b457,"hxcodec.openfl.Video.new","hxcodec/openfl/Video.hx",115,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_195_play,"hxcodec.openfl.Video","play",0xb7cbc21d,"hxcodec.openfl.Video.play","hxcodec/openfl/Video.hx",195,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_228_stop,"hxcodec.openfl.Video","stop",0xb9cd842b,"hxcodec.openfl.Video.stop","hxcodec/openfl/Video.hx",228,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_234_pause,"hxcodec.openfl.Video","pause",0x1347e6ad,"hxcodec.openfl.Video.pause","hxcodec/openfl/Video.hx",234,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_240_resume,"hxcodec.openfl.Video","resume",0xe4a21a16,"hxcodec.openfl.Video.resume","hxcodec/openfl/Video.hx",240,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_246_togglePaused,"hxcodec.openfl.Video","togglePaused",0xb56dc08b,"hxcodec.openfl.Video.togglePaused","hxcodec/openfl/Video.hx",246,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_251_dispose,"hxcodec.openfl.Video","dispose",0x79292c16,"hxcodec.openfl.Video.dispose","hxcodec/openfl/Video.hx",251,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_294_get_time,"hxcodec.openfl.Video","get_time",0x2ff0e43f,"hxcodec.openfl.Video.get_time","hxcodec/openfl/Video.hx",294,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_308_set_time,"hxcodec.openfl.Video","set_time",0xde4e3db3,"hxcodec.openfl.Video.set_time","hxcodec/openfl/Video.hx",308,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_316_get_position,"hxcodec.openfl.Video","get_position",0x9fe3b9db,"hxcodec.openfl.Video.get_position","hxcodec/openfl/Video.hx",316,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_324_set_position,"hxcodec.openfl.Video","set_position",0xb4dcdd4f,"hxcodec.openfl.Video.set_position","hxcodec/openfl/Video.hx",324,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_332_get_length,"hxcodec.openfl.Video","get_length",0x39579d98,"hxcodec.openfl.Video.get_length","hxcodec/openfl/Video.hx",332,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_346_get_duration,"hxcodec.openfl.Video","get_duration",0xe9772886,"hxcodec.openfl.Video.get_duration","hxcodec/openfl/Video.hx",346,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_360_get_mrl,"hxcodec.openfl.Video","get_mrl",0xe4a48d75,"hxcodec.openfl.Video.get_mrl","hxcodec/openfl/Video.hx",360,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_368_get_volume,"hxcodec.openfl.Video","get_volume",0xf9a3328c,"hxcodec.openfl.Video.get_volume","hxcodec/openfl/Video.hx",368,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_376_set_volume,"hxcodec.openfl.Video","set_volume",0xfd20d100,"hxcodec.openfl.Video.set_volume","hxcodec/openfl/Video.hx",376,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_384_get_channel,"hxcodec.openfl.Video","get_channel",0x388993d1,"hxcodec.openfl.Video.get_channel","hxcodec/openfl/Video.hx",384,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_392_set_channel,"hxcodec.openfl.Video","set_channel",0x42f69add,"hxcodec.openfl.Video.set_channel","hxcodec/openfl/Video.hx",392,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_400_get_delay,"hxcodec.openfl.Video","get_delay",0x89c7eb11,"hxcodec.openfl.Video.get_delay","hxcodec/openfl/Video.hx",400,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_414_set_delay,"hxcodec.openfl.Video","set_delay",0x6d18d71d,"hxcodec.openfl.Video.set_delay","hxcodec/openfl/Video.hx",414,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_422_get_rate,"hxcodec.openfl.Video","get_rate",0x2e986b12,"hxcodec.openfl.Video.get_rate","hxcodec/openfl/Video.hx",422,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_430_set_rate,"hxcodec.openfl.Video","set_rate",0xdcf5c486,"hxcodec.openfl.Video.set_rate","hxcodec/openfl/Video.hx",430,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_438_get_isPlaying,"hxcodec.openfl.Video","get_isPlaying",0x05237f32,"hxcodec.openfl.Video.get_isPlaying","hxcodec/openfl/Video.hx",438,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_446_get_isSeekable,"hxcodec.openfl.Video","get_isSeekable",0x86eb6ace,"hxcodec.openfl.Video.get_isSeekable","hxcodec/openfl/Video.hx",446,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_454_get_canPause,"hxcodec.openfl.Video","get_canPause",0x00d431f8,"hxcodec.openfl.Video.get_canPause","hxcodec/openfl/Video.hx",454,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_462_get_mute,"hxcodec.openfl.Video","get_mute",0x2b59870b,"hxcodec.openfl.Video.get_mute","hxcodec/openfl/Video.hx",462,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_470_set_mute,"hxcodec.openfl.Video","set_mute",0xd9b6e07f,"hxcodec.openfl.Video.set_mute","hxcodec/openfl/Video.hx",470,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_479___enterFrame,"hxcodec.openfl.Video","__enterFrame",0x5ab2e43e,"hxcodec.openfl.Video.__enterFrame","hxcodec/openfl/Video.hx",479,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_501_checkEvents,"hxcodec.openfl.Video","checkEvents",0x5e3954f8,"hxcodec.openfl.Video.checkEvents","hxcodec/openfl/Video.hx",501,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_579_attachEvents,"hxcodec.openfl.Video","attachEvents",0x4b90c5e7,"hxcodec.openfl.Video.attachEvents","hxcodec/openfl/Video.hx",579,0x9352f519)
HX_LOCAL_STACK_FRAME(_hx_pos_ce6549ff18c97568_597_detachEvents,"hxcodec.openfl.Video","detachEvents",0x83c6c5f5,"hxcodec.openfl.Video.detachEvents","hxcodec/openfl/Video.hx",597,0x9352f519)
namespace hxcodec{
namespace openfl{


static unsigned format_setup(void **data, char *chroma, unsigned *width, unsigned *height, unsigned *pitches, unsigned *lines)
{
	Video_obj *self = reinterpret_cast<Video_obj *>(*data);

	unsigned formatWidth = (*width);
	unsigned formatHeight = (*height);

	(*pitches) = formatWidth * 4;
	(*lines) = formatHeight;

	strcpy(chroma, "RV32");

	self->videoWidth = formatWidth;
	self->videoHeight = formatHeight;

	self->events[9] = true;

	if (self->pixels != NULL)
		delete self->pixels;

	self->pixels = new uint8_t[formatWidth * formatHeight * 4];
	return 1;
}

static void *lock(void *data, void **p_pixels)
{
	Video_obj *self = reinterpret_cast<Video_obj *>(data);
	*p_pixels = self->pixels;
	return NULL; // picture identifier, not needed here
}

static void callbacks(const libvlc_event_t *event, void *data)
{
	Video_obj *self = reinterpret_cast<Video_obj *>(data);

	switch (event->type)
	{
		case libvlc_MediaPlayerOpening:
			self->events[0] = true;
			break;
		case libvlc_MediaPlayerPlaying:
			self->events[1] = true;
			break;
		case libvlc_MediaPlayerStopped:
			self->events[2] = true;
			break;
		case libvlc_MediaPlayerPaused:
			self->events[3] = true;
			break;
		case libvlc_MediaPlayerEndReached:
			self->events[4] = true;
			break;
		case libvlc_MediaPlayerEncounteredError:
			self->events[5] = true;
			break;
		case libvlc_MediaPlayerForward:
			self->events[6] = true;
			break;
		case libvlc_MediaPlayerBackward:
			self->events[7] = true;
			break;
		case libvlc_MediaPlayerMediaChanged:
			self->events[8] = true;
			break;
	}
}

static void logging(void *data, int level, const libvlc_log_t *ctx, const char *fmt, va_list args)
{
	#ifdef __ANDROID__
	switch (level)
	{
		case LIBVLC_DEBUG:
			__android_log_vprint(ANDROID_LOG_DEBUG, "HXCODEC", fmt, args);
			break;
		case LIBVLC_NOTICE:
			__android_log_vprint(ANDROID_LOG_INFO, "HXCODEC", fmt, args);
			break;
		case LIBVLC_WARNING:
			__android_log_vprint(ANDROID_LOG_WARN, "HXCODEC", fmt, args);
			break;
		case LIBVLC_ERROR:
			__android_log_vprint(ANDROID_LOG_ERROR, "HXCODEC", fmt, args);
			break;
	}
	#else
	vprintf(fmt, args);
	#endif
}
void Video_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_ce6549ff18c97568_115_new)
HXLINE( 148)		this->deltaTime = ((Float)0);
HXLINE( 147)		this->oldTime = ((Float)0);
HXLINE( 119)		this->videoHeight = 0;
HXLINE( 118)		this->videoWidth = 0;
HXLINE( 159)		super::__construct(this->get_bitmapData(),1,true);
HXLINE( 161)		this->events = ::Array_obj< bool >::__new();
HXLINE( 162)		{
HXLINE( 163)			this->events[0] = false;
HXDLIN( 163)			this->events[1] = false;
HXDLIN( 163)			this->events[2] = false;
HXDLIN( 163)			this->events[3] = false;
HXDLIN( 163)			this->events[4] = false;
HXDLIN( 163)			this->events[5] = false;
HXDLIN( 163)			this->events[6] = false;
HXDLIN( 163)			this->events[7] = false;
HXDLIN( 163)			this->events[8] = false;
            		}
HXLINE( 165)		this->onOpening =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 166)		this->onPlaying =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 167)		this->onStopped =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 168)		this->onPaused =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 169)		this->onEndReached =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 170)		this->onEncounteredError =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 171)		this->onForward =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 172)		this->onBackward =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 173)		this->onMediaChanged =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 174)		this->onTextureSetup =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE( 181)		const char *argv[] = { "--reset-config", "--reset-plugins-cache" };
HXLINE( 183)		this->instance = libvlc_new(2,argv);
            	}

Dynamic Video_obj::__CreateEmpty() { return new Video_obj; }

void *Video_obj::_hx_vtable = 0;

Dynamic Video_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Video_obj > _hx_result = new Video_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Video_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3526b1a9) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3526b1a9;
		}
	} else {
		return inClassId==(int)0x4cc42801 || inClassId==(int)0x6b353933;
	}
}

int Video_obj::play(::String location,::hx::Null< bool >  __o_shouldLoop){
            		bool shouldLoop = __o_shouldLoop.Default(false);
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_195_play)
HXLINE( 196)		bool _hx_tmp;
HXDLIN( 196)		if (::hx::IsNotNull( location )) {
HXLINE( 196)			_hx_tmp = (location.indexOf(HX_("://",da,2b,2c,00),null()) != -1);
            		}
            		else {
HXLINE( 196)			_hx_tmp = false;
            		}
HXDLIN( 196)		if (_hx_tmp) {
HXLINE( 197)			const char* this1 = location.utf8_str();
HXDLIN( 197)			this->mediaItem = libvlc_media_new_location(this->instance,this1);
            		}
            		else {
HXLINE( 198)			if (::hx::IsNotNull( location )) {
HXLINE( 201)				 libvlc_instance_t* _hx_tmp = this->instance;
HXDLIN( 201)				const char* this1 = ::haxe::io::Path_obj::normalize(location).split(HX_("/",2f,00,00,00))->join(HX_("\\",5c,00,00,00)).utf8_str();
HXDLIN( 201)				this->mediaItem = libvlc_media_new_path(_hx_tmp,this1);
            			}
            			else {
HXLINE( 207)				return -1;
            			}
            		}
HXLINE( 209)		const char* _hx_tmp1;
HXDLIN( 209)		if (shouldLoop) {
HXLINE( 209)			const char* this1 = HX_("input-repeat=65535",d9,23,75,20).utf8_str();
HXDLIN( 209)			_hx_tmp1 = this1;
            		}
            		else {
HXLINE( 209)			const char* this1 = HX_("input-repeat=0",51,79,b7,c1).utf8_str();
HXDLIN( 209)			_hx_tmp1 = this1;
            		}
HXDLIN( 209)		libvlc_media_add_option(this->mediaItem,_hx_tmp1);
HXLINE( 211)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 212)			libvlc_media_player_set_media(this->mediaPlayer,this->mediaItem);
            		}
            		else {
HXLINE( 214)			this->mediaPlayer = libvlc_media_player_new_from_media(this->mediaItem);
            		}
HXLINE( 216)		libvlc_media_release(this->mediaItem);
HXLINE( 218)		 libvlc_media_player_t* _hx_tmp2 = this->mediaPlayer;
HXDLIN( 218)		::cpp::Function< unsigned int  (void**,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) > _hx_tmp3 = format_setup;
HXDLIN( 218)		libvlc_video_set_format_callbacks(_hx_tmp2,_hx_tmp3,NULL);
HXLINE( 219)		 libvlc_media_player_t* _hx_tmp4 = this->mediaPlayer;
HXDLIN( 219)		::cpp::Function< void*  (void*,void**) > _hx_tmp5 = lock;
HXDLIN( 219)		::cpp::Function< void  (void*,void*, void *const *) > _hx_tmp6 = NULL;
HXDLIN( 219)		::cpp::Function< void  (void*,void*) > _hx_tmp7 = NULL;
HXDLIN( 219)		libvlc_video_set_callbacks(_hx_tmp4,_hx_tmp5,_hx_tmp6,_hx_tmp7,this);
HXLINE( 221)		this->attachEvents();
HXLINE( 223)		return libvlc_media_player_play(this->mediaPlayer);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Video_obj,play,return )

void Video_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_228_stop)
HXDLIN( 228)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 229)			libvlc_media_player_stop(this->mediaPlayer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,stop,(void))

void Video_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_234_pause)
HXDLIN( 234)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 235)			libvlc_media_player_set_pause(this->mediaPlayer,1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,pause,(void))

void Video_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_240_resume)
HXDLIN( 240)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 241)			libvlc_media_player_set_pause(this->mediaPlayer,0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,resume,(void))

void Video_obj::togglePaused(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_246_togglePaused)
HXDLIN( 246)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 247)			libvlc_media_player_pause(this->mediaPlayer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,togglePaused,(void))

void Video_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_251_dispose)
HXLINE( 252)		this->detachEvents();
HXLINE( 254)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 256)			libvlc_media_player_stop(this->mediaPlayer);
HXLINE( 257)			libvlc_media_player_release(this->mediaPlayer);
            		}
HXLINE( 260)		if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 262)			this->get_bitmapData()->dispose();
HXLINE( 263)			this->set_bitmapData(null());
            		}
HXLINE( 266)		if (::hx::IsNotNull( this->texture )) {
HXLINE( 268)			this->texture->dispose();
HXLINE( 269)			this->texture = null();
            		}
HXLINE( 272)		this->videoWidth = 0;
HXLINE( 273)		this->videoHeight = 0;
HXLINE( 274)		this->pixels = null();
HXLINE( 276)		this->events->removeRange(0,this->events->length);
HXLINE( 278)		if (::hx::IsNotNull( this->instance )) {
HXLINE( 283)			libvlc_release(this->instance);
            		}
HXLINE( 286)		this->eventManager = null();
HXLINE( 287)		this->mediaPlayer = null();
HXLINE( 288)		this->mediaItem = null();
HXLINE( 289)		this->instance = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,dispose,(void))

int Video_obj::get_time(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_294_get_time)
HXLINE( 295)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 300)			return ( (int)(libvlc_media_player_get_time(this->mediaPlayer)) );
            		}
HXLINE( 304)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_time,return )

int Video_obj::set_time(int value){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_308_set_time)
HXLINE( 309)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 310)			libvlc_media_player_set_time(this->mediaPlayer,( (::cpp::Int64)(value) ));
            		}
HXLINE( 312)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,set_time,return )

float Video_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_316_get_position)
HXLINE( 317)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 318)			return libvlc_media_player_get_position(this->mediaPlayer);
            		}
HXLINE( 320)		return ( (float)(-1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_position,return )

float Video_obj::set_position(float value){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_324_set_position)
HXLINE( 325)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 326)			libvlc_media_player_set_position(this->mediaPlayer,value);
            		}
HXLINE( 328)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,set_position,return )

int Video_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_332_get_length)
HXLINE( 333)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 338)			return ( (int)(libvlc_media_player_get_length(this->mediaPlayer)) );
            		}
HXLINE( 342)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_length,return )

int Video_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_346_get_duration)
HXLINE( 347)		if (::hx::IsNotNull( this->mediaItem )) {
HXLINE( 352)			return ( (int)(libvlc_media_get_duration(this->mediaItem)) );
            		}
HXLINE( 356)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_duration,return )

::String Video_obj::get_mrl(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_360_get_mrl)
HXLINE( 361)		if (::hx::IsNotNull( this->mediaItem )) {
HXLINE( 362)			return ::hx::TCast< ::String >::cast(libvlc_media_get_mrl(this->mediaItem));
            		}
HXLINE( 364)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_mrl,return )

int Video_obj::get_volume(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_368_get_volume)
HXLINE( 369)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 370)			return libvlc_audio_get_volume(this->mediaPlayer);
            		}
HXLINE( 372)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_volume,return )

int Video_obj::set_volume(int value){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_376_set_volume)
HXLINE( 377)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 378)			libvlc_audio_set_volume(this->mediaPlayer,value);
            		}
HXLINE( 380)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,set_volume,return )

int Video_obj::get_channel(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_384_get_channel)
HXLINE( 385)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 386)			return libvlc_audio_get_channel(this->mediaPlayer);
            		}
HXLINE( 388)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_channel,return )

int Video_obj::set_channel(int value){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_392_set_channel)
HXLINE( 393)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 394)			libvlc_audio_set_channel(this->mediaPlayer,value);
            		}
HXLINE( 396)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,set_channel,return )

int Video_obj::get_delay(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_400_get_delay)
HXLINE( 401)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 406)			return ( (int)(libvlc_audio_get_delay(this->mediaPlayer)) );
            		}
HXLINE( 410)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_delay,return )

int Video_obj::set_delay(int value){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_414_set_delay)
HXLINE( 415)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 416)			libvlc_audio_set_delay(this->mediaPlayer,( (::cpp::Int64)(value) ));
            		}
HXLINE( 418)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,set_delay,return )

float Video_obj::get_rate(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_422_get_rate)
HXLINE( 423)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 424)			return libvlc_media_player_get_rate(this->mediaPlayer);
            		}
HXLINE( 426)		return ( (float)(-1) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_rate,return )

float Video_obj::set_rate(float value){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_430_set_rate)
HXLINE( 431)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 432)			libvlc_media_player_set_rate(this->mediaPlayer,value);
            		}
HXLINE( 434)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,set_rate,return )

bool Video_obj::get_isPlaying(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_438_get_isPlaying)
HXLINE( 439)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 440)			return libvlc_media_player_is_playing(this->mediaPlayer);
            		}
HXLINE( 442)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_isPlaying,return )

bool Video_obj::get_isSeekable(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_446_get_isSeekable)
HXLINE( 447)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 448)			return libvlc_media_player_is_seekable(this->mediaPlayer);
            		}
HXLINE( 450)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_isSeekable,return )

bool Video_obj::get_canPause(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_454_get_canPause)
HXLINE( 455)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 456)			return libvlc_media_player_can_pause(this->mediaPlayer);
            		}
HXLINE( 458)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_canPause,return )

bool Video_obj::get_mute(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_462_get_mute)
HXLINE( 463)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 464)			return (libvlc_audio_get_mute(this->mediaPlayer) > 0);
            		}
HXLINE( 466)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,get_mute,return )

bool Video_obj::set_mute(bool value){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_470_set_mute)
HXLINE( 471)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 472)			libvlc_audio_set_mute(this->mediaPlayer,value);
            		}
HXLINE( 474)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Video_obj,set_mute,return )

void Video_obj::_hx___enterFrame(int elapsed){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_479___enterFrame)
HXLINE( 480)		if (this->events->contains(true)) {
HXLINE( 481)			this->checkEvents();
            		}
HXLINE( 483)		bool _hx_tmp;
HXDLIN( 483)		if (this->_hx___renderable) {
HXLINE( 483)			_hx_tmp = this->get_isPlaying();
            		}
            		else {
HXLINE( 483)			_hx_tmp = false;
            		}
HXDLIN( 483)		if (_hx_tmp) {
HXLINE( 485)			 ::hxcodec::openfl::Video _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 485)			_hx_tmp->deltaTime = (_hx_tmp->deltaTime + elapsed);
HXLINE( 487)			if ((::Math_obj::abs((this->deltaTime - this->oldTime)) > ((Float)8.3))) {
HXLINE( 488)				this->oldTime = this->deltaTime;
            			}
            			else {
HXLINE( 490)				return;
            			}
HXLINE( 492)			bool _hx_tmp1;
HXDLIN( 492)			if (::hx::IsNotNull( this->texture )) {
HXLINE( 492)				_hx_tmp1 = ::hx::IsNotNull( this->pixels );
            			}
            			else {
HXLINE( 492)				_hx_tmp1 = false;
            			}
HXDLIN( 492)			if (_hx_tmp1) {
HXLINE( 493)				 ::openfl::display3D::textures::RectangleTexture _hx_tmp = this->texture;
HXDLIN( 493)				::cpp::Pointer< unsigned char > _this = ::cpp::Pointer_obj::fromRaw(this->pixels);
HXDLIN( 493)				int elementCount = ((this->videoWidth * this->videoHeight) * 4);
HXDLIN( 493)				::Array< unsigned char > result = ::Array_obj< unsigned char >::__new();
HXDLIN( 493)				::cpp::Pointer< unsigned char > tmp = _this;
HXDLIN( 493)				result->setUnmanagedData(tmp,elementCount);
HXDLIN( 493)				_hx_tmp->uploadFromByteArray(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytesData(result),0);
            			}
HXLINE( 495)			if (!(this->_hx___renderDirty)) {
HXLINE( 495)				this->_hx___renderDirty = true;
HXDLIN( 495)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


void Video_obj::checkEvents(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_501_checkEvents)
HXLINE( 503)		if (this->events->__get(0)) {
HXLINE( 505)			this->events[0] = false;
HXLINE( 506)			this->onOpening->dispatch();
            		}
HXLINE( 509)		if (this->events->__get(1)) {
HXLINE( 511)			this->events[1] = false;
HXLINE( 512)			this->onPlaying->dispatch();
            		}
HXLINE( 515)		if (this->events->__get(2)) {
HXLINE( 517)			this->events[2] = false;
HXLINE( 518)			this->onStopped->dispatch();
            		}
HXLINE( 521)		if (this->events->__get(3)) {
HXLINE( 523)			this->events[3] = false;
HXLINE( 524)			this->onPaused->dispatch();
            		}
HXLINE( 527)		if (this->events->__get(4)) {
HXLINE( 529)			this->events[4] = false;
HXLINE( 530)			this->onEndReached->dispatch();
            		}
HXLINE( 533)		if (this->events->__get(5)) {
HXLINE( 535)			this->events[5] = false;
HXLINE( 536)			this->onEncounteredError->dispatch();
            		}
HXLINE( 539)		if (this->events->__get(6)) {
HXLINE( 541)			this->events[6] = false;
HXLINE( 542)			this->onForward->dispatch();
            		}
HXLINE( 545)		if (this->events->__get(7)) {
HXLINE( 547)			this->events[7] = false;
HXLINE( 548)			this->onBackward->dispatch();
            		}
HXLINE( 551)		if (this->events->__get(8)) {
HXLINE( 553)			this->events[8] = false;
HXLINE( 554)			this->onMediaChanged->dispatch();
            		}
HXLINE( 557)		if (this->events->__get(9)) {
HXLINE( 559)			this->events[9] = false;
HXLINE( 561)			bool _hx_tmp;
HXDLIN( 561)			bool _hx_tmp1;
HXDLIN( 561)			bool _hx_tmp2;
HXDLIN( 561)			if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 561)				_hx_tmp2 = (this->get_bitmapData()->width == this->videoWidth);
            			}
            			else {
HXLINE( 561)				_hx_tmp2 = false;
            			}
HXDLIN( 561)			if (_hx_tmp2) {
HXLINE( 561)				_hx_tmp1 = (this->get_bitmapData()->height == this->videoHeight);
            			}
            			else {
HXLINE( 561)				_hx_tmp1 = false;
            			}
HXDLIN( 561)			if (_hx_tmp1) {
HXLINE( 561)				_hx_tmp = ::hx::IsNotNull( this->texture );
            			}
            			else {
HXLINE( 561)				_hx_tmp = false;
            			}
HXDLIN( 561)			if (_hx_tmp) {
HXLINE( 562)				return;
            			}
HXLINE( 564)			if (::hx::IsNotNull( this->get_bitmapData() )) {
HXLINE( 565)				this->get_bitmapData()->dispose();
            			}
HXLINE( 567)			if (::hx::IsNotNull( this->texture )) {
HXLINE( 568)				this->texture->dispose();
            			}
HXLINE( 570)			this->texture = ::openfl::Lib_obj::get_current()->stage->context3D->createRectangleTexture(this->videoWidth,this->videoHeight,1,true);
HXLINE( 571)			this->set_bitmapData(::openfl::display::BitmapData_obj::fromTexture(this->texture));
HXLINE( 572)			this->smoothing = true;
HXLINE( 574)			this->onTextureSetup->dispatch();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,checkEvents,(void))

void Video_obj::attachEvents(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_579_attachEvents)
HXLINE( 580)		bool _hx_tmp;
HXDLIN( 580)		if (::hx::IsNotNull( this->mediaPlayer )) {
HXLINE( 580)			_hx_tmp = ::hx::IsNotNull( this->eventManager );
            		}
            		else {
HXLINE( 580)			_hx_tmp = true;
            		}
HXDLIN( 580)		if (_hx_tmp) {
HXLINE( 581)			return;
            		}
HXLINE( 583)		this->eventManager = libvlc_media_player_event_manager(this->mediaPlayer);
HXLINE( 585)		 libvlc_event_manager_t* _hx_tmp1 = this->eventManager;
HXDLIN( 585)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp2 = callbacks;
HXDLIN( 585)		libvlc_event_attach(_hx_tmp1,258,_hx_tmp2,this);
HXLINE( 586)		 libvlc_event_manager_t* _hx_tmp3 = this->eventManager;
HXDLIN( 586)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp4 = callbacks;
HXDLIN( 586)		libvlc_event_attach(_hx_tmp3,260,_hx_tmp4,this);
HXLINE( 587)		 libvlc_event_manager_t* _hx_tmp5 = this->eventManager;
HXDLIN( 587)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp6 = callbacks;
HXDLIN( 587)		libvlc_event_attach(_hx_tmp5,262,_hx_tmp6,this);
HXLINE( 588)		 libvlc_event_manager_t* _hx_tmp7 = this->eventManager;
HXDLIN( 588)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp8 = callbacks;
HXDLIN( 588)		libvlc_event_attach(_hx_tmp7,261,_hx_tmp8,this);
HXLINE( 589)		 libvlc_event_manager_t* _hx_tmp9 = this->eventManager;
HXDLIN( 589)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp10 = callbacks;
HXDLIN( 589)		libvlc_event_attach(_hx_tmp9,265,_hx_tmp10,this);
HXLINE( 590)		 libvlc_event_manager_t* _hx_tmp11 = this->eventManager;
HXDLIN( 590)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp12 = callbacks;
HXDLIN( 590)		libvlc_event_attach(_hx_tmp11,266,_hx_tmp12,this);
HXLINE( 591)		 libvlc_event_manager_t* _hx_tmp13 = this->eventManager;
HXDLIN( 591)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp14 = callbacks;
HXDLIN( 591)		libvlc_event_attach(_hx_tmp13,263,_hx_tmp14,this);
HXLINE( 592)		 libvlc_event_manager_t* _hx_tmp15 = this->eventManager;
HXDLIN( 592)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp16 = callbacks;
HXDLIN( 592)		libvlc_event_attach(_hx_tmp15,264,_hx_tmp16,this);
HXLINE( 593)		 libvlc_event_manager_t* _hx_tmp17 = this->eventManager;
HXDLIN( 593)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp18 = callbacks;
HXDLIN( 593)		libvlc_event_attach(_hx_tmp17,256,_hx_tmp18,this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,attachEvents,(void))

void Video_obj::detachEvents(){
            	HX_STACKFRAME(&_hx_pos_ce6549ff18c97568_597_detachEvents)
HXLINE( 598)		if (::hx::IsNull( this->eventManager )) {
HXLINE( 599)			return;
            		}
HXLINE( 601)		 libvlc_event_manager_t* _hx_tmp = this->eventManager;
HXDLIN( 601)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp1 = callbacks;
HXDLIN( 601)		libvlc_event_detach(_hx_tmp,258,_hx_tmp1,this);
HXLINE( 602)		 libvlc_event_manager_t* _hx_tmp2 = this->eventManager;
HXDLIN( 602)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp3 = callbacks;
HXDLIN( 602)		libvlc_event_detach(_hx_tmp2,260,_hx_tmp3,this);
HXLINE( 603)		 libvlc_event_manager_t* _hx_tmp4 = this->eventManager;
HXDLIN( 603)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp5 = callbacks;
HXDLIN( 603)		libvlc_event_detach(_hx_tmp4,262,_hx_tmp5,this);
HXLINE( 604)		 libvlc_event_manager_t* _hx_tmp6 = this->eventManager;
HXDLIN( 604)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp7 = callbacks;
HXDLIN( 604)		libvlc_event_detach(_hx_tmp6,261,_hx_tmp7,this);
HXLINE( 605)		 libvlc_event_manager_t* _hx_tmp8 = this->eventManager;
HXDLIN( 605)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp9 = callbacks;
HXDLIN( 605)		libvlc_event_detach(_hx_tmp8,265,_hx_tmp9,this);
HXLINE( 606)		 libvlc_event_manager_t* _hx_tmp10 = this->eventManager;
HXDLIN( 606)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp11 = callbacks;
HXDLIN( 606)		libvlc_event_detach(_hx_tmp10,266,_hx_tmp11,this);
HXLINE( 607)		 libvlc_event_manager_t* _hx_tmp12 = this->eventManager;
HXDLIN( 607)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp13 = callbacks;
HXDLIN( 607)		libvlc_event_detach(_hx_tmp12,263,_hx_tmp13,this);
HXLINE( 608)		 libvlc_event_manager_t* _hx_tmp14 = this->eventManager;
HXDLIN( 608)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp15 = callbacks;
HXDLIN( 608)		libvlc_event_detach(_hx_tmp14,264,_hx_tmp15,this);
HXLINE( 609)		 libvlc_event_manager_t* _hx_tmp16 = this->eventManager;
HXDLIN( 609)		::cpp::Function< void  (const  libvlc_event_t*,void*) > _hx_tmp17 = callbacks;
HXDLIN( 609)		libvlc_event_detach(_hx_tmp16,256,_hx_tmp17,this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Video_obj,detachEvents,(void))


::hx::ObjectPtr< Video_obj > Video_obj::__new() {
	::hx::ObjectPtr< Video_obj > __this = new Video_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Video_obj > Video_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Video_obj *__this = (Video_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Video_obj), true, "hxcodec.openfl.Video"));
	*(void **)__this = Video_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Video_obj::Video_obj()
{
}

void Video_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Video);
	HX_MARK_MEMBER_NAME(videoWidth,"videoWidth");
	HX_MARK_MEMBER_NAME(videoHeight,"videoHeight");
	HX_MARK_MEMBER_NAME(onOpening,"onOpening");
	HX_MARK_MEMBER_NAME(onPlaying,"onPlaying");
	HX_MARK_MEMBER_NAME(onStopped,"onStopped");
	HX_MARK_MEMBER_NAME(onPaused,"onPaused");
	HX_MARK_MEMBER_NAME(onEndReached,"onEndReached");
	HX_MARK_MEMBER_NAME(onEncounteredError,"onEncounteredError");
	HX_MARK_MEMBER_NAME(onForward,"onForward");
	HX_MARK_MEMBER_NAME(onBackward,"onBackward");
	HX_MARK_MEMBER_NAME(onMediaChanged,"onMediaChanged");
	HX_MARK_MEMBER_NAME(onTextureSetup,"onTextureSetup");
	HX_MARK_MEMBER_NAME(oldTime,"oldTime");
	HX_MARK_MEMBER_NAME(deltaTime,"deltaTime");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(instance,"instance");
	HX_MARK_MEMBER_NAME(mediaPlayer,"mediaPlayer");
	HX_MARK_MEMBER_NAME(mediaItem,"mediaItem");
	HX_MARK_MEMBER_NAME(eventManager,"eventManager");
	 ::openfl::display::Bitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Video_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(videoWidth,"videoWidth");
	HX_VISIT_MEMBER_NAME(videoHeight,"videoHeight");
	HX_VISIT_MEMBER_NAME(onOpening,"onOpening");
	HX_VISIT_MEMBER_NAME(onPlaying,"onPlaying");
	HX_VISIT_MEMBER_NAME(onStopped,"onStopped");
	HX_VISIT_MEMBER_NAME(onPaused,"onPaused");
	HX_VISIT_MEMBER_NAME(onEndReached,"onEndReached");
	HX_VISIT_MEMBER_NAME(onEncounteredError,"onEncounteredError");
	HX_VISIT_MEMBER_NAME(onForward,"onForward");
	HX_VISIT_MEMBER_NAME(onBackward,"onBackward");
	HX_VISIT_MEMBER_NAME(onMediaChanged,"onMediaChanged");
	HX_VISIT_MEMBER_NAME(onTextureSetup,"onTextureSetup");
	HX_VISIT_MEMBER_NAME(oldTime,"oldTime");
	HX_VISIT_MEMBER_NAME(deltaTime,"deltaTime");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(instance,"instance");
	HX_VISIT_MEMBER_NAME(mediaPlayer,"mediaPlayer");
	HX_VISIT_MEMBER_NAME(mediaItem,"mediaItem");
	HX_VISIT_MEMBER_NAME(eventManager,"eventManager");
	 ::openfl::display::Bitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Video_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mrl") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mrl() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_time() ); }
		if (HX_FIELD_EQ(inName,"rate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rate() ); }
		if (HX_FIELD_EQ(inName,"mute") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_mute() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_delay() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_volume() ); }
		if (HX_FIELD_EQ(inName,"events") ) { return ::hx::Val( events ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return ::hx::Val( resume_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_channel() ); }
		if (HX_FIELD_EQ(inName,"oldTime") ) { return ::hx::Val( oldTime ); }
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mrl") ) { return ::hx::Val( get_mrl_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"canPause") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_canPause() ); }
		if (HX_FIELD_EQ(inName,"onPaused") ) { return ::hx::Val( onPaused ); }
		if (HX_FIELD_EQ(inName,"get_time") ) { return ::hx::Val( get_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_time") ) { return ::hx::Val( set_time_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rate") ) { return ::hx::Val( get_rate_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rate") ) { return ::hx::Val( set_rate_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_mute") ) { return ::hx::Val( get_mute_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_mute") ) { return ::hx::Val( set_mute_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPlaying") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isPlaying() ); }
		if (HX_FIELD_EQ(inName,"onOpening") ) { return ::hx::Val( onOpening ); }
		if (HX_FIELD_EQ(inName,"onPlaying") ) { return ::hx::Val( onPlaying ); }
		if (HX_FIELD_EQ(inName,"onStopped") ) { return ::hx::Val( onStopped ); }
		if (HX_FIELD_EQ(inName,"onForward") ) { return ::hx::Val( onForward ); }
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return ::hx::Val( deltaTime ); }
		if (HX_FIELD_EQ(inName,"get_delay") ) { return ::hx::Val( get_delay_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_delay") ) { return ::hx::Val( set_delay_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { return ::hx::Val( videoWidth ); }
		if (HX_FIELD_EQ(inName,"isSeekable") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isSeekable() ); }
		if (HX_FIELD_EQ(inName,"onBackward") ) { return ::hx::Val( onBackward ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return ::hx::Val( get_volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return ::hx::Val( set_volume_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { return ::hx::Val( videoHeight ); }
		if (HX_FIELD_EQ(inName,"get_channel") ) { return ::hx::Val( get_channel_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_channel") ) { return ::hx::Val( set_channel_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkEvents") ) { return ::hx::Val( checkEvents_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEndReached") ) { return ::hx::Val( onEndReached ); }
		if (HX_FIELD_EQ(inName,"togglePaused") ) { return ::hx::Val( togglePaused_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_canPause") ) { return ::hx::Val( get_canPause_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"attachEvents") ) { return ::hx::Val( attachEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"detachEvents") ) { return ::hx::Val( detachEvents_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_isPlaying") ) { return ::hx::Val( get_isPlaying_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onMediaChanged") ) { return ::hx::Val( onMediaChanged ); }
		if (HX_FIELD_EQ(inName,"onTextureSetup") ) { return ::hx::Val( onTextureSetup ); }
		if (HX_FIELD_EQ(inName,"get_isSeekable") ) { return ::hx::Val( get_isSeekable_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onEncounteredError") ) { return ::hx::Val( onEncounteredError ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Video_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_time(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"rate") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rate(inValue.Cast< float >()) ); }
		if (HX_FIELD_EQ(inName,"mute") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_mute(inValue.Cast< bool >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_delay(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_volume(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"channel") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_channel(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"oldTime") ) { oldTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast<  ::openfl::display3D::textures::RectangleTexture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< float >()) ); }
		if (HX_FIELD_EQ(inName,"onPaused") ) { onPaused=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onOpening") ) { onOpening=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPlaying") ) { onPlaying=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStopped") ) { onStopped=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onForward") ) { onForward=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { videoWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBackward") ) { onBackward=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoHeight") ) { videoHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEndReached") ) { onEndReached=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onMediaChanged") ) { onMediaChanged=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextureSetup") ) { onTextureSetup=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onEncounteredError") ) { onEncounteredError=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Video_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("videoWidth",8b,f3,30,a6));
	outFields->push(HX_("videoHeight",c2,9e,f3,7a));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("mrl",67,19,53,00));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("channel",c3,00,d2,cc));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("rate",e0,52,a4,4b));
	outFields->push(HX_("isPlaying",a4,8c,16,8e));
	outFields->push(HX_("isSeekable",1c,21,a4,d2));
	outFields->push(HX_("canPause",c6,18,eb,2b));
	outFields->push(HX_("mute",d9,6e,65,48));
	outFields->push(HX_("onOpening",f9,bb,ef,17));
	outFields->push(HX_("onPlaying",0f,c8,c2,61));
	outFields->push(HX_("onStopped",ae,8a,0c,1b));
	outFields->push(HX_("onPaused",2d,37,31,cf));
	outFields->push(HX_("onEndReached",f6,c1,9d,80));
	outFields->push(HX_("onEncounteredError",d5,1c,32,23));
	outFields->push(HX_("onForward",66,9a,75,bd));
	outFields->push(HX_("onBackward",22,b0,cf,04));
	outFields->push(HX_("onMediaChanged",2f,58,87,e8));
	outFields->push(HX_("onTextureSetup",61,bb,be,9c));
	outFields->push(HX_("oldTime",54,70,41,02));
	outFields->push(HX_("deltaTime",25,3c,5c,f5));
	outFields->push(HX_("events",19,4f,6a,96));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("instance",95,1f,e1,59));
	outFields->push(HX_("mediaPlayer",65,27,02,c6));
	outFields->push(HX_("mediaItem",17,38,03,a6));
	outFields->push(HX_("eventManager",73,89,16,a4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Video_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Video_obj,videoWidth),HX_("videoWidth",8b,f3,30,a6)},
	{::hx::fsInt,(int)offsetof(Video_obj,videoHeight),HX_("videoHeight",c2,9e,f3,7a)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onOpening),HX_("onOpening",f9,bb,ef,17)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onPlaying),HX_("onPlaying",0f,c8,c2,61)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onStopped),HX_("onStopped",ae,8a,0c,1b)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onPaused),HX_("onPaused",2d,37,31,cf)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onEndReached),HX_("onEndReached",f6,c1,9d,80)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onEncounteredError),HX_("onEncounteredError",d5,1c,32,23)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onForward),HX_("onForward",66,9a,75,bd)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onBackward),HX_("onBackward",22,b0,cf,04)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onMediaChanged),HX_("onMediaChanged",2f,58,87,e8)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Video_obj,onTextureSetup),HX_("onTextureSetup",61,bb,be,9c)},
	{::hx::fsFloat,(int)offsetof(Video_obj,oldTime),HX_("oldTime",54,70,41,02)},
	{::hx::fsFloat,(int)offsetof(Video_obj,deltaTime),HX_("deltaTime",25,3c,5c,f5)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(Video_obj,events),HX_("events",19,4f,6a,96)},
	{::hx::fsObject /*  ::openfl::display3D::textures::RectangleTexture */ ,(int)offsetof(Video_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsUnknown /* unsigned char* */ ,(int)offsetof(Video_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{::hx::fsUnknown /*  libvlc_instance_t* */ ,(int)offsetof(Video_obj,instance),HX_("instance",95,1f,e1,59)},
	{::hx::fsUnknown /*  libvlc_media_player_t* */ ,(int)offsetof(Video_obj,mediaPlayer),HX_("mediaPlayer",65,27,02,c6)},
	{::hx::fsUnknown /*  libvlc_media_t* */ ,(int)offsetof(Video_obj,mediaItem),HX_("mediaItem",17,38,03,a6)},
	{::hx::fsUnknown /*  libvlc_event_manager_t* */ ,(int)offsetof(Video_obj,eventManager),HX_("eventManager",73,89,16,a4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Video_obj_sStaticStorageInfo = 0;
#endif

static ::String Video_obj_sMemberFields[] = {
	HX_("videoWidth",8b,f3,30,a6),
	HX_("videoHeight",c2,9e,f3,7a),
	HX_("onOpening",f9,bb,ef,17),
	HX_("onPlaying",0f,c8,c2,61),
	HX_("onStopped",ae,8a,0c,1b),
	HX_("onPaused",2d,37,31,cf),
	HX_("onEndReached",f6,c1,9d,80),
	HX_("onEncounteredError",d5,1c,32,23),
	HX_("onForward",66,9a,75,bd),
	HX_("onBackward",22,b0,cf,04),
	HX_("onMediaChanged",2f,58,87,e8),
	HX_("onTextureSetup",61,bb,be,9c),
	HX_("oldTime",54,70,41,02),
	HX_("deltaTime",25,3c,5c,f5),
	HX_("events",19,4f,6a,96),
	HX_("texture",db,c8,e0,9e),
	HX_("play",f4,2d,5a,4a),
	HX_("stop",02,f0,5b,4c),
	HX_("pause",f6,d6,57,bd),
	HX_("resume",ad,69,84,08),
	HX_("togglePaused",62,5b,9e,95),
	HX_("dispose",9f,80,4c,bb),
	HX_("get_time",96,87,b7,cc),
	HX_("set_time",0a,e1,14,7b),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("get_length",af,04,8f,8f),
	HX_("get_duration",5d,c3,a7,c9),
	HX_("get_mrl",fe,e1,c7,26),
	HX_("get_volume",a3,99,da,4f),
	HX_("set_volume",17,38,58,53),
	HX_("get_channel",da,60,cc,52),
	HX_("set_channel",e6,67,39,5d),
	HX_("get_delay",da,33,d0,1a),
	HX_("set_delay",e6,1f,21,fe),
	HX_("get_rate",69,0e,5f,cb),
	HX_("set_rate",dd,67,bc,79),
	HX_("get_isPlaying",7b,60,7a,4f),
	HX_("get_isSeekable",65,a9,99,48),
	HX_("get_canPause",cf,cc,04,e1),
	HX_("get_mute",62,2a,20,c8),
	HX_("set_mute",d6,83,7d,76),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("checkEvents",01,22,7c,78),
	HX_("attachEvents",be,60,c1,2b),
	HX_("detachEvents",cc,60,f7,63),
	::String(null()) };

::hx::Class Video_obj::__mClass;

void Video_obj::__register()
{
	Video_obj _hx_dummy;
	Video_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxcodec.openfl.Video",e5,3c,3d,2b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Video_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Video_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Video_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Video_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcodec
} // end namespace openfl
