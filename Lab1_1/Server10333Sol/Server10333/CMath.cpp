//
// СMath.cpp
//
#include <windows.h>
#include "CMath.h"
//
// Math class implementation
//
// Constructors
CMath::CMath()
{
	m_lRef = 0;
	// Увеличить значение внешнего счетчика объектов
	InterlockedIncrement(&g_lObjs);
}
// The destructor
CMath::~CMath()
{
	// Уменьшить значение внешнего счетчика объектов
	InterlockedDecrement(&g_lObjs);
}STDMETHODIMP CMath::QueryInterface(REFIID riid, void** ppv)
{
	*ppv = 0;
	if (riid == IID_IUnknown) {
		*ppv = this;
	}
	else if (riid == IID_IMATH) {
		*ppv =(IFN_09*) this;
	}
	else if (riid == IID_IVER) {
		*ppv = (IVer*)this;
	}
		
		
	if (*ppv)
	{
		AddRef();
		return(S_OK);
	}
	return (E_NOINTERFACE);
}
STDMETHODIMP_(ULONG) CMath::AddRef()
{
	return InterlockedIncrement(&m_lRef);
}
STDMETHODIMP_(ULONG) CMath::Release()
{
	if (InterlockedDecrement(&m_lRef) == 0)
	{
		delete this;
		return 0;
	}
	return m_lRef;
}
STDMETHODIMP CMath::Fun91(int x, int y, int* pResult)
{
	*pResult = x * y;
	return S_OK;
}
STDMETHODIMP CMath::Fun92(float x, float y, float* pResult)
{
	*pResult = x + y;
	return S_OK;
}
STDMETHODIMP CMath::Fun93(double in, double* out)
{
	*out = in * in;
	return S_OK;
}

STDMETHODIMP CMath::GetAuthor(wchar_t** greeting) {
	const wchar_t* strMess = L"Sokolovsky gr.10333";
	wchar_t* message = (wchar_t*)CoTaskMemAlloc(100);
	wcscpy_s(message, 100, strMess);
	*greeting = message;
	return S_OK;
}

MathClassFactory::MathClassFactory()
{
	m_lRef = 0;
}
MathClassFactory::~MathClassFactory()
{
}
STDMETHODIMP MathClassFactory::QueryInterface(REFIID riid,
	void** ppv)
{
	*ppv = 0;
	if (riid == IID_IUnknown || riid == IID_IClassFactory)
		*ppv = this;
	if (*ppv)
	{
		AddRef();
		return S_OK;
	}
	return(E_NOINTERFACE);
}
STDMETHODIMP_(ULONG) MathClassFactory::AddRef()
{
	return InterlockedIncrement(&m_lRef);
}
STDMETHODIMP_(ULONG) MathClassFactory::Release()
{
	if (InterlockedDecrement(&m_lRef) == 0)
	{
		delete this;
		return 0;
	}
	return m_lRef;
}
STDMETHODIMP MathClassFactory::CreateInstance
(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj)
{
	CMath* pMath;
	HRESULT hr;
	*ppvObj = 0;
	pMath = new CMath;
	if (pMath == 0)
		return(E_OUTOFMEMORY);
	hr = pMath->QueryInterface(riid, ppvObj);
	if (FAILED(hr))
		delete pMath;
	return hr;
}
STDMETHODIMP MathClassFactory::LockServer(BOOL fLock)
{
	if (fLock)
		InterlockedIncrement(&g_lLocks);
	else
		InterlockedDecrement(&g_lLocks);
	return S_OK;
}