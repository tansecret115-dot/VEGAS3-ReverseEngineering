/* Module: sfnetmedia.dll
   Function: FUN_0041dde0
   Address: 0041dde0
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong FUN_0041dde0(LPCSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = 0;
  hModule = LoadLibraryA(param_1);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"DllGetVersion");
    if (pFVar1 != (FARPROC)0x0) {
      local_10 = 0;
      local_14 = 0x14;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      iVar2 = (*pFVar1)(&local_14);
      if (-1 < iVar2) {
        lVar4 = __allshl(0x10,0);
        uVar3 = (uint)lVar4 | local_c;
      }
    }
    FreeLibrary(hModule);
  }
  return (ulonglong)uVar3 << 0x20;
}


