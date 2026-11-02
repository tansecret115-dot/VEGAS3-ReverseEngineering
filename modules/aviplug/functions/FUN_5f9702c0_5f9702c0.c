/* Module: aviplug.dll
   Function: FUN_5f9702c0
   Address: 5f9702c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9702c0(undefined8 *param_1)

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
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  
  FUN_5f970200(param_1);
  iVar1 = 4;
  do {
    uVar5 = packssdw(param_1[0x10],*param_1);
    uVar5 = pshufw(*param_1,uVar5,0xd8);
    uVar12 = packssdw(param_1[0x18],param_1[8]);
    uVar8 = pshufw(param_1[8],uVar12,0xd8);
    uVar15 = packssdw(param_1[0x1c],param_1[4]);
    uVar12 = pmaddwd(uVar5,DAT_5f9da910);
    uVar9 = pmaddwd(uVar8,DAT_5f9da918);
    uVar15 = pshufw(uVar15,uVar15,0xd8);
    uVar5 = pmaddwd(uVar5,DAT_5f9da920);
    uVar18 = packssdw(param_1[0xc],param_1[0x14]);
    uVar8 = pmaddwd(uVar8,_DAT_5f9da928);
    uVar19 = pshufw(uVar18,uVar18,0xd8);
    uVar18 = pmaddwd(uVar15,_DAT_5f9da930);
    iVar7 = (int)uVar9 + (int)uVar12;
    iVar3 = (int)((ulonglong)uVar12 >> 0x20);
    iVar10 = (int)((ulonglong)uVar9 >> 0x20) + iVar3;
    uVar9 = pmaddwd(uVar19,_DAT_5f9da938);
    iVar11 = (int)uVar8 + (int)uVar5;
    iVar6 = (int)((ulonglong)uVar5 >> 0x20);
    iVar13 = (int)((ulonglong)uVar8 >> 0x20) + iVar6;
    iVar2 = (int)uVar12 * 2 - iVar7;
    iVar3 = iVar3 * 2 - iVar10;
    iVar14 = (int)uVar18 + iVar7 + (int)uVar9;
    iVar16 = (int)((ulonglong)uVar18 >> 0x20) + iVar10 + (int)((ulonglong)uVar9 >> 0x20);
    iVar4 = (int)uVar5 * 2 - iVar11;
    iVar6 = iVar6 * 2 - iVar13;
    uVar9 = pmaddwd(DAT_5f9da940,uVar15);
    *param_1 = CONCAT44(iVar16 >> 0xf,iVar14 >> 0xf);
    uVar8 = pmaddwd(uVar19,_DAT_5f9da930);
    param_1[0x1c] = CONCAT44(iVar10 * 2 - iVar16 >> 0xf,iVar7 * 2 - iVar14 >> 0xf);
    uVar12 = pmaddwd(uVar15,_DAT_5f9da938);
    uVar5 = pmaddwd(uVar15,_DAT_5f9da948);
    iVar17 = ((int)uVar9 + iVar11) - (int)uVar8;
    iVar20 = ((int)((ulonglong)uVar9 >> 0x20) + iVar13) - (int)((ulonglong)uVar8 >> 0x20);
    uVar8 = pmaddwd(uVar19,_DAT_5f9da948);
    uVar9 = pmaddwd(uVar19,DAT_5f9da940);
    iVar14 = (int)uVar12 + iVar4 + (int)uVar8;
    iVar16 = (int)((ulonglong)uVar12 >> 0x20) + iVar6 + (int)((ulonglong)uVar8 >> 0x20);
    param_1[4] = CONCAT44(iVar20 >> 0xf,iVar17 >> 0xf);
    iVar7 = (int)uVar5 + iVar2 + (int)uVar9;
    iVar10 = (int)((ulonglong)uVar5 >> 0x20) + iVar3 + (int)((ulonglong)uVar9 >> 0x20);
    param_1[0x18] = CONCAT44(iVar13 * 2 - iVar20 >> 0xf,iVar11 * 2 - iVar17 >> 0xf);
    param_1[8] = CONCAT44(iVar16 >> 0xf,iVar14 >> 0xf);
    param_1[0x14] = CONCAT44(iVar6 * 2 - iVar16 >> 0xf,iVar4 * 2 - iVar14 >> 0xf);
    param_1[0xc] = CONCAT44(iVar10 >> 0xf,iVar7 >> 0xf);
    param_1[0x10] = CONCAT44(iVar3 * 2 - iVar10 >> 0xf,iVar2 * 2 - iVar7 >> 0xf);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return;
}


