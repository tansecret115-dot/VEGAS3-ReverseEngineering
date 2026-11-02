/* Module: aviplug.dll
   Function: FUN_5f9700b0
   Address: 5f9700b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9700b0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  
  FUN_5f96fde0(param_1);
  iVar1 = 8;
  do {
    uVar3 = packssdw(*param_1,*param_1);
    uVar6 = packssdw(param_1[0x10],param_1[0x10]);
    uVar3 = CONCAT44(CONCAT22((short)((ulonglong)uVar3 >> 0x10),(short)((ulonglong)uVar6 >> 0x10)),
                     CONCAT22((short)uVar3,(short)uVar6));
    uVar6 = packssdw(param_1[0x20],param_1[0x20]);
    uVar11 = packssdw(param_1[0x30],param_1[0x30]);
    uVar11 = CONCAT44(CONCAT22((short)((ulonglong)uVar6 >> 0x10),(short)((ulonglong)uVar11 >> 0x10))
                      ,CONCAT22((short)uVar6,(short)uVar11));
    uVar6 = pmaddwd(uVar3,DAT_5f9da920);
    uVar12 = pmaddwd(uVar11,DAT_5f9da920);
    uVar14 = packssdw(param_1[8],param_1[8]);
    uVar3 = pmaddwd(uVar3,DAT_5f9da910);
    uVar16 = packssdw(param_1[0x18],param_1[0x18]);
    uVar14 = CONCAT44(CONCAT22((short)((ulonglong)uVar14 >> 0x10),(short)((ulonglong)uVar16 >> 0x10)
                              ),CONCAT22((short)uVar14,(short)uVar16));
    uVar11 = pmaddwd(uVar11,DAT_5f9da910);
    uVar16 = packssdw(param_1[0x28],param_1[0x28]);
    uVar24 = packssdw(param_1[0x38],param_1[0x38]);
    iVar10 = (int)uVar12 + (int)uVar6;
    iVar7 = (int)((ulonglong)uVar6 >> 0x20);
    iVar13 = (int)((ulonglong)uVar12 >> 0x20) + iVar7;
    uVar24 = CONCAT44(CONCAT22((short)((ulonglong)uVar16 >> 0x10),(short)((ulonglong)uVar24 >> 0x10)
                              ),CONCAT22((short)uVar16,(short)uVar24));
    uVar12 = pmaddwd(DAT_5f9da918,uVar14);
    iVar8 = (int)uVar11 + (int)uVar3;
    iVar4 = (int)((ulonglong)uVar3 >> 0x20);
    iVar9 = (int)((ulonglong)uVar11 >> 0x20) + iVar4;
    uVar16 = pmaddwd(DAT_5f9da918,uVar24);
    uVar11 = pmaddwd(uVar14,_DAT_5f9da928);
    uVar14 = pmaddwd(uVar24,_DAT_5f9da928);
    iVar2 = (int)uVar3 * 2 - iVar8;
    iVar4 = iVar4 * 2 - iVar9;
    iVar5 = (int)uVar6 * 2 - iVar10;
    iVar7 = iVar7 * 2 - iVar13;
    iVar18 = (int)uVar16 + (int)uVar12;
    iVar15 = (int)((ulonglong)uVar12 >> 0x20);
    iVar20 = (int)((ulonglong)uVar16 >> 0x20) + iVar15;
    iVar19 = iVar18 + iVar8;
    iVar21 = iVar20 + iVar9;
    iVar22 = (int)uVar14 + (int)uVar11;
    iVar17 = (int)((ulonglong)uVar11 >> 0x20);
    iVar25 = (int)((ulonglong)uVar14 >> 0x20) + iVar17;
    iVar18 = ((int)uVar12 * 2 - iVar18) + iVar2;
    iVar15 = (iVar15 * 2 - iVar20) + iVar4;
    iVar23 = iVar22 + iVar10;
    iVar26 = iVar25 + iVar13;
    iVar20 = ((int)uVar11 * 2 - iVar22) + iVar5;
    iVar17 = (iVar17 * 2 - iVar25) + iVar7;
    *param_1 = CONCAT44(iVar21 >> 0xf,iVar19 >> 0xf);
    param_1[0x30] = CONCAT44(iVar9 * 2 - iVar21 >> 0xf,iVar8 * 2 - iVar19 >> 0xf);
    param_1[8] = CONCAT44(iVar15 >> 0xf,iVar18 >> 0xf);
    param_1[0x38] = CONCAT44(iVar4 * 2 - iVar15 >> 0xf,iVar2 * 2 - iVar18 >> 0xf);
    param_1[0x10] = CONCAT44(iVar26 >> 0xf,iVar23 >> 0xf);
    param_1[0x20] = CONCAT44(iVar13 * 2 - iVar26 >> 0xf,iVar10 * 2 - iVar23 >> 0xf);
    param_1[0x18] = CONCAT44(iVar17 >> 0xf,iVar20 >> 0xf);
    param_1[0x28] = CONCAT44(iVar7 * 2 - iVar17 >> 0xf,iVar5 * 2 - iVar20 >> 0xf);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return;
}


