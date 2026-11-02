/* Module: mcmpgdec.dll
   Function: FUN_1001a554
   Address: 1001a554
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001a554(undefined8 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6
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
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  short sVar15;
  short sVar17;
  short sVar18;
  short sVar19;
  undefined8 uVar16;
  undefined8 uVar20;
  int local_10;
  
  iVar1 = param_3 - param_5 >> 1;
  iVar10 = 0;
  pbVar11 = (byte *)*param_4;
  pbVar12 = (byte *)param_4[2];
  pbVar14 = (byte *)param_4[1];
  if (0 < param_6 >> 1) {
    iVar13 = param_5 >> 1;
    do {
      local_10 = 0;
      iVar10 = iVar10 + 1;
      if (0 < iVar13 + -7) {
        do {
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar12 * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar14 * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)*pbVar11 * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[1] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *param_1 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                              (0xff < sVar9),
                              CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                       (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                       CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                                CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                         (char)uVar20 - (0xff < sVar6),
                                                         CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                  (char)((ulonglong)uVar16 >> 0x30)
                                                                  - (0xff < sVar5),
                                                                  CONCAT12((0 < sVar4) *
                                                                           (sVar4 < 0x100) *
                                                                           (char)((ulonglong)uVar16
                                                                                 >> 0x20) -
                                                                           (0xff < sVar4),
                                                                           CONCAT11((0 < sVar3) *
                                                                                    (sVar3 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar16 >> 0x10) - (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 1] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar12[1] * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar14[1] * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[2] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[3] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          param_1[1] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                                (0xff < sVar9),
                                CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                         (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                         CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                  (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7)
                                                  ,CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                            (char)uVar20 - (0xff < sVar6),
                                                            CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     CONCAT12((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x20)
                                                                              - (0xff < sVar4),
                                                                              CONCAT11((0 < sVar3) *
                                                                                       (sVar3 < 
                                                  0x100) * (char)((ulonglong)uVar16 >> 0x10) -
                                                  (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 2] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 3] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + 8 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar12[2] * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar14[2] * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[4] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[5] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          param_1[2] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                                (0xff < sVar9),
                                CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                         (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                         CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                  (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7)
                                                  ,CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                            (char)uVar20 - (0xff < sVar6),
                                                            CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     CONCAT12((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x20)
                                                                              - (0xff < sVar4),
                                                                              CONCAT11((0 < sVar3) *
                                                                                       (sVar3 < 
                                                  0x100) * (char)((ulonglong)uVar16 >> 0x10) -
                                                  (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 4] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 5] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + 0x10 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar12[3] * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar14[3] * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[6] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[7] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          param_1[3] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                                (0xff < sVar9),
                                CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                         (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                         CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                  (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7)
                                                  ,CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                            (char)uVar20 - (0xff < sVar6),
                                                            CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     CONCAT12((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x20)
                                                                              - (0xff < sVar4),
                                                                              CONCAT11((0 < sVar3) *
                                                                                       (sVar3 < 
                                                  0x100) * (char)((ulonglong)uVar16 >> 0x10) -
                                                  (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 6] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 7] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + 0x18 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar12[4] * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar14[4] * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[8] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[9] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          param_1[4] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                                (0xff < sVar9),
                                CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                         (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                         CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                  (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7)
                                                  ,CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                            (char)uVar20 - (0xff < sVar6),
                                                            CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     CONCAT12((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x20)
                                                                              - (0xff < sVar4),
                                                                              CONCAT11((0 < sVar3) *
                                                                                       (sVar3 < 
                                                  0x100) * (char)((ulonglong)uVar16 >> 0x10) -
                                                  (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 8] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 9] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + 0x20 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar12[5] * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar14[5] * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[10] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[0xb] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          param_1[5] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                                (0xff < sVar9),
                                CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                         (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                         CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                  (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7)
                                                  ,CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                            (char)uVar20 - (0xff < sVar6),
                                                            CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     CONCAT12((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x20)
                                                                              - (0xff < sVar4),
                                                                              CONCAT11((0 < sVar3) *
                                                                                       (sVar3 < 
                                                  0x100) * (char)((ulonglong)uVar16 >> 0x10) -
                                                  (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 10] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 0xb] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + 0x28 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar12[6] * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar14[6] * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[0xc] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[0xd] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          param_1[6] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                                (0xff < sVar9),
                                CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                         (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                         CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                  (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7)
                                                  ,CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                            (char)uVar20 - (0xff < sVar6),
                                                            CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     CONCAT12((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x20)
                                                                              - (0xff < sVar4),
                                                                              CONCAT11((0 < sVar3) *
                                                                                       (sVar3 < 
                                                  0x100) * (char)((ulonglong)uVar16 >> 0x10) -
                                                  (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 0xc] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 0xd] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + 0x30 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)pbVar12[7] * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)pbVar14[7] * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[0xe] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[0xf] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          param_1[7] = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                                (0xff < sVar9),
                                CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                         (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                         CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                  (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7)
                                                  ,CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                            (char)uVar20 - (0xff < sVar6),
                                                            CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x30) - (0xff < sVar5),
                                                                     CONCAT12((0 < sVar4) *
                                                                              (sVar4 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x20)
                                                                              - (0xff < sVar4),
                                                                              CONCAT11((0 < sVar3) *
                                                                                       (sVar3 < 
                                                  0x100) * (char)((ulonglong)uVar16 >> 0x10) -
                                                  (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 0xe] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 0xf] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + 0x38 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          pbVar11 = pbVar11 + 0x10;
          pbVar12 = pbVar12 + 8;
          pbVar14 = pbVar14 + 8;
          param_1 = param_1 + 8;
          local_10 = local_10 + 8;
        } while (local_10 < iVar13 + -7);
      }
      if (local_10 < iVar13) {
        local_10 = iVar13 - local_10;
        do {
          uVar16 = *(undefined8 *)(&DAT_10032b70 + (uint)*pbVar12 * 8);
          uVar20 = *(undefined8 *)(&DAT_10032370 + (uint)*pbVar14 * 8);
          sVar15 = (short)uVar16 + (short)uVar20;
          sVar17 = (short)((ulonglong)uVar16 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10);
          sVar18 = (short)((ulonglong)uVar16 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20);
          sVar19 = (short)((ulonglong)uVar16 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30);
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)*pbVar11 * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[1] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *param_1 = CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                              (0xff < sVar9),
                              CONCAT16((0 < sVar8) * (sVar8 < 0x100) *
                                       (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar8),
                                       CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                                (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                                CONCAT14((0 < sVar6) * (sVar6 < 0x100) *
                                                         (char)uVar20 - (0xff < sVar6),
                                                         CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                                  (char)((ulonglong)uVar16 >> 0x30)
                                                                  - (0xff < sVar5),
                                                                  CONCAT12((0 < sVar4) *
                                                                           (sVar4 < 0x100) *
                                                                           (char)((ulonglong)uVar16
                                                                                 >> 0x20) -
                                                                           (0xff < sVar4),
                                                                           CONCAT11((0 < sVar3) *
                                                                                    (sVar3 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar16 >> 0x10) - (0xff < sVar3),
                                                  (0 < sVar2) * (sVar2 < 0x100) * (char)uVar16 -
                                                  (0xff < sVar2))))))));
          uVar16 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3] * 8);
          uVar20 = *(undefined8 *)(&DAT_10033370 + (uint)pbVar11[param_3 + 1] * 8);
          uVar16 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar16 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar16 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar16 >> 0x10),
                                                    sVar15 + (short)uVar16))),6);
          uVar20 = psraw(CONCAT26(sVar19 + (short)((ulonglong)uVar20 >> 0x30),
                                  CONCAT24(sVar18 + (short)((ulonglong)uVar20 >> 0x20),
                                           CONCAT22(sVar17 + (short)((ulonglong)uVar20 >> 0x10),
                                                    sVar15 + (short)uVar20))),6);
          sVar2 = (short)uVar16;
          sVar3 = (short)((ulonglong)uVar16 >> 0x10);
          sVar4 = (short)((ulonglong)uVar16 >> 0x20);
          sVar5 = (short)((ulonglong)uVar16 >> 0x30);
          sVar6 = (short)uVar20;
          sVar7 = (short)((ulonglong)uVar20 >> 0x10);
          sVar8 = (short)((ulonglong)uVar20 >> 0x20);
          sVar9 = (short)((ulonglong)uVar20 >> 0x30);
          *(ulonglong *)(param_2 + (int)param_1) =
               CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                        (0xff < sVar9),
                        CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar20 >> 0x20) -
                                 (0xff < sVar8),
                                 CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                          (char)((ulonglong)uVar20 >> 0x10) - (0xff < sVar7),
                                          CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar20 -
                                                   (0xff < sVar6),
                                                   CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)((ulonglong)uVar16 >> 0x30) -
                                                            (0xff < sVar5),
                                                            CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                     (char)((ulonglong)uVar16 >>
                                                                           0x20) - (0xff < sVar4),
                                                                     CONCAT11((0 < sVar3) *
                                                                              (sVar3 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar16 >> 0x10)
                                                                              - (0xff < sVar3),
                                                                              (0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)uVar16 -
                                                                              (0xff < sVar2))))))));
          pbVar11 = pbVar11 + 2;
          pbVar12 = pbVar12 + 1;
          pbVar14 = pbVar14 + 1;
          param_1 = param_1 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pbVar11 = pbVar11 + (param_3 * 2 - param_5);
      pbVar12 = pbVar12 + iVar1;
      pbVar14 = pbVar14 + iVar1;
      param_1 = (undefined8 *)((int)param_1 + param_2 * 2 + param_5 * -4);
    } while (iVar10 < param_6 >> 1);
  }
  return;
}


