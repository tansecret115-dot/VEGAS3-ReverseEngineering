/* Module: aviplug.dll
   Function: FUN_5f970570
   Address: 5f970570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f970570(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar11;
  undefined8 uVar10;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  
  iVar1 = 8;
  do {
    uVar10 = DAT_5f9da940;
    uVar5 = packssdw(param_1[1],*param_1);
    uVar5 = pshufw(*param_1,uVar5,0xd8);
    uVar13 = packssdw(param_1[3],param_1[2]);
    uVar8 = pshufw(param_1[2],uVar13,0xd8);
    uVar13 = packssdw(param_1[7],param_1[4]);
    uVar16 = pshufw(uVar13,uVar13,0xd8);
    uVar19 = packssdw(param_1[5],param_1[6]);
    uVar13 = pmaddwd(uVar5,DAT_5f9da910);
    uVar9 = pmaddwd(uVar8,DAT_5f9da918);
    uVar20 = pshufw(uVar19,uVar19,0xd8);
    uVar5 = pmaddwd(uVar5,DAT_5f9da920);
    uVar8 = pmaddwd(uVar8,_DAT_5f9da928);
    uVar19 = pmaddwd(uVar16,_DAT_5f9da930);
    iVar7 = (int)uVar9 + (int)uVar13;
    iVar3 = (int)((ulonglong)uVar13 >> 0x20);
    iVar11 = (int)((ulonglong)uVar9 >> 0x20) + iVar3;
    uVar9 = pmaddwd(uVar20,_DAT_5f9da938);
    iVar12 = (int)uVar8 + (int)uVar5;
    iVar6 = (int)((ulonglong)uVar5 >> 0x20);
    iVar14 = (int)((ulonglong)uVar8 >> 0x20) + iVar6;
    iVar2 = (int)uVar13 * 2 - iVar7;
    iVar3 = iVar3 * 2 - iVar11;
    iVar4 = (int)uVar5 * 2 - iVar12;
    iVar6 = iVar6 * 2 - iVar14;
    iVar15 = (int)uVar19 + iVar7 + (int)uVar9;
    iVar17 = (int)((ulonglong)uVar19 >> 0x20) + iVar11 + (int)((ulonglong)uVar9 >> 0x20);
    *param_1 = CONCAT44(iVar17 >> 0xd,iVar15 >> 0xd);
    uVar8 = pmaddwd(uVar10,uVar16);
    param_1[7] = CONCAT44(iVar11 * 2 - iVar17 >> 0xd,iVar7 * 2 - iVar15 >> 0xd);
    uVar13 = pmaddwd(uVar20,_DAT_5f9da930);
    uVar5 = pmaddwd(uVar16,_DAT_5f9da938);
    uVar10 = pmaddwd(uVar16,_DAT_5f9da948);
    iVar18 = ((int)uVar8 + iVar12) - (int)uVar13;
    iVar21 = ((int)((ulonglong)uVar8 >> 0x20) + iVar14) - (int)((ulonglong)uVar13 >> 0x20);
    uVar13 = pmaddwd(uVar20,_DAT_5f9da948);
    uVar8 = pmaddwd(uVar20,DAT_5f9da940);
    iVar1 = iVar1 + -1;
    iVar15 = (int)uVar5 + iVar4 + (int)uVar13;
    iVar17 = (int)((ulonglong)uVar5 >> 0x20) + iVar6 + (int)((ulonglong)uVar13 >> 0x20);
    param_1[1] = CONCAT44(iVar21 >> 0xd,iVar18 >> 0xd);
    iVar7 = (int)uVar10 + iVar2 + (int)uVar8;
    iVar11 = (int)((ulonglong)uVar10 >> 0x20) + iVar3 + (int)((ulonglong)uVar8 >> 0x20);
    param_1[6] = CONCAT44(iVar14 * 2 - iVar21 >> 0xd,iVar12 * 2 - iVar18 >> 0xd);
    param_1[2] = CONCAT44(iVar17 >> 0xd,iVar15 >> 0xd);
    param_1[5] = CONCAT44(iVar6 * 2 - iVar17 >> 0xd,iVar4 * 2 - iVar15 >> 0xd);
    param_1[3] = CONCAT44(iVar11 >> 0xd,iVar7 >> 0xd);
    param_1[4] = CONCAT44(iVar3 * 2 - iVar11 >> 0xd,iVar2 * 2 - iVar7 >> 0xd);
    param_1 = param_1 + 8;
  } while (iVar1 != 0);
  return;
}


