/* Module: rmto3260.dll
   Function: FUN_662c29a0
   Address: 662c29a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662c29a0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_66306c70;
  param_1[5] = &PTR_LAB_66306be8;
  param_1[4] = &PTR_LAB_66306bf8;
  FUN_662c2a50((int)(param_1 + 4));
  piVar1 = *(int **)((int)param_1 + 0x66);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x66) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x5e);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
  }
  *param_1 = &PTR_FUN_66306400;
  return;
}


