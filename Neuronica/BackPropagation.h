// BackPropagation.h : Declaration of the CBackPropagation

#pragma once
#include "resource.h"       // main symbols



#include "Neuronica_i.h"
#include "NeuralNet.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CBackPropagation

class ATL_NO_VTABLE CBackPropagation :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CBackPropagation, &CLSID_BackPropagation>,
	public IDispatchImpl<IBackPropagation, &IID_IBackPropagation, &LIBID_NeuronicaLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public NeuralNet
{
public:
	CBackPropagation()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_BACKPROPAGATION)


BEGIN_COM_MAP(CBackPropagation)
	COM_INTERFACE_ENTRY(IBackPropagation)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(CreateNetwork)(LONG LayersCount, LONG *Layers);
	STDMETHOD(InitializeNetwork)(LONG InitializationType, LONG RandomSeed);
	STDMETHOD(Mult)(DOUBLE* theDouble);
	STDMETHOD(CreatePatterns)(LONG Patterns);
	STDMETHOD(get_Patterns)(LONG Pattern, LONG Index, DOUBLE* pVal);
	STDMETHOD(put_Patterns)(LONG Pattern, LONG Index, DOUBLE newVal);
	STDMETHOD(TrainBProp)(LONG EpCount, DOUBLE* Error, DOUBLE LearningRate, DOUBLE Momentum);
	STDMETHOD(TrainRProp)(LONG EpCount, DOUBLE* Error, DOUBLE IncreaseFactor, DOUBLE DecreaseFactor, DOUBLE DeltaMin, DOUBLE DeltaMax, DOUBLE DeltaInit);
	STDMETHOD(TrainSCG)(LONG EpCount, DOUBLE* Error, DOUBLE Sigma, DOUBLE Lambda);
	STDMETHOD(get_LayersCount)(LONG* pVal);
	STDMETHOD(get_NodesCount)(LONG* pVal);
	STDMETHOD(get_WeightsCount)(LONG* pVal);
	STDMETHOD(get_Nodes)(LONG Index, DOUBLE* pVal);
	STDMETHOD(put_Nodes)(LONG Index, DOUBLE newVal);
	STDMETHOD(get_Weights)(LONG Index, DOUBLE* pVal);
	STDMETHOD(put_Weights)(LONG Index, DOUBLE newVal);
	STDMETHOD(get_Layers)(LONG Index, LONG* pVal);
	STDMETHOD(get_Relevances)(LONG Index, DOUBLE* pVal);
	STDMETHOD(get_PatternsCount)(LONG* pVal);
	STDMETHOD(Test)(LONG Pattern);
};

OBJECT_ENTRY_AUTO(__uuidof(BackPropagation), CBackPropagation)
