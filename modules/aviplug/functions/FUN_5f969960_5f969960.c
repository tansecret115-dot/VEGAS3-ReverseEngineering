/* Module: aviplug.dll
   Function: FUN_5f969960
   Address: 5f969960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f969960(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  short sVar24;
  short sVar27;
  short sVar28;
  undefined8 uVar25;
  undefined8 uVar26;
  short sVar29;
  
  iVar10 = 8;
  puVar11 = param_2 + 0x80;
  do {
    uVar9 = 4;
    while( true ) {
      do {
        puVar13 = param_1;
        puVar12 = param_2;
        uVar21 = packssdw(*puVar11,*puVar11);
        uVar19 = packssdw(puVar11[1],puVar11[1]);
        uVar26 = *puVar12;
        uVar25 = pmaddwd(DAT_5f9da6d8,uVar21);
        uVar22 = pmaddwd(uVar21,DAT_5f9da6e0);
        uVar23 = pmaddwd(DAT_5f9da6d8,uVar19);
        sVar15 = (short)DAT_5f9da6e8;
        sVar16 = (short)((ulonglong)DAT_5f9da6e8 >> 0x10);
        sVar17 = (short)((ulonglong)DAT_5f9da6e8 >> 0x20);
        sVar18 = (short)((ulonglong)DAT_5f9da6e8 >> 0x30);
        uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar18,
                          CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar17,
                                   CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar16,
                                            (short)uVar26 + sVar15)));
        uVar20 = pmaddwd(uVar19,DAT_5f9da6e0);
        uVar14 = pshufw(DAT_5f9da6e0,uVar21,0x40);
        uVar26 = puVar12[1];
        uVar19 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar18,
                          CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar17,
                                   CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar16,
                                            (short)uVar26 + sVar15)));
        uVar26 = packssdw(CONCAT44((int)((longlong)uVar25 >> 0x2e),(int)uVar25 >> 0xe),
                          CONCAT44((int)((longlong)uVar22 >> 0x2e),(int)uVar22 >> 0xe));
        uVar21 = pshufw(uVar21,uVar21,0xea);
        sVar24 = (short)uVar26;
        sVar27 = (short)((ulonglong)uVar26 >> 0x10);
        sVar28 = (short)((ulonglong)uVar26 >> 0x20);
        sVar29 = (short)((ulonglong)uVar26 >> 0x30);
        uVar14 = psraw(CONCAT26((short)((ulonglong)uVar14 >> 0x30) + sVar29,
                                CONCAT24((short)((ulonglong)uVar14 >> 0x20) + sVar28,
                                         CONCAT22((short)((ulonglong)uVar14 >> 0x10) + sVar27,
                                                  (short)uVar14 + sVar24))),6);
        uVar26 = puVar12[2];
        uVar21 = psraw(CONCAT26((short)((ulonglong)uVar21 >> 0x30) + sVar29,
                                CONCAT24((short)((ulonglong)uVar21 >> 0x20) + sVar28,
                                         CONCAT22((short)((ulonglong)uVar21 >> 0x10) + sVar27,
                                                  (short)uVar21 + sVar24))),6);
        uVar22 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar18,
                          CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar17,
                                   CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar16,
                                            (short)uVar26 + sVar15)));
        sVar1 = (short)uVar14;
        sVar2 = (short)((ulonglong)uVar14 >> 0x10);
        sVar3 = (short)((ulonglong)uVar14 >> 0x20);
        sVar4 = (short)((ulonglong)uVar14 >> 0x30);
        sVar5 = (short)uVar21;
        sVar6 = (short)((ulonglong)uVar21 >> 0x10);
        sVar7 = (short)((ulonglong)uVar21 >> 0x20);
        sVar8 = (short)((ulonglong)uVar21 >> 0x30);
        uVar21 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                          (0xff < sVar8),
                          CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar21 >> 0x20)
                                   - (0xff < sVar7),
                                   CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                            (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar6),
                                            CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar21 -
                                                     (0xff < sVar5),
                                                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                              (char)((ulonglong)uVar14 >> 0x30) -
                                                              (0xff < sVar4),
                                                              CONCAT12((0 < sVar3) * (sVar3 < 0x100)
                                                                       * (char)((ulonglong)uVar14 >>
                                                                               0x20) -
                                                                       (0xff < sVar3),
                                                                       CONCAT11((0 < sVar2) *
                                                                                (sVar2 < 0x100) *
                                                                                (char)((ulonglong)
                                                                                       uVar14 >>
                                                                                      0x10) -
                                                                                (0xff < sVar2),
                                                                                (0 < sVar1) *
                                                                                (sVar1 < 0x100) *
                                                                                (char)uVar14 -
                                                                                (0xff < sVar1)))))))
                         );
        uVar26 = puVar12[3];
        *puVar13 = uVar21;
        uVar14 = pshufw(uVar21,uVar19,0x40);
        uVar21 = pshufw(uVar19,uVar19,0xea);
        uVar19 = psraw(CONCAT26((short)((ulonglong)uVar14 >> 0x30) + sVar29,
                                CONCAT24((short)((ulonglong)uVar14 >> 0x20) + sVar28,
                                         CONCAT22((short)((ulonglong)uVar14 >> 0x10) + sVar27,
                                                  (short)uVar14 + sVar24))),6);
        uVar14 = CONCAT26(sVar18 + (short)((ulonglong)uVar26 >> 0x30),
                          CONCAT24(sVar17 + (short)((ulonglong)uVar26 >> 0x20),
                                   CONCAT22(sVar16 + (short)((ulonglong)uVar26 >> 0x10),
                                            sVar15 + (short)uVar26)));
        *(undefined4 *)puVar12 = 0;
        *(undefined4 *)((int)puVar12 + 4) = 0;
        *(undefined4 *)(puVar12 + 1) = 0;
        *(undefined4 *)((int)puVar12 + 0xc) = 0;
        uVar21 = psraw(CONCAT26((short)((ulonglong)uVar21 >> 0x30) + sVar29,
                                CONCAT24((short)((ulonglong)uVar21 >> 0x20) + sVar28,
                                         CONCAT22((short)((ulonglong)uVar21 >> 0x10) + sVar27,
                                                  (short)uVar21 + sVar24))),6);
        *(undefined4 *)(puVar12 + 2) = 0;
        *(undefined4 *)((int)puVar12 + 0x14) = 0;
        *(undefined4 *)(puVar12 + 3) = 0;
        *(undefined4 *)((int)puVar12 + 0x1c) = 0;
        sVar1 = (short)uVar19;
        sVar2 = (short)((ulonglong)uVar19 >> 0x10);
        sVar3 = (short)((ulonglong)uVar19 >> 0x20);
        sVar4 = (short)((ulonglong)uVar19 >> 0x30);
        sVar5 = (short)uVar21;
        sVar6 = (short)((ulonglong)uVar21 >> 0x10);
        sVar7 = (short)((ulonglong)uVar21 >> 0x20);
        sVar8 = (short)((ulonglong)uVar21 >> 0x30);
        uVar19 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                          (0xff < sVar8),
                          CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar21 >> 0x20)
                                   - (0xff < sVar7),
                                   CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                            (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar6),
                                            CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar21 -
                                                     (0xff < sVar5),
                                                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                              (char)((ulonglong)uVar19 >> 0x30) -
                                                              (0xff < sVar4),
                                                              CONCAT12((0 < sVar3) * (sVar3 < 0x100)
                                                                       * (char)((ulonglong)uVar19 >>
                                                                               0x20) -
                                                                       (0xff < sVar3),
                                                                       CONCAT11((0 < sVar2) *
                                                                                (sVar2 < 0x100) *
                                                                                (char)((ulonglong)
                                                                                       uVar19 >>
                                                                                      0x10) -
                                                                                (0xff < sVar2),
                                                                                (0 < sVar1) *
                                                                                (sVar1 < 0x100) *
                                                                                (char)uVar19 -
                                                                                (0xff < sVar1)))))))
                         );
        uVar20 = packssdw(CONCAT44((int)((longlong)uVar23 >> 0x2e),(int)uVar23 >> 0xe),
                          CONCAT44((int)((longlong)uVar20 >> 0x2e),(int)uVar20 >> 0xe));
        puVar13[1] = uVar19;
        uVar19 = pshufw(uVar19,uVar22,0x40);
        uVar26 = pshufw(uVar26,uVar22,0xea);
        sVar15 = (short)uVar20;
        sVar16 = (short)((ulonglong)uVar20 >> 0x10);
        sVar17 = (short)((ulonglong)uVar20 >> 0x20);
        sVar18 = (short)((ulonglong)uVar20 >> 0x30);
        uVar19 = psraw(CONCAT26((short)((ulonglong)uVar19 >> 0x30) + sVar18,
                                CONCAT24((short)((ulonglong)uVar19 >> 0x20) + sVar17,
                                         CONCAT22((short)((ulonglong)uVar19 >> 0x10) + sVar16,
                                                  (short)uVar19 + sVar15))),6);
        uVar26 = psraw(CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar18,
                                CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar17,
                                         CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar16,
                                                  (short)uVar26 + sVar15))),6);
        uVar21 = pshufw(uVar21,uVar14,0x40);
        uVar9 = uVar9 - 1;
        uVar14 = pshufw(uVar14,uVar14,0xea);
        sVar1 = (short)uVar19;
        sVar2 = (short)((ulonglong)uVar19 >> 0x10);
        sVar3 = (short)((ulonglong)uVar19 >> 0x20);
        sVar4 = (short)((ulonglong)uVar19 >> 0x30);
        sVar5 = (short)uVar26;
        sVar6 = (short)((ulonglong)uVar26 >> 0x10);
        sVar7 = (short)((ulonglong)uVar26 >> 0x20);
        sVar8 = (short)((ulonglong)uVar26 >> 0x30);
        *(undefined4 *)puVar11 = 0;
        *(undefined4 *)((int)puVar11 + 4) = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
        *(undefined4 *)((int)puVar11 + 0xc) = 0;
        uVar21 = psraw(CONCAT26((short)((ulonglong)uVar21 >> 0x30) + sVar18,
                                CONCAT24((short)((ulonglong)uVar21 >> 0x20) + sVar17,
                                         CONCAT22((short)((ulonglong)uVar21 >> 0x10) + sVar16,
                                                  (short)uVar21 + sVar15))),6);
        puVar11 = puVar11 + 2;
        uVar14 = psraw(CONCAT26((short)((ulonglong)uVar14 >> 0x30) + sVar18,
                                CONCAT24((short)((ulonglong)uVar14 >> 0x20) + sVar17,
                                         CONCAT22((short)((ulonglong)uVar14 >> 0x10) + sVar16,
                                                  (short)uVar14 + sVar15))),6);
        puVar13[2] = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar8),
                              CONCAT16((0 < sVar7) * (sVar7 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar7),
                                       CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar6),
                                                CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar5),
                                                         CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                                  (char)((ulonglong)uVar19 >> 0x30)
                                                                  - (0xff < sVar4),
                                                                  CONCAT12((0 < sVar3) *
                                                                           (sVar3 < 0x100) *
                                                                           (char)((ulonglong)uVar19
                                                                                 >> 0x20) -
                                                                           (0xff < sVar3),
                                                                           CONCAT11((0 < sVar2) *
                                                                                    (sVar2 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar19 >> 0x10) - (0xff < sVar2),
                                                  (0 < sVar1) * (sVar1 < 0x100) * (char)uVar19 -
                                                  (0xff < sVar1))))))));
        sVar1 = (short)uVar21;
        sVar2 = (short)((ulonglong)uVar21 >> 0x10);
        sVar3 = (short)((ulonglong)uVar21 >> 0x20);
        sVar4 = (short)((ulonglong)uVar21 >> 0x30);
        sVar5 = (short)uVar14;
        sVar6 = (short)((ulonglong)uVar14 >> 0x10);
        sVar7 = (short)((ulonglong)uVar14 >> 0x20);
        sVar8 = (short)((ulonglong)uVar14 >> 0x30);
        puVar13[3] = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar14 >> 0x30) -
                              (0xff < sVar8),
                              CONCAT16((0 < sVar7) * (sVar7 < 0x100) *
                                       (char)((ulonglong)uVar14 >> 0x20) - (0xff < sVar7),
                                       CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                                (char)((ulonglong)uVar14 >> 0x10) - (0xff < sVar6),
                                                CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                                         (char)uVar14 - (0xff < sVar5),
                                                         CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x30)
                                                                  - (0xff < sVar4),
                                                                  CONCAT12((0 < sVar3) *
                                                                           (sVar3 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x20) -
                                                                           (0xff < sVar3),
                                                                           CONCAT11((0 < sVar2) *
                                                                                    (sVar2 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar21 >> 0x10) - (0xff < sVar2),
                                                  (0 < sVar1) * (sVar1 < 0x100) * (char)uVar21 -
                                                  (0xff < sVar1))))))));
        param_2 = puVar12 + 0x20;
        param_1 = puVar13 + 4;
      } while ((uVar9 & 1) != 0);
      if (uVar9 == 0) break;
      param_1 = (undefined8 *)((int)(puVar13 + 4) + param_4);
    }
    param_2 = puVar12 + -0x5c;
    param_1 = (undefined8 *)((int)puVar13 + (param_3 - param_4) + -0x60);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  return;
}


