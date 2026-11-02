/* Module: rmme3260.dll
   Function: FUN_66236310
   Address: 66236310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66236310(int param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return -0x7ffbfff7;
  }
  if ((*(byte *)(param_1 + 0x5c) & 2) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x10d);
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
    local_1c = 0x4002;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),&local_1c);
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x10))(*(int **)(param_1 + 0x30));
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 8))(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return iVar1;
}


