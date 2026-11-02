/* Module: aviplug.dll
   Function: FUN_5f9712a0
   Address: 5f9712a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9712a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar7;
  undefined8 uVar6;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  FUN_5f971210(param_1);
  iVar1 = 2;
  do {
    uVar6 = DAT_5f9da990;
    uVar3 = packssdw(param_1[0x10],*param_1);
    uVar4 = pshufw(uVar3,uVar3,0xd8);
    uVar3 = packssdw(param_1[0x18],param_1[8]);
    uVar9 = pshufw(uVar3,uVar3,0xd8);
    uVar3 = pmaddwd(DAT_5f9da958,uVar4);
    uVar12 = packssdw(param_1[0xc],param_1[4]);
    uVar13 = pshufw(uVar12,uVar12,0xd8);
    uVar12 = pmaddwd(DAT_5f9da960,uVar9);
    uVar11 = pmaddwd(DAT_5f9da968,uVar13);
    uVar4 = pmaddwd(uVar4,DAT_5f9da970);
    uVar14 = packssdw(param_1[0x1c],param_1[0x14]);
    uVar9 = pmaddwd(uVar9,DAT_5f9da980);
    uVar15 = pshufw(uVar14,uVar14,0xd8);
    iVar7 = (int)((ulonglong)uVar12 >> 0x20);
    uVar14 = pmaddwd(DAT_5f9da978,uVar15);
    iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    iVar8 = (int)uVar9 + (int)uVar4;
    iVar5 = (int)((ulonglong)uVar4 >> 0x20);
    iVar10 = (int)((ulonglong)uVar9 >> 0x20) + iVar5;
    uVar9 = pmaddwd(DAT_5f9da988,uVar13);
    *param_2 = CONCAT44((int)((ulonglong)uVar11 >> 0x20) + iVar7 + iVar2 +
                        (int)((ulonglong)uVar14 >> 0x20) >> 0xf,
                        (int)uVar11 + (int)uVar12 + (int)uVar3 + (int)uVar14 >> 0xf);
    uVar14 = pmaddwd(uVar6,uVar15);
    uVar11 = pmaddwd(DAT_5f9da998,uVar13);
    uVar6 = pmaddwd(DAT_5f9da9a0,uVar15);
    uVar13 = pmaddwd(DAT_5f9da9a8,uVar13);
    uVar15 = pmaddwd(uVar15,_DAT_5f9da9b0);
    param_2[8] = CONCAT44(((iVar2 - iVar7) - (int)((ulonglong)uVar9 >> 0x20)) -
                          (int)((ulonglong)uVar14 >> 0x20) >> 0xf,
                          (((int)uVar3 - (int)uVar12) - (int)uVar9) - (int)uVar14 >> 0xf);
    param_2[0xc] = CONCAT44((iVar10 - (int)((ulonglong)uVar11 >> 0x20)) -
                            (int)((ulonglong)uVar6 >> 0x20) >> 0xf,
                            (iVar8 - (int)uVar11) - (int)uVar6 >> 0xf);
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
    param_2[4] = CONCAT44((iVar5 * 2 - iVar10) + (int)((ulonglong)uVar13 >> 0x20) +
                          (int)((ulonglong)uVar15 >> 0x20) >> 0xf,
                          ((int)uVar4 * 2 - iVar8) + (int)uVar13 + (int)uVar15 >> 0xf);
    param_2 = param_2 + 1;
  } while (iVar1 != 0);
  return;
}


