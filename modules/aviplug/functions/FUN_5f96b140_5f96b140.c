/* Module: aviplug.dll
   Function: FUN_5f96b140
   Address: 5f96b140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96b140(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined4 uVar24;
  short sVar27;
  short sVar28;
  undefined8 in_MM6;
  undefined8 uVar25;
  undefined4 uVar29;
  undefined8 uVar26;
  short sVar30;
  short sVar34;
  short sVar35;
  undefined8 in_MM7;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  short sVar36;
  
  uVar9 = 8;
  iVar8 = param_3 * 2 + -0x18;
  puVar11 = (undefined4 *)((int)param_1 + param_3);
  puVar7 = param_2 + 0x80;
  do {
    do {
      puVar13 = param_2;
      puVar12 = puVar7;
      uVar31 = packssdw(in_MM7,*puVar12);
      uVar25 = packssdw(in_MM6,puVar12[0x20]);
      uVar24 = CONCAT22((short)((ulonglong)uVar25 >> 0x20),(short)((ulonglong)uVar31 >> 0x20));
      uVar31 = CONCAT26((short)((ulonglong)uVar25 >> 0x30),
                        CONCAT24((short)((ulonglong)uVar31 >> 0x30),uVar24));
      uVar25 = packssdw(*puVar13,puVar13[1]);
      sVar14 = (short)uVar25 + (short)DAT_5f9da630;
      sVar15 = (short)((ulonglong)uVar25 >> 0x10) + (short)((ulonglong)DAT_5f9da630 >> 0x10);
      sVar16 = (short)((ulonglong)uVar25 >> 0x20) + (short)((ulonglong)DAT_5f9da630 >> 0x20);
      sVar17 = (short)((ulonglong)uVar25 >> 0x30) + (short)((ulonglong)DAT_5f9da630 >> 0x30);
      uVar29 = (undefined4)((ulonglong)uVar31 >> 0x20);
      uVar32 = pmaddwd(CONCAT44(uVar24,uVar24),DAT_5f9da640);
      uVar25 = pmaddwd(uVar31,DAT_5f9da638);
      uVar26 = pmaddwd(CONCAT44(uVar29,uVar29),DAT_5f9da648);
      uVar33 = packssdw(CONCAT44((int)((longlong)uVar32 >> 0x2e),(int)uVar32 >> 0xe),
                        CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe));
      sVar34 = (short)((ulonglong)uVar33 >> 0x10);
      sVar35 = (short)((ulonglong)uVar33 >> 0x20);
      sVar36 = (short)((ulonglong)uVar33 >> 0x30);
      uVar32 = packssdw(puVar12[1],puVar12[1]);
      uVar31 = packssdw(puVar12[0x21],puVar12[0x21]);
      puVar10 = puVar11 + 3;
      uVar25 = psraw(CONCAT26(sVar15 + sVar36,
                              CONCAT24(sVar14 + sVar35,
                                       CONCAT22(sVar14 + sVar34,sVar14 + (short)uVar33))),6);
      sVar14 = (short)uVar25;
      sVar1 = (short)((ulonglong)uVar25 >> 0x10);
      sVar2 = (short)((ulonglong)uVar25 >> 0x20);
      sVar3 = (short)((ulonglong)uVar25 >> 0x30);
      uVar29 = CONCAT22((short)((ulonglong)uVar31 >> 0x10),(short)((ulonglong)uVar32 >> 0x10));
      uVar24 = CONCAT22((short)uVar31,(short)uVar32);
      *param_1 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar25 >> 0x30) -
                          (0xff < sVar3),
                          CONCAT12((0 < sVar2) * (sVar2 < 0x100) * (char)((ulonglong)uVar25 >> 0x20)
                                   - (0xff < sVar2),
                                   CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                            (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar1),
                                            (0 < sVar14) * (sVar14 < 0x100) * (char)uVar25 -
                                            (0xff < sVar14))));
      uVar25 = pmaddwd(CONCAT44(uVar24,uVar24),DAT_5f9da640);
      uVar31 = pmaddwd(CONCAT44(uVar29,uVar24),DAT_5f9da638);
      uVar32 = pmaddwd(CONCAT44(uVar29,uVar29),DAT_5f9da648);
      in_MM6 = packssdw(CONCAT44((int)((longlong)uVar26 >> 0x2e),(int)uVar26 >> 0xe),
                        CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe));
      uVar25 = packssdw(puVar13[8],puVar13[9]);
      sVar27 = (short)((ulonglong)in_MM6 >> 0x10);
      sVar28 = (short)((ulonglong)in_MM6 >> 0x20);
      sVar30 = (short)((ulonglong)in_MM6 >> 0x30);
      sVar18 = (short)uVar25 + (short)DAT_5f9da630;
      sVar19 = (short)((ulonglong)uVar25 >> 0x10) + (short)((ulonglong)DAT_5f9da630 >> 0x10);
      sVar20 = (short)((ulonglong)uVar25 >> 0x20) + (short)((ulonglong)DAT_5f9da630 >> 0x20);
      sVar21 = (short)((ulonglong)uVar25 >> 0x30) + (short)((ulonglong)DAT_5f9da630 >> 0x30);
      uVar25 = psraw(CONCAT26(sVar16 + sVar30,
                              CONCAT24(sVar16 + sVar28,
                                       CONCAT22(sVar15 + sVar27,sVar15 + (short)in_MM6))),6);
      sVar14 = (short)uVar25;
      sVar1 = (short)((ulonglong)uVar25 >> 0x10);
      sVar2 = (short)((ulonglong)uVar25 >> 0x20);
      sVar3 = (short)((ulonglong)uVar25 >> 0x30);
      param_1[1] = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar25 >> 0x30) -
                            (0xff < sVar3),
                            CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                     (char)((ulonglong)uVar25 >> 0x20) - (0xff < sVar2),
                                     CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                              (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar1),
                                              (0 < sVar14) * (sVar14 < 0x100) * (char)uVar25 -
                                              (0xff < sVar14))));
      uVar31 = packssdw(CONCAT44((int)((longlong)uVar31 >> 0x2e),(int)uVar31 >> 0xe),
                        CONCAT44((int)((longlong)uVar32 >> 0x2e),(int)uVar32 >> 0xe));
      sVar15 = (short)((ulonglong)uVar31 >> 0x10);
      sVar22 = (short)((ulonglong)uVar31 >> 0x20);
      sVar23 = (short)((ulonglong)uVar31 >> 0x30);
      uVar25 = psraw(CONCAT26(sVar17 + sVar23,
                              CONCAT24(sVar17 + sVar22,
                                       CONCAT22(sVar17 + sVar15,sVar16 + (short)uVar31))),6);
      sVar14 = (short)uVar25;
      sVar1 = (short)((ulonglong)uVar25 >> 0x10);
      sVar2 = (short)((ulonglong)uVar25 >> 0x20);
      sVar3 = (short)((ulonglong)uVar25 >> 0x30);
      param_1[2] = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar25 >> 0x30) -
                            (0xff < sVar3),
                            CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                     (char)((ulonglong)uVar25 >> 0x20) - (0xff < sVar2),
                                     CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                              (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar1),
                                              (0 < sVar14) * (sVar14 < 0x100) * (char)uVar25 -
                                              (0xff < sVar14))));
      uVar32 = psraw(CONCAT26(sVar19 + sVar36,
                              CONCAT24(sVar18 + sVar35,
                                       CONCAT22(sVar18 + sVar34,sVar18 + (short)uVar33))),6);
      sVar14 = (short)uVar32;
      sVar1 = (short)((ulonglong)uVar32 >> 0x10);
      sVar2 = (short)((ulonglong)uVar32 >> 0x20);
      sVar3 = (short)((ulonglong)uVar32 >> 0x30);
      param_1 = param_1 + 3;
      uVar25 = psraw(CONCAT26(sVar20 + sVar30,
                              CONCAT24(sVar20 + sVar28,
                                       CONCAT22(sVar19 + sVar27,sVar19 + (short)in_MM6))),6);
      uVar9 = uVar9 - 1;
      *puVar11 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar32 >> 0x30) -
                          (0xff < sVar3),
                          CONCAT12((0 < sVar2) * (sVar2 < 0x100) * (char)((ulonglong)uVar32 >> 0x20)
                                   - (0xff < sVar2),
                                   CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                            (char)((ulonglong)uVar32 >> 0x10) - (0xff < sVar1),
                                            (0 < sVar14) * (sVar14 < 0x100) * (char)uVar32 -
                                            (0xff < sVar14))));
      sVar14 = (short)uVar25;
      sVar1 = (short)((ulonglong)uVar25 >> 0x10);
      sVar2 = (short)((ulonglong)uVar25 >> 0x20);
      sVar3 = (short)((ulonglong)uVar25 >> 0x30);
      uVar31 = psraw(CONCAT26(sVar21 + sVar23,
                              CONCAT24(sVar21 + sVar22,
                                       CONCAT22(sVar21 + sVar15,sVar20 + (short)uVar31))),6);
      puVar11[1] = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar25 >> 0x30) -
                            (0xff < sVar3),
                            CONCAT12((0 < sVar2) * (sVar2 < 0x100) *
                                     (char)((ulonglong)uVar25 >> 0x20) - (0xff < sVar2),
                                     CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                              (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar1),
                                              (0 < sVar14) * (sVar14 < 0x100) * (char)uVar25 -
                                              (0xff < sVar14))));
      sVar14 = (short)uVar31;
      sVar1 = (short)((ulonglong)uVar31 >> 0x10);
      cVar4 = (char)((ulonglong)uVar31 >> 0x10);
      sVar2 = (short)((ulonglong)uVar31 >> 0x20);
      cVar5 = (char)((ulonglong)uVar31 >> 0x20);
      sVar3 = (short)((ulonglong)uVar31 >> 0x30);
      cVar6 = (char)((ulonglong)uVar31 >> 0x30);
      uVar29 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * cVar6 - (0xff < sVar3),
                        CONCAT12((0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2),
                                 CONCAT11((0 < sVar1) * (sVar1 < 0x100) * cVar4 - (0xff < sVar1),
                                          (0 < sVar14) * (sVar14 < 0x100) * (char)uVar31 -
                                          (0xff < sVar14))));
      in_MM7 = CONCAT17((0 < sVar3) * (sVar3 < 0x100) * cVar6 - (0xff < sVar3),
                        CONCAT16((0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2),
                                 CONCAT15((0 < sVar1) * (sVar1 < 0x100) * cVar4 - (0xff < sVar1),
                                          CONCAT14((0 < sVar14) * (sVar14 < 0x100) * (char)uVar31 -
                                                   (0xff < sVar14),uVar29))));
      puVar11[2] = uVar29;
      puVar11 = puVar10;
      puVar7 = puVar12 + 2;
      param_2 = puVar13 + 0x20;
    } while ((uVar9 & 1) != 0);
    param_1 = (undefined4 *)((int)param_1 + iVar8);
    puVar11 = (undefined4 *)((int)puVar10 + iVar8);
    puVar7 = puVar12 + 6;
    param_2 = puVar13 + -0x10;
  } while (((uVar9 & 3) != 0) || (param_2 = puVar13 + 0x10, uVar9 != 0));
  return;
}


