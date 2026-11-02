/* Module: mcmpgdec.dll
   Function: FUN_1001670c
   Address: 1001670c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001670c(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined8 uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  short sVar12;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined8 uVar13;
  undefined8 uVar17;
  ulonglong uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  int local_10;
  
  uVar6 = DAT_10033c70;
  iVar1 = param_3 - param_5 >> 1;
  pbVar11 = (byte *)param_4[2];
  pbVar9 = (byte *)param_4[1];
  iVar7 = 0;
  pbVar8 = (byte *)*param_4;
  if (0 < param_6) {
    iVar10 = param_5 >> 1;
    do {
      iVar7 = iVar7 + 1;
      local_10 = 0;
      sVar19 = (short)uVar6;
      sVar20 = (short)((ulonglong)uVar6 >> 0x10);
      sVar21 = (short)((ulonglong)uVar6 >> 0x20);
      sVar22 = (short)((ulonglong)uVar6 >> 0x30);
      if (0 < iVar10 + -7) {
        do {
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar11 * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar9 * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar8 * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[1] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          *param_1 = (int)uVar13;
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar11[1] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[1] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[2] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[3] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          param_1[1] = (int)uVar13;
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar11[2] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[2] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[4] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[5] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          param_1[2] = (int)uVar13;
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar11[3] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[3] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[6] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[7] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          param_1[3] = (int)uVar13;
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar11[4] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[4] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[8] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[9] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          param_1[4] = (int)uVar13;
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar11[5] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[5] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[10] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xb] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          param_1[5] = (int)uVar13;
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar11[6] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[6] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xc] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xd] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          param_1[6] = (int)uVar13;
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar11[7] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[7] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xe] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xf] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          param_1[7] = (int)uVar13;
          pbVar8 = pbVar8 + 0x10;
          pbVar11 = pbVar11 + 8;
          pbVar9 = pbVar9 + 8;
          param_1 = param_1 + 8;
          local_10 = local_10 + 8;
        } while (local_10 < iVar10 + -7);
      }
      if (local_10 < iVar10) {
        local_10 = iVar10 - local_10;
        do {
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar11 * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar9 * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar8 * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[1] * 8);
          uVar13 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                                    sVar12 + (short)uVar13))),6);
          uVar17 = psraw(CONCAT26(sVar16 + sVar22 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + sVar21 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + sVar20 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + sVar19 + (short)uVar17))),6);
          sVar12 = (short)uVar13;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          uVar18 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar17 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar17 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar17
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar16) * (sVar16 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar16),
                                                                CONCAT12((0 < sVar15) *
                                                                         (sVar15 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar15),
                                                                         CONCAT11((0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar14),
                                                                                  (0 < sVar12) *
                                                                                  (sVar12 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar12))))
                                                      ))));
          uVar18 = (DAT_10033c80 & uVar18) >> 6 | (DAT_10033c88 & uVar18) >> 3 |
                   (uVar18 & DAT_10033c78) >> 9;
          uVar13 = packssdw(uVar18,uVar18);
          *param_1 = (int)uVar13;
          pbVar8 = pbVar8 + 2;
          pbVar11 = pbVar11 + 1;
          pbVar9 = pbVar9 + 1;
          param_1 = param_1 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pbVar8 = pbVar8 + (param_3 - param_5);
      pbVar11 = pbVar11 + iVar1;
      pbVar9 = pbVar9 + iVar1;
      param_1 = (undefined4 *)((int)param_1 + param_2 + param_5 * -2);
    } while (iVar7 < param_6);
  }
  return;
}


