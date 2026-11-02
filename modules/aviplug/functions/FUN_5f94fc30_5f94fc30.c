/* Module: aviplug.dll
   Function: FUN_5f94fc30
   Address: 5f94fc30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f94fc30(int *param_1)

{
  *param_1 = (int)&PTR_LAB_5f9d8910;
  param_1[1] = (int)&PTR_LAB_5f9d8900;
  param_1[2] = (int)&PTR_LAB_5f9d88c0;
  FUN_5f94feb0(param_1,param_1[4]);
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


