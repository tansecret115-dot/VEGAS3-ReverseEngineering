/* Module: aviplug.dll
   Function: FUN_5f971520
   Address: 5f971520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f971520(undefined8 *param_1)

{
  short sVar1;
  short sVar3;
  short sVar4;
  undefined8 uVar2;
  short sVar5;
  short sVar6;
  short sVar8;
  short sVar9;
  undefined8 uVar7;
  short sVar10;
  short sVar11;
  short sVar13;
  short sVar14;
  undefined8 uVar12;
  short sVar15;
  short sVar16;
  short sVar18;
  short sVar19;
  undefined8 uVar17;
  short sVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  FUN_5f9714a0(param_1,8);
  uVar2 = pmulhw(*param_1,DAT_5f9daa08);
  uVar7 = pmulhw(param_1[0x10],DAT_5f9daa08);
  uVar12 = pmulhw(param_1[8],DAT_5f9daa10);
  sVar6 = (short)uVar7 + (short)uVar2;
  sVar3 = (short)((ulonglong)uVar2 >> 0x10);
  sVar8 = (short)((ulonglong)uVar7 >> 0x10) + sVar3;
  sVar4 = (short)((ulonglong)uVar2 >> 0x20);
  sVar9 = (short)((ulonglong)uVar7 >> 0x20) + sVar4;
  sVar5 = (short)((ulonglong)uVar2 >> 0x30);
  sVar10 = (short)((ulonglong)uVar7 >> 0x30) + sVar5;
  uVar22 = pmulhw(param_1[0x18],DAT_5f9daa18);
  uVar21 = pmulhw(param_1[0x18],DAT_5f9daa10);
  uVar7 = param_1[4];
  uVar17 = pmulhw(param_1[8],uVar7);
  sVar1 = (short)uVar2 * 2 - sVar6;
  sVar3 = sVar3 * 2 - sVar8;
  sVar4 = sVar4 * 2 - sVar9;
  sVar5 = sVar5 * 2 - sVar10;
  uVar26 = pmulhw(DAT_5f9daa20,uVar7);
  uVar23 = pmulhw(DAT_5f9daa28,uVar7);
  sVar11 = (short)uVar12 + (short)uVar22 + sVar6;
  sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar22 >> 0x10) + sVar8;
  sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar22 >> 0x20) + sVar9;
  sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar22 >> 0x30) + sVar10;
  uVar2 = pmulhw(DAT_5f9daa30,uVar7);
  sVar16 = ((short)uVar17 - (short)uVar21) + sVar1;
  sVar18 = ((short)((ulonglong)uVar17 >> 0x10) - (short)((ulonglong)uVar21 >> 0x10)) + sVar3;
  sVar19 = ((short)((ulonglong)uVar17 >> 0x20) - (short)((ulonglong)uVar21 >> 0x20)) + sVar4;
  sVar20 = ((short)((ulonglong)uVar17 >> 0x30) - (short)((ulonglong)uVar21 >> 0x30)) + sVar5;
  uVar30 = pmulhw(uVar7,DAT_5f9daa38);
  uVar7 = param_1[0xc];
  uVar22 = pmulhw(DAT_5f9daa38,uVar7);
  uVar12 = pmulhw(DAT_5f9daa20,uVar7);
  uVar27 = pmulhw(uVar7,DAT_5f9daa30);
  uVar31 = pmulhw(uVar7,DAT_5f9daa28);
  uVar7 = param_1[0x14];
  uVar17 = pmulhw(DAT_5f9daa28,uVar7);
  uVar28 = pmulhw(DAT_5f9daa30,uVar7);
  uVar24 = pmulhw(uVar7,DAT_5f9daa20);
  uVar32 = pmulhw(uVar7,DAT_5f9daa38);
  uVar7 = param_1[0x1c];
  uVar29 = pmulhw(DAT_5f9daa20,uVar7);
  uVar25 = pmulhw(DAT_5f9daa28,uVar7);
  uVar21 = pmulhw(uVar7,DAT_5f9daa38);
  uVar7 = pmulhw(uVar7,DAT_5f9daa30);
  *param_1 = CONCAT26(sVar15 + (short)((ulonglong)uVar2 >> 0x30) +
                      (short)((ulonglong)uVar22 >> 0x30) + (short)((ulonglong)uVar17 >> 0x30) +
                      (short)((ulonglong)uVar29 >> 0x30),
                      CONCAT24(sVar14 + (short)((ulonglong)uVar2 >> 0x20) +
                               (short)((ulonglong)uVar22 >> 0x20) +
                               (short)((ulonglong)uVar17 >> 0x20) +
                               (short)((ulonglong)uVar29 >> 0x20),
                               CONCAT22(sVar13 + (short)((ulonglong)uVar2 >> 0x10) +
                                        (short)((ulonglong)uVar22 >> 0x10) +
                                        (short)((ulonglong)uVar17 >> 0x10) +
                                        (short)((ulonglong)uVar29 >> 0x10),
                                        sVar11 + (short)uVar2 + (short)uVar22 + (short)uVar17 +
                                        (short)uVar29)));
  param_1[0xc] = CONCAT26((sVar20 - (short)((ulonglong)uVar30 >> 0x30)) +
                          (short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar28 >> 0x30) +
                          (short)((ulonglong)uVar25 >> 0x30),
                          CONCAT24((sVar19 - (short)((ulonglong)uVar30 >> 0x20)) +
                                   (short)((ulonglong)uVar12 >> 0x20) +
                                   (short)((ulonglong)uVar28 >> 0x20) +
                                   (short)((ulonglong)uVar25 >> 0x20),
                                   CONCAT22((sVar18 - (short)((ulonglong)uVar30 >> 0x10)) +
                                            (short)((ulonglong)uVar12 >> 0x10) +
                                            (short)((ulonglong)uVar28 >> 0x10) +
                                            (short)((ulonglong)uVar25 >> 0x10),
                                            (sVar16 - (short)uVar30) + (short)uVar12 + (short)uVar28
                                            + (short)uVar25)));
  param_1[4] = CONCAT26((((sVar5 * 2 + (short)((ulonglong)uVar23 >> 0x30)) - sVar20) -
                        (short)((ulonglong)uVar27 >> 0x30)) + (short)((ulonglong)uVar24 >> 0x30) +
                        (short)((ulonglong)uVar21 >> 0x30),
                        CONCAT24((((sVar4 * 2 + (short)((ulonglong)uVar23 >> 0x20)) - sVar19) -
                                 (short)((ulonglong)uVar27 >> 0x20)) +
                                 (short)((ulonglong)uVar24 >> 0x20) +
                                 (short)((ulonglong)uVar21 >> 0x20),
                                 CONCAT22((((sVar3 * 2 + (short)((ulonglong)uVar23 >> 0x10)) -
                                           sVar18) - (short)((ulonglong)uVar27 >> 0x10)) +
                                          (short)((ulonglong)uVar24 >> 0x10) +
                                          (short)((ulonglong)uVar21 >> 0x10),
                                          (((sVar1 * 2 + (short)uVar23) - sVar16) - (short)uVar27) +
                                          (short)uVar24 + (short)uVar21)));
  param_1[8] = CONCAT26(((((sVar10 * 2 - (short)((ulonglong)uVar26 >> 0x30)) - sVar15) +
                         (short)((ulonglong)uVar31 >> 0x30)) - (short)((ulonglong)uVar32 >> 0x30)) +
                        (short)((ulonglong)uVar7 >> 0x30),
                        CONCAT24(((((sVar9 * 2 - (short)((ulonglong)uVar26 >> 0x20)) - sVar14) +
                                  (short)((ulonglong)uVar31 >> 0x20)) -
                                 (short)((ulonglong)uVar32 >> 0x20)) +
                                 (short)((ulonglong)uVar7 >> 0x20),
                                 CONCAT22(((((sVar8 * 2 - (short)((ulonglong)uVar26 >> 0x10)) -
                                            sVar13) + (short)((ulonglong)uVar31 >> 0x10)) -
                                          (short)((ulonglong)uVar32 >> 0x10)) +
                                          (short)((ulonglong)uVar7 >> 0x10),
                                          ((((sVar6 * 2 - (short)uVar26) - sVar11) + (short)uVar31)
                                          - (short)uVar32) + (short)uVar7)));
  return;
}


