/* Module: mcmpgdec.dll
   Function: FUN_1001b8f8
   Address: 1001b8f8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001b8f8(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
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
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  int iVar17;
  short sVar18;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined8 uVar19;
  undefined8 uVar23;
  int local_34;
  byte *local_14;
  byte *local_10;
  
  iVar13 = param_3 >> 1;
  iVar10 = param_5 >> 1;
  iVar1 = iVar13 * 2 - iVar10;
  iVar17 = 2;
  pbVar2 = (byte *)*param_4;
  pbVar3 = (byte *)param_4[2];
  pbVar4 = (byte *)param_4[1];
  puVar14 = param_1;
  pbVar16 = pbVar2;
  local_14 = pbVar4;
  local_10 = pbVar3;
  do {
    iVar11 = 0;
    iVar17 = iVar17 + -1;
    if (0 < param_6 >> 2) {
      do {
        iVar11 = iVar11 + 1;
        local_34 = 0;
        if (0 < iVar10 + -7) {
          puVar15 = (undefined4 *)((int)puVar14 + param_2 * 2);
          pbVar12 = pbVar16 + param_3 * 2;
          do {
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)*local_10 * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)*local_14 * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar16 * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[1] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *puVar14 = uVar9;
            *(short *)(puVar14 + 1) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar12 * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[1] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *puVar15 = uVar9;
            *(short *)(puVar15 + 1) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[1] * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)local_14[1] * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[2] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[3] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar14 + 6) = uVar9;
            *(short *)((int)puVar14 + 10) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[2] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[3] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar15 + 6) = uVar9;
            *(short *)((int)puVar15 + 10) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[2] * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)local_14[2] * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[4] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[5] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            puVar14[3] = uVar9;
            *(short *)(puVar14 + 4) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[4] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[5] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            puVar15[3] = uVar9;
            *(short *)(puVar15 + 4) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[3] * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)local_14[3] * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[6] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[7] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar14 + 0x12) = uVar9;
            *(short *)((int)puVar14 + 0x16) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[6] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[7] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar15 + 0x12) = uVar9;
            *(short *)((int)puVar15 + 0x16) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[4] * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)local_14[4] * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[8] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[9] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            puVar14[6] = uVar9;
            *(short *)(puVar14 + 7) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[8] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[9] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            puVar15[6] = uVar9;
            *(short *)(puVar15 + 7) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[5] * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)local_14[5] * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[10] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xb] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar14 + 0x1e) = uVar9;
            *(short *)((int)puVar14 + 0x22) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[10] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xb] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar15 + 0x1e) = uVar9;
            *(short *)((int)puVar15 + 0x22) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[6] * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)local_14[6] * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xc] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xd] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            puVar14[9] = uVar9;
            *(short *)(puVar14 + 10) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xc] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xd] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            puVar15[9] = uVar9;
            *(short *)(puVar15 + 10) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)local_10[7] * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)local_14[7] * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xe] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[0xf] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar14 + 0x2a) = uVar9;
            *(short *)((int)puVar14 + 0x2e) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xe] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar12[0xf] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar15 + 0x2a) = uVar9;
            *(short *)((int)puVar15 + 0x2e) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            pbVar12 = pbVar12 + 0x10;
            pbVar16 = pbVar16 + 0x10;
            local_10 = local_10 + 8;
            local_14 = local_14 + 8;
            puVar15 = puVar15 + 0xc;
            puVar14 = puVar14 + 0xc;
            local_34 = local_34 + 8;
          } while (local_34 < iVar10 + -7);
        }
        if (local_34 < iVar10) {
          local_34 = iVar10 - local_34;
          do {
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)*local_10 * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)*local_14 * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar16 * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[1] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *puVar14 = uVar9;
            *(short *)(puVar14 + 1) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[param_3 * 2] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar16[param_3 * 2 + 1] * 8);
            uVar23 = psraw(CONCAT26(sVar22 + (short)((ulonglong)uVar23 >> 0x30),
                                    CONCAT24(sVar21 + (short)((ulonglong)uVar23 >> 0x20),
                                             CONCAT22(sVar20 + (short)((ulonglong)uVar23 >> 0x10),
                                                      sVar18 + (short)uVar23))),6);
            uVar19 = psraw((ulonglong)
                           CONCAT24(sVar21 + (short)((ulonglong)uVar19 >> 0x20),
                                    CONCAT22(sVar20 + (short)((ulonglong)uVar19 >> 0x10),
                                             sVar18 + (short)uVar19)) << 0x10,6);
            sVar5 = (short)((ulonglong)uVar19 >> 0x10);
            sVar6 = (short)((ulonglong)uVar19 >> 0x20);
            sVar7 = (short)((ulonglong)uVar19 >> 0x30);
            sVar8 = (short)uVar23;
            uVar9 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)uVar23 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                      (char)((ulonglong)uVar19 >> 0x30) - (0xff < sVar7),
                                      CONCAT11((0 < sVar6) * (sVar6 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x20) - (0xff < sVar6),
                                               (0 < sVar5) * (sVar5 < 0x100) *
                                               (char)((ulonglong)uVar19 >> 0x10) - (0xff < sVar5))))
            ;
            sVar5 = (short)((ulonglong)uVar23 >> 0x10);
            sVar6 = (short)((ulonglong)uVar23 >> 0x20);
            *(undefined4 *)((int)puVar14 + param_2 * 2) = uVar9;
            *(short *)((int)puVar14 + param_2 * 2 + 4) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            pbVar16 = pbVar16 + 2;
            local_10 = local_10 + 1;
            local_14 = local_14 + 1;
            puVar14 = (undefined4 *)((int)puVar14 + 6);
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_10 = local_10 + iVar1;
        local_14 = local_14 + iVar1;
        pbVar16 = pbVar16 + (param_3 * 4 - param_5);
        puVar14 = (undefined4 *)((int)puVar14 + param_2 * 4 + param_5 * -3);
      } while (iVar11 < param_6 >> 2);
    }
    puVar14 = (undefined4 *)(param_2 + (int)param_1);
    pbVar16 = pbVar2 + param_3;
    local_14 = pbVar4 + iVar13;
    local_10 = pbVar3 + iVar13;
  } while (iVar17 != 0);
  return;
}


