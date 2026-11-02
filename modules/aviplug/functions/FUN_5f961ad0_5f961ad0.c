/* Module: aviplug.dll
   Function: FUN_5f961ad0
   Address: 5f961ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f961ad0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_5f9d94ac;
  if ((LPCVOID)param_1[0x38] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x38]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x38]);
    GlobalFree(pvVar1);
    param_1[0x38] = 0;
  }
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


