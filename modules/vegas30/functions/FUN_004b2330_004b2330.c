/* Module: vegas30.exe
   Function: FUN_004b2330
   Address: 004b2330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004b2330(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_00613574;
  param_1[1] = &PTR_LAB_00613514;
  if ((LPCVOID)param_1[3] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[3]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[3]);
    GlobalFree(pvVar1);
  }
  if ((LPCVOID)param_1[4] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[4]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[4]);
    GlobalFree(pvVar1);
  }
  return;
}


