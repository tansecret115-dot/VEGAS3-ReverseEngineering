/* Module: rmme3260.dll
   Function: FUN_6624f6c0
   Address: 6624f6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624f6c0(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 local_c;
  int local_8;
  
  iVar2 = 10;
  local_8 = 10;
  local_c = 10;
  hModule = LoadLibraryA(s_PNDX5032_DLL_6627bd10);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_GetDevNodeStatus32Call_6627bcf8);
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)(param_1,&local_c,&local_8);
    }
    FreeLibrary(hModule);
  }
  if ((iVar2 == 0) && (local_8 == 0)) {
    return 1;
  }
  return 0;
}


