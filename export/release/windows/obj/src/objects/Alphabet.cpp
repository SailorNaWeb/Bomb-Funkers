#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_objects_Alignment
#include <objects/Alignment.h>
#endif
#ifndef INCLUDED_objects_AlphaCharacter
#include <objects/AlphaCharacter.h>
#endif
#ifndef INCLUDED_objects_Alphabet
#include <objects/Alphabet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_25c23e7e07a93d18_12_new,"objects.Alphabet","new",0xe6fd6f1f,"objects.Alphabet.new","objects/Alphabet.hx",12,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_44_setAlignmentFromString,"objects.Alphabet","setAlignmentFromString",0xf8f58cbd,"objects.Alphabet.setAlignmentFromString","objects/Alphabet.hx",44,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_56_set_alignment,"objects.Alphabet","set_alignment",0x90b4bc45,"objects.Alphabet.set_alignment","objects/Alphabet.hx",56,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_64_updateAlignment,"objects.Alphabet","updateAlignment",0xd204f4d9,"objects.Alphabet.updateAlignment","objects/Alphabet.hx",64,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_84_set_text,"objects.Alphabet","set_text",0x90f56e8b,"objects.Alphabet.set_text","objects/Alphabet.hx",84,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_94_clearLetters,"objects.Alphabet","clearLetters",0xc9cf6021,"objects.Alphabet.clearLetters","objects/Alphabet.hx",94,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_112_setScale,"objects.Alphabet","setScale",0x9ce6c469,"objects.Alphabet.setScale","objects/Alphabet.hx",112,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_127_set_scaleX,"objects.Alphabet","set_scaleX",0x2fb43fec,"objects.Alphabet.set_scaleX","objects/Alphabet.hx",127,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_138_set_scaleY,"objects.Alphabet","set_scaleY",0x2fb43fed,"objects.Alphabet.set_scaleY","objects/Alphabet.hx",138,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_149_softReloadLetters,"objects.Alphabet","softReloadLetters",0x324db629,"objects.Alphabet.softReloadLetters","objects/Alphabet.hx",149,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_165_update,"objects.Alphabet","update",0x5df268aa,"objects.Alphabet.update","objects/Alphabet.hx",165,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_179_snapToPosition,"objects.Alphabet","snapToPosition",0x56a3fbcf,"objects.Alphabet.snapToPosition","objects/Alphabet.hx",179,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_191_createLetters,"objects.Alphabet","createLetters",0x8cde98b0,"objects.Alphabet.createLetters","objects/Alphabet.hx",191,0x083c86d0)
HX_LOCAL_STACK_FRAME(_hx_pos_25c23e7e07a93d18_188_boot,"objects.Alphabet","boot",0x2edccc93,"objects.Alphabet.boot","objects/Alphabet.hx",188,0x083c86d0)
namespace objects{

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = true;
            	HX_GC_STACKFRAME(&_hx_pos_25c23e7e07a93d18_12_new)
HXLINE(  30)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,0,0);
HXDLIN(  30)		this->startPosition = this1;
HXLINE(  29)		 ::flixel::math::FlxBasePoint this11 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,20,120);
HXDLIN(  29)		this->distancePerItem = this11;
HXLINE(  27)		this->rows = 0;
HXLINE(  26)		this->scaleY = ((Float)1);
HXLINE(  25)		this->scaleX = ((Float)1);
HXLINE(  24)		this->alignment = ::objects::Alignment_obj::LEFT_dyn();
HXLINE(  22)		this->changeY = true;
HXLINE(  21)		this->changeX = true;
HXLINE(  20)		this->targetY = 0;
HXLINE(  19)		this->isMenuItem = false;
HXLINE(  17)		this->letters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  16)		this->bold = false;
HXLINE(  34)		super::__construct(x,y,null());
HXLINE(  36)		this->startPosition->set_x(x);
HXLINE(  37)		this->startPosition->set_y(y);
HXLINE(  38)		this->bold = ( (bool)(bold) );
HXLINE(  39)		this->set_text(text);
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7fcdf037;
	}
}

void Alphabet_obj::setAlignmentFromString(::String align){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_44_setAlignmentFromString)
HXDLIN(  44)		::String _hx_switch_0 = ::StringTools_obj::trim(align.toLowerCase());
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ||  (_hx_switch_0==HX_("centered",74,5d,50,8f)) ){
HXLINE(  49)			this->set_alignment(::objects::Alignment_obj::CENTERED_dyn());
HXDLIN(  49)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  47)			this->set_alignment(::objects::Alignment_obj::RIGHT_dyn());
HXDLIN(  47)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  51)			this->set_alignment(::objects::Alignment_obj::LEFT_dyn());
            		}
            		_hx_goto_1:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,setAlignmentFromString,(void))

 ::objects::Alignment Alphabet_obj::set_alignment( ::objects::Alignment align){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_56_set_alignment)
HXLINE(  57)		this->alignment = align;
HXLINE(  58)		this->updateAlignment();
HXLINE(  59)		return align;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_alignment,return )

void Alphabet_obj::updateAlignment(){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_64_updateAlignment)
HXDLIN(  64)		int _g = 0;
HXDLIN(  64)		::Array< ::Dynamic> _g1 = this->letters;
HXDLIN(  64)		while((_g < _g1->length)){
HXDLIN(  64)			 ::objects::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::objects::AlphaCharacter >();
HXDLIN(  64)			_g = (_g + 1);
HXLINE(  66)			Float newOffset = ( (Float)(0) );
HXLINE(  67)			switch((int)(this->alignment->_hx_getIndex())){
            				case (int)1: {
HXLINE(  70)					newOffset = (letter->rowWidth / ( (Float)(2) ));
            				}
            				break;
            				case (int)2: {
HXLINE(  72)					newOffset = letter->rowWidth;
            				}
            				break;
            				default:{
HXLINE(  74)					newOffset = ( (Float)(0) );
            				}
            			}
HXLINE(  77)			letter->offset->set_x((letter->offset->x - letter->alignOffset));
HXLINE(  78)			letter->alignOffset = (newOffset * this->scale->x);
HXLINE(  79)			letter->offset->set_x((letter->offset->x + letter->alignOffset));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,updateAlignment,(void))

::String Alphabet_obj::set_text(::String newText){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_84_set_text)
HXLINE(  85)		newText = ::StringTools_obj::replace(newText,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00));
HXLINE(  86)		this->clearLetters();
HXLINE(  87)		this->createLetters(newText);
HXLINE(  88)		this->updateAlignment();
HXLINE(  89)		this->text = newText;
HXLINE(  90)		return newText;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_text,return )

void Alphabet_obj::clearLetters(){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_94_clearLetters)
HXLINE(  95)		int i = this->letters->length;
HXLINE(  96)		while((i > 0)){
HXLINE(  98)			i = (i - 1);
HXLINE(  99)			 ::objects::AlphaCharacter letter = this->letters->__get(i).StaticCast<  ::objects::AlphaCharacter >();
HXLINE( 100)			if (::hx::IsNotNull( letter )) {
HXLINE( 102)				letter->kill();
HXLINE( 103)				this->letters->remove(letter);
HXLINE( 104)				this->remove(letter,null());
            			}
            		}
HXLINE( 107)		this->letters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 108)		this->rows = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,clearLetters,(void))

void Alphabet_obj::setScale(Float newX, ::Dynamic newY){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_112_setScale)
HXLINE( 113)		Float lastX = this->scale->x;
HXLINE( 114)		Float lastY = this->scale->y;
HXLINE( 115)		if (::hx::IsNull( newY )) {
HXLINE( 115)			newY = newX;
            		}
HXLINE( 117)		this->scaleX = newX;
HXLINE( 119)		this->scaleY = ( (Float)(newY) );
HXLINE( 121)		this->scale->set_x(newX);
HXLINE( 122)		this->scale->set_y(( (Float)(newY) ));
HXLINE( 123)		this->softReloadLetters((newX / lastX),(( (Float)(newY) ) / lastY));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Alphabet_obj,setScale,(void))

Float Alphabet_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_127_set_scaleX)
HXLINE( 128)		if ((value == this->scaleX)) {
HXLINE( 128)			return value;
            		}
HXLINE( 130)		Float ratio = (value / this->scale->x);
HXLINE( 131)		this->scale->set_x(value);
HXLINE( 132)		this->scaleX = value;
HXLINE( 133)		this->softReloadLetters(ratio,1);
HXLINE( 134)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_scaleX,return )

Float Alphabet_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_138_set_scaleY)
HXLINE( 139)		if ((value == this->scaleY)) {
HXLINE( 139)			return value;
            		}
HXLINE( 141)		Float ratio = (value / this->scale->y);
HXLINE( 142)		this->scale->set_y(value);
HXLINE( 143)		this->scaleY = value;
HXLINE( 144)		this->softReloadLetters(1,ratio);
HXLINE( 145)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_scaleY,return )

void Alphabet_obj::softReloadLetters(::hx::Null< Float >  __o_ratioX, ::Dynamic ratioY){
            		Float ratioX = __o_ratioX.Default(1);
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_149_softReloadLetters)
HXLINE( 150)		if (::hx::IsNull( ratioY )) {
HXLINE( 150)			ratioY = ratioX;
            		}
HXLINE( 152)		{
HXLINE( 152)			int _g = 0;
HXDLIN( 152)			::Array< ::Dynamic> _g1 = this->letters;
HXDLIN( 152)			while((_g < _g1->length)){
HXLINE( 152)				 ::objects::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::objects::AlphaCharacter >();
HXDLIN( 152)				_g = (_g + 1);
HXLINE( 154)				if (::hx::IsNotNull( letter )) {
HXLINE( 156)					letter->setupAlphaCharacter((((letter->x - this->x) * ratioX) + this->x),(((letter->y - this->y) * ( (Float)(ratioY) )) + this->y),null(),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Alphabet_obj,softReloadLetters,(void))

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_165_update)
HXLINE( 166)		if (this->isMenuItem) {
HXLINE( 168)			Float Value = (elapsed * ((Float)9.6));
HXDLIN( 168)			Float lowerBound;
HXDLIN( 168)			if ((Value < 0)) {
HXLINE( 168)				lowerBound = ( (Float)(0) );
            			}
            			else {
HXLINE( 168)				lowerBound = Value;
            			}
HXDLIN( 168)			Float lerpVal;
HXDLIN( 168)			if ((lowerBound > 1)) {
HXLINE( 168)				lerpVal = ( (Float)(1) );
            			}
            			else {
HXLINE( 168)				lerpVal = lowerBound;
            			}
HXLINE( 169)			if (this->changeX) {
HXLINE( 170)				Float a = this->x;
HXDLIN( 170)				this->set_x((a + (lerpVal * (((( (Float)(this->targetY) ) * this->distancePerItem->x) + this->startPosition->x) - a))));
            			}
HXLINE( 171)			if (this->changeY) {
HXLINE( 172)				Float a = this->y;
HXDLIN( 172)				this->set_y((a + (lerpVal * ((((( (Float)(this->targetY) ) * ((Float)1.3)) * this->distancePerItem->y) + this->startPosition->y) - a))));
            			}
            		}
HXLINE( 174)		this->super::update(elapsed);
            	}


void Alphabet_obj::snapToPosition(){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_179_snapToPosition)
HXDLIN( 179)		if (this->isMenuItem) {
HXLINE( 181)			if (this->changeX) {
HXLINE( 182)				this->set_x(((( (Float)(this->targetY) ) * this->distancePerItem->x) + this->startPosition->x));
            			}
HXLINE( 183)			if (this->changeY) {
HXLINE( 184)				this->set_y((((( (Float)(this->targetY) ) * ((Float)1.3)) * this->distancePerItem->y) + this->startPosition->y));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,snapToPosition,(void))

void Alphabet_obj::createLetters(::String newText){
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_191_createLetters)
HXLINE( 192)		int consecutiveSpaces = 0;
HXLINE( 194)		Float xPos = ( (Float)(0) );
HXLINE( 195)		::Array< Float > rowData = ::Array_obj< Float >::__new(0);
HXLINE( 196)		this->rows = 0;
HXLINE( 197)		{
HXLINE( 197)			int _g = 0;
HXDLIN( 197)			::Array< ::String > _g1 = newText.split(HX_("",00,00,00,00));
HXDLIN( 197)			while((_g < _g1->length)){
HXLINE( 197)				::String character = _g1->__get(_g);
HXDLIN( 197)				_g = (_g + 1);
HXLINE( 200)				if ((character != HX_("\n",0a,00,00,00))) {
HXLINE( 202)					bool spaceChar;
HXDLIN( 202)					if ((character != HX_(" ",20,00,00,00))) {
HXLINE( 202)						if (this->bold) {
HXLINE( 202)							spaceChar = (character == HX_("_",5f,00,00,00));
            						}
            						else {
HXLINE( 202)							spaceChar = false;
            						}
            					}
            					else {
HXLINE( 202)						spaceChar = true;
            					}
HXLINE( 203)					if (spaceChar) {
HXLINE( 203)						consecutiveSpaces = (consecutiveSpaces + 1);
            					}
HXLINE( 205)					bool isAlphabet = ::objects::AlphaCharacter_obj::isTypeAlphabet(character.toLowerCase());
HXLINE( 206)					bool _hx_tmp;
HXDLIN( 206)					::Dynamic this1 = ::objects::AlphaCharacter_obj::allLetters;
HXDLIN( 206)					if (( ( ::haxe::ds::StringMap)(this1) )->exists(character.toLowerCase())) {
HXLINE( 206)						if (this->bold) {
HXLINE( 206)							_hx_tmp = !(spaceChar);
            						}
            						else {
HXLINE( 206)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 206)						_hx_tmp = false;
            					}
HXDLIN( 206)					if (_hx_tmp) {
HXLINE( 208)						if ((consecutiveSpaces > 0)) {
HXLINE( 210)							xPos = (xPos + (( (Float)((28 * consecutiveSpaces)) ) * this->scaleX));
HXLINE( 211)							bool _hx_tmp;
HXDLIN( 211)							if (!(this->bold)) {
HXLINE( 211)								_hx_tmp = (xPos >= (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.65)));
            							}
            							else {
HXLINE( 211)								_hx_tmp = false;
            							}
HXDLIN( 211)							if (_hx_tmp) {
HXLINE( 213)								xPos = ( (Float)(0) );
HXLINE( 214)								this->rows++;
            							}
            						}
HXLINE( 217)						consecutiveSpaces = 0;
HXLINE( 219)						 ::Dynamic ObjectFactory = null();
HXDLIN( 219)						 ::objects::AlphaCharacter letter = ( ( ::objects::AlphaCharacter)(this->group->recycle(::hx::ClassOf< ::objects::AlphaCharacter >(),ObjectFactory,true,true).StaticCast<  ::flixel::FlxSprite >()) );
HXLINE( 220)						letter->scale->set_x(this->scaleX);
HXLINE( 221)						letter->scale->set_y(this->scaleY);
HXLINE( 223)						letter->setupAlphaCharacter(xPos,((( (Float)(this->rows) ) * ::objects::Alphabet_obj::Y_PER_ROW) * this->scale->y),character,this->bold);
HXLINE( 224)						letter->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 226)						letter->row = this->rows;
HXLINE( 227)						Float off = ( (Float)(0) );
HXLINE( 228)						if (!(this->bold)) {
HXLINE( 228)							off = ( (Float)(2) );
            						}
HXLINE( 229)						Float xPos1 = letter->get_width();
HXDLIN( 229)						xPos = (xPos + (xPos1 + ((letter->letterOffset->__get(0) + off) * this->scale->x)));
HXLINE( 230)						rowData[this->rows] = xPos;
HXLINE( 232)						this->add(letter);
HXLINE( 233)						this->letters->push(letter);
            					}
            				}
            				else {
HXLINE( 238)					xPos = ( (Float)(0) );
HXLINE( 239)					this->rows++;
            				}
            			}
            		}
HXLINE( 243)		{
HXLINE( 243)			int _g2 = 0;
HXDLIN( 243)			::Array< ::Dynamic> _g3 = this->letters;
HXDLIN( 243)			while((_g2 < _g3->length)){
HXLINE( 243)				 ::objects::AlphaCharacter letter = _g3->__get(_g2).StaticCast<  ::objects::AlphaCharacter >();
HXDLIN( 243)				_g2 = (_g2 + 1);
HXLINE( 245)				letter->rowWidth = rowData->__get(letter->row);
            			}
            		}
HXLINE( 248)		if ((this->letters->length > 0)) {
HXLINE( 248)			this->rows++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,createLetters,(void))

Float Alphabet_obj::Y_PER_ROW;


::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "objects.Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(letters,"letters");
	HX_MARK_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(changeX,"changeX");
	HX_MARK_MEMBER_NAME(changeY,"changeY");
	HX_MARK_MEMBER_NAME(alignment,"alignment");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(distancePerItem,"distancePerItem");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(letters,"letters");
	HX_VISIT_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(changeX,"changeX");
	HX_VISIT_MEMBER_NAME(changeY,"changeY");
	HX_VISIT_MEMBER_NAME(alignment,"alignment");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(distancePerItem,"distancePerItem");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		if (HX_FIELD_EQ(inName,"rows") ) { return ::hx::Val( rows ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"letters") ) { return ::hx::Val( letters ); }
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"changeX") ) { return ::hx::Val( changeX ); }
		if (HX_FIELD_EQ(inName,"changeY") ) { return ::hx::Val( changeY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return ::hx::Val( setScale_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return ::hx::Val( alignment ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { return ::hx::Val( isMenuItem ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearLetters") ) { return ::hx::Val( clearLetters_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return ::hx::Val( startPosition ); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return ::hx::Val( set_alignment_dyn() ); }
		if (HX_FIELD_EQ(inName,"createLetters") ) { return ::hx::Val( createLetters_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snapToPosition") ) { return ::hx::Val( snapToPosition_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distancePerItem") ) { return ::hx::Val( distancePerItem ); }
		if (HX_FIELD_EQ(inName,"updateAlignment") ) { return ::hx::Val( updateAlignment_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"softReloadLetters") ) { return ::hx::Val( softReloadLetters_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setAlignmentFromString") ) { return ::hx::Val( setAlignmentFromString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Alphabet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"Y_PER_ROW") ) { outValue = ( Y_PER_ROW ); return true; }
	}
	return false;
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) );scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) );scaleY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"letters") ) { letters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeX") ) { changeX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeY") ) { changeY=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignment(inValue.Cast<  ::objects::Alignment >()) );alignment=inValue.Cast<  ::objects::Alignment >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { isMenuItem=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distancePerItem") ) { distancePerItem=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Alphabet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"Y_PER_ROW") ) { Y_PER_ROW=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("letters",cd,9c,8e,04));
	outFields->push(HX_("isMenuItem",5c,04,de,c6));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("changeX",e8,b0,cc,cc));
	outFields->push(HX_("changeY",e9,b0,cc,cc));
	outFields->push(HX_("alignment",e3,e2,3d,ea));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("rows",19,f5,ae,4b));
	outFields->push(HX_("distancePerItem",db,0d,28,f9));
	outFields->push(HX_("startPosition",2b,03,b6,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Alphabet_obj,letters),HX_("letters",cd,9c,8e,04)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isMenuItem),HX_("isMenuItem",5c,04,de,c6)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,changeX),HX_("changeX",e8,b0,cc,cc)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,changeY),HX_("changeY",e9,b0,cc,cc)},
	{::hx::fsObject /*  ::objects::Alignment */ ,(int)offsetof(Alphabet_obj,alignment),HX_("alignment",e3,e2,3d,ea)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,rows),HX_("rows",19,f5,ae,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Alphabet_obj,distancePerItem),HX_("distancePerItem",db,0d,28,f9)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Alphabet_obj,startPosition),HX_("startPosition",2b,03,b6,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Alphabet_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Alphabet_obj::Y_PER_ROW,HX_("Y_PER_ROW",12,31,e0,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("bold",85,81,1b,41),
	HX_("letters",cd,9c,8e,04),
	HX_("isMenuItem",5c,04,de,c6),
	HX_("targetY",e8,f3,67,88),
	HX_("changeX",e8,b0,cc,cc),
	HX_("changeY",e9,b0,cc,cc),
	HX_("alignment",e3,e2,3d,ea),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("rows",19,f5,ae,4b),
	HX_("distancePerItem",db,0d,28,f9),
	HX_("startPosition",2b,03,b6,cf),
	HX_("setAlignmentFromString",1c,98,4d,ef),
	HX_("set_alignment",c6,98,a7,f0),
	HX_("updateAlignment",9a,b3,c8,39),
	HX_("set_text",aa,e1,11,7b),
	HX_("clearLetters",c0,4e,0d,e0),
	HX_("setScale",88,37,03,87),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("softReloadLetters",2a,67,8f,e1),
	HX_("update",09,86,05,87),
	HX_("snapToPosition",2e,10,32,eb),
	HX_("createLetters",31,75,d1,ec),
	::String(null()) };

static void Alphabet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alphabet_obj::Y_PER_ROW,"Y_PER_ROW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Alphabet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alphabet_obj::Y_PER_ROW,"Y_PER_ROW");
};

#endif

::hx::Class Alphabet_obj::__mClass;

static ::String Alphabet_obj_sStaticFields[] = {
	HX_("Y_PER_ROW",12,31,e0,9a),
	::String(null())
};

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Alphabet",ad,f3,79,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Alphabet_obj::__GetStatic;
	__mClass->mSetStaticField = &Alphabet_obj::__SetStatic;
	__mClass->mMarkFunc = Alphabet_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Alphabet_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Alphabet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Alphabet_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_25c23e7e07a93d18_188_boot)
HXDLIN( 188)		Y_PER_ROW = ((Float)85);
            	}
}

} // end namespace objects
