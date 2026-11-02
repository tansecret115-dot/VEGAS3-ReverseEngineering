/* Module: aviplug.dll
   Function: FUN_5f96af70
   Address: 5f96af70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96af70(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  short sVar15;
  undefined8 uVar14;
  short sVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  short sVar19;
  short sVar21;
  short sVar22;
  undefined8 uVar20;
  short sVar23;
  short sVar24;
  undefined4 uVar25;
  short sVar29;
  short sVar30;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  short sVar31;
  
  puVar11 = param_2 + 0x80;
  uVar8 = 0x20;
  puVar10 = (undefined8 *)((int)param_1 + param_3 * 2);
  do {
    do {
      do {
        do {
          puVar13 = param_1;
          puVar12 = param_2;
          puVar9 = puVar10;
          uVar14 = DAT_5f9da658;
          uVar26 = packssdw(*puVar11,*puVar11);
          uVar17 = packssdw(puVar11[0x20],puVar11[0x20]);
          *puVar11 = 0;
          uVar28 = DAT_5f9da650;
          uVar7 = CONCAT22((short)((ulonglong)uVar17 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar25 = CONCAT22((short)uVar17,(short)uVar26);
          uVar26 = CONCAT44(uVar25,uVar25);
          puVar11[0x20] = 0;
          uVar20 = CONCAT44(uVar7,uVar7);
          uVar17 = *puVar12;
          uVar18 = pmaddwd(uVar14,uVar26);
          *puVar12 = 0;
          uVar27 = pmaddwd(uVar26,uVar28);
          sVar16 = (short)uVar17;
          uVar26 = pmaddwd(uVar14,uVar20);
          uVar20 = pmaddwd(uVar20,uVar28);
          uVar28 = packssdw(CONCAT44((int)((longlong)uVar27 >> 0x2e),(int)uVar27 >> 0xe),
                            CONCAT44((int)((longlong)uVar18 >> 0x2e),(int)uVar18 >> 0xe));
          sVar15 = (short)((ulonglong)uVar17 >> 0x20);
          sVar19 = (short)DAT_5f9da660;
          sVar24 = (short)uVar28 + sVar19;
          sVar21 = (short)((ulonglong)DAT_5f9da660 >> 0x10);
          sVar29 = (short)((ulonglong)uVar28 >> 0x10) + sVar21;
          sVar22 = (short)((ulonglong)DAT_5f9da660 >> 0x20);
          sVar30 = (short)((ulonglong)uVar28 >> 0x20) + sVar22;
          sVar23 = (short)((ulonglong)DAT_5f9da660 >> 0x30);
          sVar31 = (short)((ulonglong)uVar28 >> 0x30) + sVar23;
          uVar28 = puVar12[8];
          uVar14 = psraw(CONCAT26((short)((ulonglong)uVar17 >> 0x10) + sVar31,
                                  CONCAT24(sVar16 + sVar30,CONCAT22(sVar16 + sVar29,sVar16 + sVar24)
                                          )),6);
          puVar12[8] = 0;
          uVar17 = psraw(CONCAT26((short)((ulonglong)uVar17 >> 0x30) + sVar31,
                                  CONCAT24(sVar15 + sVar30,CONCAT22(sVar15 + sVar29,sVar15 + sVar24)
                                          )),6);
          sVar16 = (short)uVar14;
          sVar15 = (short)((ulonglong)uVar14 >> 0x10);
          sVar1 = (short)((ulonglong)uVar14 >> 0x20);
          sVar2 = (short)((ulonglong)uVar14 >> 0x30);
          sVar3 = (short)uVar17;
          sVar4 = (short)((ulonglong)uVar17 >> 0x10);
          sVar5 = (short)((ulonglong)uVar17 >> 0x20);
          sVar6 = (short)((ulonglong)uVar17 >> 0x30);
          *puVar13 = CONCAT17((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                              (0xff < sVar6),
                              CONCAT16((0 < sVar5) * (sVar5 < 0x100) *
                                       (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar5),
                                       CONCAT15((0 < sVar4) * (sVar4 < 0x100) *
                                                (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar4),
                                                CONCAT14((0 < sVar3) * (sVar3 < 0x100) *
                                                         (char)uVar17 - (0xff < sVar3),
                                                         CONCAT13((0 < sVar2) * (sVar2 < 0x100) *
                                                                  (char)((ulonglong)uVar14 >> 0x30)
                                                                  - (0xff < sVar2),
                                                                  CONCAT12((0 < sVar1) *
                                                                           (sVar1 < 0x100) *
                                                                           (char)((ulonglong)uVar14
                                                                                 >> 0x20) -
                                                                           (0xff < sVar1),
                                                                           CONCAT11((0 < sVar15) *
                                                                                    (sVar15 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar14 >> 0x10) - (0xff < sVar15),
                                                  (0 < sVar16) * (sVar16 < 0x100) * (char)uVar14 -
                                                  (0xff < sVar16))))))));
          sVar16 = (short)uVar28;
          uVar17 = packssdw(CONCAT44((int)((longlong)uVar20 >> 0x2e),(int)uVar20 >> 0xe),
                            CONCAT44((int)((longlong)uVar26 >> 0x2e),(int)uVar26 >> 0xe));
          sVar19 = (short)uVar17 + sVar19;
          sVar21 = (short)((ulonglong)uVar17 >> 0x10) + sVar21;
          sVar22 = (short)((ulonglong)uVar17 >> 0x20) + sVar22;
          sVar23 = (short)((ulonglong)uVar17 >> 0x30) + sVar23;
          sVar15 = (short)((ulonglong)uVar28 >> 0x20);
          uVar17 = puVar12[1];
          puVar12[1] = 0;
          uVar26 = psraw(CONCAT26((short)((ulonglong)uVar28 >> 0x10) + sVar31,
                                  CONCAT24(sVar16 + sVar30,CONCAT22(sVar16 + sVar29,sVar16 + sVar24)
                                          )),6);
          uVar14 = puVar12[9];
          uVar28 = psraw(CONCAT26((short)((ulonglong)uVar28 >> 0x30) + sVar31,
                                  CONCAT24(sVar15 + sVar30,CONCAT22(sVar15 + sVar29,sVar15 + sVar24)
                                          )),6);
          puVar12[9] = 0;
          sVar16 = (short)uVar26;
          sVar15 = (short)((ulonglong)uVar26 >> 0x10);
          sVar1 = (short)((ulonglong)uVar26 >> 0x20);
          sVar2 = (short)((ulonglong)uVar26 >> 0x30);
          sVar3 = (short)uVar28;
          sVar4 = (short)((ulonglong)uVar28 >> 0x10);
          sVar5 = (short)((ulonglong)uVar28 >> 0x20);
          sVar6 = (short)((ulonglong)uVar28 >> 0x30);
          sVar24 = (short)uVar17;
          *puVar9 = CONCAT17((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar28 >> 0x30) -
                             (0xff < sVar6),
                             CONCAT16((0 < sVar5) * (sVar5 < 0x100) *
                                      (char)((ulonglong)uVar28 >> 0x20) - (0xff < sVar5),
                                      CONCAT15((0 < sVar4) * (sVar4 < 0x100) *
                                               (char)((ulonglong)uVar28 >> 0x10) - (0xff < sVar4),
                                               CONCAT14((0 < sVar3) * (sVar3 < 0x100) * (char)uVar28
                                                        - (0xff < sVar3),
                                                        CONCAT13((0 < sVar2) * (sVar2 < 0x100) *
                                                                 (char)((ulonglong)uVar26 >> 0x30) -
                                                                 (0xff < sVar2),
                                                                 CONCAT12((0 < sVar1) *
                                                                          (sVar1 < 0x100) *
                                                                          (char)((ulonglong)uVar26
                                                                                >> 0x20) -
                                                                          (0xff < sVar1),
                                                                          CONCAT11((0 < sVar15) *
                                                                                   (sVar15 < 0x100)
                                                                                   * (char)((
                                                  ulonglong)uVar26 >> 0x10) - (0xff < sVar15),
                                                  (0 < sVar16) * (sVar16 < 0x100) * (char)uVar26 -
                                                  (0xff < sVar16))))))));
          sVar16 = (short)((ulonglong)uVar17 >> 0x20);
          uVar28 = psraw(CONCAT26((short)((ulonglong)uVar17 >> 0x10) + sVar23,
                                  CONCAT24(sVar24 + sVar22,CONCAT22(sVar24 + sVar21,sVar24 + sVar19)
                                          )),6);
          uVar17 = psraw(CONCAT26((short)((ulonglong)uVar17 >> 0x30) + sVar23,
                                  CONCAT24(sVar16 + sVar22,CONCAT22(sVar16 + sVar21,sVar16 + sVar19)
                                          )),6);
          puVar11 = puVar11 + 1;
          sVar16 = (short)uVar28;
          sVar15 = (short)((ulonglong)uVar28 >> 0x10);
          sVar1 = (short)((ulonglong)uVar28 >> 0x20);
          sVar2 = (short)((ulonglong)uVar28 >> 0x30);
          sVar3 = (short)uVar17;
          sVar4 = (short)((ulonglong)uVar17 >> 0x10);
          sVar5 = (short)((ulonglong)uVar17 >> 0x20);
          sVar6 = (short)((ulonglong)uVar17 >> 0x30);
          sVar24 = (short)uVar14;
          puVar13[1] = CONCAT17((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                                (0xff < sVar6),
                                CONCAT16((0 < sVar5) * (sVar5 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar5),
                                         CONCAT15((0 < sVar4) * (sVar4 < 0x100) *
                                                  (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar4)
                                                  ,CONCAT14((0 < sVar3) * (sVar3 < 0x100) *
                                                            (char)uVar17 - (0xff < sVar3),
                                                            CONCAT13((0 < sVar2) * (sVar2 < 0x100) *
                                                                     (char)((ulonglong)uVar28 >>
                                                                           0x30) - (0xff < sVar2),
                                                                     CONCAT12((0 < sVar1) *
                                                                              (sVar1 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar28 >> 0x20)
                                                                              - (0xff < sVar1),
                                                                              CONCAT11((0 < sVar15)
                                                                                       * (sVar15 < 
                                                  0x100) * (char)((ulonglong)uVar28 >> 0x10) -
                                                  (0xff < sVar15),
                                                  (0 < sVar16) * (sVar16 < 0x100) * (char)uVar28 -
                                                  (0xff < sVar16))))))));
          sVar16 = (short)((ulonglong)uVar14 >> 0x20);
          uVar28 = psraw(CONCAT26((short)((ulonglong)uVar14 >> 0x10) + sVar23,
                                  CONCAT24(sVar24 + sVar22,CONCAT22(sVar24 + sVar21,sVar24 + sVar19)
                                          )),6);
          uVar8 = uVar8 - 1;
          uVar17 = psraw(CONCAT26((short)((ulonglong)uVar14 >> 0x30) + sVar23,
                                  CONCAT24(sVar16 + sVar22,CONCAT22(sVar16 + sVar21,sVar16 + sVar19)
                                          )),6);
          sVar16 = (short)uVar28;
          sVar15 = (short)((ulonglong)uVar28 >> 0x10);
          sVar1 = (short)((ulonglong)uVar28 >> 0x20);
          sVar2 = (short)((ulonglong)uVar28 >> 0x30);
          sVar3 = (short)uVar17;
          sVar4 = (short)((ulonglong)uVar17 >> 0x10);
          sVar5 = (short)((ulonglong)uVar17 >> 0x20);
          sVar6 = (short)((ulonglong)uVar17 >> 0x30);
          puVar9[1] = CONCAT17((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                               (0xff < sVar6),
                               CONCAT16((0 < sVar5) * (sVar5 < 0x100) *
                                        (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar5),
                                        CONCAT15((0 < sVar4) * (sVar4 < 0x100) *
                                                 (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar4),
                                                 CONCAT14((0 < sVar3) * (sVar3 < 0x100) *
                                                          (char)uVar17 - (0xff < sVar3),
                                                          CONCAT13((0 < sVar2) * (sVar2 < 0x100) *
                                                                   (char)((ulonglong)uVar28 >> 0x30)
                                                                   - (0xff < sVar2),
                                                                   CONCAT12((0 < sVar1) *
                                                                            (sVar1 < 0x100) *
                                                                            (char)((ulonglong)uVar28
                                                                                  >> 0x20) -
                                                                            (0xff < sVar1),
                                                                            CONCAT11((0 < sVar15) *
                                                                                     (sVar15 < 0x100
                                                                                     ) * (char)((
                                                  ulonglong)uVar28 >> 0x10) - (0xff < sVar15),
                                                  (0 < sVar16) * (sVar16 < 0x100) * (char)uVar28 -
                                                  (0xff < sVar16))))))));
          puVar10 = puVar9 + 2;
          param_2 = puVar12 + 2;
          param_1 = puVar13 + 2;
        } while ((uVar8 & 1) != 0);
        param_2 = puVar12 + 0x1e;
      } while ((uVar8 & 3) != 0);
      param_1 = (undefined8 *)((int)puVar13 + param_3 + -0x30);
      puVar10 = (undefined8 *)((int)puVar9 + param_3 + -0x30);
      param_2 = puVar12 + -0x1e;
    } while ((uVar8 & 7) != 0);
    param_1 = (undefined8 *)((int)param_1 + param_3 * 2);
    puVar10 = (undefined8 *)((int)puVar10 + param_3 * 2);
    param_2 = puVar12 + -0x16;
  } while (((uVar8 & 0xf) != 0) || (param_2 = puVar12 + 10, uVar8 != 0));
  return;
}


