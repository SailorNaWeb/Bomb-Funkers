#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8e0849c8e2179fab_65_new,"openfl.display3D.VertexBuffer3D","new",0xf0b52080,"openfl.display3D.VertexBuffer3D.new","openfl/display3D/VertexBuffer3D.hx",65,0xb1ad396e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0849c8e2179fab_82_dispose,"openfl.display3D.VertexBuffer3D","dispose",0x6b6860bf,"openfl.display3D.VertexBuffer3D.dispose","openfl/display3D/VertexBuffer3D.hx",82,0xb1ad396e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0849c8e2179fab_108_uploadFromByteArray,"openfl.display3D.VertexBuffer3D","uploadFromByteArray",0x0096a806,"openfl.display3D.VertexBuffer3D.uploadFromByteArray","openfl/display3D/VertexBuffer3D.hx",108,0xb1ad396e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0849c8e2179fab_127_uploadFromTypedArray,"openfl.display3D.VertexBuffer3D","uploadFromTypedArray",0xeb97089a,"openfl.display3D.VertexBuffer3D.uploadFromTypedArray","openfl/display3D/VertexBuffer3D.hx",127,0xb1ad396e)
HX_LOCAL_STACK_FRAME(_hx_pos_8e0849c8e2179fab_153_uploadFromVector,"openfl.display3D.VertexBuffer3D","uploadFromVector",0xcf228b0e,"openfl.display3D.VertexBuffer3D.uploadFromVector","openfl/display3D/VertexBuffer3D.hx",153,0xb1ad396e)
namespace openfl{
namespace display3D{

void VertexBuffer3D_obj::__construct( ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage){
            	HX_STACKFRAME(&_hx_pos_8e0849c8e2179fab_65_new)
HXLINE(  66)		this->_hx___context = context3D;
HXLINE(  67)		this->_hx___numVertices = numVertices;
HXLINE(  68)		this->_hx___vertexSize = dataPerVertex;
HXLINE(  70)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  72)		this->_hx___id = gl->createBuffer();
HXLINE(  73)		this->_hx___stride = (this->_hx___vertexSize * 4);
HXLINE(  74)		int _hx_tmp;
HXDLIN(  74)		if (::hx::IsEq( ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::fromString(bufferUsage),0 )) {
HXLINE(  74)			_hx_tmp = gl->DYNAMIC_DRAW;
            		}
            		else {
HXLINE(  74)			_hx_tmp = gl->STATIC_DRAW;
            		}
HXDLIN(  74)		this->_hx___usage = _hx_tmp;
            	}

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return new VertexBuffer3D_obj; }

void *VertexBuffer3D_obj::_hx_vtable = 0;

Dynamic VertexBuffer3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VertexBuffer3D_obj > _hx_result = new VertexBuffer3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool VertexBuffer3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c924e78;
}

void VertexBuffer3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_8e0849c8e2179fab_82_dispose)
HXLINE(  83)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  84)		gl->deleteBuffer(this->_hx___id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))

void VertexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startVertex,int numVertices){
            	HX_GC_STACKFRAME(&_hx_pos_8e0849c8e2179fab_108_uploadFromByteArray)
HXLINE( 110)		int offset = (byteArrayOffset + (startVertex * this->_hx___stride));
HXLINE( 111)		int length = (numVertices * this->_hx___vertexSize);
HXLINE( 113)		 ::Dynamic elements = null();
HXDLIN( 113)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 113)		::cpp::VirtualArray array = null();
HXDLIN( 113)		 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 113)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 113)		 ::Dynamic byteoffset = offset;
HXDLIN( 113)		if (::hx::IsNull( byteoffset )) {
HXLINE( 113)			byteoffset = 0;
            		}
HXDLIN( 113)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 113)		if (::hx::IsNotNull( elements )) {
HXLINE( 113)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            		}
            		else {
HXLINE( 113)			if (::hx::IsNotNull( array )) {
HXLINE( 113)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 113)				_this->byteOffset = 0;
HXDLIN( 113)				_this->length = array->get_length();
HXDLIN( 113)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 113)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 113)				_this->buffer = this2;
HXDLIN( 113)				_this->copyFromArray(array,null());
HXDLIN( 113)				this1 = _this;
            			}
            			else {
HXLINE( 113)				if (::hx::IsNotNull( vector )) {
HXLINE( 113)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 113)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 113)					_this->byteOffset = 0;
HXDLIN( 113)					_this->length = array->get_length();
HXDLIN( 113)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 113)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 113)					_this->buffer = this2;
HXDLIN( 113)					_this->copyFromArray(array,null());
HXDLIN( 113)					this1 = _this;
            				}
            				else {
HXLINE( 113)					if (::hx::IsNotNull( view )) {
HXLINE( 113)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 113)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 113)						int srcLength = view->length;
HXDLIN( 113)						int srcByteOffset = view->byteOffset;
HXDLIN( 113)						int srcElementSize = view->bytesPerElement;
HXDLIN( 113)						int elementSize = _this->bytesPerElement;
HXDLIN( 113)						if ((view->type == _this->type)) {
HXLINE( 113)							int srcLength = srcData->length;
HXDLIN( 113)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 113)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 113)							_this->buffer = this1;
HXDLIN( 113)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 113)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 113)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 113)						_this->byteOffset = 0;
HXDLIN( 113)						_this->length = srcLength;
HXDLIN( 113)						this1 = _this;
            					}
            					else {
HXLINE( 113)						if (::hx::IsNotNull( buffer )) {
HXLINE( 113)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 113)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 113)							if ((in_byteOffset < 0)) {
HXLINE( 113)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 113)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 113)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 113)							int bufferByteLength = buffer->length;
HXDLIN( 113)							int elementSize = _this->bytesPerElement;
HXDLIN( 113)							int newByteLength = bufferByteLength;
HXDLIN( 113)							if (::hx::IsNull( length )) {
HXLINE( 113)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 113)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 113)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 113)								if ((newByteLength < 0)) {
HXLINE( 113)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 113)								newByteLength = (length * _this->bytesPerElement);
HXDLIN( 113)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 113)								if ((newRange > bufferByteLength)) {
HXLINE( 113)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 113)							_this->buffer = buffer;
HXDLIN( 113)							_this->byteOffset = in_byteOffset;
HXDLIN( 113)							_this->byteLength = newByteLength;
HXDLIN( 113)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 113)							this1 = _this;
            						}
            						else {
HXLINE( 113)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 113)		this->uploadFromTypedArray(this1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

void VertexBuffer3D_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_byteLength){
            		int byteLength = __o_byteLength.Default(-1);
            	HX_STACKFRAME(&_hx_pos_8e0849c8e2179fab_127_uploadFromTypedArray)
HXLINE( 128)		if (::hx::IsNull( data )) {
HXLINE( 128)			return;
            		}
HXLINE( 129)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 131)		this->_hx___context->_hx___bindGLArrayBuffer(this->_hx___id);
HXLINE( 132)		::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::bufferData(gl,gl->ARRAY_BUFFER,data,this->_hx___usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(VertexBuffer3D_obj,uploadFromTypedArray,(void))

void VertexBuffer3D_obj::uploadFromVector( ::openfl::_Vector::FloatVector data,int startVertex,int numVertices){
            	HX_GC_STACKFRAME(&_hx_pos_8e0849c8e2179fab_153_uploadFromVector)
HXLINE( 155)		if (::hx::IsNull( data )) {
HXLINE( 155)			return;
            		}
HXLINE( 156)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 160)		int start = (startVertex * this->_hx___vertexSize);
HXLINE( 161)		int count = (numVertices * this->_hx___vertexSize);
HXLINE( 162)		int length = (start + count);
HXLINE( 164)		 ::lime::utils::ArrayBufferView existingFloat32Array = this->_hx___tempFloat32Array;
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		if (::hx::IsNotNull( this->_hx___tempFloat32Array )) {
HXLINE( 166)			_hx_tmp = (this->_hx___tempFloat32Array->length < count);
            		}
            		else {
HXLINE( 166)			_hx_tmp = true;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 168)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 168)			::cpp::VirtualArray array = null();
HXDLIN( 168)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 168)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 168)			 ::Dynamic len = null();
HXDLIN( 168)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 168)			if (::hx::IsNotNull( count )) {
HXLINE( 168)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,count,8);
            			}
            			else {
HXLINE( 168)				if (::hx::IsNotNull( array )) {
HXLINE( 168)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 168)					_this->byteOffset = 0;
HXDLIN( 168)					_this->length = array->get_length();
HXDLIN( 168)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 168)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 168)					_this->buffer = this2;
HXDLIN( 168)					_this->copyFromArray(array,null());
HXDLIN( 168)					this1 = _this;
            				}
            				else {
HXLINE( 168)					if (::hx::IsNotNull( vector )) {
HXLINE( 168)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 168)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 168)						_this->byteOffset = 0;
HXDLIN( 168)						_this->length = array->get_length();
HXDLIN( 168)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 168)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 168)						_this->buffer = this2;
HXDLIN( 168)						_this->copyFromArray(array,null());
HXDLIN( 168)						this1 = _this;
            					}
            					else {
HXLINE( 168)						if (::hx::IsNotNull( view )) {
HXLINE( 168)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 168)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 168)							int srcLength = view->length;
HXDLIN( 168)							int srcByteOffset = view->byteOffset;
HXDLIN( 168)							int srcElementSize = view->bytesPerElement;
HXDLIN( 168)							int elementSize = _this->bytesPerElement;
HXDLIN( 168)							if ((view->type == _this->type)) {
HXLINE( 168)								int srcLength = srcData->length;
HXDLIN( 168)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 168)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 168)								_this->buffer = this1;
HXDLIN( 168)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 168)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 168)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 168)							_this->byteOffset = 0;
HXDLIN( 168)							_this->length = srcLength;
HXDLIN( 168)							this1 = _this;
            						}
            						else {
HXLINE( 168)							if (::hx::IsNotNull( buffer )) {
HXLINE( 168)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 168)								int in_byteOffset = 0;
HXDLIN( 168)								if ((in_byteOffset < 0)) {
HXLINE( 168)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 168)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 168)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 168)								int bufferByteLength = buffer->length;
HXDLIN( 168)								int elementSize = _this->bytesPerElement;
HXDLIN( 168)								int newByteLength = bufferByteLength;
HXDLIN( 168)								if (::hx::IsNull( len )) {
HXLINE( 168)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 168)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 168)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 168)									if ((newByteLength < 0)) {
HXLINE( 168)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 168)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 168)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 168)									if ((newRange > bufferByteLength)) {
HXLINE( 168)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 168)								_this->buffer = buffer;
HXDLIN( 168)								_this->byteOffset = in_byteOffset;
HXDLIN( 168)								_this->byteLength = newByteLength;
HXDLIN( 168)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 168)								this1 = _this;
            							}
            							else {
HXLINE( 168)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 168)			this->_hx___tempFloat32Array = this1;
HXLINE( 170)			if (::hx::IsNotNull( existingFloat32Array )) {
HXLINE( 172)				 ::lime::utils::ArrayBufferView _this = this->_hx___tempFloat32Array;
HXDLIN( 172)				::cpp::VirtualArray array = null();
HXDLIN( 172)				int offset = 0;
HXDLIN( 172)				bool _hx_tmp;
HXDLIN( 172)				if (::hx::IsNotNull( existingFloat32Array )) {
HXLINE( 172)					_hx_tmp = ::hx::IsNull( array );
            				}
            				else {
HXLINE( 172)					_hx_tmp = false;
            				}
HXDLIN( 172)				if (_hx_tmp) {
HXLINE( 172)					_this->buffer->blit((offset * _this->bytesPerElement),existingFloat32Array->buffer,existingFloat32Array->byteOffset,existingFloat32Array->byteLength);
            				}
            				else {
HXLINE( 172)					bool _hx_tmp;
HXDLIN( 172)					if (::hx::IsNotNull( array )) {
HXLINE( 172)						_hx_tmp = ::hx::IsNull( existingFloat32Array );
            					}
            					else {
HXLINE( 172)						_hx_tmp = false;
            					}
HXDLIN( 172)					if (_hx_tmp) {
HXLINE( 172)						_this->copyFromArray(array,offset);
            					}
            					else {
HXLINE( 172)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            					}
            				}
            			}
            		}
HXLINE( 176)		{
HXLINE( 176)			int _g = start;
HXDLIN( 176)			int _g1 = length;
HXDLIN( 176)			while((_g < _g1)){
HXLINE( 176)				_g = (_g + 1);
HXDLIN( 176)				int i = (_g - 1);
HXLINE( 178)				{
HXLINE( 178)					 ::lime::utils::ArrayBufferView this1 = this->_hx___tempFloat32Array;
HXDLIN( 178)					Float val = data->get(i);
HXDLIN( 178)					 ::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + ((i - start) * 4)),val);
            				}
            			}
            		}
HXLINE( 181)		this->uploadFromTypedArray(this->_hx___tempFloat32Array,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))


::hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new( ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage) {
	::hx::ObjectPtr< VertexBuffer3D_obj > __this = new VertexBuffer3D_obj();
	__this->__construct(context3D,numVertices,dataPerVertex,bufferUsage);
	return __this;
}

::hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage) {
	VertexBuffer3D_obj *__this = (VertexBuffer3D_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VertexBuffer3D_obj), true, "openfl.display3D.VertexBuffer3D"));
	*(void **)__this = VertexBuffer3D_obj::_hx_vtable;
	__this->__construct(context3D,numVertices,dataPerVertex,bufferUsage);
	return __this;
}

VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_MEMBER_NAME(_hx___id,"__id");
	HX_MARK_MEMBER_NAME(_hx___memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(_hx___numVertices,"__numVertices");
	HX_MARK_MEMBER_NAME(_hx___stride,"__stride");
	HX_MARK_MEMBER_NAME(_hx___tempFloat32Array,"__tempFloat32Array");
	HX_MARK_MEMBER_NAME(_hx___usage,"__usage");
	HX_MARK_MEMBER_NAME(_hx___vertexSize,"__vertexSize");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
	HX_VISIT_MEMBER_NAME(_hx___id,"__id");
	HX_VISIT_MEMBER_NAME(_hx___memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(_hx___numVertices,"__numVertices");
	HX_VISIT_MEMBER_NAME(_hx___stride,"__stride");
	HX_VISIT_MEMBER_NAME(_hx___tempFloat32Array,"__tempFloat32Array");
	HX_VISIT_MEMBER_NAME(_hx___usage,"__usage");
	HX_VISIT_MEMBER_NAME(_hx___vertexSize,"__vertexSize");
}

::hx::Val VertexBuffer3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return ::hx::Val( _hx___id ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return ::hx::Val( _hx___data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { return ::hx::Val( _hx___usage ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__stride") ) { return ::hx::Val( _hx___stride ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexSize") ) { return ::hx::Val( _hx___vertexSize ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return ::hx::Val( _hx___memoryUsage ); }
		if (HX_FIELD_EQ(inName,"__numVertices") ) { return ::hx::Val( _hx___numVertices ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return ::hx::Val( uploadFromVector_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__tempFloat32Array") ) { return ::hx::Val( _hx___tempFloat32Array ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return ::hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return ::hx::Val( uploadFromTypedArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VertexBuffer3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { _hx___id=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { _hx___usage=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__stride") ) { _hx___stride=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__vertexSize") ) { _hx___vertexSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { _hx___memoryUsage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__numVertices") ) { _hx___numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__tempFloat32Array") ) { _hx___tempFloat32Array=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__data",4a,b9,5b,f1));
	outFields->push(HX_("__id",fb,b6,13,3f));
	outFields->push(HX_("__memoryUsage",40,bf,50,c5));
	outFields->push(HX_("__numVertices",3f,51,a4,9e));
	outFields->push(HX_("__stride",39,8b,5f,b9));
	outFields->push(HX_("__tempFloat32Array",b2,e6,d3,6c));
	outFields->push(HX_("__usage",01,b6,8d,14));
	outFields->push(HX_("__vertexSize",65,a5,a3,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VertexBuffer3D_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display3D::Context3D */ ,(int)offsetof(VertexBuffer3D_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(VertexBuffer3D_obj,_hx___data),HX_("__data",4a,b9,5b,f1)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(VertexBuffer3D_obj,_hx___id),HX_("__id",fb,b6,13,3f)},
	{::hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___memoryUsage),HX_("__memoryUsage",40,bf,50,c5)},
	{::hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___numVertices),HX_("__numVertices",3f,51,a4,9e)},
	{::hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___stride),HX_("__stride",39,8b,5f,b9)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(VertexBuffer3D_obj,_hx___tempFloat32Array),HX_("__tempFloat32Array",b2,e6,d3,6c)},
	{::hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___usage),HX_("__usage",01,b6,8d,14)},
	{::hx::fsInt,(int)offsetof(VertexBuffer3D_obj,_hx___vertexSize),HX_("__vertexSize",65,a5,a3,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VertexBuffer3D_obj_sStaticStorageInfo = 0;
#endif

static ::String VertexBuffer3D_obj_sMemberFields[] = {
	HX_("__context",cf,e6,c5,9a),
	HX_("__data",4a,b9,5b,f1),
	HX_("__id",fb,b6,13,3f),
	HX_("__memoryUsage",40,bf,50,c5),
	HX_("__numVertices",3f,51,a4,9e),
	HX_("__stride",39,8b,5f,b9),
	HX_("__tempFloat32Array",b2,e6,d3,6c),
	HX_("__usage",01,b6,8d,14),
	HX_("__vertexSize",65,a5,a3,15),
	HX_("dispose",9f,80,4c,bb),
	HX_("uploadFromByteArray",e6,17,1b,ee),
	HX_("uploadFromTypedArray",ba,7c,f4,d1),
	HX_("uploadFromVector",2e,6f,6b,a8),
	::String(null()) };

::hx::Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	VertexBuffer3D_obj _hx_dummy;
	VertexBuffer3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.VertexBuffer3D",8e,20,03,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VertexBuffer3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VertexBuffer3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VertexBuffer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VertexBuffer3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
