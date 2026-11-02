/* Module: aviplug.dll
   Function: FUN_5f970f50
   Address: 5f970f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f970f50(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_5f96fa50(param_1);
  iVar1 = 4;
  do {
    uVar3 = pmaddwd(*(undefined8 *)param_1,DAT_5f9da9d8);
    uVar6 = pmaddwd(CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) << 0x10,
                             (int)*(undefined8 *)(param_1 + 0x10) << 0x10) |
                    *(ulonglong *)(param_1 + 0x30) & 0xffff0000ffff,_DAT_5f9da9e0);
    uVar9 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) << 0x10,
                     (int)*(undefined8 *)(param_1 + 8) << 0x10) |
            *(ulonglong *)(param_1 + 0x18) & 0xffff0000ffff;
    uVar10 = pmaddwd(uVar9,_DAT_5f9da9e8);
    uVar13 = pmaddwd(uVar9,_DAT_5f9da9f0);
    uVar9 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) << 0x10,
                     (int)*(undefined8 *)(param_1 + 0x28) << 0x10) |
            *(ulonglong *)(param_1 + 0x38) & 0xffff0000ffff;
    uVar15 = pmaddwd(uVar9,_DAT_5f9daa00);
    uVar16 = pmaddwd(uVar9,DAT_5f9da9f8);
    iVar8 = (int)((ulonglong)uVar6 >> 0x20);
    iVar5 = (int)uVar6 + (int)uVar3;
    iVar4 = (int)((ulonglong)uVar3 >> 0x20);
    iVar7 = iVar8 + iVar4;
    iVar2 = (int)uVar3 - (int)uVar6;
    iVar4 = iVar4 - iVar8;
    iVar8 = (int)uVar10 + (int)uVar15;
    iVar11 = (int)((ulonglong)uVar10 >> 0x20) + (int)((ulonglong)uVar15 >> 0x20);
    iVar12 = (int)uVar13 + (int)uVar16;
    iVar14 = (int)((ulonglong)uVar13 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20);
    *(ulonglong *)param_1 = CONCAT44(iVar11 + iVar7 >> 0xf,iVar8 + iVar5 >> 0xf);
    *(ulonglong *)(param_1 + 0x30) = CONCAT44(iVar7 - iVar11 >> 0xf,iVar5 - iVar8 >> 0xf);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(iVar4 - iVar14 >> 0xf,iVar2 - iVar12 >> 0xf);
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(iVar14 + iVar4 >> 0xf,iVar12 + iVar2 >> 0xf);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


