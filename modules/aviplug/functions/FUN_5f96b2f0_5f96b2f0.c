/* Module: aviplug.dll
   Function: FUN_5f96b2f0
   Address: 5f96b2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96b2f0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  short sVar21;
  undefined8 uVar20;
  short sVar22;
  short sVar23;
  short sVar26;
  short sVar27;
  undefined8 in_MM6;
  undefined8 uVar24;
  undefined4 uVar28;
  undefined8 uVar25;
  short sVar29;
  undefined4 uVar30;
  short sVar33;
  short sVar34;
  undefined8 in_MM7;
  undefined8 uVar31;
  undefined8 uVar32;
  short sVar35;
  
  puVar16 = (undefined8 *)((int)param_1 + param_3);
  uVar15 = 8;
  iVar14 = param_3 * 2 + -0x20;
  puVar13 = param_2 + 0x80;
  do {
    do {
      puVar18 = param_2;
      puVar17 = puVar13;
      uVar31 = packssdw(in_MM7,*puVar17);
      uVar24 = packssdw(in_MM6,puVar17[0x20]);
      uVar20 = *puVar18;
      uVar30 = CONCAT22((short)((ulonglong)uVar24 >> 0x20),(short)((ulonglong)uVar31 >> 0x20));
      sVar1 = (short)uVar20;
      uVar32 = pmaddwd(CONCAT44(uVar30,uVar30),DAT_5f9da650);
      uVar28 = (undefined4)
               (CONCAT26((short)((ulonglong)uVar24 >> 0x30),
                         CONCAT24((short)((ulonglong)uVar31 >> 0x30),uVar30)) >> 0x20);
      uVar31 = CONCAT44(uVar28,uVar28);
      sVar21 = (short)((ulonglong)uVar20 >> 0x20);
      uVar24 = pmaddwd(CONCAT44(uVar30,uVar30),DAT_5f9da658);
      uVar25 = pmaddwd(uVar31,DAT_5f9da650);
      uVar31 = pmaddwd(uVar31,DAT_5f9da658);
      sVar8 = (short)DAT_5f9da660;
      sVar9 = (short)((ulonglong)DAT_5f9da660 >> 0x10);
      sVar10 = (short)((ulonglong)DAT_5f9da660 >> 0x20);
      sVar11 = (short)((ulonglong)DAT_5f9da660 >> 0x30);
      uVar32 = packssdw(CONCAT44((int)((longlong)uVar32 >> 0x2e),(int)uVar32 >> 0xe),
                        CONCAT44((int)((longlong)uVar24 >> 0x2e),(int)uVar24 >> 0xe));
      sVar33 = (short)((ulonglong)uVar32 >> 0x10);
      sVar34 = (short)((ulonglong)uVar32 >> 0x20);
      sVar35 = (short)((ulonglong)uVar32 >> 0x30);
      uVar24 = puVar18[8];
      uVar25 = packssdw(CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe),
                        CONCAT44((int)((longlong)uVar31 >> 0x2e),(int)uVar31 >> 0xe));
      sVar12 = (short)uVar24;
      sVar26 = (short)((ulonglong)uVar25 >> 0x10);
      sVar27 = (short)((ulonglong)uVar25 >> 0x20);
      sVar29 = (short)((ulonglong)uVar25 >> 0x30);
      uVar31 = psraw(CONCAT26((short)((ulonglong)uVar20 >> 0x10) + sVar11 + sVar35,
                              CONCAT24(sVar1 + sVar10 + sVar34,
                                       CONCAT22(sVar1 + sVar9 + sVar33,sVar1 + sVar8 + (short)uVar32
                                               ))),6);
      uVar20 = psraw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar11 + sVar29,
                              CONCAT24(sVar21 + sVar10 + sVar27,
                                       CONCAT22(sVar21 + sVar9 + sVar26,
                                                sVar21 + sVar8 + (short)uVar25))),6);
      sVar1 = (short)uVar31;
      sVar21 = (short)((ulonglong)uVar31 >> 0x10);
      sVar2 = (short)((ulonglong)uVar31 >> 0x20);
      sVar3 = (short)((ulonglong)uVar31 >> 0x30);
      sVar4 = (short)uVar20;
      sVar5 = (short)((ulonglong)uVar20 >> 0x10);
      sVar6 = (short)((ulonglong)uVar20 >> 0x20);
      sVar7 = (short)((ulonglong)uVar20 >> 0x30);
      sVar23 = (short)uVar25 + sVar8;
      sVar26 = sVar26 + sVar9;
      sVar27 = sVar27 + sVar10;
      sVar29 = sVar29 + sVar11;
      sVar22 = (short)((ulonglong)uVar24 >> 0x20);
      *param_1 = CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                          (0xff < sVar7),
                          CONCAT16((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar20 >> 0x20)
                                   - (0xff < sVar6),
                                   CONCAT15((0 < sVar5) * (sVar5 < 0x100) *
                                            (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar5),
                                            CONCAT14((0 < sVar4) * (sVar4 < 0x100) * (char)uVar20 -
                                                     (0xff < sVar4),
                                                     CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                                              (char)((ulonglong)uVar31 >> 0x30) -
                                                              (0xff < sVar3),
                                                              CONCAT12((0 < sVar2) * (sVar2 < 0x100)
                                                                       * (char)((ulonglong)uVar31 >>
                                                                               0x20) -
                                                                       (0xff < sVar2),
                                                                       CONCAT11((0 < sVar21) *
                                                                                (sVar21 < 0x100) *
                                                                                (char)((ulonglong)
                                                                                       uVar31 >>
                                                                                      0x10) -
                                                                                (0xff < sVar21),
                                                                                (0 < sVar1) *
                                                                                (sVar1 < 0x100) *
                                                                                (char)uVar31 -
                                                                                (0xff < sVar1)))))))
                         );
      uVar20 = psraw(CONCAT26((short)((ulonglong)uVar24 >> 0x10) + sVar11 + sVar35,
                              CONCAT24(sVar12 + sVar10 + sVar34,
                                       CONCAT22(sVar12 + sVar9 + sVar33,
                                                sVar12 + sVar8 + (short)uVar32))),6);
      uVar24 = psraw(CONCAT26((short)((ulonglong)uVar24 >> 0x30) + sVar29,
                              CONCAT24(sVar22 + sVar27,CONCAT22(sVar22 + sVar26,sVar22 + sVar23))),6
                    );
      puVar19 = param_1 + 2;
      sVar1 = (short)uVar20;
      sVar21 = (short)((ulonglong)uVar20 >> 0x10);
      sVar2 = (short)((ulonglong)uVar20 >> 0x20);
      sVar3 = (short)((ulonglong)uVar20 >> 0x30);
      sVar4 = (short)uVar24;
      sVar5 = (short)((ulonglong)uVar24 >> 0x10);
      sVar6 = (short)((ulonglong)uVar24 >> 0x20);
      sVar7 = (short)((ulonglong)uVar24 >> 0x30);
      uVar15 = uVar15 - 1;
      *puVar16 = CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar24 >> 0x30) -
                          (0xff < sVar7),
                          CONCAT16((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar24 >> 0x20)
                                   - (0xff < sVar6),
                                   CONCAT15((0 < sVar5) * (sVar5 < 0x100) *
                                            (char)((ulonglong)uVar24 >> 0x10) - (0xff < sVar5),
                                            CONCAT14((0 < sVar4) * (sVar4 < 0x100) * (char)uVar24 -
                                                     (0xff < sVar4),
                                                     CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                                              (char)((ulonglong)uVar20 >> 0x30) -
                                                              (0xff < sVar3),
                                                              CONCAT12((0 < sVar2) * (sVar2 < 0x100)
                                                                       * (char)((ulonglong)uVar20 >>
                                                                               0x20) -
                                                                       (0xff < sVar2),
                                                                       CONCAT11((0 < sVar21) *
                                                                                (sVar21 < 0x100) *
                                                                                (char)((ulonglong)
                                                                                       uVar20 >>
                                                                                      0x10) -
                                                                                (0xff < sVar21),
                                                                                (0 < sVar1) *
                                                                                (sVar1 < 0x100) *
                                                                                (char)uVar20 -
                                                                                (0xff < sVar1)))))))
                         );
      uVar31 = packssdw(uVar32,puVar17[1]);
      uVar24 = packssdw(CONCAT26(sVar29,CONCAT24(sVar27,CONCAT22(sVar26,sVar23))),puVar17[0x21]);
      uVar20 = puVar18[1];
      uVar30 = CONCAT22((short)((ulonglong)uVar24 >> 0x20),(short)((ulonglong)uVar31 >> 0x20));
      sVar1 = (short)uVar20;
      uVar32 = pmaddwd(CONCAT44(uVar30,uVar30),DAT_5f9da650);
      uVar28 = (undefined4)
               (CONCAT26((short)((ulonglong)uVar24 >> 0x30),
                         CONCAT24((short)((ulonglong)uVar31 >> 0x30),uVar30)) >> 0x20);
      uVar31 = CONCAT44(uVar28,uVar28);
      sVar21 = (short)((ulonglong)uVar20 >> 0x20);
      uVar24 = pmaddwd(CONCAT44(uVar30,uVar30),DAT_5f9da658);
      uVar25 = pmaddwd(uVar31,DAT_5f9da650);
      uVar31 = pmaddwd(uVar31,DAT_5f9da658);
      sVar8 = (short)DAT_5f9da660;
      sVar9 = (short)((ulonglong)DAT_5f9da660 >> 0x10);
      sVar10 = (short)((ulonglong)DAT_5f9da660 >> 0x20);
      sVar11 = (short)((ulonglong)DAT_5f9da660 >> 0x30);
      in_MM7 = packssdw(CONCAT44((int)((longlong)uVar32 >> 0x2e),(int)uVar32 >> 0xe),
                        CONCAT44((int)((longlong)uVar24 >> 0x2e),(int)uVar24 >> 0xe));
      sVar33 = (short)((ulonglong)in_MM7 >> 0x10);
      sVar34 = (short)((ulonglong)in_MM7 >> 0x20);
      sVar35 = (short)((ulonglong)in_MM7 >> 0x30);
      uVar24 = puVar18[9];
      uVar25 = packssdw(CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe),
                        CONCAT44((int)((longlong)uVar31 >> 0x2e),(int)uVar31 >> 0xe));
      sVar12 = (short)uVar24;
      sVar26 = (short)((ulonglong)uVar25 >> 0x10);
      sVar27 = (short)((ulonglong)uVar25 >> 0x20);
      sVar29 = (short)((ulonglong)uVar25 >> 0x30);
      uVar31 = psraw(CONCAT26((short)((ulonglong)uVar20 >> 0x10) + sVar11 + sVar35,
                              CONCAT24(sVar1 + sVar10 + sVar34,
                                       CONCAT22(sVar1 + sVar9 + sVar33,sVar1 + sVar8 + (short)in_MM7
                                               ))),6);
      uVar20 = psraw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar11 + sVar29,
                              CONCAT24(sVar21 + sVar10 + sVar27,
                                       CONCAT22(sVar21 + sVar9 + sVar26,
                                                sVar21 + sVar8 + (short)uVar25))),6);
      sVar1 = (short)uVar31;
      sVar21 = (short)((ulonglong)uVar31 >> 0x10);
      sVar2 = (short)((ulonglong)uVar31 >> 0x20);
      sVar3 = (short)((ulonglong)uVar31 >> 0x30);
      sVar4 = (short)uVar20;
      sVar5 = (short)((ulonglong)uVar20 >> 0x10);
      sVar6 = (short)((ulonglong)uVar20 >> 0x20);
      sVar7 = (short)((ulonglong)uVar20 >> 0x30);
      sVar23 = (short)uVar25 + sVar8;
      sVar26 = sVar26 + sVar9;
      sVar27 = sVar27 + sVar10;
      sVar29 = sVar29 + sVar11;
      in_MM6 = CONCAT26(sVar29,CONCAT24(sVar27,CONCAT22(sVar26,sVar23)));
      sVar22 = (short)((ulonglong)uVar24 >> 0x20);
      param_1[1] = CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                            (0xff < sVar7),
                            CONCAT16((0 < sVar6) * (sVar6 < 0x100) *
                                     (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar6),
                                     CONCAT15((0 < sVar5) * (sVar5 < 0x100) *
                                              (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar5),
                                              CONCAT14((0 < sVar4) * (sVar4 < 0x100) * (char)uVar20
                                                       - (0xff < sVar4),
                                                       CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                                                (char)((ulonglong)uVar31 >> 0x30) -
                                                                (0xff < sVar3),
                                                                CONCAT12((0 < sVar2) *
                                                                         (sVar2 < 0x100) *
                                                                         (char)((ulonglong)uVar31 >>
                                                                               0x20) -
                                                                         (0xff < sVar2),
                                                                         CONCAT11((0 < sVar21) *
                                                                                  (sVar21 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar31 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar21),
                                                                                  (0 < sVar1) *
                                                                                  (sVar1 < 0x100) *
                                                                                  (char)uVar31 -
                                                                                  (0xff < sVar1)))))
                                             )));
      uVar20 = psraw(CONCAT26((short)((ulonglong)uVar24 >> 0x10) + sVar11 + sVar35,
                              CONCAT24(sVar12 + sVar10 + sVar34,
                                       CONCAT22(sVar12 + sVar9 + sVar33,
                                                sVar12 + sVar8 + (short)in_MM7))),6);
      uVar24 = psraw(CONCAT26((short)((ulonglong)uVar24 >> 0x30) + sVar29,
                              CONCAT24(sVar22 + sVar27,CONCAT22(sVar22 + sVar26,sVar22 + sVar23))),6
                    );
      sVar1 = (short)uVar20;
      sVar21 = (short)((ulonglong)uVar20 >> 0x10);
      sVar2 = (short)((ulonglong)uVar20 >> 0x20);
      sVar3 = (short)((ulonglong)uVar20 >> 0x30);
      sVar4 = (short)uVar24;
      sVar5 = (short)((ulonglong)uVar24 >> 0x10);
      sVar6 = (short)((ulonglong)uVar24 >> 0x20);
      sVar7 = (short)((ulonglong)uVar24 >> 0x30);
      puVar16[1] = CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar24 >> 0x30) -
                            (0xff < sVar7),
                            CONCAT16((0 < sVar6) * (sVar6 < 0x100) *
                                     (char)((ulonglong)uVar24 >> 0x20) - (0xff < sVar6),
                                     CONCAT15((0 < sVar5) * (sVar5 < 0x100) *
                                              (char)((ulonglong)uVar24 >> 0x10) - (0xff < sVar5),
                                              CONCAT14((0 < sVar4) * (sVar4 < 0x100) * (char)uVar24
                                                       - (0xff < sVar4),
                                                       CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                                                (char)((ulonglong)uVar20 >> 0x30) -
                                                                (0xff < sVar3),
                                                                CONCAT12((0 < sVar2) *
                                                                         (sVar2 < 0x100) *
                                                                         (char)((ulonglong)uVar20 >>
                                                                               0x20) -
                                                                         (0xff < sVar2),
                                                                         CONCAT11((0 < sVar21) *
                                                                                  (sVar21 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar20 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar21),
                                                                                  (0 < sVar1) *
                                                                                  (sVar1 < 0x100) *
                                                                                  (char)uVar20 -
                                                                                  (0xff < sVar1)))))
                                             )));
      puVar16 = puVar16 + 2;
      puVar13 = puVar17 + 2;
      param_2 = puVar18 + 0x20;
      param_1 = puVar19;
    } while ((uVar15 & 1) != 0);
    param_1 = (undefined8 *)((int)puVar19 + iVar14);
    puVar16 = (undefined8 *)((int)puVar16 + iVar14);
    puVar13 = puVar17 + 6;
    param_2 = puVar18 + -0x10;
  } while (((uVar15 & 3) != 0) || (param_2 = puVar18 + 0x10, uVar15 != 0));
  return;
}


