/* Module: sctplug.dll
   Function: FUN_00407020
   Address: 00407020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407020(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00404a10(*(int **)(param_1 + 4));
  if (iVar1 == -1) {
    return 0x8004e007;
  }
  if ((**(short **)(param_1 + 0x50) != 1) && (**(short **)(param_1 + 0x50) != 3)) {
    FUN_00404ad0(*(int **)(param_1 + 4));
    return 0x8004e00b;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  *param_3 = *(undefined4 *)(param_1 + 0x38);
  param_3[1] = *(undefined4 *)(param_1 + 0x3c);
  *param_4 = iVar1;
  return 0;
}


