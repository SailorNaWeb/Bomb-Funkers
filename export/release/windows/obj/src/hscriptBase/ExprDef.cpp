#include <hxcpp.h>

#ifndef INCLUDED_hscriptBase_CType
#include <hscriptBase/CType.h>
#endif
#ifndef INCLUDED_hscriptBase_Const
#include <hscriptBase/Const.h>
#endif
#ifndef INCLUDED_hscriptBase_ExprDef
#include <hscriptBase/ExprDef.h>
#endif
namespace hscriptBase{

::hscriptBase::ExprDef ExprDef_obj::EArray( ::Dynamic e, ::Dynamic index)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EArray",14,c3,5c,4f),18,2)->_hx_init(0,e)->_hx_init(1,index);
}

::hscriptBase::ExprDef ExprDef_obj::EArrayDecl(::Array< ::Dynamic> e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EArrayDecl",9e,59,bd,01),19,1)->_hx_init(0,e);
}

::hscriptBase::ExprDef ExprDef_obj::EBinop(::String op, ::Dynamic e1, ::Dynamic e2)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EBinop",23,6f,cd,dc),7,3)->_hx_init(0,op)->_hx_init(1,e1)->_hx_init(2,e2);
}

::hscriptBase::ExprDef ExprDef_obj::EBlock(::Array< ::Dynamic> e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EBlock",c8,ca,c9,de),5,1)->_hx_init(0,e);
}

::hscriptBase::ExprDef ExprDef_obj::EBreak;

::hscriptBase::ExprDef ExprDef_obj::ECall( ::Dynamic e,::Array< ::Dynamic> params)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ECall",83,4b,39,e7),9,2)->_hx_init(0,e)->_hx_init(1,params);
}

::hscriptBase::ExprDef ExprDef_obj::ECheckType( ::Dynamic e, ::hscriptBase::CType t)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ECheckType",9d,ea,cd,16),31,2)->_hx_init(0,e)->_hx_init(1,t);
}

::hscriptBase::ExprDef ExprDef_obj::ECoalesce( ::Dynamic e1, ::Dynamic e2,bool assign)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ECoalesce",0c,76,12,16),13,3)->_hx_init(0,e1)->_hx_init(1,e2)->_hx_init(2,assign);
}

::hscriptBase::ExprDef ExprDef_obj::EConst( ::hscriptBase::Const c)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EConst",de,4e,2b,74),0,1)->_hx_init(0,c);
}

::hscriptBase::ExprDef ExprDef_obj::EContinue;

::hscriptBase::ExprDef ExprDef_obj::EDoWhile( ::Dynamic cond, ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EDoWhile",61,0e,d4,34),26,2)->_hx_init(0,cond)->_hx_init(1,e);
}

::hscriptBase::ExprDef ExprDef_obj::EField( ::Dynamic e,::String f)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EField",35,ea,60,2a),6,2)->_hx_init(0,e)->_hx_init(1,f);
}

::hscriptBase::ExprDef ExprDef_obj::EFinal(::String f, ::hscriptBase::CType t, ::Dynamic e, ::Dynamic p)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EFinal",f1,b4,67,2a),3,4)->_hx_init(0,f)->_hx_init(1,t)->_hx_init(2,e)->_hx_init(3,p);
}

::hscriptBase::ExprDef ExprDef_obj::EFor(::String v, ::Dynamic it, ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EFor",c4,37,d1,2d),12,3)->_hx_init(0,v)->_hx_init(1,it)->_hx_init(2,e);
}

::hscriptBase::ExprDef ExprDef_obj::EFunction(::Array< ::Dynamic> args, ::Dynamic e,::String name, ::hscriptBase::CType ret, ::Dynamic p, ::Dynamic d)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EFunction",7d,b4,15,c9),16,6)->_hx_init(0,args)->_hx_init(1,e)->_hx_init(2,name)->_hx_init(3,ret)->_hx_init(4,p)->_hx_init(5,d);
}

::hscriptBase::ExprDef ExprDef_obj::EIdent(::String v, ::Dynamic isFinal)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EIdent",6b,98,46,e1),1,2)->_hx_init(0,v)->_hx_init(1,isFinal);
}

::hscriptBase::ExprDef ExprDef_obj::EIf( ::Dynamic cond, ::Dynamic e1, ::Dynamic e2)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EIf",82,9b,34,00),10,3)->_hx_init(0,cond)->_hx_init(1,e1)->_hx_init(2,e2);
}

::hscriptBase::ExprDef ExprDef_obj::EImport( ::Dynamic i,::String c,::cpp::VirtualArray ps)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EImport",8a,17,60,72),28,3)->_hx_init(0,i)->_hx_init(1,c)->_hx_init(2,ps);
}

::hscriptBase::ExprDef ExprDef_obj::EMeta(::String name,::Array< ::Dynamic> args, ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EMeta",aa,7d,d8,ed),30,3)->_hx_init(0,name)->_hx_init(1,args)->_hx_init(2,e);
}

::hscriptBase::ExprDef ExprDef_obj::ENew(::String cl,::Array< ::Dynamic> params)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ENew",1b,41,d7,2d),20,2)->_hx_init(0,cl)->_hx_init(1,params);
}

::hscriptBase::ExprDef ExprDef_obj::EObject(::Array< ::Dynamic> fl)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EObject",e4,f4,1c,7f),23,1)->_hx_init(0,fl);
}

::hscriptBase::ExprDef ExprDef_obj::EPackage(::String p)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EPackage",c1,15,9b,79),29,1)->_hx_init(0,p);
}

::hscriptBase::ExprDef ExprDef_obj::EParent( ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EParent",4f,7b,5b,57),4,1)->_hx_init(0,e);
}

::hscriptBase::ExprDef ExprDef_obj::EReturn( ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EReturn",d5,1a,0b,73),17,1)->_hx_init(0,e);
}

::hscriptBase::ExprDef ExprDef_obj::ESwitch( ::Dynamic e,::Array< ::Dynamic> cases, ::Dynamic defaultExpr)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ESwitch",19,c0,56,2f),25,3)->_hx_init(0,e)->_hx_init(1,cases)->_hx_init(2,defaultExpr);
}

::hscriptBase::ExprDef ExprDef_obj::ETernary( ::Dynamic cond, ::Dynamic e1, ::Dynamic e2)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ETernary",56,c3,5c,5e),24,3)->_hx_init(0,cond)->_hx_init(1,e1)->_hx_init(2,e2);
}

::hscriptBase::ExprDef ExprDef_obj::EThrow( ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EThrow",a1,b2,5d,39),21,1)->_hx_init(0,e);
}

::hscriptBase::ExprDef ExprDef_obj::ETry( ::Dynamic e,::String v, ::hscriptBase::CType t, ::Dynamic ecatch)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("ETry",f6,d9,db,2d),22,4)->_hx_init(0,e)->_hx_init(1,v)->_hx_init(2,t)->_hx_init(3,ecatch);
}

::hscriptBase::ExprDef ExprDef_obj::EUnop(::String op,bool prefix, ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EUnop",9f,02,29,f3),8,3)->_hx_init(0,op)->_hx_init(1,prefix)->_hx_init(2,e);
}

::hscriptBase::ExprDef ExprDef_obj::EUsing( ::Dynamic op,::String n)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EUsing",bf,ca,02,d4),27,2)->_hx_init(0,op)->_hx_init(1,n);
}

::hscriptBase::ExprDef ExprDef_obj::EVar(::String n, ::hscriptBase::CType t, ::Dynamic e, ::Dynamic p,::Array< ::String > g)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EVar",a2,4f,dd,2d),2,5)->_hx_init(0,n)->_hx_init(1,t)->_hx_init(2,e)->_hx_init(3,p)->_hx_init(4,g);
}

::hscriptBase::ExprDef ExprDef_obj::EWhile( ::Dynamic cond, ::Dynamic e)
{
	return ::hx::CreateEnum< ExprDef_obj >(HX_("EWhile",2c,99,8a,f3),11,2)->_hx_init(0,cond)->_hx_init(1,e);
}

bool ExprDef_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) { outValue = ExprDef_obj::EArray_dyn(); return true; }
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) { outValue = ExprDef_obj::EArrayDecl_dyn(); return true; }
	if (inName==HX_("EBinop",23,6f,cd,dc)) { outValue = ExprDef_obj::EBinop_dyn(); return true; }
	if (inName==HX_("EBlock",c8,ca,c9,de)) { outValue = ExprDef_obj::EBlock_dyn(); return true; }
	if (inName==HX_("EBreak",3a,7a,b9,e2)) { outValue = ExprDef_obj::EBreak; return true; }
	if (inName==HX_("ECall",83,4b,39,e7)) { outValue = ExprDef_obj::ECall_dyn(); return true; }
	if (inName==HX_("ECheckType",9d,ea,cd,16)) { outValue = ExprDef_obj::ECheckType_dyn(); return true; }
	if (inName==HX_("ECoalesce",0c,76,12,16)) { outValue = ExprDef_obj::ECoalesce_dyn(); return true; }
	if (inName==HX_("EConst",de,4e,2b,74)) { outValue = ExprDef_obj::EConst_dyn(); return true; }
	if (inName==HX_("EContinue",cc,e9,8b,e6)) { outValue = ExprDef_obj::EContinue; return true; }
	if (inName==HX_("EDoWhile",61,0e,d4,34)) { outValue = ExprDef_obj::EDoWhile_dyn(); return true; }
	if (inName==HX_("EField",35,ea,60,2a)) { outValue = ExprDef_obj::EField_dyn(); return true; }
	if (inName==HX_("EFinal",f1,b4,67,2a)) { outValue = ExprDef_obj::EFinal_dyn(); return true; }
	if (inName==HX_("EFor",c4,37,d1,2d)) { outValue = ExprDef_obj::EFor_dyn(); return true; }
	if (inName==HX_("EFunction",7d,b4,15,c9)) { outValue = ExprDef_obj::EFunction_dyn(); return true; }
	if (inName==HX_("EIdent",6b,98,46,e1)) { outValue = ExprDef_obj::EIdent_dyn(); return true; }
	if (inName==HX_("EIf",82,9b,34,00)) { outValue = ExprDef_obj::EIf_dyn(); return true; }
	if (inName==HX_("EImport",8a,17,60,72)) { outValue = ExprDef_obj::EImport_dyn(); return true; }
	if (inName==HX_("EMeta",aa,7d,d8,ed)) { outValue = ExprDef_obj::EMeta_dyn(); return true; }
	if (inName==HX_("ENew",1b,41,d7,2d)) { outValue = ExprDef_obj::ENew_dyn(); return true; }
	if (inName==HX_("EObject",e4,f4,1c,7f)) { outValue = ExprDef_obj::EObject_dyn(); return true; }
	if (inName==HX_("EPackage",c1,15,9b,79)) { outValue = ExprDef_obj::EPackage_dyn(); return true; }
	if (inName==HX_("EParent",4f,7b,5b,57)) { outValue = ExprDef_obj::EParent_dyn(); return true; }
	if (inName==HX_("EReturn",d5,1a,0b,73)) { outValue = ExprDef_obj::EReturn_dyn(); return true; }
	if (inName==HX_("ESwitch",19,c0,56,2f)) { outValue = ExprDef_obj::ESwitch_dyn(); return true; }
	if (inName==HX_("ETernary",56,c3,5c,5e)) { outValue = ExprDef_obj::ETernary_dyn(); return true; }
	if (inName==HX_("EThrow",a1,b2,5d,39)) { outValue = ExprDef_obj::EThrow_dyn(); return true; }
	if (inName==HX_("ETry",f6,d9,db,2d)) { outValue = ExprDef_obj::ETry_dyn(); return true; }
	if (inName==HX_("EUnop",9f,02,29,f3)) { outValue = ExprDef_obj::EUnop_dyn(); return true; }
	if (inName==HX_("EUsing",bf,ca,02,d4)) { outValue = ExprDef_obj::EUsing_dyn(); return true; }
	if (inName==HX_("EVar",a2,4f,dd,2d)) { outValue = ExprDef_obj::EVar_dyn(); return true; }
	if (inName==HX_("EWhile",2c,99,8a,f3)) { outValue = ExprDef_obj::EWhile_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ExprDef_obj)

int ExprDef_obj::__FindIndex(::String inName)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return 18;
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return 19;
	if (inName==HX_("EBinop",23,6f,cd,dc)) return 7;
	if (inName==HX_("EBlock",c8,ca,c9,de)) return 5;
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return 14;
	if (inName==HX_("ECall",83,4b,39,e7)) return 9;
	if (inName==HX_("ECheckType",9d,ea,cd,16)) return 31;
	if (inName==HX_("ECoalesce",0c,76,12,16)) return 13;
	if (inName==HX_("EConst",de,4e,2b,74)) return 0;
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return 15;
	if (inName==HX_("EDoWhile",61,0e,d4,34)) return 26;
	if (inName==HX_("EField",35,ea,60,2a)) return 6;
	if (inName==HX_("EFinal",f1,b4,67,2a)) return 3;
	if (inName==HX_("EFor",c4,37,d1,2d)) return 12;
	if (inName==HX_("EFunction",7d,b4,15,c9)) return 16;
	if (inName==HX_("EIdent",6b,98,46,e1)) return 1;
	if (inName==HX_("EIf",82,9b,34,00)) return 10;
	if (inName==HX_("EImport",8a,17,60,72)) return 28;
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return 30;
	if (inName==HX_("ENew",1b,41,d7,2d)) return 20;
	if (inName==HX_("EObject",e4,f4,1c,7f)) return 23;
	if (inName==HX_("EPackage",c1,15,9b,79)) return 29;
	if (inName==HX_("EParent",4f,7b,5b,57)) return 4;
	if (inName==HX_("EReturn",d5,1a,0b,73)) return 17;
	if (inName==HX_("ESwitch",19,c0,56,2f)) return 25;
	if (inName==HX_("ETernary",56,c3,5c,5e)) return 24;
	if (inName==HX_("EThrow",a1,b2,5d,39)) return 21;
	if (inName==HX_("ETry",f6,d9,db,2d)) return 22;
	if (inName==HX_("EUnop",9f,02,29,f3)) return 8;
	if (inName==HX_("EUsing",bf,ca,02,d4)) return 27;
	if (inName==HX_("EVar",a2,4f,dd,2d)) return 2;
	if (inName==HX_("EWhile",2c,99,8a,f3)) return 11;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ECall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ECheckType,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,ECoalesce,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EDoWhile,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ExprDef_obj,EFinal,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(ExprDef_obj,EFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EImport,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EMeta,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,ENew,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EPackage,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,ESwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,ETernary,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ExprDef_obj,EThrow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ExprDef_obj,ETry,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(ExprDef_obj,EUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EUsing,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(ExprDef_obj,EVar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExprDef_obj,EWhile,return)

int ExprDef_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return 2;
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return 1;
	if (inName==HX_("EBinop",23,6f,cd,dc)) return 3;
	if (inName==HX_("EBlock",c8,ca,c9,de)) return 1;
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return 0;
	if (inName==HX_("ECall",83,4b,39,e7)) return 2;
	if (inName==HX_("ECheckType",9d,ea,cd,16)) return 2;
	if (inName==HX_("ECoalesce",0c,76,12,16)) return 3;
	if (inName==HX_("EConst",de,4e,2b,74)) return 1;
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return 0;
	if (inName==HX_("EDoWhile",61,0e,d4,34)) return 2;
	if (inName==HX_("EField",35,ea,60,2a)) return 2;
	if (inName==HX_("EFinal",f1,b4,67,2a)) return 4;
	if (inName==HX_("EFor",c4,37,d1,2d)) return 3;
	if (inName==HX_("EFunction",7d,b4,15,c9)) return 6;
	if (inName==HX_("EIdent",6b,98,46,e1)) return 2;
	if (inName==HX_("EIf",82,9b,34,00)) return 3;
	if (inName==HX_("EImport",8a,17,60,72)) return 3;
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return 3;
	if (inName==HX_("ENew",1b,41,d7,2d)) return 2;
	if (inName==HX_("EObject",e4,f4,1c,7f)) return 1;
	if (inName==HX_("EPackage",c1,15,9b,79)) return 1;
	if (inName==HX_("EParent",4f,7b,5b,57)) return 1;
	if (inName==HX_("EReturn",d5,1a,0b,73)) return 1;
	if (inName==HX_("ESwitch",19,c0,56,2f)) return 3;
	if (inName==HX_("ETernary",56,c3,5c,5e)) return 3;
	if (inName==HX_("EThrow",a1,b2,5d,39)) return 1;
	if (inName==HX_("ETry",f6,d9,db,2d)) return 4;
	if (inName==HX_("EUnop",9f,02,29,f3)) return 3;
	if (inName==HX_("EUsing",bf,ca,02,d4)) return 2;
	if (inName==HX_("EVar",a2,4f,dd,2d)) return 5;
	if (inName==HX_("EWhile",2c,99,8a,f3)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val ExprDef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("EArray",14,c3,5c,4f)) return EArray_dyn();
	if (inName==HX_("EArrayDecl",9e,59,bd,01)) return EArrayDecl_dyn();
	if (inName==HX_("EBinop",23,6f,cd,dc)) return EBinop_dyn();
	if (inName==HX_("EBlock",c8,ca,c9,de)) return EBlock_dyn();
	if (inName==HX_("EBreak",3a,7a,b9,e2)) return EBreak;
	if (inName==HX_("ECall",83,4b,39,e7)) return ECall_dyn();
	if (inName==HX_("ECheckType",9d,ea,cd,16)) return ECheckType_dyn();
	if (inName==HX_("ECoalesce",0c,76,12,16)) return ECoalesce_dyn();
	if (inName==HX_("EConst",de,4e,2b,74)) return EConst_dyn();
	if (inName==HX_("EContinue",cc,e9,8b,e6)) return EContinue;
	if (inName==HX_("EDoWhile",61,0e,d4,34)) return EDoWhile_dyn();
	if (inName==HX_("EField",35,ea,60,2a)) return EField_dyn();
	if (inName==HX_("EFinal",f1,b4,67,2a)) return EFinal_dyn();
	if (inName==HX_("EFor",c4,37,d1,2d)) return EFor_dyn();
	if (inName==HX_("EFunction",7d,b4,15,c9)) return EFunction_dyn();
	if (inName==HX_("EIdent",6b,98,46,e1)) return EIdent_dyn();
	if (inName==HX_("EIf",82,9b,34,00)) return EIf_dyn();
	if (inName==HX_("EImport",8a,17,60,72)) return EImport_dyn();
	if (inName==HX_("EMeta",aa,7d,d8,ed)) return EMeta_dyn();
	if (inName==HX_("ENew",1b,41,d7,2d)) return ENew_dyn();
	if (inName==HX_("EObject",e4,f4,1c,7f)) return EObject_dyn();
	if (inName==HX_("EPackage",c1,15,9b,79)) return EPackage_dyn();
	if (inName==HX_("EParent",4f,7b,5b,57)) return EParent_dyn();
	if (inName==HX_("EReturn",d5,1a,0b,73)) return EReturn_dyn();
	if (inName==HX_("ESwitch",19,c0,56,2f)) return ESwitch_dyn();
	if (inName==HX_("ETernary",56,c3,5c,5e)) return ETernary_dyn();
	if (inName==HX_("EThrow",a1,b2,5d,39)) return EThrow_dyn();
	if (inName==HX_("ETry",f6,d9,db,2d)) return ETry_dyn();
	if (inName==HX_("EUnop",9f,02,29,f3)) return EUnop_dyn();
	if (inName==HX_("EUsing",bf,ca,02,d4)) return EUsing_dyn();
	if (inName==HX_("EVar",a2,4f,dd,2d)) return EVar_dyn();
	if (inName==HX_("EWhile",2c,99,8a,f3)) return EWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ExprDef_obj_sStaticFields[] = {
	HX_("EConst",de,4e,2b,74),
	HX_("EIdent",6b,98,46,e1),
	HX_("EVar",a2,4f,dd,2d),
	HX_("EFinal",f1,b4,67,2a),
	HX_("EParent",4f,7b,5b,57),
	HX_("EBlock",c8,ca,c9,de),
	HX_("EField",35,ea,60,2a),
	HX_("EBinop",23,6f,cd,dc),
	HX_("EUnop",9f,02,29,f3),
	HX_("ECall",83,4b,39,e7),
	HX_("EIf",82,9b,34,00),
	HX_("EWhile",2c,99,8a,f3),
	HX_("EFor",c4,37,d1,2d),
	HX_("ECoalesce",0c,76,12,16),
	HX_("EBreak",3a,7a,b9,e2),
	HX_("EContinue",cc,e9,8b,e6),
	HX_("EFunction",7d,b4,15,c9),
	HX_("EReturn",d5,1a,0b,73),
	HX_("EArray",14,c3,5c,4f),
	HX_("EArrayDecl",9e,59,bd,01),
	HX_("ENew",1b,41,d7,2d),
	HX_("EThrow",a1,b2,5d,39),
	HX_("ETry",f6,d9,db,2d),
	HX_("EObject",e4,f4,1c,7f),
	HX_("ETernary",56,c3,5c,5e),
	HX_("ESwitch",19,c0,56,2f),
	HX_("EDoWhile",61,0e,d4,34),
	HX_("EUsing",bf,ca,02,d4),
	HX_("EImport",8a,17,60,72),
	HX_("EPackage",c1,15,9b,79),
	HX_("EMeta",aa,7d,d8,ed),
	HX_("ECheckType",9d,ea,cd,16),
	::String(null())
};

::hx::Class ExprDef_obj::__mClass;

Dynamic __Create_ExprDef_obj() { return new ExprDef_obj; }

void ExprDef_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hscriptBase.ExprDef",26,27,22,2c), ::hx::TCanCast< ExprDef_obj >,ExprDef_obj_sStaticFields,0,
	&__Create_ExprDef_obj, &__Create,
	&super::__SGetClass(), &CreateExprDef_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ExprDef_obj::__GetStatic;
}

void ExprDef_obj::__boot()
{
EBreak = ::hx::CreateConstEnum< ExprDef_obj >(HX_("EBreak",3a,7a,b9,e2),14);
EContinue = ::hx::CreateConstEnum< ExprDef_obj >(HX_("EContinue",cc,e9,8b,e6),15);
}


} // end namespace hscriptBase
