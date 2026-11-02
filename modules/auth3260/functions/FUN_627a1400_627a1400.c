/* Module: auth3260.dll
   Function: FUN_627a1400
   Address: 627a1400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627a1400(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[6];
  *param_1 = &PTR_FUN_627a7918;
  param_1[4] = &PTR_LAB_627a7900;
  param_1[5] = &PTR_LAB_627a78e8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  *param_1 = &PTR_FUN_627a7970;
  return;
}


