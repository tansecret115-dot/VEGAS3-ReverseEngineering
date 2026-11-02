/* Module: sftrkfx1.dll
   Function: FUN_5cba1b90
   Address: 5cba1b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cba1b90(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xc0];
  *param_1 = &PTR_LAB_5cc03e74;
  param_1[3] = &PTR_FUN_5cc03e38;
  param_1[4] = &PTR_LAB_5cc03e24;
  param_1[0x28] = &PTR_LAB_5cc03db4;
  param_1[0xc6] = &PTR_LAB_5cc03da4;
  param_1[199] = &PTR_LAB_5cc03d84;
  param_1[200] = &PTR_LAB_5cc03d6c;
  param_1[0xc9] = &PTR_LAB_5cc03d48;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc0] = 0;
  }
  FUN_5cba5100((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x28)));
  FUN_5cbf2c92((int)param_1);
  return;
}


