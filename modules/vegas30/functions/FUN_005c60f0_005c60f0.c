/* Module: vegas30.exe
   Function: FUN_005c60f0
   Address: 005c60f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c60f0(int param_1,code *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = param_1;
  iVar7 = 0;
  if (param_3 != 2) {
    FUN_005b83b0(param_1,param_3);
  }
  puVar1 = (undefined4 *)(param_1 + 0x1dc);
  param_1 = 0;
  iVar2 = *(int *)*puVar1;
  if (0 < iVar2) {
    do {
      iVar6 = 0;
      iVar3 = *(int *)(*(int *)(*(int *)(iVar5 + 0x1dc) + 8) + param_1 * 4);
      iVar4 = **(int **)(iVar3 + 0x24);
      if (0 < iVar4) {
        do {
          iVar7 = (*param_2)(iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + iVar6 * 4)
                            );
          if (iVar7 != 0) goto LAB_005c6172;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar2);
  }
LAB_005c6172:
  if (param_3 != 2) {
    FUN_005b84d0(iVar5,param_3);
  }
  return iVar7;
}


