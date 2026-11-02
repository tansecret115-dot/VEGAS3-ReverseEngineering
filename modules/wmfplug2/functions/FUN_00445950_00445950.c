/* Module: wmfplug2.dll
   Function: FUN_00445950
   Address: 00445950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445950(uint param_1,uint param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = param_1;
  iVar5 = 0;
  iVar4 = -0x7fffbfff;
  iVar1 = **(int **)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = 0;
    for (param_1 = 0; (iVar2 < iVar1 && (param_1 < param_2)); param_1 = param_1 + 1) {
      *(int *)(uVar3 + 8) = iVar2 + 1;
      iVar4 = FUN_00445a20(uVar3,param_3,*(int *)(*(int *)(*(int *)(uVar3 + 4) + 8) + iVar2 * 4));
      if (iVar4 < 0) break;
      iVar2 = *(int *)(uVar3 + 8);
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 0x9c;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar5;
  }
  if ((iVar4 == 0) && (iVar5 == 0)) {
    iVar4 = 1;
  }
  return iVar4;
}


