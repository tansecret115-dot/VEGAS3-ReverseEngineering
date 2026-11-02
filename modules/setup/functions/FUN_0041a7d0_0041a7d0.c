/* Module: Setup.exe
   Function: FUN_0041a7d0
   Address: 0041a7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a7d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
    uVar5 = *(undefined4 *)(iVar1 + -4 + param_2 * 4);
    puVar6 = (undefined4 *)(iVar1 + -4 + param_2 * 4);
    iVar4 = param_2 * 2;
    iVar3 = iVar4;
    if (param_3 <= iVar4) goto LAB_0041a8d9;
    do {
      iVar7 = (*(code *)param_5)(param_4,*(undefined4 *)(iVar1 + iVar4 * 4),
                                 *(undefined4 *)(iVar1 + -4 + iVar4 * 4));
      iVar3 = iVar4;
      if (0 < iVar7) {
        iVar3 = iVar4 + 1;
      }
LAB_0041a8d9:
      iVar4 = (*(code *)param_5)(param_4,*(undefined4 *)(iVar1 + -4 + iVar3 * 4),uVar5);
      if (0 < iVar4) {
        *puVar6 = *(undefined4 *)(iVar1 + -4 + iVar3 * 4);
        *(undefined4 *)(iVar1 + -4 + iVar3 * 4) = uVar5;
      }
      iVar4 = iVar3 * 2;
      uVar5 = *(undefined4 *)(iVar1 + -4 + iVar3 * 4);
      puVar6 = (undefined4 *)(iVar1 + -4 + iVar3 * 4);
    } while (iVar4 < param_3);
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = param_2 * 2;
  do {
    iVar7 = param_2 + -1;
    param_2 = iVar3;
    if ((iVar3 < param_3) &&
       (iVar2 = (*(code *)param_5)(param_4,iVar3 * iVar4 + iVar1,(iVar3 + -1) * iVar4 + iVar1),
       0 < iVar2)) {
      param_2 = iVar3 + 1;
    }
    iVar3 = (*(code *)param_5)(param_4,(param_2 + -1) * iVar4 + iVar1,iVar7 * iVar4 + iVar1);
    if (0 < iVar3) {
      iVar3 = *(int *)(param_1 + 4);
      puVar6 = (undefined4 *)((param_2 + -1) * iVar3 + *(int *)(param_1 + 8));
      iVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar2) {
        iVar3 = (iVar7 * iVar3 + *(int *)(param_1 + 8)) - (int)puVar6;
        do {
          uVar5 = *puVar6;
          *puVar6 = *(undefined4 *)(iVar3 + (int)puVar6);
          *(undefined4 *)(iVar3 + (int)puVar6) = uVar5;
          puVar6 = puVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar3 = param_2 * 2;
  } while (iVar3 < param_3);
  return;
}


