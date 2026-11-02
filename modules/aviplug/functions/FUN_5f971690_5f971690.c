/* Module: aviplug.dll
   Function: FUN_5f971690
   Address: 5f971690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f971690(undefined8 *param_1)

{
  undefined8 uVar1;
  short sVar2;
  short sVar4;
  short sVar5;
  undefined8 uVar3;
  short sVar6;
  short sVar7;
  short sVar9;
  short sVar10;
  undefined8 uVar8;
  short sVar11;
  undefined8 uVar12;
  short sVar13;
  short sVar15;
  short sVar16;
  undefined8 uVar14;
  short sVar17;
  undefined8 uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined8 uVar23;
  
  FUN_5f9714a0(param_1,8);
  uVar3 = *param_1;
  uVar8 = param_1[0x10];
  uVar14 = param_1[8];
  uVar18 = param_1[0x18];
  uVar23 = param_1[4];
  uVar12 = param_1[0x14];
  uVar1 = param_1[0xc];
  uVar12 = CONCAT26((short)((ulonglong)uVar23 >> 0x30) + (short)((ulonglong)uVar12 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar23 >> 0x20) + (short)((ulonglong)uVar12 >> 0x20)
                             ,CONCAT22((short)((ulonglong)uVar23 >> 0x10) +
                                       (short)((ulonglong)uVar12 >> 0x10),
                                       (short)uVar23 + (short)uVar12)));
  uVar23 = param_1[0x1c];
  uVar23 = CONCAT26((short)((ulonglong)uVar1 >> 0x30) + (short)((ulonglong)uVar23 >> 0x30),
                    CONCAT24((short)((ulonglong)uVar1 >> 0x20) + (short)((ulonglong)uVar23 >> 0x20),
                             CONCAT22((short)((ulonglong)uVar1 >> 0x10) +
                                      (short)((ulonglong)uVar23 >> 0x10),
                                      (short)uVar1 + (short)uVar23)));
  uVar3 = pmulhw(CONCAT26((short)((ulonglong)uVar3 >> 0x30) + (short)((ulonglong)uVar8 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar3 >> 0x20) +
                                   (short)((ulonglong)uVar8 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar3 >> 0x10) +
                                            (short)((ulonglong)uVar8 >> 0x10),
                                            (short)uVar3 + (short)uVar8))),DAT_5f9daa08);
  uVar8 = pmulhw(CONCAT26((short)((ulonglong)uVar14 >> 0x30) + (short)((ulonglong)uVar18 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar14 >> 0x20) +
                                   (short)((ulonglong)uVar18 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar14 >> 0x10) +
                                            (short)((ulonglong)uVar18 >> 0x10),
                                            (short)uVar14 + (short)uVar18))),DAT_5f9daa08);
  uVar14 = pmulhw(DAT_5f9daa10,uVar12);
  uVar18 = pmulhw(DAT_5f9daa18,uVar23);
  uVar23 = pmulhw(DAT_5f9daa10,uVar23);
  sVar7 = (short)uVar8 + (short)uVar3;
  sVar4 = (short)((ulonglong)uVar3 >> 0x10);
  sVar9 = (short)((ulonglong)uVar8 >> 0x10) + sVar4;
  sVar5 = (short)((ulonglong)uVar3 >> 0x20);
  sVar10 = (short)((ulonglong)uVar8 >> 0x20) + sVar5;
  sVar6 = (short)((ulonglong)uVar3 >> 0x30);
  sVar11 = (short)((ulonglong)uVar8 >> 0x30) + sVar6;
  uVar8 = pmulhw(DAT_5f9daa18,uVar12);
  sVar2 = (short)uVar3 * 2 - sVar7;
  sVar4 = sVar4 * 2 - sVar9;
  sVar5 = sVar5 * 2 - sVar10;
  sVar6 = sVar6 * 2 - sVar11;
  sVar13 = (short)uVar14 + (short)uVar18 + sVar7;
  sVar15 = (short)((ulonglong)uVar14 >> 0x10) + (short)((ulonglong)uVar18 >> 0x10) + sVar9;
  sVar16 = (short)((ulonglong)uVar14 >> 0x20) + (short)((ulonglong)uVar18 >> 0x20) + sVar10;
  sVar17 = (short)((ulonglong)uVar14 >> 0x30) + (short)((ulonglong)uVar18 >> 0x30) + sVar11;
  sVar19 = ((short)uVar8 - (short)uVar23) + sVar2;
  sVar20 = ((short)((ulonglong)uVar8 >> 0x10) - (short)((ulonglong)uVar23 >> 0x10)) + sVar4;
  sVar21 = ((short)((ulonglong)uVar8 >> 0x20) - (short)((ulonglong)uVar23 >> 0x20)) + sVar5;
  sVar22 = ((short)((ulonglong)uVar8 >> 0x30) - (short)((ulonglong)uVar23 >> 0x30)) + sVar6;
  *param_1 = CONCAT26(sVar17,CONCAT24(sVar16,CONCAT22(sVar15,sVar13)));
  param_1[0xc] = CONCAT26(sVar11 * 2 - sVar17,
                          CONCAT24(sVar10 * 2 - sVar16,
                                   CONCAT22(sVar9 * 2 - sVar15,sVar7 * 2 - sVar13)));
  param_1[4] = CONCAT26(sVar22,CONCAT24(sVar21,CONCAT22(sVar20,sVar19)));
  param_1[8] = CONCAT26(sVar6 * 2 - sVar22,
                        CONCAT24(sVar5 * 2 - sVar21,CONCAT22(sVar4 * 2 - sVar20,sVar2 * 2 - sVar19))
                       );
  return;
}


