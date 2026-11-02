/* Module: encn3260.dll
   Function: FUN_66499b80
   Address: 66499b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66499b80(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x7d) = param_3;
  }
  else {
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x81) = param_3;
      return 0;
    }
    if (param_2 != 2) {
      return -0x7fffbffb;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      (**(code **)(**(int **)(param_1 + 0x74) + 4))();
      iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 100))(param_3);
      iVar1 = FUN_66497130(iVar1);
      (**(code **)(**(int **)(param_1 + 0x74) + 8))();
      return iVar1;
    }
  }
  return 0;
}


