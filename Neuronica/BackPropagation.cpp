// BackPropagation.cpp : Implementation of CBackPropagation

#include "stdafx.h"
#include "BackPropagation.h"


// CBackPropagation

STDMETHODIMP CBackPropagation::CreateNetwork(LONG LayersCount, LONG *Layers)
{
	NeuralNet::CreateNetwork(LayersCount, Layers);
	return S_OK;
}


STDMETHODIMP CBackPropagation::InitializeNetwork(LONG InitializationType, LONG RandomSeed)
{
	NeuralNet::InitializeNetwork(RandomSeed);
	return S_OK;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
STDMETHODIMP CBackPropagation::Mult(DOUBLE* theDouble)
{
	*theDouble *= 2.0;
	return S_OK;
}

STDMETHODIMP CBackPropagation::CreatePatterns(LONG Patterns)
{
	NeuralNet::CreatePatterns(Patterns);
	return S_OK;
}


STDMETHODIMP CBackPropagation::get_Patterns(LONG Pattern, LONG Index, DOUBLE* pVal)
{
	if (Pattern >= 0 && Pattern < NeuralNet::m_lPatternsCount && Index >= 0 && Index <= (NeuralNet::m_plLayers[0] + NeuralNet::m_plLayers[NeuralNet::m_lLayersCount - 1]))
		*pVal = NeuralNet::m_pdPatterns[NeuralNet::m_plLayers[0] * Pattern + Index];
	else
		*pVal = -1;

	return S_OK;
}


STDMETHODIMP CBackPropagation::put_Patterns(LONG Pattern, LONG Index, DOUBLE newVal)
{
	if (Pattern >= 0 && Pattern < NeuralNet::m_lPatternsCount && Index >= 0 && Index <= NeuralNet::m_plLayers[0])
		NeuralNet::m_pdPatterns[(NeuralNet::m_plLayers[0] + NeuralNet::m_plLayers[NeuralNet::m_lLayersCount - 1])*Pattern + Index] = newVal;

	return S_OK;
}


STDMETHODIMP CBackPropagation::TrainBProp(LONG EpCount, DOUBLE* Error, DOUBLE LearningRate, DOUBLE Momentum)
{
	NeuralNet::TrainBPROP(EpCount, *Error, LearningRate, Momentum);
	return S_OK;
}


STDMETHODIMP CBackPropagation::TrainRProp(LONG EpCount, DOUBLE* Error, DOUBLE IncreaseFactor, DOUBLE DecreaseFactor, DOUBLE DeltaMin, DOUBLE DeltaMax, DOUBLE DeltaInit)
{
	NeuralNet::TrainRPROP(EpCount, *Error, IncreaseFactor, DecreaseFactor, DeltaMin, DeltaMax, DeltaInit);
	return S_OK;
}


STDMETHODIMP CBackPropagation::TrainSCG(LONG EpCount, DOUBLE* Error, DOUBLE Sigma, DOUBLE Lambda)
{
	NeuralNet::TrainSCG(EpCount, *Error, Sigma, Lambda);
	return S_OK;
}


STDMETHODIMP CBackPropagation::get_LayersCount(LONG* pVal)
{
	*pVal = NeuralNet::m_lLayersCount;
	return S_OK;
}


STDMETHODIMP CBackPropagation::get_NodesCount(LONG* pVal)
{
	*pVal = NeuralNet::m_lNodesCount;
	return S_OK;
}


STDMETHODIMP CBackPropagation::get_WeightsCount(LONG* pVal)
{
	*pVal = NeuralNet::m_lWeightsCount;
	return S_OK;
}


STDMETHODIMP CBackPropagation::get_Nodes(LONG Index, DOUBLE* pVal)
{
	if (Index >= 0 && Index < NeuralNet::m_lNodesCount)
		*pVal = NeuralNet::m_pdNodes[Index];
	else
		*pVal = -1;
	
	return S_OK;
}


STDMETHODIMP CBackPropagation::put_Nodes(LONG Index, DOUBLE newVal)
{
	if (Index >= 0 && Index < NeuralNet::m_lNodesCount)
		NeuralNet::m_pdNodes[Index] = newVal;

	return S_OK;
}


STDMETHODIMP CBackPropagation::get_Weights(LONG Index, DOUBLE* pVal)
{
	if (Index >= 0 && Index < NeuralNet::m_lWeightsCount)
		*pVal = NeuralNet::m_pdWeights[Index];
	else
		*pVal = -1;

	return S_OK;
}


STDMETHODIMP CBackPropagation::put_Weights(LONG Index, DOUBLE newVal)
{
	if (Index >= 0 && Index < NeuralNet::m_lWeightsCount)
		NeuralNet::m_pdWeights[Index] = newVal;

	return S_OK;
}


STDMETHODIMP CBackPropagation::get_Layers(LONG Index, LONG* pVal)
{
	if (Index >= 0 && Index < NeuralNet::m_lLayersCount)
		*pVal = NeuralNet::m_plLayers[Index];

	return S_OK;
}


STDMETHODIMP CBackPropagation::get_Relevances(LONG Index, DOUBLE* pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CBackPropagation::get_PatternsCount(LONG* pVal)
{
	*pVal = NeuralNet::m_lPatternsCount;
	return S_OK;
}


STDMETHODIMP CBackPropagation::Test(LONG Pattern)
{
	NeuralNet::Test(Pattern);
	return S_OK;
}
