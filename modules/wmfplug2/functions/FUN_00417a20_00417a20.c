/* Module: wmfplug2.dll
   Function: FUN_00417a20
   Address: 00417a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00417a20(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_0047c9e0;
  if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalFree(pvVar1);
  }
  return;
}


