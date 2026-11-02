/* Module: oggplug.dll
   Function: FUN_00403eb0
   Address: 00403eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00403eb0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_004477c8;
  param_1[1] = &PTR_LAB_004477b4;
  param_1[2] = &PTR_LAB_004477a4;
  param_1[3] = &PTR_LAB_00447790;
  FUN_00404bb0(param_1,param_1[4]);
  FUN_00404bb0(param_1,param_1[6]);
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[8] = 0;
  return;
}


