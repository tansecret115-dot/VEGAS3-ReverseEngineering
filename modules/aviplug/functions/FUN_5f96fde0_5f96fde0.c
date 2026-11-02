/* Module: aviplug.dll
   Function: FUN_5f96fde0
   Address: 5f96fde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96fde0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar10;
  undefined8 uVar9;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  
  iVar1 = 8;
  do {
    uVar9 = DAT_5f9da940;
    uVar3 = packssdw(*param_1,*param_1);
    uVar6 = packssdw(param_1[1],param_1[1]);
    uVar6 = CONCAT44(CONCAT22((short)((ulonglong)uVar3 >> 0x10),(short)((ulonglong)uVar6 >> 0x10)),
                     CONCAT22((short)uVar3,(short)uVar6));
    uVar3 = packssdw(param_1[2],param_1[2]);
    uVar12 = packssdw(param_1[3],param_1[3]);
    uVar13 = CONCAT44(CONCAT22((short)((ulonglong)uVar3 >> 0x10),(short)((ulonglong)uVar12 >> 0x10))
                      ,CONCAT22((short)uVar3,(short)uVar12));
    uVar15 = packssdw(param_1[4],param_1[4]);
    uVar17 = packssdw(param_1[7],param_1[7]);
    uVar3 = pmaddwd(uVar6,DAT_5f9da910);
    uVar12 = pmaddwd(uVar13,DAT_5f9da918);
    uVar15 = CONCAT44(CONCAT22((short)((ulonglong)uVar15 >> 0x10),(short)((ulonglong)uVar17 >> 0x10)
                              ),CONCAT22((short)uVar15,(short)uVar17));
    uVar6 = pmaddwd(uVar6,DAT_5f9da920);
    uVar20 = packssdw(param_1[5],param_1[5]);
    uVar13 = pmaddwd(uVar13,_DAT_5f9da928);
    uVar17 = packssdw(param_1[6],param_1[6]);
    uVar20 = CONCAT44(CONCAT22((short)((ulonglong)uVar17 >> 0x10),(short)((ulonglong)uVar20 >> 0x10)
                              ),CONCAT22((short)uVar17,(short)uVar20));
    uVar17 = pmaddwd(uVar15,_DAT_5f9da930);
    uVar21 = pmaddwd(uVar20,_DAT_5f9da938);
    iVar8 = (int)uVar12 + (int)uVar3;
    iVar4 = (int)((ulonglong)uVar3 >> 0x20);
    iVar10 = (int)((ulonglong)uVar12 >> 0x20) + iVar4;
    iVar11 = (int)uVar13 + (int)uVar6;
    iVar7 = (int)((ulonglong)uVar6 >> 0x20);
    iVar14 = (int)((ulonglong)uVar13 >> 0x20) + iVar7;
    iVar2 = (int)uVar3 * 2 - iVar8;
    iVar4 = iVar4 * 2 - iVar10;
    iVar5 = (int)uVar6 * 2 - iVar11;
    iVar7 = iVar7 * 2 - iVar14;
    iVar16 = (int)uVar17 + iVar8 + (int)uVar21;
    iVar18 = (int)((ulonglong)uVar17 >> 0x20) + iVar10 + (int)((ulonglong)uVar21 >> 0x20);
    *param_1 = CONCAT44(iVar18 >> 0xd,iVar16 >> 0xd);
    uVar12 = pmaddwd(uVar9,uVar15);
    param_1[7] = CONCAT44(iVar10 * 2 - iVar18 >> 0xd,iVar8 * 2 - iVar16 >> 0xd);
    uVar6 = pmaddwd(uVar20,_DAT_5f9da930);
    uVar3 = pmaddwd(uVar15,_DAT_5f9da938);
    uVar9 = pmaddwd(uVar15,_DAT_5f9da948);
    iVar19 = ((int)uVar12 + iVar11) - (int)uVar6;
    iVar22 = ((int)((ulonglong)uVar12 >> 0x20) + iVar14) - (int)((ulonglong)uVar6 >> 0x20);
    uVar6 = pmaddwd(uVar20,_DAT_5f9da948);
    uVar12 = pmaddwd(uVar20,DAT_5f9da940);
    iVar16 = (int)uVar3 + iVar5 + (int)uVar6;
    iVar18 = (int)((ulonglong)uVar3 >> 0x20) + iVar7 + (int)((ulonglong)uVar6 >> 0x20);
    param_1[1] = CONCAT44(iVar22 >> 0xd,iVar19 >> 0xd);
    iVar8 = (int)uVar9 + iVar2 + (int)uVar12;
    iVar10 = (int)((ulonglong)uVar9 >> 0x20) + iVar4 + (int)((ulonglong)uVar12 >> 0x20);
    param_1[6] = CONCAT44(iVar14 * 2 - iVar22 >> 0xd,iVar11 * 2 - iVar19 >> 0xd);
    param_1[2] = CONCAT44(iVar18 >> 0xd,iVar16 >> 0xd);
    param_1[5] = CONCAT44(iVar7 * 2 - iVar18 >> 0xd,iVar5 * 2 - iVar16 >> 0xd);
    param_1[3] = CONCAT44(iVar10 >> 0xd,iVar8 >> 0xd);
    param_1[4] = CONCAT44(iVar4 * 2 - iVar10 >> 0xd,iVar2 * 2 - iVar8 >> 0xd);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 8;
  } while (iVar1 != 0);
  return;
}


