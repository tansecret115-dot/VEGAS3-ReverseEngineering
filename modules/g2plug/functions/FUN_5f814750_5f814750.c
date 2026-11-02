/* Module: g2plug.dll
   Function: FUN_5f814750
   Address: 5f814750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f814750(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_5f86b6c8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[3] != (int *)0x0) {
    FUN_5f8147b0((int *)param_1[3]);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((int *)param_1[5] != (int *)0x0) {
    FUN_5f8147b0((int *)param_1[5]);
    param_1[5] = 0;
  }
  return;
}


