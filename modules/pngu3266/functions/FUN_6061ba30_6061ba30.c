/* Module: pngu3266.dll
   Function: FUN_6061ba30
   Address: 6061ba30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6061ba30(int *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined1 local_8 [4];
  
  hModule = LoadLibraryA(s_WININET_DLL_60649694);
  if (hModule == (HMODULE)0x0) {
    return 0x80004005;
  }
  pFVar1 = GetProcAddress(hModule,s_InternetGetConnectedState_60649678);
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(hModule);
    return 0x80004005;
  }
  iVar2 = (*pFVar1)(local_8,0);
  *param_1 = iVar2;
  FreeLibrary(hModule);
  return 0;
}


