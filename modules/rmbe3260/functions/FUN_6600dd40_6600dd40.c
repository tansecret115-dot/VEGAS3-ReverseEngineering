/* Module: rmbe3260.dll
   Function: FUN_6600dd40
   Address: 6600dd40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6600dd40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x27);
  *param_1 = &PTR_FUN_660646e8;
  param_1[4] = &PTR_LAB_660646b8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x27) = 0;
  }
  FUN_6605b770((int *)((int)param_1 + 0x1b));
  *param_1 = &PTR_FUN_66063e30;
  return;
}


