/* Module: gifplug.dll
   Function: FUN_5f6c1ff0
   Address: 5f6c1ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f6c1ff0(undefined4 *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = (LPCVOID)param_1[4];
  *param_1 = &PTR_LAB_5f70239c;
  param_1[1] = &PTR_LAB_5f702384;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    param_1[4] = 0;
  }
  if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[5]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[5]);
    GlobalFree(pvVar1);
  }
  if ((HANDLE)param_1[0x1a] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x1a]);
  }
  return;
}


