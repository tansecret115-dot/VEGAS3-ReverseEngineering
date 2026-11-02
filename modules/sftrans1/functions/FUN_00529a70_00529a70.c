/* Module: sftrans1.dll
   Function: FUN_00529a70
   Address: 00529a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00529a70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x304);
  if ((*(int *)(param_1 + 0x304) <= param_2) &&
     (iVar3 = *(int *)(param_1 + 0x300), param_2 <= *(int *)(param_1 + 0x300))) {
    iVar3 = param_2;
  }
  piVar1 = *(int **)(param_1 + 0x308);
  iVar4 = 0;
  iVar2 = *piVar1;
  while (iVar3 != iVar2) {
    if (param_2 < iVar2) {
      FUN_004dc400(piVar1,param_2,1,1);
    }
    if (**(int **)(param_1 + 0x308) < param_2) {
      FUN_00529890(param_1,0);
    }
    iVar4 = iVar4 + 1;
    if (1000 < iVar4) break;
    piVar1 = *(int **)(param_1 + 0x308);
    iVar2 = *piVar1;
  }
  iVar3 = **(int **)(param_1 + 0x308) + -1;
  if (iVar3 < *(int *)(param_1 + 0x2fc)) {
    *(int *)(param_1 + 0x2fc) = iVar3;
  }
  return **(int **)(param_1 + 0x308);
}


