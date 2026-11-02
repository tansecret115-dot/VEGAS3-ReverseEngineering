/* Module: mcmpgdec.dll
   Function: FUN_10012ba8
   Address: 10012ba8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10012ba8(uint *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

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
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint *puVar19;
  short sVar20;
  short sVar22;
  short sVar23;
  short sVar24;
  undefined8 uVar21;
  undefined8 uVar25;
  ulonglong uVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  uint *local_48;
  int local_34;
  int local_30;
  byte *local_10;
  
  uVar12 = DAT_10033b90;
  iVar16 = param_3 >> 1;
  iVar13 = param_5 >> 1;
  iVar1 = iVar16 * 2 - iVar13;
  local_34 = 2;
  pbVar2 = (byte *)*param_4;
  pbVar3 = (byte *)param_4[2];
  pbVar4 = (byte *)param_4[1];
  pbVar17 = pbVar4;
  pbVar18 = pbVar2;
  puVar19 = param_1;
  local_10 = pbVar3;
  do {
    iVar14 = 0;
    local_34 = local_34 + -1;
    if (0 < param_6 >> 2) {
      do {
        iVar14 = iVar14 + 1;
        local_30 = 0;
        sVar27 = (short)uVar12;
        sVar28 = (short)((ulonglong)uVar12 >> 0x10);
        sVar29 = (short)((ulonglong)uVar12 >> 0x20);
        sVar30 = (short)((ulonglong)uVar12 >> 0x30);
        if (0 < iVar13 + -7) {
          local_48 = (uint *)((int)puVar19 + param_2 * 2);
          pbVar15 = pbVar18 + param_3 * 2;
          do {
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)*local_10 * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar17 * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar18 * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[1] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            *puVar19 = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar15 * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[1] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            *local_48 = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[1] * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar17[1] * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[2] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[3] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            puVar19[1] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[2] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[3] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            local_48[1] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[2] * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar17[2] * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[4] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[5] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            puVar19[2] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[4] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[5] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            local_48[2] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[3] * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar17[3] * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[6] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[7] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            puVar19[3] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[6] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[7] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            local_48[3] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[4] * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar17[4] * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[8] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[9] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            puVar19[4] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[8] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[9] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            local_48[4] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[5] * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar17[5] * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[10] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[0xb] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            puVar19[5] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[10] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xb] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            local_48[5] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[6] * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar17[6] * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[0xc] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[0xd] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            puVar19[6] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xc] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xd] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            local_48[6] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[7] * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar17[7] * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[0xe] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[0xf] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            puVar19[7] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xe] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xf] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            local_48[7] = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            pbVar15 = pbVar15 + 0x10;
            pbVar18 = pbVar18 + 0x10;
            local_10 = local_10 + 8;
            pbVar17 = pbVar17 + 8;
            local_48 = local_48 + 8;
            puVar19 = puVar19 + 8;
            local_30 = local_30 + 8;
          } while (local_30 < iVar13 + -7);
        }
        if (local_30 < iVar13) {
          local_30 = iVar13 - local_30;
          do {
            uVar21 = *(undefined8 *)(&DAT_10032b70 + (uint)*local_10 * 8);
            uVar25 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar17 * 8);
            sVar20 = (short)uVar21 + (short)uVar25;
            sVar22 = (short)((ulonglong)uVar21 >> 0x10) + (short)((ulonglong)uVar25 >> 0x10);
            sVar23 = (short)((ulonglong)uVar21 >> 0x20) + (short)((ulonglong)uVar25 >> 0x20);
            sVar24 = (short)((ulonglong)uVar21 >> 0x30) + (short)((ulonglong)uVar25 >> 0x30);
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar18 * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[1] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            *puVar19 = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            uVar21 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[param_3 * 2] * 8);
            uVar25 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar18[param_3 * 2 + 1] * 8);
            uVar21 = psraw(CONCAT26(sVar24 + sVar30 + (short)((ulonglong)uVar21 >> 0x30),
                                    CONCAT24(sVar23 + sVar29 + (short)((ulonglong)uVar21 >> 0x20),
                                             CONCAT22(sVar22 + sVar28 +
                                                      (short)((ulonglong)uVar21 >> 0x10),
                                                      sVar20 + sVar27 + (short)uVar21))),6);
            uVar25 = psraw(CONCAT26(sVar24 + (short)((ulonglong)uVar25 >> 0x30),
                                    CONCAT24(sVar23 + (short)((ulonglong)uVar25 >> 0x20),
                                             CONCAT22(sVar22 + (short)((ulonglong)uVar25 >> 0x10),
                                                      sVar20 + (short)uVar25))),6);
            sVar5 = (short)uVar21;
            sVar6 = (short)((ulonglong)uVar21 >> 0x10);
            sVar7 = (short)((ulonglong)uVar21 >> 0x20);
            sVar8 = (short)((ulonglong)uVar21 >> 0x30);
            sVar9 = (short)uVar25;
            sVar10 = (short)((ulonglong)uVar25 >> 0x10);
            sVar11 = (short)((ulonglong)uVar25 >> 0x20);
            uVar26 = (ulonglong)
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)((ulonglong)uVar25 >> 0x20) -
                              (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) *
                                       (char)((ulonglong)uVar25 >> 0x10) - (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)uVar25 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                         (char)((ulonglong)uVar21 >> 0x30) -
                                                         (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)((ulonglong)uVar21 >> 0x20)
                                                                  - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)((ulonglong)uVar21
                                                                                 >> 0x10) -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar5) *
                                                                           (sVar5 < 0x100) *
                                                                           (char)uVar21 -
                                                                           (0xff < sVar5)))))));
            uVar26 = (DAT_10033ba0 & uVar26) >> 5 | (DAT_10033ba8 & uVar26) >> 3 |
                     (uVar26 & DAT_10033b98) >> 8;
            *(uint *)((int)puVar19 + param_2 * 2) = (uint)(uVar26 >> 0x10) | (uint)uVar26;
            pbVar18 = pbVar18 + 2;
            local_10 = local_10 + 1;
            pbVar17 = pbVar17 + 1;
            puVar19 = puVar19 + 1;
            local_30 = local_30 + -1;
          } while (local_30 != 0);
        }
        local_10 = local_10 + iVar1;
        pbVar17 = pbVar17 + iVar1;
        pbVar18 = pbVar18 + (param_3 * 4 - param_5);
        puVar19 = (uint *)((int)puVar19 + param_2 * 4 + param_5 * -2);
      } while (iVar14 < param_6 >> 2);
    }
    pbVar17 = pbVar4 + iVar16;
    pbVar18 = pbVar2 + param_3;
    puVar19 = (uint *)(param_2 + (int)param_1);
    local_10 = pbVar3 + iVar16;
  } while (local_34 != 0);
  return;
}


