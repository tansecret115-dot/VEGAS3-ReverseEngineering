/* Module: aviplug.dll
   Function: FUN_5f970430
   Address: 5f970430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f970430(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  
  FUN_5f970200(param_1);
  iVar1 = 4;
  do {
    uVar5 = packssdw(param_1[8],*param_1);
    uVar5 = pshufw(uVar5,uVar5,0xd8);
    uVar10 = packssdw(param_1[0x18],param_1[0x10]);
    uVar11 = pshufw(uVar10,uVar10,0xd8);
    uVar10 = pmaddwd(uVar5,DAT_5f9da920);
    uVar12 = pmaddwd(uVar11,DAT_5f9da920);
    uVar5 = pmaddwd(uVar5,DAT_5f9da910);
    uVar15 = packssdw(param_1[0xc],param_1[4]);
    uVar15 = pshufw(uVar15,uVar15,0xd8);
    uVar11 = pmaddwd(uVar11,DAT_5f9da910);
    iVar9 = (int)uVar12 + (int)uVar10;
    iVar6 = (int)((ulonglong)uVar10 >> 0x20);
    iVar13 = (int)((ulonglong)uVar12 >> 0x20) + iVar6;
    uVar12 = packssdw(param_1[0x1c],param_1[0x14]);
    uVar24 = pshufw(uVar12,uVar12,0xd8);
    uVar12 = pmaddwd(DAT_5f9da918,uVar15);
    iVar7 = (int)uVar11 + (int)uVar5;
    iVar3 = (int)((ulonglong)uVar5 >> 0x20);
    iVar8 = (int)((ulonglong)uVar11 >> 0x20) + iVar3;
    uVar19 = pmaddwd(DAT_5f9da918,uVar24);
    uVar11 = pmaddwd(uVar15,_DAT_5f9da928);
    uVar15 = pmaddwd(uVar24,_DAT_5f9da928);
    iVar2 = (int)uVar5 * 2 - iVar7;
    iVar3 = iVar3 * 2 - iVar8;
    iVar4 = (int)uVar10 * 2 - iVar9;
    iVar6 = iVar6 * 2 - iVar13;
    iVar17 = (int)uVar19 + (int)uVar12;
    iVar14 = (int)((ulonglong)uVar12 >> 0x20);
    iVar20 = (int)((ulonglong)uVar19 >> 0x20) + iVar14;
    iVar18 = iVar17 + iVar7;
    iVar21 = iVar20 + iVar8;
    iVar22 = (int)uVar15 + (int)uVar11;
    iVar16 = (int)((ulonglong)uVar11 >> 0x20);
    iVar25 = (int)((ulonglong)uVar15 >> 0x20) + iVar16;
    iVar17 = ((int)uVar12 * 2 - iVar17) + iVar2;
    iVar14 = (iVar14 * 2 - iVar20) + iVar3;
    iVar23 = iVar22 + iVar9;
    iVar26 = iVar25 + iVar13;
    iVar20 = ((int)uVar11 * 2 - iVar22) + iVar4;
    iVar16 = (iVar16 * 2 - iVar25) + iVar6;
    *param_1 = CONCAT44(iVar21 >> 0xf,iVar18 >> 0xf);
    param_1[0x18] = CONCAT44(iVar8 * 2 - iVar21 >> 0xf,iVar7 * 2 - iVar18 >> 0xf);
    param_1[4] = CONCAT44(iVar14 >> 0xf,iVar17 >> 0xf);
    param_1[0x1c] = CONCAT44(iVar3 * 2 - iVar14 >> 0xf,iVar2 * 2 - iVar17 >> 0xf);
    param_1[8] = CONCAT44(iVar26 >> 0xf,iVar23 >> 0xf);
    param_1[0x10] = CONCAT44(iVar13 * 2 - iVar26 >> 0xf,iVar9 * 2 - iVar23 >> 0xf);
    param_1[0xc] = CONCAT44(iVar16 >> 0xf,iVar20 >> 0xf);
    param_1[0x14] = CONCAT44(iVar6 * 2 - iVar16 >> 0xf,iVar4 * 2 - iVar20 >> 0xf);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return;
}


