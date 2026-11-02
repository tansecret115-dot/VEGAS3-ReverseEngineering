/* Module: erv23260.dll
   Function: FUN_63820408
   Address: 63820408
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63820408(undefined8 *param_1,undefined8 *param_2,int param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  short sVar17;
  short sVar18;
  short sVar20;
  uint6 uVar19;
  short sVar21;
  
  uVar11 = psllw((ulonglong)param_4,4);
  uVar15 = *param_1;
  uVar12 = uVar11 << 0x10 | uVar11;
  uVar19 = (uint6)(uVar12 >> 0x10) | (uint6)((uVar12 << 0x20) >> 0x10);
  iVar9 = 3;
  uVar14 = param_1[1];
  sVar17 = ((ushort)uVar11 >> 1) + (short)DAT_63834088;
  sVar18 = ((ushort)(uVar12 >> 0x10) >> 1) + (short)((ulonglong)DAT_63834088 >> 0x10);
  sVar20 = ((ushort)(uVar19 >> 0x10) >> 1) + (short)((ulonglong)DAT_63834088 >> 0x20);
  sVar21 = (ushort)(uVar19 >> 0x21) + (short)((ulonglong)DAT_63834088 >> 0x30);
  *param_1 = 0;
  param_1[1] = 0;
  uVar14 = CONCAT26((short)((ulonglong)uVar14 >> 0x30) + sVar21,
                    CONCAT24((short)((ulonglong)uVar14 >> 0x20) + sVar20,
                             CONCAT22((short)((ulonglong)uVar14 >> 0x10) + sVar18,
                                      (short)uVar14 + sVar17)));
  uVar15 = psraw(CONCAT26((short)((ulonglong)uVar15 >> 0x30) + sVar21,
                          CONCAT24((short)((ulonglong)uVar15 >> 0x20) + sVar20,
                                   CONCAT22((short)((ulonglong)uVar15 >> 0x10) + sVar18,
                                            (short)uVar15 + sVar17))),6);
  do {
    puVar10 = param_1;
    uVar13 = puVar10[2];
    uVar16 = psraw(uVar14,6);
    uVar14 = puVar10[3];
    sVar1 = (short)uVar15;
    sVar2 = (short)((ulonglong)uVar15 >> 0x10);
    sVar3 = (short)((ulonglong)uVar15 >> 0x20);
    sVar4 = (short)((ulonglong)uVar15 >> 0x30);
    sVar5 = (short)uVar16;
    sVar6 = (short)((ulonglong)uVar16 >> 0x10);
    sVar7 = (short)((ulonglong)uVar16 >> 0x20);
    sVar8 = (short)((ulonglong)uVar16 >> 0x30);
    puVar10[2] = 0;
    puVar10[3] = 0;
    *param_2 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                        (0xff < sVar8),
                        CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar16 >> 0x20) -
                                 (0xff < sVar7),
                                 CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                          (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar6),
                                          CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar16 -
                                                   (0xff < sVar5),
                                                   CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                            (char)((ulonglong)uVar15 >> 0x30) -
                                                            (0xff < sVar4),
                                                            CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                                                     (char)((ulonglong)uVar15 >>
                                                                           0x20) - (0xff < sVar3),
                                                                     CONCAT11((0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar15 >> 0x10)
                                                                              - (0xff < sVar2),
                                                                              (0 < sVar1) *
                                                                              (sVar1 < 0x100) *
                                                                              (char)uVar15 -
                                                                              (0xff < sVar1))))))));
    uVar13 = psraw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) + sVar21,
                            CONCAT24((short)((ulonglong)uVar13 >> 0x20) + sVar20,
                                     CONCAT22((short)((ulonglong)uVar13 >> 0x10) + sVar18,
                                              (short)uVar13 + sVar17))),6);
    uVar15 = puVar10[4];
    uVar16 = psraw(CONCAT26((short)((ulonglong)uVar14 >> 0x30) + sVar21,
                            CONCAT24((short)((ulonglong)uVar14 >> 0x20) + sVar20,
                                     CONCAT22((short)((ulonglong)uVar14 >> 0x10) + sVar18,
                                              (short)uVar14 + sVar17))),6);
    uVar14 = puVar10[5];
    sVar1 = (short)uVar13;
    sVar2 = (short)((ulonglong)uVar13 >> 0x10);
    sVar3 = (short)((ulonglong)uVar13 >> 0x20);
    sVar4 = (short)((ulonglong)uVar13 >> 0x30);
    sVar5 = (short)uVar16;
    sVar6 = (short)((ulonglong)uVar16 >> 0x10);
    sVar7 = (short)((ulonglong)uVar16 >> 0x20);
    sVar8 = (short)((ulonglong)uVar16 >> 0x30);
    puVar10[4] = 0;
    puVar10[5] = 0;
    uVar14 = CONCAT26((short)((ulonglong)uVar14 >> 0x30) + sVar21,
                      CONCAT24((short)((ulonglong)uVar14 >> 0x20) + sVar20,
                               CONCAT22((short)((ulonglong)uVar14 >> 0x10) + sVar18,
                                        (short)uVar14 + sVar17)));
    *(ulonglong *)(param_3 + (int)param_2) =
         CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) - (0xff < sVar8)
                  ,CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar16 >> 0x20) -
                            (0xff < sVar7),
                            CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                     (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar6),
                                     CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar16 -
                                              (0xff < sVar5),
                                              CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                       (char)((ulonglong)uVar13 >> 0x30) -
                                                       (0xff < sVar4),
                                                       CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x20) -
                                                                (0xff < sVar3),
                                                                CONCAT11((0 < sVar2) *
                                                                         (sVar2 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x10) -
                                                                         (0xff < sVar2),
                                                                         (0 < sVar1) *
                                                                         (sVar1 < 0x100) *
                                                                         (char)uVar13 -
                                                                         (0xff < sVar1))))))));
    uVar15 = psraw(CONCAT26((short)((ulonglong)uVar15 >> 0x30) + sVar21,
                            CONCAT24((short)((ulonglong)uVar15 >> 0x20) + sVar20,
                                     CONCAT22((short)((ulonglong)uVar15 >> 0x10) + sVar18,
                                              (short)uVar15 + sVar17))),6);
    param_2 = (undefined8 *)((int)param_2 + param_3 * 2);
    iVar9 = iVar9 + -1;
    param_1 = puVar10 + 4;
  } while (iVar9 != 0);
  uVar13 = puVar10[6];
  uVar16 = psraw(uVar14,6);
  uVar14 = puVar10[7];
  sVar1 = (short)uVar15;
  sVar2 = (short)((ulonglong)uVar15 >> 0x10);
  sVar3 = (short)((ulonglong)uVar15 >> 0x20);
  sVar4 = (short)((ulonglong)uVar15 >> 0x30);
  sVar5 = (short)uVar16;
  sVar6 = (short)((ulonglong)uVar16 >> 0x10);
  sVar7 = (short)((ulonglong)uVar16 >> 0x20);
  sVar8 = (short)((ulonglong)uVar16 >> 0x30);
  *param_2 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                      (0xff < sVar8),
                      CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar16 >> 0x20) -
                               (0xff < sVar7),
                               CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                        (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar6),
                                        CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar16 -
                                                 (0xff < sVar5),
                                                 CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                          (char)((ulonglong)uVar15 >> 0x30) -
                                                          (0xff < sVar4),
                                                          CONCAT12((0 < sVar3) * (sVar3 < 0x100) *
                                                                   (char)((ulonglong)uVar15 >> 0x20)
                                                                   - (0xff < sVar3),
                                                                   CONCAT11((0 < sVar2) *
                                                                            (sVar2 < 0x100) *
                                                                            (char)((ulonglong)uVar15
                                                                                  >> 0x10) -
                                                                            (0xff < sVar2),
                                                                            (0 < sVar1) *
                                                                            (sVar1 < 0x100) *
                                                                            (char)uVar15 -
                                                                            (0xff < sVar1))))))));
  uVar15 = psraw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) + sVar21,
                          CONCAT24((short)((ulonglong)uVar13 >> 0x20) + sVar20,
                                   CONCAT22((short)((ulonglong)uVar13 >> 0x10) + sVar18,
                                            (short)uVar13 + sVar17))),6);
  puVar10[6] = 0;
  uVar14 = psraw(CONCAT26((short)((ulonglong)uVar14 >> 0x30) + sVar21,
                          CONCAT24((short)((ulonglong)uVar14 >> 0x20) + sVar20,
                                   CONCAT22((short)((ulonglong)uVar14 >> 0x10) + sVar18,
                                            (short)uVar14 + sVar17))),6);
  puVar10[7] = 0;
  sVar17 = (short)uVar15;
  sVar18 = (short)((ulonglong)uVar15 >> 0x10);
  sVar20 = (short)((ulonglong)uVar15 >> 0x20);
  sVar21 = (short)((ulonglong)uVar15 >> 0x30);
  sVar1 = (short)uVar14;
  sVar2 = (short)((ulonglong)uVar14 >> 0x10);
  sVar3 = (short)((ulonglong)uVar14 >> 0x20);
  sVar4 = (short)((ulonglong)uVar14 >> 0x30);
  *(ulonglong *)(param_3 + (int)param_2) =
       CONCAT17((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar14 >> 0x30) - (0xff < sVar4),
                CONCAT16((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar14 >> 0x20) -
                         (0xff < sVar3),
                         CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)((ulonglong)uVar14 >> 0x10)
                                  - (0xff < sVar2),
                                  CONCAT14((0 < sVar1) * (sVar1 < 0x100) * (char)uVar14 -
                                           (0xff < sVar1),
                                           CONCAT13((0 < sVar21) * (sVar21 < 0x100) *
                                                    (char)((ulonglong)uVar15 >> 0x30) -
                                                    (0xff < sVar21),
                                                    CONCAT12((0 < sVar20) * (sVar20 < 0x100) *
                                                             (char)((ulonglong)uVar15 >> 0x20) -
                                                             (0xff < sVar20),
                                                             CONCAT11((0 < sVar18) *
                                                                      (sVar18 < 0x100) *
                                                                      (char)((ulonglong)uVar15 >>
                                                                            0x10) - (0xff < sVar18),
                                                                      (0 < sVar17) *
                                                                      (sVar17 < 0x100) *
                                                                      (char)uVar15 - (0xff < sVar17)
                                                                     )))))));
  return;
}


