/* Module: rmbe3260.dll
   Function: FUN_66024900
   Address: 66024900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66024900(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x8a);
  *param_1 = &PTR_FUN_66067098;
  param_1[4] = &PTR_LAB_66067050;
  param_1[5] = &PTR_LAB_66066fd0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x8a) = 0;
  }
  FUN_6605b770(param_1 + 6);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


