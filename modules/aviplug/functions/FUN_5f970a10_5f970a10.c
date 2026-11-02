/* Module: aviplug.dll
   Function: FUN_5f970a10
   Address: 5f970a10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f970a10(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar13;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  FUN_5f970980(param_1);
  iVar1 = 2;
  do {
    uVar12 = DAT_5f9da990;
    uVar2 = CONCAT44((int)((ulonglong)*(undefined8 *)param_1 >> 0x20) << 0x10,
                     (int)*(undefined8 *)param_1 << 0x10) |
            *(ulonglong *)(param_1 + 0x20) & DAT_5f9da950;
    uVar3 = pmaddwd(uVar2,DAT_5f9da958);
    uVar7 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) << 0x10,
                     (int)*(undefined8 *)(param_1 + 0x10) << 0x10) |
            *(ulonglong *)(param_1 + 0x30) & DAT_5f9da950;
    uVar8 = pmaddwd(uVar7,DAT_5f9da960);
    uVar14 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) << 0x10,
                      (int)*(undefined8 *)(param_1 + 8) << 0x10) |
             *(ulonglong *)(param_1 + 0x18) & DAT_5f9da950;
    uVar15 = pmaddwd(uVar14,DAT_5f9da968);
    uVar5 = pmaddwd(uVar2,DAT_5f9da970);
    uVar2 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) << 0x10,
                     (int)*(undefined8 *)(param_1 + 0x28) << 0x10) |
            *(ulonglong *)(param_1 + 0x38) & DAT_5f9da950;
    uVar10 = pmaddwd(uVar7,DAT_5f9da980);
    uVar16 = pmaddwd(uVar2,DAT_5f9da978);
    iVar9 = (int)((ulonglong)uVar8 >> 0x20);
    iVar4 = (int)((ulonglong)uVar3 >> 0x20);
    iVar6 = (int)((ulonglong)uVar5 >> 0x20);
    iVar13 = (int)((ulonglong)uVar10 >> 0x20);
    uVar11 = pmaddwd(DAT_5f9da988,uVar14);
    *(ulonglong *)param_1 =
         CONCAT44((int)((ulonglong)uVar15 >> 0x20) + iVar9 + iVar4 +
                  (int)((ulonglong)uVar16 >> 0x20) >> 0xf,
                  (int)uVar15 + (int)uVar8 + (int)uVar3 + (int)uVar16 >> 0xf);
    uVar16 = pmaddwd(uVar12,uVar2);
    uVar15 = pmaddwd(DAT_5f9da998,uVar14);
    uVar12 = pmaddwd(DAT_5f9da9a0,uVar2);
    uVar17 = pmaddwd(DAT_5f9da9a8,uVar14);
    uVar18 = pmaddwd(uVar2,_DAT_5f9da9b0);
    *(ulonglong *)(param_1 + 0x20) =
         CONCAT44(((iVar4 - iVar9) - (int)((ulonglong)uVar11 >> 0x20)) -
                  (int)((ulonglong)uVar16 >> 0x20) >> 0xf,
                  (((int)uVar3 - (int)uVar8) - (int)uVar11) - (int)uVar16 >> 0xf);
    *(ulonglong *)(param_1 + 0x30) =
         CONCAT44(((iVar6 + iVar13) - (int)((ulonglong)uVar15 >> 0x20)) -
                  (int)((ulonglong)uVar12 >> 0x20) >> 0xf,
                  (((int)uVar5 + (int)uVar10) - (int)uVar15) - (int)uVar12 >> 0xf);
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT44((iVar6 - iVar13) + (int)((ulonglong)uVar17 >> 0x20) +
                  (int)((ulonglong)uVar18 >> 0x20) >> 0xf,
                  ((int)uVar5 - (int)uVar10) + (int)uVar17 + (int)uVar18 >> 0xf);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


