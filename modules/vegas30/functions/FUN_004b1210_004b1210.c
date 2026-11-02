/* Module: vegas30.exe
   Function: FUN_004b1210
   Address: 004b1210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004b1210(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_006133b4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[3] != 0) {
    FUN_004b12a0(param_1[3]);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[5] != 0) {
    FUN_004b12a0(param_1[5]);
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[7] != 0) {
    FUN_004b12a0(param_1[7]);
    param_1[7] = 0;
  }
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[9] != 0) {
    FUN_004b12a0(param_1[9]);
    param_1[9] = 0;
  }
  return;
}


