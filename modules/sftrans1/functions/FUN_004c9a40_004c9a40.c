/* Module: sftrans1.dll
   Function: FUN_004c9a40
   Address: 004c9a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004c9a40(int *param_1)

{
  HMODULE hLibModule;
  HGLOBAL pvVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[0x42] != 0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
      param_1[0x42] = 0;
    }
    hLibModule = (HMODULE)param_1[0x4e];
    if ((hLibModule != (HMODULE)0x0) && (hLibModule != (HMODULE)*param_1)) {
      FreeLibrary(hLibModule);
    }
    if ((LPCVOID)param_1[0x4c] != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)param_1[0x4c]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_1[0x4c]);
      GlobalFree(pvVar1);
    }
    free(param_1);
  }
  return 0;
}


