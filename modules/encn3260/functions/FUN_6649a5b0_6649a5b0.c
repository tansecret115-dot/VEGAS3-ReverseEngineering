/* Module: encn3260.dll
   Function: FUN_6649a5b0
   Address: 6649a5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6649a5b0(int param_1,undefined2 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x6c) & 4) != 0) {
    return -0x7ffbfff7;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 4;
  *(undefined2 *)(param_1 + 0x36) = param_2;
  (**(code **)(**(int **)(param_1 + 0x91) + 4))();
  iVar1 = FUN_6649a770(param_1);
  (**(code **)(**(int **)(param_1 + 0x91) + 8))();
  iVar1 = FUN_66497130(iVar1);
  return iVar1;
}


