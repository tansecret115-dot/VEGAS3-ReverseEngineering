/* Module: vegas30.exe
   Function: FUN_0053fa80
   Address: 0053fa80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0053fa80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 == 0) || (param_2 == 0)) || (*(int *)(param_2 + 4) != 3)) {
    return -1;
  }
  FUN_005b83b0(param_1,0);
  iVar4 = 0;
  iVar2 = 0;
  iVar1 = **(int **)(param_1 + 0x1dc);
  iVar5 = -1;
  if (0 < iVar1) {
    piVar3 = (int *)(*(int **)(param_1 + 0x1dc))[2];
    while (iVar5 = iVar4, *piVar3 != param_2) {
      if (*(int *)(*piVar3 + 4) == 3) {
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar2) {
        FUN_005b84d0(param_1,0);
        return -1;
      }
    }
  }
  FUN_005b84d0(param_1,0);
  return iVar5;
}


