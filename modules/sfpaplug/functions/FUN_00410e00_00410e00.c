/* Module: sfpaplug.dll
   Function: FUN_00410e00
   Address: 00410e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00410e00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_0044ef48;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[3] != (int *)0x0) {
    FUN_00410e80((int *)param_1[3]);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[5] != (int *)0x0) {
    FUN_00410e80((int *)param_1[5]);
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[7] != (int *)0x0) {
    FUN_00410e80((int *)param_1[7]);
    param_1[7] = 0;
  }
  return;
}


