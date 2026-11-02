/* Module: aviplug.dll
   Function: FUN_5f9697f0
   Address: 5f9697f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9697f0(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  short sVar21;
  short sVar23;
  short sVar24;
  undefined8 uVar22;
  short sVar25;
  short sVar26;
  short sVar28;
  short sVar29;
  undefined8 uVar27;
  short sVar30;
  
  iVar6 = 8;
  puVar7 = param_2 + 0x80;
  do {
    uVar5 = 4;
    puVar8 = puVar7;
    while( true ) {
      do {
        puVar10 = param_1;
        puVar9 = param_2;
        uVar16 = packssdw(*puVar8,puVar8[0x20]);
        uVar19 = pshufw(puVar8[0x20],uVar16,0x88);
        uVar17 = pshufw(uVar16,uVar16,0xdd);
        uVar16 = *puVar9;
        uVar27 = pmaddwd(DAT_5f9da6d8,uVar19);
        uVar20 = pmaddwd(uVar19,DAT_5f9da6e0);
        uVar22 = pmaddwd(DAT_5f9da6d8,uVar17);
        sVar12 = (short)DAT_5f9da6e8;
        sVar13 = (short)((ulonglong)DAT_5f9da6e8 >> 0x10);
        sVar14 = (short)((ulonglong)DAT_5f9da6e8 >> 0x20);
        sVar15 = (short)((ulonglong)DAT_5f9da6e8 >> 0x30);
        uVar19 = CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar15,
                          CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar14,
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar13,
                                            (short)uVar16 + sVar12)));
        uVar18 = pmaddwd(uVar17,DAT_5f9da6e0);
        uVar11 = pshufw(DAT_5f9da6e0,uVar19,0x40);
        uVar16 = puVar9[1];
        uVar17 = CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar15,
                          CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar14,
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar13,
                                            (short)uVar16 + sVar12)));
        puVar7 = puVar8 + 1;
        uVar16 = packssdw(CONCAT44((int)((longlong)uVar27 >> 0x2e),(int)uVar27 >> 0xe),
                          CONCAT44((int)((longlong)uVar20 >> 0x2e),(int)uVar20 >> 0xe));
        uVar19 = pshufw(uVar19,uVar19,0xea);
        sVar26 = (short)uVar16;
        sVar28 = (short)((ulonglong)uVar16 >> 0x10);
        sVar29 = (short)((ulonglong)uVar16 >> 0x20);
        sVar30 = (short)((ulonglong)uVar16 >> 0x30);
        uVar11 = psraw(CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar30,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) + sVar29,
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) + sVar28,
                                                  (short)uVar11 + sVar26))),6);
        uVar16 = puVar9[2];
        uVar19 = psraw(CONCAT26((short)((ulonglong)uVar19 >> 0x30) + sVar30,
                                CONCAT24((short)((ulonglong)uVar19 >> 0x20) + sVar29,
                                         CONCAT22((short)((ulonglong)uVar19 >> 0x10) + sVar28,
                                                  (short)uVar19 + sVar26))),6);
        uVar20 = CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar15,
                          CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar14,
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar13,
                                            (short)uVar16 + sVar12)));
        sVar1 = (short)uVar11;
        sVar21 = (short)((ulonglong)uVar11 >> 0x10);
        sVar2 = (short)((ulonglong)uVar11 >> 0x20);
        sVar23 = (short)((ulonglong)uVar11 >> 0x30);
        sVar3 = (short)uVar19;
        sVar24 = (short)((ulonglong)uVar19 >> 0x10);
        sVar4 = (short)((ulonglong)uVar19 >> 0x20);
        sVar25 = (short)((ulonglong)uVar19 >> 0x30);
        uVar19 = CONCAT17((0 < sVar25) * (sVar25 < 0x100) * (char)((ulonglong)uVar19 >> 0x30) -
                          (0xff < sVar25),
                          CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar19 >> 0x20)
                                   - (0xff < sVar4),
                                   CONCAT15((0 < sVar24) * (sVar24 < 0x100) *
                                            (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar24),
                                            CONCAT14((0 < sVar3) * (sVar3 < 0x100) * (char)uVar19 -
                                                     (0xff < sVar3),
                                                     CONCAT13((0 < sVar23) * (sVar23 < 0x100) *
                                                              (char)((ulonglong)uVar11 >> 0x30) -
                                                              (0xff < sVar23),
                                                              CONCAT12((0 < sVar2) * (sVar2 < 0x100)
                                                                       * (char)((ulonglong)uVar11 >>
                                                                               0x20) -
                                                                       (0xff < sVar2),
                                                                       CONCAT11((0 < sVar21) *
                                                                                (sVar21 < 0x100) *
                                                                                (char)((ulonglong)
                                                                                       uVar11 >>
                                                                                      0x10) -
                                                                                (0xff < sVar21),
                                                                                (0 < sVar1) *
                                                                                (sVar1 < 0x100) *
                                                                                (char)uVar11 -
                                                                                (0xff < sVar1)))))))
                         );
        uVar16 = puVar9[3];
        *puVar10 = uVar19;
        uVar11 = pshufw(uVar19,uVar17,0x40);
        uVar19 = pshufw(uVar17,uVar17,0xea);
        uVar17 = psraw(CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar30,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) + sVar29,
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) + sVar28,
                                                  (short)uVar11 + sVar26))),6);
        uVar11 = CONCAT26(sVar15 + (short)((ulonglong)uVar16 >> 0x30),
                          CONCAT24(sVar14 + (short)((ulonglong)uVar16 >> 0x20),
                                   CONCAT22(sVar13 + (short)((ulonglong)uVar16 >> 0x10),
                                            sVar12 + (short)uVar16)));
        *(undefined4 *)puVar9 = 0;
        *(undefined4 *)((int)puVar9 + 4) = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)((int)puVar9 + 0xc) = 0;
        uVar19 = psraw(CONCAT26((short)((ulonglong)uVar19 >> 0x30) + sVar30,
                                CONCAT24((short)((ulonglong)uVar19 >> 0x20) + sVar29,
                                         CONCAT22((short)((ulonglong)uVar19 >> 0x10) + sVar28,
                                                  (short)uVar19 + sVar26))),6);
        *(undefined4 *)(puVar9 + 2) = 0;
        *(undefined4 *)((int)puVar9 + 0x14) = 0;
        *(undefined4 *)(puVar9 + 3) = 0;
        *(undefined4 *)((int)puVar9 + 0x1c) = 0;
        sVar1 = (short)uVar17;
        sVar21 = (short)((ulonglong)uVar17 >> 0x10);
        sVar2 = (short)((ulonglong)uVar17 >> 0x20);
        sVar23 = (short)((ulonglong)uVar17 >> 0x30);
        sVar3 = (short)uVar19;
        sVar24 = (short)((ulonglong)uVar19 >> 0x10);
        sVar4 = (short)((ulonglong)uVar19 >> 0x20);
        sVar25 = (short)((ulonglong)uVar19 >> 0x30);
        uVar17 = CONCAT17((0 < sVar25) * (sVar25 < 0x100) * (char)((ulonglong)uVar19 >> 0x30) -
                          (0xff < sVar25),
                          CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar19 >> 0x20)
                                   - (0xff < sVar4),
                                   CONCAT15((0 < sVar24) * (sVar24 < 0x100) *
                                            (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar24),
                                            CONCAT14((0 < sVar3) * (sVar3 < 0x100) * (char)uVar19 -
                                                     (0xff < sVar3),
                                                     CONCAT13((0 < sVar23) * (sVar23 < 0x100) *
                                                              (char)((ulonglong)uVar17 >> 0x30) -
                                                              (0xff < sVar23),
                                                              CONCAT12((0 < sVar2) * (sVar2 < 0x100)
                                                                       * (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                       (0xff < sVar2),
                                                                       CONCAT11((0 < sVar21) *
                                                                                (sVar21 < 0x100) *
                                                                                (char)((ulonglong)
                                                                                       uVar17 >>
                                                                                      0x10) -
                                                                                (0xff < sVar21),
                                                                                (0 < sVar1) *
                                                                                (sVar1 < 0x100) *
                                                                                (char)uVar17 -
                                                                                (0xff < sVar1)))))))
                         );
        uVar18 = packssdw(CONCAT44((int)((longlong)uVar22 >> 0x2e),(int)uVar22 >> 0xe),
                          CONCAT44((int)((longlong)uVar18 >> 0x2e),(int)uVar18 >> 0xe));
        puVar10[1] = uVar17;
        uVar17 = pshufw(uVar17,uVar20,0x40);
        uVar16 = pshufw(uVar16,uVar20,0xea);
        sVar21 = (short)uVar18;
        sVar23 = (short)((ulonglong)uVar18 >> 0x10);
        sVar24 = (short)((ulonglong)uVar18 >> 0x20);
        sVar25 = (short)((ulonglong)uVar18 >> 0x30);
        uVar17 = psraw(CONCAT26((short)((ulonglong)uVar17 >> 0x30) + sVar25,
                                CONCAT24((short)((ulonglong)uVar17 >> 0x20) + sVar24,
                                         CONCAT22((short)((ulonglong)uVar17 >> 0x10) + sVar23,
                                                  (short)uVar17 + sVar21))),6);
        uVar16 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar25,
                                CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar24,
                                         CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar23,
                                                  (short)uVar16 + sVar21))),6);
        uVar19 = pshufw(uVar19,uVar11,0x40);
        uVar11 = pshufw(uVar11,uVar11,0xea);
        uVar5 = uVar5 - 1;
        sVar1 = (short)uVar17;
        sVar2 = (short)((ulonglong)uVar17 >> 0x10);
        sVar3 = (short)((ulonglong)uVar17 >> 0x20);
        sVar4 = (short)((ulonglong)uVar17 >> 0x30);
        sVar12 = (short)uVar16;
        sVar14 = (short)((ulonglong)uVar16 >> 0x10);
        sVar26 = (short)((ulonglong)uVar16 >> 0x20);
        sVar29 = (short)((ulonglong)uVar16 >> 0x30);
        uVar19 = psraw(CONCAT26((short)((ulonglong)uVar19 >> 0x30) + sVar25,
                                CONCAT24((short)((ulonglong)uVar19 >> 0x20) + sVar24,
                                         CONCAT22((short)((ulonglong)uVar19 >> 0x10) + sVar23,
                                                  (short)uVar19 + sVar21))),6);
        *puVar8 = 0;
        uVar11 = psraw(CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar25,
                                CONCAT24((short)((ulonglong)uVar11 >> 0x20) + sVar24,
                                         CONCAT22((short)((ulonglong)uVar11 >> 0x10) + sVar23,
                                                  (short)uVar11 + sVar21))),6);
        puVar8[0x20] = 0;
        sVar21 = (short)uVar19;
        sVar23 = (short)((ulonglong)uVar19 >> 0x10);
        sVar24 = (short)((ulonglong)uVar19 >> 0x20);
        sVar25 = (short)((ulonglong)uVar19 >> 0x30);
        sVar13 = (short)uVar11;
        sVar15 = (short)((ulonglong)uVar11 >> 0x10);
        sVar28 = (short)((ulonglong)uVar11 >> 0x20);
        sVar30 = (short)((ulonglong)uVar11 >> 0x30);
        puVar10[2] = CONCAT17((0 < sVar29) * (sVar29 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                              (0xff < sVar29),
                              CONCAT16((0 < sVar26) * (sVar26 < 0x100) *
                                       (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar26),
                                       CONCAT15((0 < sVar14) * (sVar14 < 0x100) *
                                                (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar14),
                                                CONCAT14((0 < sVar12) * (sVar12 < 0x100) *
                                                         (char)uVar16 - (0xff < sVar12),
                                                         CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                                  (char)((ulonglong)uVar17 >> 0x30)
                                                                  - (0xff < sVar4),
                                                                  CONCAT12((0 < sVar3) *
                                                                           (sVar3 < 0x100) *
                                                                           (char)((ulonglong)uVar17
                                                                                 >> 0x20) -
                                                                           (0xff < sVar3),
                                                                           CONCAT11((0 < sVar2) *
                                                                                    (sVar2 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar17 >> 0x10) - (0xff < sVar2),
                                                  (0 < sVar1) * (sVar1 < 0x100) * (char)uVar17 -
                                                  (0xff < sVar1))))))));
        puVar10[3] = CONCAT17((0 < sVar30) * (sVar30 < 0x100) * (char)((ulonglong)uVar11 >> 0x30) -
                              (0xff < sVar30),
                              CONCAT16((0 < sVar28) * (sVar28 < 0x100) *
                                       (char)((ulonglong)uVar11 >> 0x20) - (0xff < sVar28),
                                       CONCAT15((0 < sVar15) * (sVar15 < 0x100) *
                                                (char)((ulonglong)uVar11 >> 0x10) - (0xff < sVar15),
                                                CONCAT14((0 < sVar13) * (sVar13 < 0x100) *
                                                         (char)uVar11 - (0xff < sVar13),
                                                         CONCAT13((0 < sVar25) * (sVar25 < 0x100) *
                                                                  (char)((ulonglong)uVar19 >> 0x30)
                                                                  - (0xff < sVar25),
                                                                  CONCAT12((0 < sVar24) *
                                                                           (sVar24 < 0x100) *
                                                                           (char)((ulonglong)uVar19
                                                                                 >> 0x20) -
                                                                           (0xff < sVar24),
                                                                           CONCAT11((0 < sVar23) *
                                                                                    (sVar23 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar19 >> 0x10) - (0xff < sVar23),
                                                  (0 < sVar21) * (sVar21 < 0x100) * (char)uVar19 -
                                                  (0xff < sVar21))))))));
        puVar8 = puVar7;
        param_2 = puVar9 + 0x20;
        param_1 = puVar10 + 4;
      } while ((uVar5 & 1) != 0);
      if (uVar5 == 0) break;
      param_1 = (undefined8 *)((int)(puVar10 + 4) + param_4);
    }
    param_2 = puVar9 + -0x5c;
    param_1 = (undefined8 *)((int)puVar10 + (param_3 - param_4) + -0x60);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


