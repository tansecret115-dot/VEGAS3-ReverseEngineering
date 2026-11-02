/* Module: aviplug.dll
   Function: FUN_5f96f520
   Address: 5f96f520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96f520(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  short sVar2;
  short sVar4;
  short sVar5;
  undefined8 uVar3;
  short sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  short sVar24;
  short sVar28;
  short sVar29;
  undefined8 uVar25;
  short sVar30;
  undefined8 uVar26;
  undefined8 uVar27;
  
  FUN_5f96ea40(param_1);
  iVar1 = 4;
  do {
    uVar8 = DAT_5f9da828;
    uVar3 = packssdw(*param_1,*param_1);
    uVar7 = packssdw(param_1[4],param_1[4]);
    sVar6 = (short)((ulonglong)uVar7 >> 0x10);
    sVar5 = (short)((ulonglong)uVar3 >> 0x10);
    uVar25 = packssdw(param_1[0x1c],param_1[0x1c]);
    uVar23 = packssdw(param_1[0x18],param_1[0x18]);
    uVar9 = packssdw(param_1[8],param_1[8]);
    sVar24 = (short)uVar25 + (short)uVar3;
    sVar28 = (short)uVar23 + (short)uVar7;
    sVar29 = (short)((ulonglong)uVar25 >> 0x10) + sVar5;
    sVar30 = (short)((ulonglong)uVar23 >> 0x10) + sVar6;
    uVar23 = packssdw(param_1[0xc],param_1[0xc]);
    sVar15 = (short)((ulonglong)uVar9 >> 0x10);
    sVar17 = (short)((ulonglong)uVar23 >> 0x10);
    sVar2 = (short)uVar3 * 2 - sVar24;
    sVar4 = (short)uVar7 * 2 - sVar28;
    sVar5 = sVar5 * 2 - sVar29;
    sVar6 = sVar6 * 2 - sVar30;
    uVar3 = packssdw(param_1[0x10],param_1[0x10]);
    uVar7 = packssdw(param_1[0x14],param_1[0x14]);
    sVar20 = (short)((ulonglong)uVar7 >> 0x10);
    sVar18 = (short)((ulonglong)uVar3 >> 0x10);
    sVar10 = (short)uVar23 - (short)uVar3;
    sVar11 = (short)uVar9 - (short)uVar7;
    sVar12 = sVar17 - sVar18;
    sVar13 = sVar15 - sVar20;
    sVar14 = (short)uVar3 + (short)uVar23;
    sVar16 = (short)uVar7 + (short)uVar9;
    sVar18 = sVar18 + sVar17;
    sVar20 = sVar20 + sVar15;
    uVar9 = CONCAT26(sVar13 + sVar12,CONCAT24(sVar6 + sVar5,CONCAT22(sVar11 + sVar10,sVar4 + sVar2))
                    );
    sVar15 = sVar14 + sVar24;
    sVar17 = sVar16 + sVar28;
    sVar19 = sVar18 + sVar29;
    sVar21 = sVar20 + sVar30;
    uVar3 = CONCAT26(sVar21,CONCAT24(sVar19,CONCAT22(sVar17,sVar15)));
    uVar22 = CONCAT26(sVar18 - sVar20,
                      CONCAT24(sVar29 - sVar30,CONCAT22(sVar14 - sVar16,sVar24 - sVar28)));
    uVar7 = pmaddwd(DAT_5f9da820,uVar3);
    uVar26 = CONCAT26(sVar30 * 2 - sVar21,
                      CONCAT24(sVar29 * 2 - sVar19,CONCAT22(sVar28 * 2 - sVar17,sVar24 * 2 - sVar15)
                              ));
    uVar3 = pmaddwd(uVar3,DAT_5f9da828);
    param_1[4] = CONCAT26(sVar6,CONCAT24(sVar5,CONCAT22(sVar4,sVar2)));
    uVar23 = pmaddwd(uVar8,uVar26);
    param_1[0xc] = CONCAT26(sVar13,CONCAT24(sVar12,CONCAT22(sVar11,sVar10)));
    uVar3 = CONCAT44((int)((longlong)uVar3 >> 0x2f),(int)uVar3 >> 0xf);
    param_1[0x10] = CONCAT44((int)((longlong)uVar7 >> 0x2f),(int)uVar7 >> 0xf);
    uVar8 = DAT_5f9da820;
    *param_1 = uVar3;
    *param_2 = uVar3;
    uVar3 = DAT_5f9da830;
    uVar7 = pmaddwd(CONCAT26(sVar6 * 2 - (sVar13 + sVar6),
                             CONCAT24(sVar5 * 2 - (sVar12 + sVar5),
                                      CONCAT22(sVar4 * 2 - (sVar11 + sVar4),
                                               sVar2 * 2 - (sVar10 + sVar2)))),uVar8);
    uVar25 = pmaddwd(CONCAT26(sVar13 + sVar6,
                              CONCAT24(sVar12 + sVar5,CONCAT22(sVar11 + sVar4,sVar10 + sVar2))),
                     uVar8);
    param_2[8] = CONCAT44((int)((longlong)uVar23 >> 0x2f),(int)uVar23 >> 0xf);
    uVar8 = DAT_5f9da838;
    uVar23 = pmaddwd(uVar3,uVar26);
    uVar26 = pmaddwd(uVar26,DAT_5f9da838);
    param_2[0x10] = CONCAT44((int)((longlong)uVar7 >> 0x2f),(int)uVar7 >> 0xf);
    param_2[0x18] = CONCAT44((int)((longlong)uVar25 >> 0x2f),(int)uVar25 >> 0xf);
    uVar3 = DAT_5f9da840;
    uVar7 = pmaddwd(uVar8,uVar9);
    uVar9 = pmaddwd(uVar9,DAT_5f9da830);
    param_1[8] = CONCAT44((int)((longlong)uVar23 >> 0x2f),(int)uVar23 >> 0xf);
    uVar8 = DAT_5f9da848;
    uVar23 = pmaddwd(uVar3,uVar22);
    param_1[0x18] = CONCAT44((int)((longlong)uVar26 >> 0x2f),(int)uVar26 >> 0xf);
    uVar26 = pmaddwd(uVar22,uVar8);
    param_2[0xc] = CONCAT44((int)((longlong)uVar7 >> 0x2f),(int)uVar7 >> 0xf);
    uVar7 = DAT_5f9da858;
    uVar8 = param_1[4];
    uVar3 = param_1[0xc];
    uVar25 = pmaddwd(DAT_5f9da850,uVar8);
    param_2[4] = CONCAT44((int)((longlong)uVar9 >> 0x2f),(int)uVar9 >> 0xf);
    uVar9 = DAT_5f9da860;
    uVar22 = pmaddwd(uVar7,uVar3);
    param_2[0x14] = CONCAT44((int)((longlong)uVar23 >> 0x2f),(int)uVar23 >> 0xf);
    uVar27 = pmaddwd(uVar9,uVar8);
    param_2[0x1c] = CONCAT44((int)((longlong)uVar26 >> 0x2f),(int)uVar26 >> 0xf);
    uVar7 = DAT_5f9da870;
    uVar26 = pmaddwd(DAT_5f9da868,uVar3);
    uVar23 = pmaddwd(uVar3,_DAT_5f9da878);
    uVar9 = pmaddwd(uVar8,_DAT_5f9da880);
    param_1[4] = CONCAT44((int)((ulonglong)uVar25 >> 0x20) + (int)((ulonglong)uVar22 >> 0x20) >> 0xf
                          ,(int)uVar25 + (int)uVar22 >> 0xf);
    uVar8 = pmaddwd(uVar8,uVar7);
    uVar3 = pmaddwd(uVar3,_DAT_5f9da888);
    param_1[0xc] = CONCAT44((int)((ulonglong)uVar27 >> 0x20) + (int)((ulonglong)uVar26 >> 0x20) >>
                            0xf,(int)uVar27 + (int)uVar26 >> 0xf);
    param_1[0x14] =
         CONCAT44((int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar23 >> 0x20) >> 0xf,
                  (int)uVar9 + (int)uVar23 >> 0xf);
    param_1[0x1c] =
         CONCAT44((int)((ulonglong)uVar8 >> 0x20) + (int)((ulonglong)uVar3 >> 0x20) >> 0xf,
                  (int)uVar8 + (int)uVar3 >> 0xf);
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


