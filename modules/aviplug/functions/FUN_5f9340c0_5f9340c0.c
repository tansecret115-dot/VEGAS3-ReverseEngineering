/* Module: aviplug.dll
   Function: FUN_5f9340c0
   Address: 5f9340c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f9340c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f9d7910;
  param_1[1] = &PTR_LAB_5f9d78f8;
  FUN_5f934160((int)param_1);
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


