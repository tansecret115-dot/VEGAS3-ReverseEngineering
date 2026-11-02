/* Module: vidcap30.exe
   Function: SfGetDllVersion
   Address: 004b8b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall SfGetDllVersion(char const *) */

__int64 SfGetDllVersion(char *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0xb8b50  78  ?SfGetDllVersion@@YG_JPBD@Z */
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
        uVar3 = __allshl();
        uVar3 = uVar3 | local_c;
      }
    }
    FreeLibrary(hModule);
  }
  return (ulonglong)uVar3 << 0x20;
}


