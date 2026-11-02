/* Module: g2plug.dll
   Function: FUN_5f816250
   Address: 5f816250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f816250(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_5f86b7e8;
  if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalFree(pvVar1);
  }
  return;
}


