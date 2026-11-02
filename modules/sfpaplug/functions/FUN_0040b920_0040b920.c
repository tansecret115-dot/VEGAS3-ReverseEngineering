/* Module: sfpaplug.dll
   Function: FUN_0040b920
   Address: 0040b920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040b920(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_0044ea40;
  param_1[1] = &PTR_LAB_0044ea30;
  FUN_0040b9e0();
  FUN_0040b9a0((int)param_1);
  piVar1 = (int *)param_1[0x87];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[0x88] != 0) {
    FUN_0040b6f0((void *)param_1[2],param_1[0x88]);
  }
  return;
}


