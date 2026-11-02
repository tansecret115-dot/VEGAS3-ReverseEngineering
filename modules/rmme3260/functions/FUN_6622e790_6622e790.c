/* Module: rmme3260.dll
   Function: FUN_6622e790
   Address: 6622e790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6622e790(int param_1,undefined2 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return -0x7ffbfff7;
  }
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
  *(undefined2 *)(param_1 + 0x1e) = param_2;
  (**(code **)(**(int **)(param_1 + 0x60) + 4))();
  iVar1 = FUN_6622e970(param_1);
  (**(code **)(**(int **)(param_1 + 0x60) + 8))();
  iVar1 = FUN_6622d650(iVar1);
  return iVar1;
}


