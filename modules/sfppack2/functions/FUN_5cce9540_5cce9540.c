/* Module: sfppack2.dll
   Function: FUN_5cce9540
   Address: 5cce9540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cce9540(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x154];
  *param_1 = &PTR_LAB_5cd52e8c;
  param_1[3] = &PTR_FUN_5cd52e50;
  param_1[4] = &PTR_LAB_5cd52e3c;
  param_1[0x26] = &PTR_LAB_5cd52c78;
  param_1[0x15a] = &PTR_LAB_5cd52c68;
  param_1[0x15b] = &PTR_LAB_5cd52c48;
  param_1[0x15c] = &PTR_LAB_5cd52c30;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x154] = 0;
  }
  FUN_5ccf26b0((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x26)));
  FUN_5cd3e6f2((int)param_1);
  return;
}


