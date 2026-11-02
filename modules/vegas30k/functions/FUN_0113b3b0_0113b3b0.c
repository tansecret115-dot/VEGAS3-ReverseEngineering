/* Module: vegas30k.dll
   Function: FUN_0113b3b0
   Address: 0113b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0113b3b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x4c];
  *param_1 = &PTR_FUN_011e6ad4;
  param_1[1] = &PTR_LAB_011e6a8c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x4f];
  param_1[0x4c] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x4e];
  param_1[0x4f] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x4e] = 0;
  if (param_1[0x47] != 0) {
    FUN_01040210(param_1[0x47]);
  }
  param_1[0x47] = 0;
  return;
}


