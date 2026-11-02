/* Module: aifplug.dll
   Function: FUN_5fbd4a50
   Address: 5fbd4a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5fbd4a50(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_5fbff630;
  param_1[1] = &PTR_LAB_5fbff61c;
  param_1[2] = &PTR_LAB_5fbff60c;
  param_1[3] = &PTR_LAB_5fbff5f8;
  FUN_5fbd58e0(param_1,param_1[7]);
  FUN_5fbd58e0(param_1,param_1[9]);
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


