/* Module: aviplug.dll
   Function: FUN_5f970c40
   Address: 5f970c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f970c40(int *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  FUN_5f970980(param_1);
  iVar1 = 2;
  uVar12 = DAT_5f9da950;
  do {
    uVar3 = CONCAT44((int)((ulonglong)*(undefined8 *)param_1 >> 0x20) << 0x10,
                     (int)*(undefined8 *)param_1 << 0x10) | *(ulonglong *)(param_1 + 0x10) & uVar12;
    uVar4 = pmaddwd(uVar3,DAT_5f9da958);
    uVar9 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) << 0x10,
                     (int)*(undefined8 *)(param_1 + 0x20) << 0x10) |
            *(ulonglong *)(param_1 + 0x30) & uVar12;
    uVar7 = pmaddwd(uVar3,DAT_5f9da970);
    uVar10 = pmaddwd(uVar9,DAT_5f9da958);
    uVar11 = pmaddwd(uVar9,DAT_5f9da970);
    iVar2 = (int)uVar4 + (int)uVar10;
    iVar5 = (int)((ulonglong)uVar4 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20);
    iVar6 = (int)uVar7 + (int)uVar11;
    iVar8 = (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar11 >> 0x20);
    uVar3 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) << 0x10,
                     (int)*(undefined8 *)(param_1 + 8) << 0x10) |
            *(ulonglong *)(param_1 + 0x18) & uVar12;
    uVar12 = *(ulonglong *)(param_1 + 0x38) & uVar12 |
             CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) << 0x10,
                      (int)*(undefined8 *)(param_1 + 0x28) << 0x10);
    uVar10 = pmaddwd(uVar3,DAT_5f9da960);
    uVar4 = pmaddwd(uVar12,DAT_5f9da960);
    uVar11 = pmaddwd(uVar3,DAT_5f9da980);
    uVar7 = pmaddwd(uVar12,DAT_5f9da980);
    iVar15 = (int)uVar10 + iVar2 + (int)uVar4;
    iVar16 = (int)((ulonglong)uVar10 >> 0x20) + iVar5 + (int)((ulonglong)uVar4 >> 0x20);
    iVar13 = (int)uVar7 + (int)uVar11;
    iVar14 = (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar11 >> 0x20);
    *(ulonglong *)param_1 = CONCAT44(iVar16 >> 0xf,iVar15 >> 0xf);
    *(ulonglong *)(param_1 + 0x30) = CONCAT44(iVar5 * 2 - iVar16 >> 0xf,iVar2 * 2 - iVar15 >> 0xf);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(iVar8 - iVar14 >> 0xf,iVar6 - iVar13 >> 0xf);
    uVar12 = 0xffff0000ffff;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(iVar8 + iVar14 >> 0xf,iVar6 + iVar13 >> 0xf);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


