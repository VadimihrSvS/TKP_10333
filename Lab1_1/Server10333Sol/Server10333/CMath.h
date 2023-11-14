#pragma once
//
// ñmath.h
//
#include "imath.h"

extern long g_lObjs;
extern long g_lLocks;
class CMath : public IFN_09, public IVer
{
protected:
	// Reference count
	long m_lRef;
public:
	CMath();
	~CMath();
public:
	// IUnknown
	STDMETHOD(QueryInterface(REFIID, void**));
	STDMETHOD_(ULONG, AddRef());
	STDMETHOD_(ULONG, Release());
	// IFN_09
	STDMETHOD(Fun91(int, int, int*));
	STDMETHOD(Fun92(float, float, float*));
	STDMETHOD(Fun93(double in, double* out));
	// IVer
	STDMETHOD(GetAuthor(wchar_t** message));
};


class MathClassFactory : public IClassFactory
{
protected:
	long m_lRef;
public:
	MathClassFactory();
	~MathClassFactory();
	// IUnknown
	STDMETHOD(QueryInterface(REFIID, void**));
	STDMETHOD_(ULONG, AddRef());
	STDMETHOD_(ULONG, Release());
	// IClassFactory
	STDMETHOD(CreateInstance(LPUNKNOWN, REFIID, void**));
	STDMETHOD(LockServer(BOOL));
};