/* Module: aviplug.dll
   Function: FUN_5f950720
   Address: 5f950720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f950720(undefined4 *param_1)

{
  int *piVar1;
  
  param_1[-1] = &PTR_LAB_5f9d8a04;
  *param_1 = &PTR_LAB_5f9d8a2c;
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[8] = 0;
  }
  FUN_5f950250((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x4) & (uint)param_1));
  return;
}


