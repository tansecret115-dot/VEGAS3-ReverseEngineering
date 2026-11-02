/* Module: rmbe3260.dll
   Function: FUN_6601b9a0
   Address: 6601b9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6601b9a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if ((*(int *)(param_1 + 0xa8) != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 0x3c))(*(int **)(param_1 + 0x84)), iVar1 < 0
     )) {
    iVar2 = iVar1;
  }
  if ((*(int *)(param_1 + 0xac) != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x3c))(*(int **)(param_1 + 0x88)), iVar1 < 0
     )) {
    iVar2 = iVar1;
  }
  if ((*(int *)(param_1 + 0xb0) != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x3c))(*(int **)(param_1 + 0x8c)), iVar1 < 0
     )) {
    iVar2 = iVar1;
  }
  if ((*(int *)(param_1 + 0xb4) != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x3c))(*(int **)(param_1 + 0x90)), iVar1 < 0
     )) {
    iVar2 = iVar1;
  }
  if (((*(int *)(param_1 + 0xb8) == 0) ||
      (iVar1 = (**(code **)(**(int **)(param_1 + 0x94) + 0x3c))(*(int **)(param_1 + 0x94)),
      iVar3 = iVar2, iVar2 = iVar1, iVar1 < 0)) && (iVar3 = iVar2, iVar1 < 0)) {
    iVar3 = iVar1;
  }
  return iVar3;
}


