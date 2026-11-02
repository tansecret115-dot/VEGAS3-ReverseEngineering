/* Module: sfpaplug.dll
   Function: FUN_00412de0
   Address: 00412de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00412de0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_0044f0c0;
  if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalFree(pvVar1);
  }
  return;
}


