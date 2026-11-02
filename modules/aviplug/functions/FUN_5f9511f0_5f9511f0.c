/* Module: aviplug.dll
   Function: FUN_5f9511f0
   Address: 5f9511f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f9511f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f9d8b50;
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0x4c))(1);
    param_1[6] = 0;
  }
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


