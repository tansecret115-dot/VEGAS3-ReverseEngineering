/* Module: aviplug.dll
   Function: FUN_5f969d60
   Address: 5f969d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f969d60(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined8 in_MM2;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  short sVar19;
  short sVar23;
  short sVar24;
  undefined8 in_MM7;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  short sVar25;
  
  uVar4 = 8;
  puVar3 = param_2 + 0x80;
  do {
    do {
      puVar6 = param_2;
      puVar5 = puVar3;
      uVar1 = *(undefined4 *)puVar5;
      uVar2 = *(uint *)(puVar5 + 0x20);
      uVar8 = CONCAT44((int)(CONCAT26((short)(uVar2 >> 0x10),
                                      CONCAT24((short)((uint)uVar1 >> 0x10),uVar1)) >> 0x20),
                       CONCAT22((short)uVar2,(short)uVar1));
      uVar20 = pshufw(in_MM7,uVar8,0x85);
      uVar7 = *puVar6;
      uVar21 = pmulhw(uVar20,DAT_5f9da6f0);
      uVar20 = pshufw((ulonglong)uVar2,uVar8,0xad);
      uVar17 = pmulhw(uVar8,DAT_5f9da6f8);
      uVar18 = pmulhw(uVar20,DAT_5f9da6f0);
      uVar8 = puVar6[0x20];
      sVar9 = (short)((ulonglong)DAT_5f9da700 >> 0x10);
      sVar10 = (short)((ulonglong)DAT_5f9da700 >> 0x20);
      sVar11 = (short)((ulonglong)DAT_5f9da700 >> 0x30);
      uVar7 = psraw(CONCAT26((short)((ulonglong)uVar7 >> 0x30) + sVar11,
                             CONCAT24((short)((ulonglong)uVar7 >> 0x20) + sVar10,
                                      CONCAT22((short)((ulonglong)uVar7 >> 0x10) + sVar9,
                                               (short)uVar7 + (short)DAT_5f9da700))),4);
      uVar8 = psraw(CONCAT26((short)((ulonglong)uVar8 >> 0x30) + sVar11,
                             CONCAT24((short)((ulonglong)uVar8 >> 0x20) + sVar10,
                                      CONCAT22((short)((ulonglong)uVar8 >> 0x10) + sVar9,
                                               (short)uVar8 + (short)DAT_5f9da700))),4);
      sVar13 = (short)((ulonglong)uVar17 >> 0x10);
      sVar14 = (short)((ulonglong)uVar17 >> 0x20);
      sVar15 = (short)((ulonglong)uVar17 >> 0x30);
      uVar21 = CONCAT26((short)((ulonglong)uVar21 >> 0x30) + sVar15,
                        CONCAT24((short)((ulonglong)uVar21 >> 0x20) + sVar14,
                                 CONCAT22((short)((ulonglong)uVar21 >> 0x10) + sVar13,
                                          (short)uVar21 + (short)uVar17)));
      uVar20 = pshufw(in_MM2,uVar7,0x40);
      uVar22 = pshufw(uVar21,uVar21,0x61);
      uVar21 = pshufw(DAT_5f9da6f0,uVar7,0xa5);
      sVar9 = (short)uVar20 + (short)uVar22;
      sVar10 = (short)((ulonglong)uVar20 >> 0x10) + (short)((ulonglong)uVar22 >> 0x10);
      sVar11 = (short)((ulonglong)uVar20 >> 0x20) + (short)((ulonglong)uVar22 >> 0x20);
      sVar12 = (short)((ulonglong)uVar20 >> 0x30) + (short)((ulonglong)uVar22 >> 0x30);
      uVar22 = pshufw(uVar22,uVar22,0x49);
      uVar17 = CONCAT26((short)((ulonglong)uVar18 >> 0x30) + sVar15,
                        CONCAT24((short)((ulonglong)uVar18 >> 0x20) + sVar14,
                                 CONCAT22((short)((ulonglong)uVar18 >> 0x10) + sVar13,
                                          (short)uVar18 + (short)uVar17)));
      sVar13 = (short)uVar21 + (short)uVar22;
      sVar14 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar22 >> 0x10);
      sVar15 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar22 >> 0x20);
      sVar16 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar22 >> 0x30);
      uVar7 = pshufw(uVar7,uVar7,0xfe);
      uVar20 = CONCAT17((0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 - (0xff < sVar16),
                        CONCAT16((0 < sVar15) * (sVar15 < 0x100) * (char)sVar15 - (0xff < sVar15),
                                 CONCAT15((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 -
                                          (0xff < sVar14),
                                          CONCAT14((0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 -
                                                   (0xff < sVar13),
                                                   CONCAT13((0 < sVar12) * (sVar12 < 0x100) *
                                                            (char)sVar12 - (0xff < sVar12),
                                                            CONCAT12((0 < sVar11) * (sVar11 < 0x100)
                                                                     * (char)sVar11 -
                                                                     (0xff < sVar11),
                                                                     CONCAT11((0 < sVar10) *
                                                                              (sVar10 < 0x100) *
                                                                              (char)sVar10 -
                                                                              (0xff < sVar10),
                                                                              (0 < sVar9) *
                                                                              (sVar9 < 0x100) *
                                                                              (char)sVar9 -
                                                                              (0xff < sVar9))))))));
      uVar18 = pshufw(uVar22,uVar22,0x49);
      *param_1 = uVar20;
      uVar20 = pshufw(uVar20,uVar8,0x40);
      uVar21 = pshufw(uVar17,uVar17,0x6d);
      sVar19 = (short)uVar18 + (short)uVar7;
      sVar23 = (short)((ulonglong)uVar18 >> 0x10) + (short)((ulonglong)uVar7 >> 0x10);
      sVar24 = (short)((ulonglong)uVar18 >> 0x20) + (short)((ulonglong)uVar7 >> 0x20);
      sVar25 = (short)((ulonglong)uVar18 >> 0x30) + (short)((ulonglong)uVar7 >> 0x30);
      sVar9 = (short)uVar20 + (short)uVar21;
      sVar10 = (short)((ulonglong)uVar20 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
      sVar11 = (short)((ulonglong)uVar20 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
      sVar12 = (short)((ulonglong)uVar20 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
      in_MM2 = CONCAT26(sVar12,CONCAT24(sVar11,CONCAT22(sVar10,sVar9)));
      uVar20 = pshufw(CONCAT26(sVar16,CONCAT24(sVar15,CONCAT22(sVar14,sVar13))),uVar8,0xa5);
      uVar17 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 - (0xff < sVar12),
                        CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 - (0xff < sVar11),
                                 CONCAT15((0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 -
                                          (0xff < sVar10),
                                          CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 -
                                                   (0xff < sVar9),
                                                   CONCAT13((0 < sVar25) * (sVar25 < 0x100) *
                                                            (char)sVar25 - (0xff < sVar25),
                                                            CONCAT12((0 < sVar24) * (sVar24 < 0x100)
                                                                     * (char)sVar24 -
                                                                     (0xff < sVar24),
                                                                     CONCAT11((0 < sVar23) *
                                                                              (sVar23 < 0x100) *
                                                                              (char)sVar23 -
                                                                              (0xff < sVar23),
                                                                              (0 < sVar19) *
                                                                              (sVar19 < 0x100) *
                                                                              (char)sVar19 -
                                                                              (0xff < sVar19))))))))
      ;
      uVar21 = pshufw(uVar21,uVar21,0x49);
      param_1[1] = uVar17;
      uVar7 = pshufw(uVar8,uVar8,0xfe);
      in_MM7 = pshufw(uVar17,uVar21,0x49);
      sVar13 = (short)uVar20 + (short)uVar21;
      sVar14 = (short)((ulonglong)uVar20 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
      sVar15 = (short)((ulonglong)uVar20 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
      sVar16 = (short)((ulonglong)uVar20 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
      sVar9 = (short)uVar7 + (short)in_MM7;
      sVar10 = (short)((ulonglong)uVar7 >> 0x10) + (short)((ulonglong)in_MM7 >> 0x10);
      sVar11 = (short)((ulonglong)uVar7 >> 0x20) + (short)((ulonglong)in_MM7 >> 0x20);
      sVar12 = (short)((ulonglong)uVar7 >> 0x30) + (short)((ulonglong)in_MM7 >> 0x30);
      uVar4 = uVar4 - 1;
      param_1[2] = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 - (0xff < sVar12),
                            CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 -
                                     (0xff < sVar11),
                                     CONCAT15((0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 -
                                              (0xff < sVar10),
                                              CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 -
                                                       (0xff < sVar9),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)sVar16 - (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)sVar15 -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)sVar14 -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar13) *
                                                                                  (sVar13 < 0x100) *
                                                                                  (char)sVar13 -
                                                                                  (0xff < sVar13))))
                                                      ))));
      param_1 = (undefined8 *)((int)param_1 + param_4 + 0x18);
      puVar3 = (undefined8 *)((int)puVar5 + 4);
      param_2 = puVar6 + 0x40;
    } while ((uVar4 & 1) != 0);
    param_1 = (undefined8 *)((int)param_1 + param_3 + param_4 * -2 + -0x30);
    puVar3 = (undefined8 *)((int)puVar5 + 0x1c);
    param_2 = puVar6 + -0x3c;
  } while (uVar4 != 0);
  return;
}


