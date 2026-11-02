/* Module: mcmpgdec.dll
   Function: FUN_1001b28c
   Address: 1001b28c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001b28c(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
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
  int local_10;
  
  iVar1 = param_3 - param_5 >> 1;
  iVar7 = 0;
  pbVar8 = (byte *)*param_4;
  pbVar9 = (byte *)param_4[2];
  pbVar11 = (byte *)param_4[1];
  if (0 < param_6 >> 1) {
    iVar10 = param_5 >> 1;
    do {
      local_10 = 0;
      iVar7 = iVar7 + 1;
      if (0 < iVar10 + -7) {
        do {
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar9 * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar11 * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar8 * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[1] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *param_1 = uVar6;
          *(short *)(param_1 + 1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 1] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + (int)param_1) = uVar6;
          *(short *)(param_2 + 4 + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar9[1] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar11[1] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[2] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[3] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)((int)param_1 + 6) = uVar6;
          *(short *)((int)param_1 + 10) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 2] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 3] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + 6 + (int)param_1) = uVar6;
          *(short *)(param_2 + 10 + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar9[2] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar11[2] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[4] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[5] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          param_1[3] = uVar6;
          *(short *)(param_1 + 4) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 4] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 5] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + 0xc + (int)param_1) = uVar6;
          *(short *)(param_2 + 0x10 + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar9[3] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar11[3] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[6] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[7] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)((int)param_1 + 0x12) = uVar6;
          *(short *)((int)param_1 + 0x16) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 6] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 7] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + 0x12 + (int)param_1) = uVar6;
          *(short *)(param_2 + 0x16 + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar9[4] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar11[4] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[8] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[9] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          param_1[6] = uVar6;
          *(short *)(param_1 + 7) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 8] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 9] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + 0x18 + (int)param_1) = uVar6;
          *(short *)(param_2 + 0x1c + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar9[5] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar11[5] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[10] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xb] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)((int)param_1 + 0x1e) = uVar6;
          *(short *)((int)param_1 + 0x22) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 10] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 0xb] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + 0x1e + (int)param_1) = uVar6;
          *(short *)(param_2 + 0x22 + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar9[6] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar11[6] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xc] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xd] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          param_1[9] = uVar6;
          *(short *)(param_1 + 10) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 0xc] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 0xd] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + 0x24 + (int)param_1) = uVar6;
          *(short *)(param_2 + 0x28 + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar9[7] * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar11[7] * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xe] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[0xf] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)((int)param_1 + 0x2a) = uVar6;
          *(short *)((int)param_1 + 0x2e) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 0xe] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 0xf] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + 0x2a + (int)param_1) = uVar6;
          *(short *)(param_2 + 0x2e + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          pbVar8 = pbVar8 + 0x10;
          pbVar9 = pbVar9 + 8;
          pbVar11 = pbVar11 + 8;
          param_1 = param_1 + 0xc;
          local_10 = local_10 + 8;
        } while (local_10 < iVar10 + -7);
      }
      if (local_10 < iVar10) {
        local_10 = iVar10 - local_10;
        do {
          uVar13 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar9 * 8);
          uVar17 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar11 * 8);
          sVar12 = (short)uVar13 + (short)uVar17;
          sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (short)((ulonglong)uVar17 >> 0x10);
          sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (short)((ulonglong)uVar17 >> 0x20);
          sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar8 * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[1] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *param_1 = uVar6;
          *(short *)(param_1 + 1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          uVar13 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3] * 8);
          uVar17 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar8[param_3 + 1] * 8);
          uVar17 = psraw(CONCAT26(sVar16 + (short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24(sVar15 + (short)((ulonglong)uVar17 >> 0x20),
                                           CONCAT22(sVar14 + (short)((ulonglong)uVar17 >> 0x10),
                                                    sVar12 + (short)uVar17))),6);
          uVar13 = psraw((ulonglong)
                         CONCAT24(sVar15 + (short)((ulonglong)uVar13 >> 0x20),
                                  CONCAT22(sVar14 + (short)((ulonglong)uVar13 >> 0x10),
                                           sVar12 + (short)uVar13)) << 0x10,6);
          sVar2 = (short)((ulonglong)uVar13 >> 0x10);
          sVar3 = (short)((ulonglong)uVar13 >> 0x20);
          sVar4 = (short)((ulonglong)uVar13 >> 0x30);
          sVar5 = (short)uVar17;
          uVar6 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)uVar17 - (0xff < sVar5),
                           CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                    (char)((ulonglong)uVar13 >> 0x30) - (0xff < sVar4),
                                    CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x20) - (0xff < sVar3),
                                             (0 < sVar2) * (sVar2 < 0x100) *
                                             (char)((ulonglong)uVar13 >> 0x10) - (0xff < sVar2))));
          sVar2 = (short)((ulonglong)uVar17 >> 0x10);
          sVar3 = (short)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)(param_2 + (int)param_1) = uVar6;
          *(short *)(param_2 + 4 + (int)param_1) =
               (short)(CONCAT15((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar17 >> 0x20) -
                                (0xff < sVar3),
                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                         (char)((ulonglong)uVar17 >> 0x10) - (0xff < sVar2),uVar6))
                      >> 0x20);
          pbVar8 = pbVar8 + 2;
          pbVar9 = pbVar9 + 1;
          pbVar11 = pbVar11 + 1;
          param_1 = (undefined4 *)((int)param_1 + 6);
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pbVar8 = pbVar8 + (param_3 * 2 - param_5);
      pbVar9 = pbVar9 + iVar1;
      pbVar11 = pbVar11 + iVar1;
      param_1 = (undefined4 *)((int)param_1 + param_2 * 2 + param_5 * -3);
    } while (iVar7 < param_6 >> 1);
  }
  return;
}


