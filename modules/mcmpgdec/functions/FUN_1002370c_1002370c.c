/* Module: mcmpgdec.dll
   Function: FUN_1002370c
   Address: 1002370c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1002370c(uint *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 uVar11;
  short sVar12;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined8 uVar13;
  ulonglong uVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  int local_10;
  
  uVar5 = DAT_10033df0;
  iVar1 = param_3 - param_5 >> 1;
  pbVar10 = (byte *)param_4[2];
  pbVar8 = (byte *)param_4[1];
  iVar6 = 0;
  pbVar7 = (byte *)*param_4;
  if (0 < param_6) {
    iVar9 = param_5 >> 1;
    do {
      iVar6 = iVar6 + 1;
      local_10 = 0;
      sVar18 = (short)uVar5;
      sVar19 = (short)((ulonglong)uVar5 >> 0x10);
      sVar20 = (short)((ulonglong)uVar5 >> 0x20);
      sVar21 = (short)((ulonglong)uVar5 >> 0x30);
      if (0 < iVar9 + -7) {
        do {
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar10 * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar8 * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar7 * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[1] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          *param_1 = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[1] * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[1] * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[2] * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[3] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          param_1[1] = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[2] * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[2] * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[4] * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[5] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          param_1[2] = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[3] * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[3] * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[6] * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[7] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          param_1[3] = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[4] * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[4] * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[8] * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[9] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          param_1[4] = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[5] * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[5] * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[10] * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xb] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          param_1[5] = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[6] * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[6] * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xc] * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xd] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          param_1[6] = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[7] * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar8[7] * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xe] * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xf] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          param_1[7] = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          pbVar7 = pbVar7 + 0x10;
          pbVar10 = pbVar10 + 8;
          pbVar8 = pbVar8 + 8;
          param_1 = param_1 + 8;
          local_10 = local_10 + 8;
        } while (local_10 < iVar9 + -7);
      }
      if (local_10 < iVar9) {
        local_10 = iVar9 - local_10;
        do {
          uVar11 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar10 * 8);
          uVar13 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar8 * 8);
          sVar12 = (short)uVar11 + (short)uVar13;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30);
          uVar11 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar7 * 8);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[1] * 8);
          uVar11 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar11 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar11 >> 0x10),
                                                    sVar12 + (short)uVar11))),6);
          uVar13 = psraw(CONCAT26(sVar16 + sVar21 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + sVar20 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + sVar19 +
                                                    (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + sVar18 + (short)uVar13))),6);
          sVar12 = (short)uVar11;
          sVar14 = (short)((ulonglong)uVar11 >> 0x10);
          sVar15 = (short)((ulonglong)uVar11 >> 0x20);
          sVar16 = (short)((ulonglong)uVar11 >> 0x30);
          sVar2 = (short)uVar13;
          sVar3 = (short)((ulonglong)uVar13 >> 0x10);
          sVar4 = (short)((ulonglong)uVar13 >> 0x20);
          uVar17 = (ulonglong)
                   CONCAT16((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar13 >> 0x20) -
                            (0xff < sVar4),
                            CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                     (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar3),
                                     CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar13 -
                                              (0xff < sVar2),
                                              CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                       (char)((ulonglong)uVar11 >> 0x30) -
                                                       (0xff < sVar16),
                                                       CONCAT12((0 < sVar15) * (sVar15 < 0x100) *
                                                                (char)((ulonglong)uVar11 >> 0x20) -
                                                                (0xff < sVar15),
                                                                CONCAT11((0 < sVar14) *
                                                                         (sVar14 < 0x100) *
                                                                         (char)((ulonglong)uVar11 >>
                                                                               0x10) -
                                                                         (0xff < sVar14),
                                                                         (0 < sVar12) *
                                                                         (sVar12 < 0x100) *
                                                                         (char)uVar11 -
                                                                         (0xff < sVar12)))))));
          uVar17 = (DAT_10033e00 & uVar17) >> 5 | (DAT_10033e08 & uVar17) >> 3 |
                   (uVar17 & DAT_10033df8) >> 8;
          *param_1 = (uint)(uVar17 >> 0x10) | (uint)uVar17;
          pbVar7 = pbVar7 + 2;
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          param_1 = param_1 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pbVar7 = pbVar7 + (param_3 - param_5);
      pbVar10 = pbVar10 + iVar1;
      pbVar8 = pbVar8 + iVar1;
      param_1 = (uint *)((int)param_1 + param_2 + param_5 * -2);
    } while (iVar6 < param_6);
  }
  return;
}


