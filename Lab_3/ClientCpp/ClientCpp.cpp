//
// DClient.cpp - Dispatch client implementation
//
//   This client connects to the IMyMath dual interface
//   through the dispinterface.
//
#include <windows.h>
#include <stdio.h>
#include "..\Lb3AutoSrv10333\Lb3AutoSrv10333_i.h"
#include "..\Lb3AutoSrv10333\Lb3AutoSrv10333_i.c"
//#include <strstream>


int main()
{

	printf("Sokolovsky V.S. 10333gr. Client C++\n");


	DWORD clsctx;
	clsctx = CLSCTX_INPROC_SERVER;//+

	HRESULT hr = OleInitialize(NULL);
	if (FAILED(hr))
	{
		printf("Failed to initialize.  Code 0x8%X \n", hr);
		return 1;
	}

	// Get the CLSID for the application.
	wchar_t progid[] = L"Lb3AutoSrv10333.MyMath.1";// Программный идентификатор Prog ID*
	CLSID clsid;
	hr = ::CLSIDFromProgID(progid, &clsid);
	if (FAILED(hr))
	{
		printf("Failed to get CLSID.Code 0x8%X \n", hr);
		return 1;
	}

	// Create the component.
	IDispatch* pIDispatch = NULL;
	hr = ::CoCreateInstance(clsid,
		NULL,
		clsctx,
		IID_IDispatch,
		(void**)&pIDispatch);
	if (FAILED(hr))
	{
		//trace("Create instance failed.", hr);
		printf("Create instance failed.Code 0x8%X \n", hr);//+
		OleUninitialize();
		return 1;
	}
	printf("CoCreateInstance succeeded.\n");

	// First we need to get the IDs for the function names.
	printf("Get DispID for function \"Fun91\".\n");

	DISPID dispid;
	OLECHAR* name = (OLECHAR*)L"Fun91";//*
	hr = pIDispatch->GetIDsOfNames(IID_NULL,
		&name,
		1,
		GetUserDefaultLCID(),
		&dispid);
	if (FAILED(hr))
	{
		printf("Query GetIDsOfNames failed.Code %X \n", hr);
		pIDispatch->Release();
		return 1;
	}

	// Build up the parameters for the invoke call.

	// Allocate and initialize a VARIANT argument.
	VARIANTARG vargs[2];//*
	::VariantInit(&vargs[0]);	// Initialize the VARIANT.//*
	vargs[0].vt = VT_I4;		// Type of VARIANT data//*
	vargs[0].lVal = 5;			// Data for the VARIANT//*

	::VariantInit(&vargs[1]);	// Initialize the VARIANT.
	vargs[1].vt = VT_I4;		// Type of VARIANT data
	vargs[1].lVal = 4;			// Data for the VARIANT

	//Аргументы справа на лево!!!

	// Fill in the DISPPARAMS structure.
	DISPPARAMS param;
	param.cArgs = 2;                 // Number of arguments//*
	param.rgvarg = vargs;            // Arguments//*
	param.cNamedArgs = 0;            // Number of named args
	param.rgdispidNamedArgs = NULL;  // Named arguments

	VARIANTARG varres;//*
	::VariantInit(&varres);	// Initialize the VARIANT.//*
	varres.vt = VT_I4;		// Type of VARIANT data//*
	varres.lVal = 0;			// Data for the VARIANT//*

	printf("Invoke the function \"Fun91\".\n");
	hr = pIDispatch->Invoke(dispid,
		IID_NULL,
		GetUserDefaultLCID(),
		DISPATCH_METHOD,
		&param,
		&varres,//*
		NULL,
		NULL);
	if (FAILED(hr))
	{
		printf("Invoke call failed.Code 0x8%X \n", hr);
		pIDispatch->Release();
		return 1;
	}
	// Display the returned Val.//*
	if (varres.vt == VT_I4)//*
	{
		printf("Returned from component: Fun91(%d, %d) = %d\n", vargs[1].lVal, vargs[0].lVal, varres.lVal);//+
	}


	// Uninitialize the OLE library.
	OleUninitialize();
	return 0;
}
