

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for Lb3AutoSrv10333.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Lb3AutoSrv10333_i_h__
#define __Lb3AutoSrv10333_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IMyMath_FWD_DEFINED__
#define __IMyMath_FWD_DEFINED__
typedef interface IMyMath IMyMath;

#endif 	/* __IMyMath_FWD_DEFINED__ */


#ifndef __MyMath_FWD_DEFINED__
#define __MyMath_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyMath MyMath;
#else
typedef struct MyMath MyMath;
#endif /* __cplusplus */

#endif 	/* __MyMath_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMyMath_INTERFACE_DEFINED__
#define __IMyMath_INTERFACE_DEFINED__

/* interface IMyMath */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyMath;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c33029b7-a92e-49e7-8b93-23353b280192")
    IMyMath : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fun91( 
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fun92( 
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [out] */ FLOAT *result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Fun93( 
            /* [in] */ DOUBLE in,
            /* [out] */ DOUBLE *out) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMyMathVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyMath * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyMath * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyMath * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyMath * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyMath * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyMath * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyMath * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IMyMath, Fun91)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fun91 )( 
            IMyMath * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *result);
        
        DECLSPEC_XFGVIRT(IMyMath, Fun92)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fun92 )( 
            IMyMath * This,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [out] */ FLOAT *result);
        
        DECLSPEC_XFGVIRT(IMyMath, Fun93)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Fun93 )( 
            IMyMath * This,
            /* [in] */ DOUBLE in,
            /* [out] */ DOUBLE *out);
        
        END_INTERFACE
    } IMyMathVtbl;

    interface IMyMath
    {
        CONST_VTBL struct IMyMathVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyMath_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyMath_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyMath_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyMath_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyMath_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyMath_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyMath_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMyMath_Fun91(This,x,y,result)	\
    ( (This)->lpVtbl -> Fun91(This,x,y,result) ) 

#define IMyMath_Fun92(This,x,y,result)	\
    ( (This)->lpVtbl -> Fun92(This,x,y,result) ) 

#define IMyMath_Fun93(This,in,out)	\
    ( (This)->lpVtbl -> Fun93(This,in,out) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyMath_INTERFACE_DEFINED__ */



#ifndef __Lb3AutoSrv10333Lib_LIBRARY_DEFINED__
#define __Lb3AutoSrv10333Lib_LIBRARY_DEFINED__

/* library Lb3AutoSrv10333Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Lb3AutoSrv10333Lib;

EXTERN_C const CLSID CLSID_MyMath;

#ifdef __cplusplus

class DECLSPEC_UUID("4f0059b0-9b5f-4311-833e-6dee5aeac2b0")
MyMath;
#endif
#endif /* __Lb3AutoSrv10333Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


