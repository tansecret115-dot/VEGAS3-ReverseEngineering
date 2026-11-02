/* Module: aviplug.dll
   Function: FUN_5f970980
   Address: 5f970980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f970980(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar1 = 8;
  do {
    uVar3 = packssdw(*(undefined8 *)param_1,*(undefined8 *)param_1);
    uVar5 = packssdw(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 2));
    uVar3 = pmaddwd(uVar3,DAT_5f9da9b8);
    uVar5 = pmaddwd(uVar5,DAT_5f9da9c0);
    uVar6 = packssdw(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 4));
    uVar8 = packssdw(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 6));
    uVar6 = pmaddwd(uVar6,DAT_5f9da9c8);
    iVar2 = (int)uVar3 + (int)uVar5;
    iVar4 = (int)((ulonglong)uVar3 >> 0x20) + (int)((ulonglong)uVar5 >> 0x20);
    uVar3 = pmaddwd(uVar8,DAT_5f9da9d0);
    iVar7 = (int)((ulonglong)uVar6 >> 0x20);
    iVar9 = (int)((ulonglong)uVar3 >> 0x20);
    param_1[1] = iVar2 + (int)uVar6 + (int)uVar3 >> 0xd;
    *(ulonglong *)(param_1 + 2) =
         CONCAT44((iVar4 - iVar7) - iVar9 >> 0xd,(iVar2 - (int)uVar6) - (int)uVar3 >> 0xd);
    *param_1 = iVar4 + iVar7 + iVar9 >> 0xd;
    param_1 = param_1 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


