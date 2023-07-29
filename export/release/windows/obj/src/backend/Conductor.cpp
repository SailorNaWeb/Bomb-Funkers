#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_backend_Conductor
#include <backend/Conductor.h>
#endif
#ifndef INCLUDED_backend_Rating
#include <backend/Rating.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_080e9a5446946e07_29_new,"backend.Conductor","new",0xa4883a5f,"backend.Conductor.new","backend/Conductor.hx",29,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_33_judgeNote,"backend.Conductor","judgeNote",0xc14e7e68,"backend.Conductor.judgeNote","backend/Conductor.hx",33,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_42_getCrotchetAtTime,"backend.Conductor","getCrotchetAtTime",0xdb5dcc1d,"backend.Conductor.getCrotchetAtTime","backend/Conductor.hx",42,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_47_getBPMFromSeconds,"backend.Conductor","getBPMFromSeconds",0x14e7c70b,"backend.Conductor.getBPMFromSeconds","backend/Conductor.hx",47,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_63_getBPMFromStep,"backend.Conductor","getBPMFromStep",0x0c6f4740,"backend.Conductor.getBPMFromStep","backend/Conductor.hx",63,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_79_beatToSeconds,"backend.Conductor","beatToSeconds",0xcaee8cad,"backend.Conductor.beatToSeconds","backend/Conductor.hx",79,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_85_getStep,"backend.Conductor","getStep",0xd3296c81,"backend.Conductor.getStep","backend/Conductor.hx",85,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_90_getStepRounded,"backend.Conductor","getStepRounded",0x48e83dac,"backend.Conductor.getStepRounded","backend/Conductor.hx",90,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_96_getBeat,"backend.Conductor","getBeat",0xc7e166ab,"backend.Conductor.getBeat","backend/Conductor.hx",96,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_100_getBeatRounded,"backend.Conductor","getBeatRounded",0x0eca3cc2,"backend.Conductor.getBeatRounded","backend/Conductor.hx",100,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_104_mapBPMChanges,"backend.Conductor","mapBPMChanges",0x4f79485f,"backend.Conductor.mapBPMChanges","backend/Conductor.hx",104,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_132_getSectionBeats,"backend.Conductor","getSectionBeats",0xc283944d,"backend.Conductor.getSectionBeats","backend/Conductor.hx",132,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_139_calculateCrochet,"backend.Conductor","calculateCrochet",0x7186830f,"backend.Conductor.calculateCrochet","backend/Conductor.hx",139,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_143_changeBPM,"backend.Conductor","changeBPM",0x9ac2c28e,"backend.Conductor.changeBPM","backend/Conductor.hx",143,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_17_boot,"backend.Conductor","boot",0x4ac3d953,"backend.Conductor.boot","backend/Conductor.hx",17,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_18_boot,"backend.Conductor","boot",0x4ac3d953,"backend.Conductor.boot","backend/Conductor.hx",18,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_19_boot,"backend.Conductor","boot",0x4ac3d953,"backend.Conductor.boot","backend/Conductor.hx",19,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_20_boot,"backend.Conductor","boot",0x4ac3d953,"backend.Conductor.boot","backend/Conductor.hx",20,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_21_boot,"backend.Conductor","boot",0x4ac3d953,"backend.Conductor.boot","backend/Conductor.hx",21,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_24_boot,"backend.Conductor","boot",0x4ac3d953,"backend.Conductor.boot","backend/Conductor.hx",24,0x5443f372)
HX_LOCAL_STACK_FRAME(_hx_pos_080e9a5446946e07_26_boot,"backend.Conductor","boot",0x4ac3d953,"backend.Conductor.boot","backend/Conductor.hx",26,0x5443f372)
namespace backend{

void Conductor_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_29_new)
            	}

Dynamic Conductor_obj::__CreateEmpty() { return new Conductor_obj; }

void *Conductor_obj::_hx_vtable = 0;

Dynamic Conductor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Conductor_obj > _hx_result = new Conductor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Conductor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01f72433;
}

Float Conductor_obj::bpm;

Float Conductor_obj::crochet;

Float Conductor_obj::stepCrochet;

Float Conductor_obj::songPosition;

Float Conductor_obj::offset;

Float Conductor_obj::safeZoneOffset;

::Array< ::Dynamic> Conductor_obj::bpmChangeMap;

 ::backend::Rating Conductor_obj::judgeNote(::Array< ::Dynamic> arr,::hx::Null< Float >  __o_diff){
            		Float diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_33_judgeNote)
HXLINE(  34)		::Array< ::Dynamic> data = arr;
HXLINE(  35)		{
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			int _g1 = (data->length - 1);
HXDLIN(  35)			while((_g < _g1)){
HXLINE(  35)				_g = (_g + 1);
HXDLIN(  35)				int i = (_g - 1);
HXLINE(  36)				if (::hx::IsLessEq( diff,data->__get(i).StaticCast<  ::backend::Rating >()->hitWindow )) {
HXLINE(  37)					return data->__get(i).StaticCast<  ::backend::Rating >();
            				}
            			}
            		}
HXLINE(  39)		return data->__get((data->length - 1)).StaticCast<  ::backend::Rating >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Conductor_obj,judgeNote,return )

Float Conductor_obj::getCrotchetAtTime(Float time){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_42_getCrotchetAtTime)
HXLINE(  43)		 ::Dynamic lastChange = ::backend::Conductor_obj::getBPMFromSeconds(time);
HXLINE(  44)		return (( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) ) * ( (Float)(4) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getCrotchetAtTime,return )

 ::Dynamic Conductor_obj::getBPMFromSeconds(Float time){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_47_getBPMFromSeconds)
HXLINE(  48)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("stepCrochet",48,d7,ff,e6),::backend::Conductor_obj::stepCrochet)
            			->setFixed(2,HX_("bpm",df,be,4a,00),::backend::Conductor_obj::bpm)
            			->setFixed(3,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			int _g1 = ::backend::Conductor_obj::bpmChangeMap->length;
HXDLIN(  54)			while((_g < _g1)){
HXLINE(  54)				_g = (_g + 1);
HXDLIN(  54)				int i = (_g - 1);
HXLINE(  56)				if (::hx::IsGreaterEq( time,::backend::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  57)					lastChange = ::backend::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  60)		return lastChange;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getBPMFromSeconds,return )

 ::Dynamic Conductor_obj::getBPMFromStep(Float step){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_63_getBPMFromStep)
HXLINE(  64)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("stepCrochet",48,d7,ff,e6),::backend::Conductor_obj::stepCrochet)
            			->setFixed(2,HX_("bpm",df,be,4a,00),::backend::Conductor_obj::bpm)
            			->setFixed(3,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			int _g1 = ::backend::Conductor_obj::bpmChangeMap->length;
HXDLIN(  70)			while((_g < _g1)){
HXLINE(  70)				_g = (_g + 1);
HXDLIN(  70)				int i = (_g - 1);
HXLINE(  72)				if (::hx::IsLessEq( ::backend::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic),step )) {
HXLINE(  73)					lastChange = ::backend::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  76)		return lastChange;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getBPMFromStep,return )

Float Conductor_obj::beatToSeconds(Float beat){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_79_beatToSeconds)
HXLINE(  80)		Float step = (beat * ( (Float)(4) ));
HXLINE(  81)		 ::Dynamic lastChange = ::backend::Conductor_obj::getBPMFromStep(step);
HXLINE(  82)		return ( (Float)((lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) + ((((step - ( (Float)(lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic)) )) / (( (Float)(lastChange->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ) / ( (Float)(60) ))) / ( (Float)(4) )) * ( (Float)(1000) )))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,beatToSeconds,return )

Float Conductor_obj::getStep(Float time){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_85_getStep)
HXLINE(  86)		 ::Dynamic lastChange = ::backend::Conductor_obj::getBPMFromSeconds(time);
HXLINE(  87)		return ( (Float)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ((time - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) )))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getStep,return )

Float Conductor_obj::getStepRounded(Float time){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_90_getStepRounded)
HXLINE(  91)		 ::Dynamic lastChange = ::backend::Conductor_obj::getBPMFromSeconds(time);
HXLINE(  92)		return ( (Float)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + (( (Float)(::Math_obj::floor((time - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )))) ) / ( (Float)(lastChange->__Field(HX_("stepCrochet",48,d7,ff,e6),::hx::paccDynamic)) )))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getStepRounded,return )

Float Conductor_obj::getBeat(Float time){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_96_getBeat)
HXDLIN(  96)		return (::backend::Conductor_obj::getStep(time) / ( (Float)(4) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getBeat,return )

int Conductor_obj::getBeatRounded(Float time){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_100_getBeatRounded)
HXDLIN( 100)		return ::Math_obj::floor((::backend::Conductor_obj::getStepRounded(time) / ( (Float)(4) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,getBeatRounded,return )

void Conductor_obj::mapBPMChanges( ::Dynamic song){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_104_mapBPMChanges)
HXLINE( 105)		::backend::Conductor_obj::bpmChangeMap = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 107)		Float curBPM = ( (Float)(song->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE( 108)		int totalSteps = 0;
HXLINE( 109)		Float totalPos = ( (Float)(0) );
HXLINE( 110)		{
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			int _g1 = ( (::Array< ::Dynamic>)(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) )->length;
HXDLIN( 110)			while((_g < _g1)){
HXLINE( 110)				_g = (_g + 1);
HXDLIN( 110)				int i = (_g - 1);
HXLINE( 112)				bool _hx_tmp;
HXDLIN( 112)				if (( (bool)( ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("changeBPM",4f,4f,f8,1d),::hx::paccDynamic)) )) {
HXLINE( 112)					_hx_tmp = ::hx::IsNotEq(  ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic),curBPM );
            				}
            				else {
HXLINE( 112)					_hx_tmp = false;
            				}
HXDLIN( 112)				if (_hx_tmp) {
HXLINE( 114)					curBPM = ( (Float)( ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE( 115)					 ::Dynamic event =  ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("stepTime",79,75,25,a0),totalSteps)
            						->setFixed(1,HX_("stepCrochet",48,d7,ff,e6),(((( (Float)(60) ) / curBPM) * ( (Float)(1000) )) / ( (Float)(4) )))
            						->setFixed(2,HX_("bpm",df,be,4a,00),curBPM)
            						->setFixed(3,HX_("songTime",82,2a,d5,3a),totalPos));
HXLINE( 121)					::backend::Conductor_obj::bpmChangeMap->push(event);
            				}
HXLINE( 124)				int deltaSteps = ::Math_obj::round((( (Float)(::backend::Conductor_obj::getSectionBeats(song,i)) ) * ( (Float)(4) )));
HXLINE( 125)				totalSteps = (totalSteps + deltaSteps);
HXLINE( 126)				totalPos = (totalPos + ((((( (Float)(60) ) / curBPM) * ( (Float)(1000) )) / ( (Float)(4) )) * ( (Float)(deltaSteps) )));
            			}
            		}
HXLINE( 128)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 128)		::String _hx_tmp1 = (HX_("new BPM map BUDDY ",ff,cc,e3,2e) + ::Std_obj::string(::backend::Conductor_obj::bpmChangeMap));
HXDLIN( 128)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/backend/Conductor.hx",66,b4,05,7f),128,HX_("backend.Conductor",ed,1e,6e,bb),HX_("mapBPMChanges",a0,c9,ba,4a)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,mapBPMChanges,(void))

 ::Dynamic Conductor_obj::getSectionBeats( ::Dynamic song,int section){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_132_getSectionBeats)
HXLINE( 133)		 ::Dynamic val = null();
HXLINE( 134)		if (::hx::IsNotNull(  ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(section) )) {
HXLINE( 134)			val =  ::Dynamic(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic))->__GetItem(section)->__Field(HX_("sectionBeats",18,52,2e,0f),::hx::paccDynamic);
            		}
HXLINE( 135)		if (::hx::IsNotNull( val )) {
HXLINE( 135)			return val;
            		}
            		else {
HXLINE( 135)			return 4;
            		}
HXDLIN( 135)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Conductor_obj,getSectionBeats,return )

Float Conductor_obj::calculateCrochet(Float bpm){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_139_calculateCrochet)
HXDLIN( 139)		return ((( (Float)(60) ) / bpm) * ( (Float)(1000) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,calculateCrochet,return )

void Conductor_obj::changeBPM(Float newBpm){
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_143_changeBPM)
HXLINE( 144)		::backend::Conductor_obj::bpm = newBpm;
HXLINE( 146)		::backend::Conductor_obj::crochet = ((( (Float)(60) ) / ::backend::Conductor_obj::bpm) * ( (Float)(1000) ));
HXLINE( 147)		::backend::Conductor_obj::stepCrochet = (::backend::Conductor_obj::crochet / ( (Float)(4) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,changeBPM,(void))


Conductor_obj::Conductor_obj()
{
}

bool Conductor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { outValue = ( bpm ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { outValue = ( offset ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"crochet") ) { outValue = ( crochet ); return true; }
		if (HX_FIELD_EQ(inName,"getStep") ) { outValue = getStep_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBeat") ) { outValue = getBeat_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"judgeNote") ) { outValue = judgeNote_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"changeBPM") ) { outValue = changeBPM_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stepCrochet") ) { outValue = ( stepCrochet ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"songPosition") ) { outValue = ( songPosition ); return true; }
		if (HX_FIELD_EQ(inName,"bpmChangeMap") ) { outValue = ( bpmChangeMap ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"beatToSeconds") ) { outValue = beatToSeconds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mapBPMChanges") ) { outValue = mapBPMChanges_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"safeZoneOffset") ) { outValue = ( safeZoneOffset ); return true; }
		if (HX_FIELD_EQ(inName,"getBPMFromStep") ) { outValue = getBPMFromStep_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getStepRounded") ) { outValue = getStepRounded_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBeatRounded") ) { outValue = getBeatRounded_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSectionBeats") ) { outValue = getSectionBeats_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"calculateCrochet") ) { outValue = calculateCrochet_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getCrotchetAtTime") ) { outValue = getCrotchetAtTime_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBPMFromSeconds") ) { outValue = getBPMFromSeconds_dyn(); return true; }
	}
	return false;
}

bool Conductor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=ioValue.Cast< Float >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=ioValue.Cast< Float >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"crochet") ) { crochet=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stepCrochet") ) { stepCrochet=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"songPosition") ) { songPosition=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"bpmChangeMap") ) { bpmChangeMap=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"safeZoneOffset") ) { safeZoneOffset=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Conductor_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Conductor_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Conductor_obj::bpm,HX_("bpm",df,be,4a,00)},
	{::hx::fsFloat,(void *) &Conductor_obj::crochet,HX_("crochet",34,d5,b5,d4)},
	{::hx::fsFloat,(void *) &Conductor_obj::stepCrochet,HX_("stepCrochet",48,d7,ff,e6)},
	{::hx::fsFloat,(void *) &Conductor_obj::songPosition,HX_("songPosition",9e,dd,3b,8d)},
	{::hx::fsFloat,(void *) &Conductor_obj::offset,HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(void *) &Conductor_obj::safeZoneOffset,HX_("safeZoneOffset",8c,9a,25,8d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Conductor_obj::bpmChangeMap,HX_("bpmChangeMap",2d,84,1f,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Conductor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Conductor_obj::bpm,"bpm");
	HX_MARK_MEMBER_NAME(Conductor_obj::crochet,"crochet");
	HX_MARK_MEMBER_NAME(Conductor_obj::stepCrochet,"stepCrochet");
	HX_MARK_MEMBER_NAME(Conductor_obj::songPosition,"songPosition");
	HX_MARK_MEMBER_NAME(Conductor_obj::offset,"offset");
	HX_MARK_MEMBER_NAME(Conductor_obj::safeZoneOffset,"safeZoneOffset");
	HX_MARK_MEMBER_NAME(Conductor_obj::bpmChangeMap,"bpmChangeMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Conductor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Conductor_obj::bpm,"bpm");
	HX_VISIT_MEMBER_NAME(Conductor_obj::crochet,"crochet");
	HX_VISIT_MEMBER_NAME(Conductor_obj::stepCrochet,"stepCrochet");
	HX_VISIT_MEMBER_NAME(Conductor_obj::songPosition,"songPosition");
	HX_VISIT_MEMBER_NAME(Conductor_obj::offset,"offset");
	HX_VISIT_MEMBER_NAME(Conductor_obj::safeZoneOffset,"safeZoneOffset");
	HX_VISIT_MEMBER_NAME(Conductor_obj::bpmChangeMap,"bpmChangeMap");
};

#endif

::hx::Class Conductor_obj::__mClass;

static ::String Conductor_obj_sStaticFields[] = {
	HX_("bpm",df,be,4a,00),
	HX_("crochet",34,d5,b5,d4),
	HX_("stepCrochet",48,d7,ff,e6),
	HX_("songPosition",9e,dd,3b,8d),
	HX_("offset",93,97,3f,60),
	HX_("safeZoneOffset",8c,9a,25,8d),
	HX_("bpmChangeMap",2d,84,1f,2c),
	HX_("judgeNote",29,0b,84,44),
	HX_("getCrotchetAtTime",de,81,ff,28),
	HX_("getBPMFromSeconds",cc,7c,89,62),
	HX_("getBPMFromStep",df,de,7e,ea),
	HX_("beatToSeconds",ee,0d,30,c6),
	HX_("getStep",02,97,de,1e),
	HX_("getStepRounded",4b,d5,f7,26),
	HX_("getBeat",2c,91,96,13),
	HX_("getBeatRounded",61,d4,d9,ec),
	HX_("mapBPMChanges",a0,c9,ba,4a),
	HX_("getSectionBeats",ce,a7,18,32),
	HX_("calculateCrochet",6e,80,62,a4),
	HX_("changeBPM",4f,4f,f8,1d),
	::String(null())
};

void Conductor_obj::__register()
{
	Conductor_obj _hx_dummy;
	Conductor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("backend.Conductor",ed,1e,6e,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Conductor_obj::__GetStatic;
	__mClass->mSetStaticField = &Conductor_obj::__SetStatic;
	__mClass->mMarkFunc = Conductor_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Conductor_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Conductor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Conductor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Conductor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Conductor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Conductor_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_17_boot)
HXDLIN(  17)		bpm = ((Float)100);
            	}
{
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_18_boot)
HXDLIN(  18)		crochet = ((( (Float)(60) ) / ::backend::Conductor_obj::bpm) * ( (Float)(1000) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_19_boot)
HXDLIN(  19)		stepCrochet = (::backend::Conductor_obj::crochet / ( (Float)(4) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_20_boot)
HXDLIN(  20)		songPosition = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_21_boot)
HXDLIN(  21)		offset = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_24_boot)
HXDLIN(  24)		safeZoneOffset = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_080e9a5446946e07_26_boot)
HXDLIN(  26)		bpmChangeMap = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace backend
