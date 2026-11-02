/* Module: oggplug.dll
   Function: FUN_00408680
   Address: 00408680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00408680(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_00447a88;
  FUN_00408770((int)param_1);
  if ((LPCVOID)param_1[6] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalFree(pvVar1);
  }
  return;
}


