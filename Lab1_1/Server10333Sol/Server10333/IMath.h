#pragma once
#pragma once
#include <Windows.h>
//
// imath.h
//

// {BF8EFA26-CE90-46EA-BE3B-B0637B0E4B54}
DEFINE_GUID(CLSID_CMATH,
	0xbf8efa26, 0xce90, 0x46ea, 0xbe, 0x3b, 0xb0, 0x63, 0x7b, 0xe, 0x4b, 0x54);

// {86A83ED8-4873-4718-9E9F-09E0A61159EC}
DEFINE_GUID(IID_IMATH,
	0x86a83ed8, 0x4873, 0x4718, 0x9e, 0x9f, 0x9, 0xe0, 0xa6, 0x11, 0x59, 0xec);

// {46E933FD-8124-49DA-B818-126A2444BB84}
DEFINE_GUID(IID_IVER,
	0x46e933fd, 0x8124, 0x49da, 0xb8, 0x18, 0x12, 0x6a, 0x24, 0x44, 0xbb, 0x84);


class IFN_09 : public IUnknown
{
public:
	STDMETHOD(Fun91(int, int, int*)) PURE;
	STDMETHOD(Fun92(float, float, float*)) PURE;
	STDMETHOD(Fun93(double in, double* out)) PURE;
};

class IVer : public IUnknown
{
public:
	STDMETHOD(GetAuthor(wchar_t** message)) PURE;
};
