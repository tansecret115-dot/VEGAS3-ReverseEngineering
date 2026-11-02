/* Module: sfcdi.dll
   Function: FUN_5bf3dee0
   Address: 5bf3dee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3dee0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    uVar3 = *(uint *)(param_2 + 0x330);
    *(uint *)(param_1 + 0x18) = uVar2 - uVar3;
    *(int *)(param_1 + 0x1c) =
         (*(int *)(param_1 + 0x1c) - *(int *)(param_2 + 0x334)) - (uint)(uVar2 < uVar3);
    FUN_5bf3d4a0(param_1,param_2);
    return;
  }
  if (*(int **)(param_2 + 0x214) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_2 + 0x214);
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(piVar1[2] + iVar6 * 4);
      }
      FUN_5bf3dee0(param_1,iVar4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  if (*(int *)(param_2 + 0x21c) == 0) {
    FUN_5bf29dd0(*(int **)(param_2 + 0x214),0,-1,0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    return;
  }
  FUN_5bf2b040(*(int **)(param_2 + 0x214));
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return;
}


