

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat Mar 28 22:59:49 2015
 */
/* Compiler settings for Neuronica.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Neuronica_i_h__
#define __Neuronica_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IBackPropagation_FWD_DEFINED__
#define __IBackPropagation_FWD_DEFINED__
typedef interface IBackPropagation IBackPropagation;

#endif 	/* __IBackPropagation_FWD_DEFINED__ */


#ifndef __BackPropagation_FWD_DEFINED__
#define __BackPropagation_FWD_DEFINED__

#ifdef __cplusplus
typedef class BackPropagation BackPropagation;
#else
typedef struct BackPropagation BackPropagation;
#endif /* __cplusplus */

#endif 	/* __BackPropagation_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IBackPropagation_INTERFACE_DEFINED__
#define __IBackPropagation_INTERFACE_DEFINED__

/* interface IBackPropagation */
/* [unique][nonextensible][dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBackPropagation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7A60C9BC-AA96-486D-A766-62C910397072")
    IBackPropagation : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateNetwork( 
            /* [in] */ LONG LayersCount,
            /* [in] */ LONG *Layers) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InitializeNetwork( 
            /* [in] */ LONG InitializationType,
            /* [in] */ LONG RandomSeed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Mult( 
            /* [out][in] */ DOUBLE *theDouble) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreatePatterns( 
            /* [in] */ LONG Patterns) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Patterns( 
            /* [in] */ LONG Pattern,
            /* [in] */ LONG Index,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Patterns( 
            /* [in] */ LONG Pattern,
            /* [in] */ LONG Index,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TrainBProp( 
            /* [in] */ LONG EpCount,
            /* [out][in] */ DOUBLE *Error,
            /* [in] */ DOUBLE LearningRate,
            /* [in] */ DOUBLE Momentum) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TrainRProp( 
            /* [in] */ LONG EpCount,
            /* [out][in] */ DOUBLE *Error,
            /* [in] */ DOUBLE IncreaseFactor,
            /* [in] */ DOUBLE DecreaseFactor,
            /* [in] */ DOUBLE DeltaMin,
            /* [in] */ DOUBLE DeltaMax,
            /* [in] */ DOUBLE DeltaInit) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TrainSCG( 
            /* [in] */ LONG EpCount,
            /* [out][in] */ DOUBLE *Error,
            /* [in] */ DOUBLE Sigma,
            /* [in] */ DOUBLE Lambda) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LayersCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NodesCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WeightsCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Nodes( 
            /* [in] */ LONG Index,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Nodes( 
            /* [in] */ LONG Index,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Weights( 
            /* [in] */ LONG Index,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Weights( 
            /* [in] */ LONG Index,
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Layers( 
            /* [in] */ LONG Index,
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Relevances( 
            /* [in] */ LONG Index,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PatternsCount( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Test( 
            /* [in] */ LONG Pattern) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBackPropagationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBackPropagation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBackPropagation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBackPropagation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBackPropagation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBackPropagation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBackPropagation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBackPropagation * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateNetwork )( 
            IBackPropagation * This,
            /* [in] */ LONG LayersCount,
            /* [in] */ LONG *Layers);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InitializeNetwork )( 
            IBackPropagation * This,
            /* [in] */ LONG InitializationType,
            /* [in] */ LONG RandomSeed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Mult )( 
            IBackPropagation * This,
            /* [out][in] */ DOUBLE *theDouble);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreatePatterns )( 
            IBackPropagation * This,
            /* [in] */ LONG Patterns);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Patterns )( 
            IBackPropagation * This,
            /* [in] */ LONG Pattern,
            /* [in] */ LONG Index,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Patterns )( 
            IBackPropagation * This,
            /* [in] */ LONG Pattern,
            /* [in] */ LONG Index,
            /* [in] */ DOUBLE newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TrainBProp )( 
            IBackPropagation * This,
            /* [in] */ LONG EpCount,
            /* [out][in] */ DOUBLE *Error,
            /* [in] */ DOUBLE LearningRate,
            /* [in] */ DOUBLE Momentum);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TrainRProp )( 
            IBackPropagation * This,
            /* [in] */ LONG EpCount,
            /* [out][in] */ DOUBLE *Error,
            /* [in] */ DOUBLE IncreaseFactor,
            /* [in] */ DOUBLE DecreaseFactor,
            /* [in] */ DOUBLE DeltaMin,
            /* [in] */ DOUBLE DeltaMax,
            /* [in] */ DOUBLE DeltaInit);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TrainSCG )( 
            IBackPropagation * This,
            /* [in] */ LONG EpCount,
            /* [out][in] */ DOUBLE *Error,
            /* [in] */ DOUBLE Sigma,
            /* [in] */ DOUBLE Lambda);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LayersCount )( 
            IBackPropagation * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NodesCount )( 
            IBackPropagation * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WeightsCount )( 
            IBackPropagation * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Nodes )( 
            IBackPropagation * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Nodes )( 
            IBackPropagation * This,
            /* [in] */ LONG Index,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Weights )( 
            IBackPropagation * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Weights )( 
            IBackPropagation * This,
            /* [in] */ LONG Index,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Layers )( 
            IBackPropagation * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Relevances )( 
            IBackPropagation * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PatternsCount )( 
            IBackPropagation * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Test )( 
            IBackPropagation * This,
            /* [in] */ LONG Pattern);
        
        END_INTERFACE
    } IBackPropagationVtbl;

    interface IBackPropagation
    {
        CONST_VTBL struct IBackPropagationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBackPropagation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBackPropagation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBackPropagation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBackPropagation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBackPropagation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBackPropagation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBackPropagation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBackPropagation_CreateNetwork(This,LayersCount,Layers)	\
    ( (This)->lpVtbl -> CreateNetwork(This,LayersCount,Layers) ) 

#define IBackPropagation_InitializeNetwork(This,InitializationType,RandomSeed)	\
    ( (This)->lpVtbl -> InitializeNetwork(This,InitializationType,RandomSeed) ) 

#define IBackPropagation_Mult(This,theDouble)	\
    ( (This)->lpVtbl -> Mult(This,theDouble) ) 

#define IBackPropagation_CreatePatterns(This,Patterns)	\
    ( (This)->lpVtbl -> CreatePatterns(This,Patterns) ) 

#define IBackPropagation_get_Patterns(This,Pattern,Index,pVal)	\
    ( (This)->lpVtbl -> get_Patterns(This,Pattern,Index,pVal) ) 

#define IBackPropagation_put_Patterns(This,Pattern,Index,newVal)	\
    ( (This)->lpVtbl -> put_Patterns(This,Pattern,Index,newVal) ) 

#define IBackPropagation_TrainBProp(This,EpCount,Error,LearningRate,Momentum)	\
    ( (This)->lpVtbl -> TrainBProp(This,EpCount,Error,LearningRate,Momentum) ) 

#define IBackPropagation_TrainRProp(This,EpCount,Error,IncreaseFactor,DecreaseFactor,DeltaMin,DeltaMax,DeltaInit)	\
    ( (This)->lpVtbl -> TrainRProp(This,EpCount,Error,IncreaseFactor,DecreaseFactor,DeltaMin,DeltaMax,DeltaInit) ) 

#define IBackPropagation_TrainSCG(This,EpCount,Error,Sigma,Lambda)	\
    ( (This)->lpVtbl -> TrainSCG(This,EpCount,Error,Sigma,Lambda) ) 

#define IBackPropagation_get_LayersCount(This,pVal)	\
    ( (This)->lpVtbl -> get_LayersCount(This,pVal) ) 

#define IBackPropagation_get_NodesCount(This,pVal)	\
    ( (This)->lpVtbl -> get_NodesCount(This,pVal) ) 

#define IBackPropagation_get_WeightsCount(This,pVal)	\
    ( (This)->lpVtbl -> get_WeightsCount(This,pVal) ) 

#define IBackPropagation_get_Nodes(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Nodes(This,Index,pVal) ) 

#define IBackPropagation_put_Nodes(This,Index,newVal)	\
    ( (This)->lpVtbl -> put_Nodes(This,Index,newVal) ) 

#define IBackPropagation_get_Weights(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Weights(This,Index,pVal) ) 

#define IBackPropagation_put_Weights(This,Index,newVal)	\
    ( (This)->lpVtbl -> put_Weights(This,Index,newVal) ) 

#define IBackPropagation_get_Layers(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Layers(This,Index,pVal) ) 

#define IBackPropagation_get_Relevances(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Relevances(This,Index,pVal) ) 

#define IBackPropagation_get_PatternsCount(This,pVal)	\
    ( (This)->lpVtbl -> get_PatternsCount(This,pVal) ) 

#define IBackPropagation_Test(This,Pattern)	\
    ( (This)->lpVtbl -> Test(This,Pattern) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBackPropagation_INTERFACE_DEFINED__ */



#ifndef __NeuronicaLib_LIBRARY_DEFINED__
#define __NeuronicaLib_LIBRARY_DEFINED__

/* library NeuronicaLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_NeuronicaLib;

EXTERN_C const CLSID CLSID_BackPropagation;

#ifdef __cplusplus

class DECLSPEC_UUID("BDF536C9-B7B3-4257-BB19-44A81436D37E")
BackPropagation;
#endif
#endif /* __NeuronicaLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


