/* Module: wavplug.dll
   Function: FUN_5f387ec0
   Address: 5f387ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f387ec0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_5f3caa28;
  param_1[0x2a] = &PTR_LAB_5f3ca9e0;
  if ((HANDLE)param_1[0x2e] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x2e]);
  }
  FUN_5f395370((int)param_1);
  if (param_1[0x34] != 0) {
    param_1[0x34] = 0;
  }
  if ((LPCVOID)param_1[0x35] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x35]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x35]);
    GlobalFree(pvVar1);
  }
  if ((LPCVOID)param_1[0x36] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x36]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x36]);
    GlobalFree(pvVar1);
  }
  FUN_5f395350(param_1);
  return;
}


