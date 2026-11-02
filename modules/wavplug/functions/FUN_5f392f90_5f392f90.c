/* Module: wavplug.dll
   Function: FUN_5f392f90
   Address: 5f392f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f392f90(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_5f3914a0(*(int **)(param_1 + 4));
  if (iVar1 == -1) {
    return 0x8004e007;
  }
  if (**(short **)(param_1 + 0x28) != 1) {
    FUN_5f391560(*(int **)(param_1 + 4));
    return 0x8004e00b;
  }
  *param_2 = *(undefined4 *)(param_1 + -0x88);
  param_2[1] = *(undefined4 *)(param_1 + -0x84);
  *param_3 = *(undefined4 *)(param_1 + -0x90);
  param_3[1] = *(undefined4 *)(param_1 + -0x8c);
  *param_4 = iVar1;
  return 0;
}


