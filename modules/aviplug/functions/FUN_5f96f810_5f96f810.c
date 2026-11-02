/* Module: aviplug.dll
   Function: FUN_5f96f810
   Address: 5f96f810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96f810(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  short sVar5;
  short sVar6;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar7;
  undefined8 uVar4;
  int iVar8;
  undefined8 uVar9;
  short sVar11;
  short sVar12;
  undefined8 uVar10;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar20;
  undefined8 uVar19;
  undefined8 uVar21;
  undefined8 uVar22;
  short sVar23;
  short sVar26;
  short sVar27;
  undefined8 uVar24;
  short sVar28;
  undefined8 uVar25;
  
  FUN_5f96f750(param_1);
  iVar1 = 4;
  do {
    uVar2 = packssdw(*param_1,param_1[4]);
    uVar3 = pshufw(uVar2,uVar2,0xd8);
    uVar2 = packssdw(param_1[0x1c],param_1[0x18]);
    uVar24 = pshufw(uVar2,uVar2,0xd8);
    uVar2 = packssdw(param_1[0xc],param_1[8]);
    uVar10 = pshufw(uVar2,uVar2,0xd8);
    uVar2 = packssdw(param_1[0x10],param_1[0x14]);
    uVar2 = pshufw(uVar2,uVar2,0xd8);
    sVar23 = (short)uVar24 + (short)uVar3;
    sVar5 = (short)((ulonglong)uVar3 >> 0x10);
    sVar26 = (short)((ulonglong)uVar24 >> 0x10) + sVar5;
    sVar6 = (short)((ulonglong)uVar3 >> 0x20);
    sVar27 = (short)((ulonglong)uVar24 >> 0x20) + sVar6;
    sVar7 = (short)((ulonglong)uVar3 >> 0x30);
    sVar28 = (short)((ulonglong)uVar24 >> 0x30) + sVar7;
    uVar22 = CONCAT26(sVar28,CONCAT24(sVar27,CONCAT22(sVar26,sVar23)));
    sVar14 = (short)uVar2 + (short)uVar10;
    sVar11 = (short)((ulonglong)uVar10 >> 0x10);
    sVar15 = (short)((ulonglong)uVar2 >> 0x10) + sVar11;
    sVar12 = (short)((ulonglong)uVar10 >> 0x20);
    sVar16 = (short)((ulonglong)uVar2 >> 0x20) + sVar12;
    sVar13 = (short)((ulonglong)uVar10 >> 0x30);
    sVar17 = (short)((ulonglong)uVar2 >> 0x30) + sVar13;
    uVar19 = CONCAT26(sVar17,CONCAT24(sVar16,CONCAT22(sVar15,sVar14)));
    uVar24 = pmaddwd(DAT_5f9da890,uVar22);
    uVar2 = pmaddwd(DAT_5f9da890,uVar19);
    uVar9 = pmaddwd(DAT_5f9da898,
                    CONCAT26(sVar28 + sVar17,
                             CONCAT24(sVar27 + sVar16,CONCAT22(sVar26 + sVar15,sVar23 + sVar14))));
    iVar18 = (int)uVar2 + (int)uVar24;
    iVar8 = (int)((ulonglong)uVar24 >> 0x20);
    iVar20 = (int)((ulonglong)uVar2 >> 0x20) + iVar8;
    uVar2 = CONCAT44(iVar20 >> 0xf,iVar18 >> 0xf);
    *param_1 = uVar2;
    *param_2 = uVar2;
    uVar2 = DAT_5f9da8a0;
    uVar21 = CONCAT26(sVar28 + sVar17 + sVar17 * -2,
                      CONCAT24(sVar27 + sVar16 + sVar16 * -2,
                               CONCAT22(sVar26 + sVar15 + sVar15 * -2,sVar23 + sVar14 + sVar14 * -2)
                              ));
    sVar23 = (short)uVar3 * 2 - sVar23;
    sVar26 = sVar5 * 2 - sVar26;
    sVar27 = sVar6 * 2 - sVar27;
    sVar28 = sVar7 * 2 - sVar28;
    uVar4 = CONCAT26(sVar28,CONCAT24(sVar27,CONCAT22(sVar26,sVar23)));
    param_1[0x10] = CONCAT44((int)((longlong)uVar9 >> 0x2f),(int)uVar9 >> 0xf);
    uVar3 = DAT_5f9da8a8;
    uVar9 = pmaddwd(uVar2,uVar21);
    sVar14 = (short)uVar10 * 2 - sVar14;
    sVar15 = sVar11 * 2 - sVar15;
    sVar16 = sVar12 * 2 - sVar16;
    sVar17 = sVar13 * 2 - sVar17;
    uVar10 = CONCAT26(sVar17,CONCAT24(sVar16,CONCAT22(sVar15,sVar14)));
    param_2[8] = CONCAT44(iVar8 * 2 - iVar20 >> 0xf,(int)uVar24 * 2 - iVar18 >> 0xf);
    uVar2 = DAT_5f9da8b8;
    uVar21 = pmaddwd(uVar21,uVar3);
    uVar3 = pmaddwd(DAT_5f9da8b0,uVar22);
    param_1[8] = CONCAT44((int)((longlong)uVar9 >> 0x2f),(int)uVar9 >> 0xf);
    uVar2 = pmaddwd(uVar2,uVar19);
    uVar9 = pmaddwd(uVar22,DAT_5f9da8b8);
    uVar24 = pmaddwd(uVar19,DAT_5f9da8b0);
    param_1[0x18] = CONCAT44((int)((longlong)uVar21 >> 0x2f),(int)uVar21 >> 0xf);
    uVar19 = pmaddwd(CONCAT26(sVar28 + sVar17,
                              CONCAT24(sVar27 + sVar16,CONCAT22(sVar26 + sVar15,sVar23 + sVar14))),
                     DAT_5f9da898);
    uVar21 = pmaddwd(CONCAT26(sVar28 - sVar17,
                              CONCAT24(sVar27 - sVar16,CONCAT22(sVar26 - sVar15,sVar23 - sVar14))),
                     DAT_5f9da898);
    param_2[0x14] =
         CONCAT44((int)((ulonglong)uVar3 >> 0x20) + (int)((ulonglong)uVar2 >> 0x20) >> 0xf,
                  (int)uVar3 + (int)uVar2 >> 0xf);
    uVar3 = DAT_5f9da8c8;
    uVar2 = DAT_5f9da8c0;
    param_2[0x1c] =
         CONCAT44((int)((ulonglong)uVar24 >> 0x20) - (int)((ulonglong)uVar9 >> 0x20) >> 0xf,
                  (int)uVar24 - (int)uVar9 >> 0xf);
    uVar24 = pmaddwd(uVar2,uVar4);
    uVar9 = pmaddwd(uVar3,uVar10);
    uVar25 = pmaddwd(uVar2,uVar10);
    param_2[0x18] = CONCAT44((int)((longlong)uVar19 >> 0x2f),(int)uVar19 >> 0xf);
    uVar19 = pmaddwd(uVar3,uVar4);
    param_2[0x10] = CONCAT44((int)((longlong)uVar21 >> 0x2f),(int)uVar21 >> 0xf);
    uVar2 = DAT_5f9da8d8;
    uVar21 = pmaddwd(DAT_5f9da8d0,uVar4);
    param_2[4] = CONCAT44((int)((ulonglong)uVar24 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20) >> 0xf,
                          (int)uVar24 + (int)uVar9 >> 0xf);
    uVar24 = DAT_5f9da8f0;
    uVar3 = DAT_5f9da8e8;
    uVar22 = pmaddwd(uVar2,uVar10);
    uVar9 = pmaddwd(DAT_5f9da8e0,uVar4);
    param_2[0xc] = CONCAT44((int)((ulonglong)uVar19 >> 0x20) - (int)((ulonglong)uVar25 >> 0x20) >>
                            0xf,(int)uVar19 - (int)uVar25 >> 0xf);
    uVar3 = pmaddwd(uVar3,uVar10);
    uVar25 = pmaddwd(uVar24,uVar4);
    uVar19 = pmaddwd(DAT_5f9da8f8,uVar10);
    uVar2 = pmaddwd(uVar4,_DAT_5f9da900);
    uVar24 = pmaddwd(uVar10,_DAT_5f9da908);
    param_1[4] = CONCAT44((int)((ulonglong)uVar21 >> 0x20) + (int)((ulonglong)uVar22 >> 0x20) >> 0xf
                          ,(int)uVar21 + (int)uVar22 >> 0xf);
    param_1[0xc] = CONCAT44((int)((ulonglong)uVar9 >> 0x20) + (int)((ulonglong)uVar3 >> 0x20) >> 0xf
                            ,(int)uVar9 + (int)uVar3 >> 0xf);
    param_2 = param_2 + 1;
    param_1[0x14] =
         CONCAT44((int)((ulonglong)uVar25 >> 0x20) + (int)((ulonglong)uVar19 >> 0x20) >> 0xf,
                  (int)uVar25 + (int)uVar19 >> 0xf);
    param_1[0x1c] =
         CONCAT44((int)((ulonglong)uVar2 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20) >> 0xf,
                  (int)uVar2 + (int)uVar24 >> 0xf);
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


