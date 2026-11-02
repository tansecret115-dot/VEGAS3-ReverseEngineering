/* Module: vegas30.exe
   Function: FUN_005ead00
   Address: 005ead00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005ead00(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_0062c6a0;
  if ((*(char *)(param_1 + 6) == '\0') && ((LPCVOID)param_1[2] != (LPCVOID)0x0)) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[2]);
    GlobalFree(pvVar1);
    param_1[2] = 0;
    return;
  }
  param_1[2] = 0;
  return;
}


