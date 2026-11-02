/* Module: stl2plg.dll
   Function: FUN_004090b0
   Address: 004090b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004090b0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_00465b4c;
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
  }
  if ((LPCVOID)param_1[0x10] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x10]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x10]);
    GlobalFree(pvVar1);
    param_1[0x10] = 0;
  }
  if ((LPCVOID)param_1[10] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[10]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[10]);
    GlobalFree(pvVar1);
  }
  return;
}


