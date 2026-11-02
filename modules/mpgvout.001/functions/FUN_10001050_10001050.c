/* Module: mpgvout.001
   Function: FUN_10001050
   Address: 10001050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10001050(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  sVar7 = (short)uVar1 + 0x80;
  sVar8 = (short)((ulonglong)uVar1 >> 0x10) + 0x80;
  sVar9 = (short)((ulonglong)uVar1 >> 0x20) + 0x80;
  sVar10 = (short)((ulonglong)uVar1 >> 0x30) + 0x80;
  sVar11 = (short)uVar2 + 0x80;
  sVar12 = (short)((ulonglong)uVar2 >> 0x10) + 0x80;
  sVar13 = (short)((ulonglong)uVar2 >> 0x20) + 0x80;
  sVar14 = (short)((ulonglong)uVar2 >> 0x30) + 0x80;
  sVar15 = (short)uVar3 + 0x80;
  sVar16 = (short)((ulonglong)uVar3 >> 0x10) + 0x80;
  sVar17 = (short)((ulonglong)uVar3 >> 0x20) + 0x80;
  sVar18 = (short)((ulonglong)uVar3 >> 0x30) + 0x80;
  sVar19 = (short)uVar4 + 0x80;
  sVar20 = (short)((ulonglong)uVar4 >> 0x10) + 0x80;
  sVar21 = (short)((ulonglong)uVar4 >> 0x20) + 0x80;
  sVar22 = (short)((ulonglong)uVar4 >> 0x30) + 0x80;
  *param_1 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 - (0xff < sVar14),
                      CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 - (0xff < sVar13),
                               CONCAT15((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 -
                                        (0xff < sVar12),
                                        CONCAT14((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 -
                                                 (0xff < sVar11),
                                                 CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                          (char)sVar10 - (0xff < sVar10),
                                                          CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                   (char)sVar9 - (0xff < sVar9),
                                                                   CONCAT11((0 < sVar8) *
                                                                            (sVar8 < 0x100) *
                                                                            (char)sVar8 -
                                                                            (0xff < sVar8),
                                                                            (0 < sVar7) *
                                                                            (sVar7 < 0x100) *
                                                                            (char)sVar7 -
                                                                            (0xff < sVar7))))))));
  *(ulonglong *)(param_2 + (int)param_1) =
       CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22),
                CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21),
                         CONCAT15((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                                  CONCAT14((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 -
                                           (0xff < sVar19),
                                           CONCAT13((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 -
                                                    (0xff < sVar18),
                                                    CONCAT12((0 < sVar17) * (sVar17 < 0x100) *
                                                             (char)sVar17 - (0xff < sVar17),
                                                             CONCAT11((0 < sVar16) *
                                                                      (sVar16 < 0x100) *
                                                                      (char)sVar16 - (0xff < sVar16)
                                                                      ,(0 < sVar15) *
                                                                       (sVar15 < 0x100) *
                                                                       (char)sVar15 -
                                                                       (0xff < sVar15))))))));
  iVar5 = param_2 * 2;
  puVar6 = (undefined8 *)((int)param_1 + iVar5);
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  sVar7 = (short)uVar1 + 0x80;
  sVar8 = (short)((ulonglong)uVar1 >> 0x10) + 0x80;
  sVar9 = (short)((ulonglong)uVar1 >> 0x20) + 0x80;
  sVar10 = (short)((ulonglong)uVar1 >> 0x30) + 0x80;
  sVar11 = (short)uVar2 + 0x80;
  sVar12 = (short)((ulonglong)uVar2 >> 0x10) + 0x80;
  sVar13 = (short)((ulonglong)uVar2 >> 0x20) + 0x80;
  sVar14 = (short)((ulonglong)uVar2 >> 0x30) + 0x80;
  sVar15 = (short)uVar3 + 0x80;
  sVar16 = (short)((ulonglong)uVar3 >> 0x10) + 0x80;
  sVar17 = (short)((ulonglong)uVar3 >> 0x20) + 0x80;
  sVar18 = (short)((ulonglong)uVar3 >> 0x30) + 0x80;
  sVar19 = (short)uVar4 + 0x80;
  sVar20 = (short)((ulonglong)uVar4 >> 0x10) + 0x80;
  sVar21 = (short)((ulonglong)uVar4 >> 0x20) + 0x80;
  sVar22 = (short)((ulonglong)uVar4 >> 0x30) + 0x80;
  *puVar6 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 - (0xff < sVar14),
                     CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 - (0xff < sVar13),
                              CONCAT15((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 -
                                       (0xff < sVar12),
                                       CONCAT14((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 -
                                                (0xff < sVar11),
                                                CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                         (char)sVar10 - (0xff < sVar10),
                                                         CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                  (char)sVar9 - (0xff < sVar9),
                                                                  CONCAT11((0 < sVar8) *
                                                                           (sVar8 < 0x100) *
                                                                           (char)sVar8 -
                                                                           (0xff < sVar8),
                                                                           (0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)sVar7 -
                                                                           (0xff < sVar7))))))));
  *(ulonglong *)(param_2 + (int)puVar6) =
       CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22),
                CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21),
                         CONCAT15((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                                  CONCAT14((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 -
                                           (0xff < sVar19),
                                           CONCAT13((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 -
                                                    (0xff < sVar18),
                                                    CONCAT12((0 < sVar17) * (sVar17 < 0x100) *
                                                             (char)sVar17 - (0xff < sVar17),
                                                             CONCAT11((0 < sVar16) *
                                                                      (sVar16 < 0x100) *
                                                                      (char)sVar16 - (0xff < sVar16)
                                                                      ,(0 < sVar15) *
                                                                       (sVar15 < 0x100) *
                                                                       (char)sVar15 -
                                                                       (0xff < sVar15))))))));
  puVar6 = (undefined8 *)((int)puVar6 + iVar5);
  uVar1 = param_3[8];
  uVar2 = param_3[9];
  uVar3 = param_3[10];
  uVar4 = param_3[0xb];
  sVar7 = (short)uVar1 + 0x80;
  sVar8 = (short)((ulonglong)uVar1 >> 0x10) + 0x80;
  sVar9 = (short)((ulonglong)uVar1 >> 0x20) + 0x80;
  sVar10 = (short)((ulonglong)uVar1 >> 0x30) + 0x80;
  sVar11 = (short)uVar2 + 0x80;
  sVar12 = (short)((ulonglong)uVar2 >> 0x10) + 0x80;
  sVar13 = (short)((ulonglong)uVar2 >> 0x20) + 0x80;
  sVar14 = (short)((ulonglong)uVar2 >> 0x30) + 0x80;
  sVar15 = (short)uVar3 + 0x80;
  sVar16 = (short)((ulonglong)uVar3 >> 0x10) + 0x80;
  sVar17 = (short)((ulonglong)uVar3 >> 0x20) + 0x80;
  sVar18 = (short)((ulonglong)uVar3 >> 0x30) + 0x80;
  sVar19 = (short)uVar4 + 0x80;
  sVar20 = (short)((ulonglong)uVar4 >> 0x10) + 0x80;
  sVar21 = (short)((ulonglong)uVar4 >> 0x20) + 0x80;
  sVar22 = (short)((ulonglong)uVar4 >> 0x30) + 0x80;
  *puVar6 = CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 - (0xff < sVar14),
                     CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 - (0xff < sVar13),
                              CONCAT15((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 -
                                       (0xff < sVar12),
                                       CONCAT14((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 -
                                                (0xff < sVar11),
                                                CONCAT13((0 < sVar10) * (sVar10 < 0x100) *
                                                         (char)sVar10 - (0xff < sVar10),
                                                         CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                                  (char)sVar9 - (0xff < sVar9),
                                                                  CONCAT11((0 < sVar8) *
                                                                           (sVar8 < 0x100) *
                                                                           (char)sVar8 -
                                                                           (0xff < sVar8),
                                                                           (0 < sVar7) *
                                                                           (sVar7 < 0x100) *
                                                                           (char)sVar7 -
                                                                           (0xff < sVar7))))))));
  *(ulonglong *)(param_2 + (int)puVar6) =
       CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22),
                CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21),
                         CONCAT15((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                                  CONCAT14((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 -
                                           (0xff < sVar19),
                                           CONCAT13((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 -
                                                    (0xff < sVar18),
                                                    CONCAT12((0 < sVar17) * (sVar17 < 0x100) *
                                                             (char)sVar17 - (0xff < sVar17),
                                                             CONCAT11((0 < sVar16) *
                                                                      (sVar16 < 0x100) *
                                                                      (char)sVar16 - (0xff < sVar16)
                                                                      ,(0 < sVar15) *
                                                                       (sVar15 < 0x100) *
                                                                       (char)sVar15 -
                                                                       (0xff < sVar15))))))));
  uVar1 = param_3[0xc];
  uVar2 = param_3[0xd];
  uVar3 = param_3[0xe];
  uVar4 = param_3[0xf];
  sVar7 = (short)uVar1 + 0x80;
  sVar8 = (short)((ulonglong)uVar1 >> 0x10) + 0x80;
  sVar9 = (short)((ulonglong)uVar1 >> 0x20) + 0x80;
  sVar10 = (short)((ulonglong)uVar1 >> 0x30) + 0x80;
  sVar11 = (short)uVar2 + 0x80;
  sVar12 = (short)((ulonglong)uVar2 >> 0x10) + 0x80;
  sVar13 = (short)((ulonglong)uVar2 >> 0x20) + 0x80;
  sVar14 = (short)((ulonglong)uVar2 >> 0x30) + 0x80;
  sVar15 = (short)uVar3 + 0x80;
  sVar16 = (short)((ulonglong)uVar3 >> 0x10) + 0x80;
  sVar17 = (short)((ulonglong)uVar3 >> 0x20) + 0x80;
  sVar18 = (short)((ulonglong)uVar3 >> 0x30) + 0x80;
  sVar19 = (short)uVar4 + 0x80;
  sVar20 = (short)((ulonglong)uVar4 >> 0x10) + 0x80;
  sVar21 = (short)((ulonglong)uVar4 >> 0x20) + 0x80;
  sVar22 = (short)((ulonglong)uVar4 >> 0x30) + 0x80;
  *(undefined8 *)((int)puVar6 + iVar5) =
       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 - (0xff < sVar14),
                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 - (0xff < sVar13),
                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 - (0xff < sVar12),
                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 -
                                           (0xff < sVar11),
                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 -
                                                    (0xff < sVar10),
                                                    CONCAT12((0 < sVar9) * (sVar9 < 0x100) *
                                                             (char)sVar9 - (0xff < sVar9),
                                                             CONCAT11((0 < sVar8) * (sVar8 < 0x100)
                                                                      * (char)sVar8 - (0xff < sVar8)
                                                                      ,(0 < sVar7) * (sVar7 < 0x100)
                                                                       * (char)sVar7 -
                                                                       (0xff < sVar7))))))));
  *(ulonglong *)(param_2 + (int)puVar6 + iVar5) =
       CONCAT17((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22),
                CONCAT16((0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21),
                         CONCAT15((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                                  CONCAT14((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 -
                                           (0xff < sVar19),
                                           CONCAT13((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 -
                                                    (0xff < sVar18),
                                                    CONCAT12((0 < sVar17) * (sVar17 < 0x100) *
                                                             (char)sVar17 - (0xff < sVar17),
                                                             CONCAT11((0 < sVar16) *
                                                                      (sVar16 < 0x100) *
                                                                      (char)sVar16 - (0xff < sVar16)
                                                                      ,(0 < sVar15) *
                                                                       (sVar15 < 0x100) *
                                                                       (char)sVar15 -
                                                                       (0xff < sVar15))))))));
  return;
}


