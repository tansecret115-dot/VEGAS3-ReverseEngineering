/* Module: mcmpgdec.dll
   Function: FUN_10015dcc
   Address: 10015dcc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10015dcc(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  short sVar21;
  short sVar23;
  short sVar24;
  short sVar25;
  undefined8 uVar22;
  undefined8 uVar26;
  ulonglong uVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  undefined4 *local_48;
  int local_34;
  int local_30;
  byte *local_10;
  
  uVar13 = DAT_10033c50;
  iVar17 = param_3 >> 1;
  iVar14 = param_5 >> 1;
  iVar1 = iVar17 * 2 - iVar14;
  local_34 = 2;
  pbVar2 = (byte *)*param_4;
  pbVar3 = (byte *)param_4[2];
  pbVar4 = (byte *)param_4[1];
  pbVar18 = pbVar4;
  pbVar19 = pbVar2;
  puVar20 = param_1;
  local_10 = pbVar3;
  do {
    iVar15 = 0;
    local_34 = local_34 + -1;
    if (0 < param_6 >> 2) {
      do {
        iVar15 = iVar15 + 1;
        local_30 = 0;
        sVar28 = (short)uVar13;
        sVar29 = (short)((ulonglong)uVar13 >> 0x10);
        sVar30 = (short)((ulonglong)uVar13 >> 0x20);
        sVar31 = (short)((ulonglong)uVar13 >> 0x30);
        if (0 < iVar14 + -7) {
          local_48 = (undefined4 *)((int)puVar20 + param_2 * 2);
          pbVar16 = pbVar19 + param_3 * 2;
          do {
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)*local_10 * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar18 * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar19 * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[1] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            *puVar20 = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar16 * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[1] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            *local_48 = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[1] * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar18[1] * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[2] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[3] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            puVar20[1] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[2] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[3] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            local_48[1] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[2] * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar18[2] * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[4] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[5] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            puVar20[2] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[4] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[5] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            local_48[2] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[3] * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar18[3] * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[6] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[7] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            puVar20[3] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[6] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[7] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            local_48[3] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[4] * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar18[4] * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[8] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[9] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            puVar20[4] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[8] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[9] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            local_48[4] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[5] * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar18[5] * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[10] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[0xb] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            puVar20[5] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[10] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xb] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            local_48[5] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[6] * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar18[6] * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[0xc] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[0xd] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            puVar20[6] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xc] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xd] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            local_48[6] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[7] * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar18[7] * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[0xe] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[0xf] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            puVar20[7] = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xe] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xf] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            local_48[7] = (int)uVar22;
            pbVar16 = pbVar16 + 0x10;
            pbVar19 = pbVar19 + 0x10;
            local_10 = local_10 + 8;
            pbVar18 = pbVar18 + 8;
            local_48 = local_48 + 8;
            puVar20 = puVar20 + 8;
            local_30 = local_30 + 8;
          } while (local_30 < iVar14 + -7);
        }
        if (local_30 < iVar14) {
          local_30 = iVar14 - local_30;
          do {
            uVar22 = *(undefined8 *)(&DAT_10032b70 + (uint)*local_10 * 8);
            uVar26 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar18 * 8);
            sVar21 = (short)uVar22 + (short)uVar26;
            sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)((ulonglong)uVar26 >> 0x10);
            sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)((ulonglong)uVar26 >> 0x20);
            sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar26 >> 0x30);
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar19 * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[1] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            *puVar20 = (int)uVar22;
            uVar22 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[param_3 * 2] * 8);
            uVar26 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar19[param_3 * 2 + 1] * 8);
            uVar22 = psraw(CONCAT26(sVar25 + sVar31 + (short)((ulonglong)uVar22 >> 0x30),
                                    CONCAT24(sVar24 + sVar30 + (short)((ulonglong)uVar22 >> 0x20),
                                             CONCAT22(sVar23 + sVar29 +
                                                      (short)((ulonglong)uVar22 >> 0x10),
                                                      sVar21 + sVar28 + (short)uVar22))),6);
            uVar26 = psraw(CONCAT26(sVar25 + (short)((ulonglong)uVar26 >> 0x30),
                                    CONCAT24(sVar24 + (short)((ulonglong)uVar26 >> 0x20),
                                             CONCAT22(sVar23 + (short)((ulonglong)uVar26 >> 0x10),
                                                      sVar21 + (short)uVar26))),6);
            sVar5 = (short)uVar22;
            sVar6 = (short)((ulonglong)uVar22 >> 0x10);
            sVar7 = (short)((ulonglong)uVar22 >> 0x20);
            sVar8 = (short)((ulonglong)uVar22 >> 0x30);
            sVar9 = (short)uVar26;
            sVar10 = (short)((ulonglong)uVar26 >> 0x10);
            sVar11 = (short)((ulonglong)uVar26 >> 0x20);
            sVar12 = (short)((ulonglong)uVar26 >> 0x30);
            uVar27 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)((ulonglong)uVar26 >> 0x30) -
                              (0xff < sVar12),
                              CONCAT16((0 < sVar11) * (sVar11 < 0x100) *
                                       (char)((ulonglong)uVar26 >> 0x20) - (0xff < sVar11),
                                       CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                                (char)((ulonglong)uVar26 >> 0x10) - (0xff < sVar10),
                                                CONCAT14((0 < sVar9) * (sVar9 < 0x100) *
                                                         (char)uVar26 - (0xff < sVar9),
                                                         CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                                  (char)((ulonglong)uVar22 >> 0x30)
                                                                  - (0xff < sVar8),
                                                                  CONCAT12((0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)((ulonglong)uVar22
                                                                                 >> 0x20) -
                                                                           (0xff < sVar7),
                                                                           CONCAT11((0 < sVar6) *
                                                                                    (sVar6 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar22 >> 0x10) - (0xff < sVar6),
                                                  (0 < sVar5) * (sVar5 < 0x100) * (char)uVar22 -
                                                  (0xff < sVar5))))))));
            uVar27 = (DAT_10033c60 & uVar27) >> 6 | (DAT_10033c68 & uVar27) >> 3 |
                     (uVar27 & DAT_10033c58) >> 9;
            uVar22 = packssdw(uVar27,uVar27);
            *(int *)((int)puVar20 + param_2 * 2) = (int)uVar22;
            pbVar19 = pbVar19 + 2;
            local_10 = local_10 + 1;
            pbVar18 = pbVar18 + 1;
            puVar20 = puVar20 + 1;
            local_30 = local_30 + -1;
          } while (local_30 != 0);
        }
        local_10 = local_10 + iVar1;
        pbVar18 = pbVar18 + iVar1;
        pbVar19 = pbVar19 + (param_3 * 4 - param_5);
        puVar20 = (undefined4 *)((int)puVar20 + param_2 * 4 + param_5 * -2);
      } while (iVar15 < param_6 >> 2);
    }
    pbVar18 = pbVar4 + iVar17;
    pbVar19 = pbVar2 + param_3;
    puVar20 = (undefined4 *)(param_2 + (int)param_1);
    local_10 = pbVar3 + iVar17;
  } while (local_34 != 0);
  return;
}


