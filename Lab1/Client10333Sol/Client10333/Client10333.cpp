//
// Client.cpp
//
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <initguid.h>
#include "D:\���\Lab1\Server10333Sol\Server10333\IMath.h"
int main(int argc, char* argv[])
{
	printf("Initializing COM \n");
	if (FAILED(CoInitialize(NULL)))
	{
		printf("Unable to initialize COM \n"); return -1;
	}
	char* szProgID = (char*)"Server10333.MathComponent.1";
	WCHAR szWideProgID[128];
	CLSID clsid;
	long lLen = MultiByteToWideChar(CP_ACP, 0, szProgID,
		strlen(szProgID), szWideProgID, sizeof(szWideProgID));
	szWideProgID[lLen] = '\0';
	HRESULT hr = ::CLSIDFromProgID(szWideProgID, &clsid);
	if (FAILED(hr))
	{
		printf("Unable to get CLSID from ProgID. HR = %X \n", hr); return -1;
	}
	IClassFactory* pCF;
	// �������� ������� ������ ��� CMath
	hr = CoGetClassObject(clsid, CLSCTX_INPROC, NULL, IID_IClassFactory, (void**)&pCF);
	if (FAILED(hr))
	{
		printf("Failed to GetClassObject server instance. HR = %X \n", hr); return -1;
	}
	// � ������� ������� ������ ������� ���������
	// ���������� � �������� ��������� IUnknown.
	IUnknown* pUnk; hr = pCF->CreateInstance(NULL, IID_IUnknown, (void**)&pUnk);
	// Release the class factory pCF->Release();
	if (FAILED(hr))
	{
		printf("Failed to create server instance. HR =%X \n", hr); return -1;
	}
	printf("Instance created \n");
	IMath* pMath = NULL;
	hr = pUnk->QueryInterface(IID_IMATH, (LPVOID*)&pMath);
	pUnk->Release();
	if (FAILED(hr))
	{
		printf("QueryInterface() for IMath failed \n"); return -1;
	}
	long result;
	pMath->Multiply(20, 7, &result);
	printf("20 * 7 is %d \n", result);
	pMath->Subtract(200, 123, &result);
	printf("200 - 123 is %d \n", result);
	printf("Releasing instance \n");
	pMath->Release();
	printf("Shuting down COM\n");
	CoUninitialize();
	return 0;
}