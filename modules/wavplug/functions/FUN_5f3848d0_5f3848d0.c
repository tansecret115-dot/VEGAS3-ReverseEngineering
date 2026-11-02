/* Module: wavplug.dll
   Function: FUN_5f3848d0
   Address: 5f3848d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f3848d0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_5f3ca7dc;
  param_1[1] = &PTR_LAB_5f3ca7c8;
  param_1[2] = &PTR_LAB_5f3ca7b4;
  param_1[3] = &PTR_LAB_5f3ca7a4;
  param_1[4] = &PTR_LAB_5f3ca790;
  FUN_5f385640(param_1,param_1[8]);
  FUN_5f385640(param_1,param_1[10]);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


