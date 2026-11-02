/* Module: vegas30k.dll
   Function: FUN_01023b80
   Address: 01023b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01023b80(LPCSTR param_1,undefined4 param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [260];
  HMODULE pHStack_4;
  
  iVar3 = 0;
  hModule = LoadLibraryA(param_1);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"DllEnumObjects");
    if (pFVar1 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      return 0;
    }
    iVar4 = 0;
    do {
      iVar2 = (*pFVar1)(iVar4,local_118,local_128,local_108,0x104);
      if (iVar2 != 0) {
        return iVar3;
      }
      pHStack_4 = hModule;
      iVar3 = _SfList_InsertList_16(param_2,0xffffffff,local_128,1);
      iVar4 = iVar4 + 1;
    } while (-1 < iVar3);
  }
  return iVar3;
}


