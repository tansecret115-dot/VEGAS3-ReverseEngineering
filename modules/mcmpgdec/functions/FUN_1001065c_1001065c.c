/* Module: mcmpgdec.dll
   Function: FUN_1001065c
   Address: 1001065c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001065c(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
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
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  byte *pbVar17;
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
  iVar14 = 2;
  pbVar2 = (byte *)*param_4;
  pbVar3 = (byte *)param_4[2];
  pbVar4 = (byte *)param_4[1];
  puVar12 = param_1;
  pbVar17 = pbVar2;
  local_14 = pbVar4;
  local_10 = pbVar3;
  do {
    iVar11 = 0;
    iVar14 = iVar14 + -1;
    if (0 < param_6 >> 2) {
      do {
        local_34 = 0;
        iVar11 = iVar11 + 1;
        if (0 < iVar10 + -7) {
          puVar16 = (undefined4 *)((int)puVar12 + param_2 * 2);
          pbVar15 = pbVar17 + param_3 * 2;
          do {
            uVar19 = *(undefined8 *)(&DAT_10032b70 + (uint)*local_10 * 8);
            uVar23 = *(undefined8 *)(&DAT_10032370 + (uint)*local_14 * 8);
            sVar18 = (short)uVar19 + (short)uVar23;
            sVar20 = (short)((ulonglong)uVar19 >> 0x10) + (short)((ulonglong)uVar23 >> 0x10);
            sVar21 = (short)((ulonglong)uVar19 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20);
            sVar22 = (short)((ulonglong)uVar19 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar17 * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[1] * 8);
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
            *puVar12 = uVar9;
            *(short *)(puVar12 + 1) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar15 * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[1] * 8);
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
            *puVar16 = uVar9;
            *(short *)(puVar16 + 1) =
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
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[2] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[3] * 8);
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
            *(undefined4 *)((int)puVar12 + 6) = uVar9;
            *(short *)((int)puVar12 + 10) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[2] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[3] * 8);
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
            *(undefined4 *)((int)puVar16 + 6) = uVar9;
            *(short *)((int)puVar16 + 10) =
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
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[4] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[5] * 8);
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
            puVar12[3] = uVar9;
            *(short *)(puVar12 + 4) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[4] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[5] * 8);
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
            puVar16[3] = uVar9;
            *(short *)(puVar16 + 4) =
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
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[6] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[7] * 8);
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
            *(undefined4 *)((int)puVar12 + 0x12) = uVar9;
            *(short *)((int)puVar12 + 0x16) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[6] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[7] * 8);
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
            *(undefined4 *)((int)puVar16 + 0x12) = uVar9;
            *(short *)((int)puVar16 + 0x16) =
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
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[8] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[9] * 8);
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
            puVar12[6] = uVar9;
            *(short *)(puVar12 + 7) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[8] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[9] * 8);
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
            puVar16[6] = uVar9;
            *(short *)(puVar16 + 7) =
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
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[10] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[0xb] * 8);
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
            *(undefined4 *)((int)puVar12 + 0x1e) = uVar9;
            *(short *)((int)puVar12 + 0x22) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[10] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xb] * 8);
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
            *(undefined4 *)((int)puVar16 + 0x1e) = uVar9;
            *(short *)((int)puVar16 + 0x22) =
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
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[0xc] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[0xd] * 8);
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
            puVar12[9] = uVar9;
            *(short *)(puVar12 + 10) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xc] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xd] * 8);
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
            puVar16[9] = uVar9;
            *(short *)(puVar16 + 10) =
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
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[0xe] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[0xf] * 8);
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
            *(undefined4 *)((int)puVar12 + 0x2a) = uVar9;
            *(short *)((int)puVar12 + 0x2e) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xe] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar15[0xf] * 8);
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
            *(undefined4 *)((int)puVar16 + 0x2a) = uVar9;
            *(short *)((int)puVar16 + 0x2e) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            pbVar15 = pbVar15 + 0x10;
            pbVar17 = pbVar17 + 0x10;
            local_10 = local_10 + 8;
            local_14 = local_14 + 8;
            puVar16 = puVar16 + 0xc;
            puVar12 = puVar12 + 0xc;
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
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar17 * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[1] * 8);
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
            *puVar12 = uVar9;
            *(short *)(puVar12 + 1) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            uVar19 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[param_3 * 2] * 8);
            uVar23 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar17[param_3 * 2 + 1] * 8);
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
            *(undefined4 *)((int)puVar12 + param_2 * 2) = uVar9;
            *(short *)((int)puVar12 + param_2 * 2 + 4) =
                 (short)(CONCAT15((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar23 >> 0x20)
                                  - (0xff < sVar6),
                                  CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                           (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar5),uVar9)
                                 ) >> 0x20);
            pbVar17 = pbVar17 + 2;
            local_10 = local_10 + 1;
            local_14 = local_14 + 1;
            puVar12 = (undefined4 *)((int)puVar12 + 6);
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_10 = local_10 + iVar1;
        local_14 = local_14 + iVar1;
        pbVar17 = pbVar17 + (param_3 * 4 - param_5);
        puVar12 = (undefined4 *)((int)puVar12 + param_2 * 4 + param_5 * -3);
      } while (iVar11 < param_6 >> 2);
    }
    puVar12 = (undefined4 *)(param_2 + (int)param_1);
    pbVar17 = pbVar2 + param_3;
    local_14 = pbVar4 + iVar13;
    local_10 = pbVar3 + iVar13;
  } while (iVar14 != 0);
  return;
}


