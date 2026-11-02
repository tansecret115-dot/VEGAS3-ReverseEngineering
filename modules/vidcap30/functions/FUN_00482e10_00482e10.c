/* Module: vidcap30.exe
   Function: FUN_00482e10
   Address: 00482e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00482e10(int param_1,int param_2,int param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
    uVar4 = *(undefined4 *)(iVar1 + -4 + param_2 * 4);
    puVar5 = (undefined4 *)(iVar1 + -4 + param_2 * 4);
    param_2 = param_2 * 2;
    iVar6 = param_2;
    if (param_3 <= param_2) goto LAB_00482f19;
    do {
      iVar3 = (*param_5)(param_4,*(undefined4 *)(iVar1 + param_2 * 4),
                         *(undefined4 *)(iVar1 + -4 + param_2 * 4));
      iVar6 = param_2;
      if (0 < iVar3) {
        iVar6 = param_2 + 1;
      }
LAB_00482f19:
      iVar3 = (*param_5)(param_4,*(undefined4 *)(iVar1 + -4 + iVar6 * 4),uVar4);
      if (0 < iVar3) {
        *puVar5 = *(undefined4 *)(iVar1 + -4 + iVar6 * 4);
        *(undefined4 *)(iVar1 + -4 + iVar6 * 4) = uVar4;
      }
      param_2 = iVar6 * 2;
      uVar4 = *(undefined4 *)(iVar1 + -4 + iVar6 * 4);
      puVar5 = (undefined4 *)(iVar1 + -4 + iVar6 * 4);
    } while (param_2 < param_3);
    return;
  }
  iVar6 = *(int *)(param_1 + 4);
  iVar3 = param_2 * 2;
  do {
    iVar7 = param_2 + -1;
    param_2 = iVar3;
    if ((iVar3 < param_3) &&
       (iVar2 = (*param_5)(param_4,iVar3 * iVar6 + iVar1,(iVar3 + -1) * iVar6 + iVar1), 0 < iVar2))
    {
      param_2 = iVar3 + 1;
    }
    iVar3 = (*param_5)(param_4,(param_2 + -1) * iVar6 + iVar1,iVar7 * iVar6 + iVar1);
    if (0 < iVar3) {
      iVar3 = *(int *)(param_1 + 4);
      puVar5 = (undefined4 *)((param_2 + -1) * iVar3 + *(int *)(param_1 + 8));
      iVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar2) {
        iVar3 = (iVar7 * iVar3 + *(int *)(param_1 + 8)) - (int)puVar5;
        do {
          uVar4 = *puVar5;
          *puVar5 = *(undefined4 *)(iVar3 + (int)puVar5);
          *(undefined4 *)(iVar3 + (int)puVar5) = uVar4;
          puVar5 = puVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar3 = param_2 * 2;
  } while (iVar3 < param_3);
  return;
}


