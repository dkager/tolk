

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Wed Aug 28 17:26:05 2013
 */
/* Compiler settings for ..\..\FSAPI.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __FSAPI_h_h__
#define __FSAPI_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IJawsApi_FWD_DEFINED__
#define __IJawsApi_FWD_DEFINED__
typedef interface IJawsApi IJawsApi;

#endif 	/* __IJawsApi_FWD_DEFINED__ */


#ifndef __JawsApi_FWD_DEFINED__
#define __JawsApi_FWD_DEFINED__

#ifdef __cplusplus
typedef class JawsApi JawsApi;
#else
typedef struct JawsApi JawsApi;
#endif /* __cplusplus */

#endif 	/* __JawsApi_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __FSAPILib_LIBRARY_DEFINED__
#define __FSAPILib_LIBRARY_DEFINED__

/* library FSAPILib */
/* [custom][custom][custom][helpstring][version][uuid] */ 



EXTERN_C const IID LIBID_FSAPILib;

#ifndef __IJawsApi_INTERFACE_DEFINED__
#define __IJawsApi_INTERFACE_DEFINED__

/* interface IJawsApi */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IJawsApi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("123DEDB4-2CF6-429C-A2AB-CC809E5516CE")
    IJawsApi : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RunScript( 
            /* [in] */ BSTR ScriptName,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SayString( 
            /* [in] */ BSTR StringToSpeak,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL bFlush,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopSpeech( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Enable( 
            /* [in] */ VARIANT_BOOL vbNoDDIHooks,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Disable( 
            /* [retval][out] */ VARIANT_BOOL *vbSuccess) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RunFunction( 
            /* [in] */ BSTR FunctionName,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IJawsApiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IJawsApi * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IJawsApi * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IJawsApi * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IJawsApi * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IJawsApi * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IJawsApi * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IJawsApi * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RunScript )( 
            IJawsApi * This,
            /* [in] */ BSTR ScriptName,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SayString )( 
            IJawsApi * This,
            /* [in] */ BSTR StringToSpeak,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL bFlush,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopSpeech )( 
            IJawsApi * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IJawsApi * This,
            /* [in] */ VARIANT_BOOL vbNoDDIHooks,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Disable )( 
            IJawsApi * This,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RunFunction )( 
            IJawsApi * This,
            /* [in] */ BSTR FunctionName,
            /* [retval][out] */ VARIANT_BOOL *vbSuccess);
        
        END_INTERFACE
    } IJawsApiVtbl;

    interface IJawsApi
    {
        CONST_VTBL struct IJawsApiVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJawsApi_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJawsApi_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJawsApi_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJawsApi_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IJawsApi_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IJawsApi_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IJawsApi_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IJawsApi_RunScript(This,ScriptName,vbSuccess)	\
    ( (This)->lpVtbl -> RunScript(This,ScriptName,vbSuccess) ) 

#define IJawsApi_SayString(This,StringToSpeak,bFlush,vbSuccess)	\
    ( (This)->lpVtbl -> SayString(This,StringToSpeak,bFlush,vbSuccess) ) 

#define IJawsApi_StopSpeech(This)	\
    ( (This)->lpVtbl -> StopSpeech(This) ) 

#define IJawsApi_Enable(This,vbNoDDIHooks,vbSuccess)	\
    ( (This)->lpVtbl -> Enable(This,vbNoDDIHooks,vbSuccess) ) 

#define IJawsApi_Disable(This,vbSuccess)	\
    ( (This)->lpVtbl -> Disable(This,vbSuccess) ) 

#define IJawsApi_RunFunction(This,FunctionName,vbSuccess)	\
    ( (This)->lpVtbl -> RunFunction(This,FunctionName,vbSuccess) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJawsApi_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_JawsApi;

#ifdef __cplusplus

class DECLSPEC_UUID("CCE5B1E5-B2ED-45D5-B09F-8EC54B75ABF4")
JawsApi;
#endif
#endif /* __FSAPILib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


