/* Module: mcmpgdec.dll
   Function: FUN_1001c018
   Address: 1001c018
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001c018(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  short sVar11;
  short sVar13;
  short sVar14;
  undefined8 uVar12;
  undefined8 uVar15;
  int local_10;
  
  iVar3 = param_3 - param_5 >> 1;
  iVar6 = 0;
  pbVar7 = (byte *)*param_4;
  pbVar10 = (byte *)param_4[2];
  pbVar9 = (byte *)param_4[1];
  if (0 < param_6) {
    iVar8 = param_5 >> 1;
    do {
      iVar6 = iVar6 + 1;
      local_10 = 0;
      if (0 < iVar8 + -7) {
        do {
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar10 * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar9 * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar7 * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[1] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          *param_1 = uVar5;
          *(short *)(param_1 + 1) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[1] * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[1] * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[2] * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[3] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          *(undefined4 *)((int)param_1 + 6) = uVar5;
          *(short *)((int)param_1 + 10) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[2] * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[2] * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[4] * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[5] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          param_1[3] = uVar5;
          *(short *)(param_1 + 4) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[3] * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[3] * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[6] * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[7] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          *(undefined4 *)((int)param_1 + 0x12) = uVar5;
          *(short *)((int)param_1 + 0x16) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[4] * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[4] * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[8] * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[9] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          param_1[6] = uVar5;
          *(short *)(param_1 + 7) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[5] * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[5] * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[10] * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xb] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          *(undefined4 *)((int)param_1 + 0x1e) = uVar5;
          *(short *)((int)param_1 + 0x22) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[6] * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[6] * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xc] * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xd] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          param_1[9] = uVar5;
          *(short *)(param_1 + 10) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar10[7] * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar9[7] * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xe] * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[0xf] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          *(undefined4 *)((int)param_1 + 0x2a) = uVar5;
          *(short *)((int)param_1 + 0x2e) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          pbVar7 = pbVar7 + 0x10;
          pbVar10 = pbVar10 + 8;
          pbVar9 = pbVar9 + 8;
          param_1 = param_1 + 0xc;
          local_10 = local_10 + 8;
        } while (local_10 < iVar8 + -7);
      }
      if (local_10 < iVar8) {
        local_10 = iVar8 - local_10;
        do {
          uVar12 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar10 * 8);
          uVar15 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar9 * 8);
          sVar11 = (short)uVar12 + (short)uVar15;
          sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar15 >> 0x10);
          sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar15 >> 0x20);
          uVar1 = *(undefined8 *)(&DAT_10031b70 + (uint)*pbVar7 * 8);
          uVar2 = *(undefined8 *)(&DAT_10031b70 + (uint)pbVar7[1] * 8);
          uVar15 = psraw(CONCAT26((short)((ulonglong)uVar12 >> 0x30) +
                                  (short)((ulonglong)uVar15 >> 0x30) +
                                  (short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20),
                                           CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10),
                                                    sVar11 + (short)uVar2))),6);
          uVar12 = psraw((ulonglong)
                         CONCAT24(sVar14 + (short)((ulonglong)uVar1 >> 0x20),
                                  CONCAT22(sVar13 + (short)((ulonglong)uVar1 >> 0x10),
                                           sVar11 + (short)uVar1)) << 0x10,6);
          sVar11 = (short)((ulonglong)uVar12 >> 0x10);
          sVar13 = (short)((ulonglong)uVar12 >> 0x20);
          sVar14 = (short)((ulonglong)uVar12 >> 0x30);
          sVar4 = (short)uVar15;
          uVar5 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)uVar15 - (0xff < sVar4),
                           CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                    (char)((ulonglong)uVar12 >> 0x30) - (0xff < sVar14),
                                    CONCAT11((0 < sVar13) * (sVar13 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x20) - (0xff < sVar13),
                                             (0 < sVar11) * (sVar11 < 0x100) *
                                             (char)((ulonglong)uVar12 >> 0x10) - (0xff < sVar11))));
          sVar11 = (short)((ulonglong)uVar15 >> 0x10);
          sVar13 = (short)((ulonglong)uVar15 >> 0x20);
          *param_1 = uVar5;
          *(short *)(param_1 + 1) =
               (short)(CONCAT15((0 < sVar13) * (sVar13 < 0x100) * (char)((ulonglong)uVar15 >> 0x20)
                                - (0xff < sVar13),
                                CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                         (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar11),uVar5))
                      >> 0x20);
          pbVar7 = pbVar7 + 2;
          pbVar10 = pbVar10 + 1;
          pbVar9 = pbVar9 + 1;
          param_1 = (undefined4 *)((int)param_1 + 6);
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pbVar7 = pbVar7 + (param_3 - param_5);
      pbVar10 = pbVar10 + iVar3;
      pbVar9 = pbVar9 + iVar3;
      param_1 = (undefined4 *)((int)param_1 + param_2 + param_5 * -3);
    } while (iVar6 < param_6);
  }
  return;
}


