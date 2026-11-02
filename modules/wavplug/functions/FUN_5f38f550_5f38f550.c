/* Module: wavplug.dll
   Function: FUN_5f38f550
   Address: 5f38f550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f38f550(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_5f3cae70;
  param_1[1] = &PTR_LAB_5f3cae5c;
  FUN_5f38ffb0(param_1,param_1[5]);
  FUN_5f38ffb0(param_1,param_1[7]);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


