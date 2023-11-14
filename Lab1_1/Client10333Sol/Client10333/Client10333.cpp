//
// Client.cpp
//
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <initguid.h>
#include "D:\ТКП\Lab1_1\Server10333Sol\Server10333\IMath.h"

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
	// Получить фабрику класса для CMath
	hr = CoGetClassObject(clsid, CLSCTX_INPROC, NULL, IID_IClassFactory, (void**)&pCF);
	if (FAILED(hr))
	{
		printf("Failed to GetClassObject server instance. HR = %X \n", hr); return -1;
	}
	// с помощью фабрики класса создать экземпляр
	// компонента и получить интерфейс IUnknown.
	IUnknown* pUnk; hr = pCF->CreateInstance(NULL, IID_IUnknown, (void**)&pUnk);
	// Release the class factory pCF->Release();
	if (FAILED(hr))
	{
		printf("Failed to create server instance. HR =%X \n", hr); return -1;
	}
	printf("Instance created \n");
	IFN_09* pMath = NULL;
	hr = pUnk->QueryInterface(IID_IMATH, (LPVOID*)&pMath);
	pUnk->Release();
	if (FAILED(hr))
	{
		printf("QueryInterface() for IMath failed \n"); return -1;
	}
	int result1;
	pMath->Fun91(20, 7, &result1);
	printf("Fun91 = %d \n", result1);
	float result2;
	pMath->Fun92(200, 123, &result2);
	printf("Fun92 = %f \n", result2);
	double result3;
	pMath->Fun93(20.3, &result3);
	printf("Fun93 = %f \n", result3);

	IVer* pVer = NULL;
	hr = pMath->QueryInterface(IID_IVER, (void**)&pVer);
	if (pVer == NULL) {

	}
	pMath->Release();

	wchar_t* pauthor = NULL;
	hr = pVer->GetAuthor(&pauthor);
	wprintf(L"From component %s \n", pauthor);
	pVer->Release();
	printf("Releasing instance \n");
	printf("Shuting down COM\n");
	CoUninitialize();
	return 0;
}