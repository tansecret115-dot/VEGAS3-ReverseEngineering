/* Module: rmme3260.dll
   Function: FUN_66230c30
   Address: 66230c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66230c30(int param_1,undefined2 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x6c) & 4) != 0) {
    return -0x7ffbfff7;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 4;
  *(undefined2 *)(param_1 + 0x36) = param_2;
  (**(code **)(**(int **)(param_1 + 0x91) + 4))();
  iVar1 = FUN_66230df0(param_1);
  (**(code **)(**(int **)(param_1 + 0x91) + 8))();
  iVar1 = FUN_6622d650(iVar1);
  return iVar1;
}


