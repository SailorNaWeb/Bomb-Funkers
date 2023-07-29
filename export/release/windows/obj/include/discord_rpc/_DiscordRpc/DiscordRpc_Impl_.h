#ifndef INCLUDED_discord_rpc__DiscordRpc_DiscordRpc_Impl_
#define INCLUDED_discord_rpc__DiscordRpc_DiscordRpc_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_0f6f533a2f6f9a23
#define INCLUDED_0f6f533a2f6f9a23
#include "linc_discord_rpc.h"
#endif
HX_DECLARE_CLASS2(discord_rpc,_DiscordRpc,DiscordRpc_Impl_)

namespace discord_rpc{
namespace _DiscordRpc{


class HXCPP_CLASS_ATTRIBUTES DiscordRpc_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DiscordRpc_Impl__obj OBJ_;
		DiscordRpc_Impl__obj();

	public:
		enum { _hx_ClassId = 0x403ef55f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="discord_rpc._DiscordRpc.DiscordRpc_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"discord_rpc._DiscordRpc.DiscordRpc_Impl_"); }

		inline static ::hx::ObjectPtr< DiscordRpc_Impl__obj > __new() {
			::hx::ObjectPtr< DiscordRpc_Impl__obj > __this = new DiscordRpc_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DiscordRpc_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			DiscordRpc_Impl__obj *__this = (DiscordRpc_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DiscordRpc_Impl__obj), false, "discord_rpc._DiscordRpc.DiscordRpc_Impl_"));
			*(void **)__this = DiscordRpc_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DiscordRpc_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DiscordRpc_Impl_",19,46,2b,6c); }

		static void _onRequest(const  DiscordJoinRequest* _data);

		static void _onSpectate(const char* _secret);

		static void _onJoin(const char* _secret);

		static void _onError(int _errorCode,const char* _message);

		static void _onDisconnected(int _errorCode,const char* _message);

		static void _onReady();
		static ::Dynamic _onReady_dyn();

};

} // end namespace discord_rpc
} // end namespace _DiscordRpc

#endif /* INCLUDED_discord_rpc__DiscordRpc_DiscordRpc_Impl_ */ 
