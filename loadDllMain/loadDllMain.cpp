// loadDllMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

typedef void(*voidFun)();

int main()
{
	HMODULE hDll = LoadLibraryA("dllMainAndFun.dll");

	voidFun pHelloWorldFun = (void(*)())GetProcAddress(hDll, "helloWorldFun");

	pHelloWorldFun();

	return 0;
}

