// MyMath.cpp: реализация CMyMath

#include "pch.h"
#include "MyMath.h"


// CMyMath

STDMETHODIMP CMyMath::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IMyMath
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CMyMath::Fun91(LONG x, LONG y, LONG* result)
{
	// TODO: Добавьте сюда код реализации
	*result = x + x + y;
	return S_OK;
}


STDMETHODIMP CMyMath::Fun92(FLOAT x, FLOAT y, FLOAT* result)
{
	// TODO: Добавьте сюда код реализации
	*result = x + x + y;
	return S_OK;
}


STDMETHODIMP CMyMath::Fun93(DOUBLE in, DOUBLE* out)
{
	// TODO: Добавьте сюда код реализации
	*out = in * in;
	return S_OK;
}
