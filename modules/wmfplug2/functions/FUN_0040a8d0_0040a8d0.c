/* Module: wmfplug2.dll
   Function: FUN_0040a8d0
   Address: 0040a8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a8d0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_0047bfac;
  FUN_0040a9c0((int)param_1);
  if ((LPCVOID)param_1[6] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalFree(pvVar1);
  }
  return;
}


