/* Module: mcmpgdec.dll
   Function: FUN_10015500
   Address: 10015500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10015500(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  short sVar16;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined8 uVar17;
  undefined8 uVar21;
  ulonglong uVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  int local_10;
  
  uVar10 = DAT_10033c30;
  iVar1 = param_3 - param_5 >> 1;
  pbVar14 = (byte *)param_4[2];
  pbVar15 = (byte *)param_4[1];
  iVar11 = 0;
  pbVar12 = (byte *)*param_4;
  if (0 < param_6 >> 1) {
    iVar13 = param_5 >> 1;
    do {
      iVar11 = iVar11 + 1;
      local_10 = 0;
      sVar23 = (short)uVar10;
      sVar24 = (short)((ulonglong)uVar10 >> 0x10);
      sVar25 = (short)((ulonglong)uVar10 >> 0x20);
      sVar26 = (short)((ulonglong)uVar10 >> 0x30);
      if (0 < iVar13 + -7) {
        do {
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar14 * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar15 * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar12 * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[1] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *param_1 = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 1] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + (int)param_1) = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar14[1] * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar15[1] * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[2] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[3] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          param_1[1] = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 2] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 3] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + 4 + (int)param_1) = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar14[2] * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar15[2] * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[4] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[5] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          param_1[2] = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 4] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 5] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + 8 + (int)param_1) = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar14[3] * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar15[3] * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[6] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[7] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          param_1[3] = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 6] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 7] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + 0xc + (int)param_1) = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar14[4] * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar15[4] * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[8] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[9] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          param_1[4] = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 8] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 9] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + 0x10 + (int)param_1) = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar14[5] * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar15[5] * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[10] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xb] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          param_1[5] = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 10] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 0xb] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + 0x14 + (int)param_1) = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar14[6] * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar15[6] * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xc] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xd] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          param_1[6] = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 0xc] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 0xd] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + 0x18 + (int)param_1) = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar14[7] * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar15[7] * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xe] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xf] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          param_1[7] = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 0xe] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 0xf] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + 0x1c + (int)param_1) = (int)uVar17;
          pbVar12 = pbVar12 + 0x10;
          pbVar14 = pbVar14 + 8;
          pbVar15 = pbVar15 + 8;
          param_1 = param_1 + 8;
          local_10 = local_10 + 8;
        } while (local_10 < iVar13 + -7);
      }
      if (local_10 < iVar13) {
        local_10 = iVar13 - local_10;
        do {
          uVar17 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar14 * 8);
          uVar21 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar15 * 8);
          sVar16 = (short)uVar17 + (short)uVar21;
          sVar18 = (short)((ulonglong)uVar17 >> 0x10) + (short)((ulonglong)uVar21 >> 0x10);
          sVar19 = (short)((ulonglong)uVar17 >> 0x20) + (short)((ulonglong)uVar21 >> 0x20);
          sVar20 = (short)((ulonglong)uVar17 >> 0x30) + (short)((ulonglong)uVar21 >> 0x30);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar12 * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[1] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *param_1 = (int)uVar17;
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3] * 8);
          uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[param_3 + 1] * 8);
          uVar17 = psraw(CONCAT26(sVar20 + sVar26 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar19 + sVar25 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar18 + sVar24 +
                                                    (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar16 + sVar23 + (short)uVar17))),6);
          uVar21 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24(sVar19 + (short)((ulonglong)uVar21 >> 0x20),
                                           CONCAT22(sVar18 + (short)((ulonglong)uVar21 >> 0x10),
                                                    sVar16 + (short)uVar21))),6);
          sVar2 = (short)uVar17;
          sVar3 = (short)((ulonglong)uVar17 >> 0x10);
          sVar4 = (short)((ulonglong)uVar17 >> 0x20);
          sVar5 = (short)((ulonglong)uVar17 >> 0x30);
          sVar6 = (short)uVar21;
          sVar7 = (short)((ulonglong)uVar21 >> 0x10);
          sVar8 = (short)((ulonglong)uVar21 >> 0x20);
          sVar9 = (short)((ulonglong)uVar21 >> 0x30);
          uVar22 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar21 >> 0x30) -
                            (0xff < sVar9),
                            CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                     (char)((ulonglong)uVar21 >> 0x20) - (0xff < sVar8),
                                     CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                              (char)((ulonglong)uVar21 >> 0x10) - (0xff < sVar7),
                                              CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar21
                                                       - (0xff < sVar6),
                                                       CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                (char)((ulonglong)uVar17 >> 0x30) -
                                                                (0xff < sVar5),
                                                                CONCAT12((0 < sVar4) *
                                                                         (sVar4 < 0x100) *
                                                                         (char)((ulonglong)uVar17 >>
                                                                               0x20) -
                                                                         (0xff < sVar4),
                                                                         CONCAT11((0 < sVar3) *
                                                                                  (sVar3 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar17 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar3),
                                                                                  (0 < sVar2) *
                                                                                  (sVar2 < 0x100) *
                                                                                  (char)uVar17 -
                                                                                  (0xff < sVar2)))))
                                             )));
          uVar22 = (DAT_10033c40 & uVar22) >> 6 | (DAT_10033c48 & uVar22) >> 3 |
                   (uVar22 & DAT_10033c38) >> 9;
          uVar17 = packssdw(uVar22,uVar22);
          *(int *)(param_2 + (int)param_1) = (int)uVar17;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
          param_1 = param_1 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pbVar12 = pbVar12 + (param_3 * 2 - param_5);
      pbVar14 = pbVar14 + iVar1;
      pbVar15 = pbVar15 + iVar1;
      param_1 = (undefined4 *)((int)param_1 + (param_2 - param_5) * 2);
    } while (iVar11 < param_6 >> 1);
  }
  return;
}


