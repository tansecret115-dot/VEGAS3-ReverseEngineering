/* Module: wmfplug2.dll
   Function: FUN_0040a530
   Address: 0040a530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a530(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_0047bf8c;
  FUN_0040a620((int)param_1);
  if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[5]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[5]);
    GlobalFree(pvVar1);
  }
  return;
}


