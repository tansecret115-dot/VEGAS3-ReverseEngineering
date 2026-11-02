/* Module: mcmpgdec.dll
   Function: FUN_10006838
   Address: 10006838
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __cdecl
FUN_10006838(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  short sVar2;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar3;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined8 uVar12;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  
  iVar1 = 4;
  do {
    uVar3 = *param_5;
    sVar2 = (short)uVar3 + 0x80;
    sVar4 = (short)((ulonglong)uVar3 >> 0x10) + 0x80;
    sVar5 = (short)((ulonglong)uVar3 >> 0x20) + 0x80;
    sVar6 = (short)((ulonglong)uVar3 >> 0x30) + 0x80;
    uVar3 = param_5[1];
    sVar7 = (short)uVar3 + 0x80;
    sVar8 = (short)((ulonglong)uVar3 >> 0x10) + 0x80;
    sVar9 = (short)((ulonglong)uVar3 >> 0x20) + 0x80;
    sVar10 = (short)((ulonglong)uVar3 >> 0x30) + 0x80;
    uVar3 = param_5[2];
    sVar11 = (short)uVar3 + 0x80;
    sVar13 = (short)((ulonglong)uVar3 >> 0x10) + 0x80;
    sVar14 = (short)((ulonglong)uVar3 >> 0x20) + 0x80;
    sVar15 = (short)((ulonglong)uVar3 >> 0x30) + 0x80;
    uVar3 = param_5[3];
    sVar16 = (short)uVar3 + 0x80;
    sVar17 = (short)((ulonglong)uVar3 >> 0x10) + 0x80;
    sVar18 = (short)((ulonglong)uVar3 >> 0x20) + 0x80;
    sVar19 = (short)((ulonglong)uVar3 >> 0x30) + 0x80;
    uVar3 = CONCAT17((0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 - (0xff < sVar10),
                     CONCAT16((0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 - (0xff < sVar9),
                              CONCAT15((0 < sVar8) * (sVar8 < 0x100) * (char)sVar8 - (0xff < sVar8),
                                       CONCAT14((0 < sVar7) * (sVar7 < 0x100) * (char)sVar7 -
                                                (0xff < sVar7),
                                                CONCAT13((0 < sVar6) * (sVar6 < 0x100) * (char)sVar6
                                                         - (0xff < sVar6),
                                                         CONCAT12((0 < sVar5) * (sVar5 < 0x100) *
                                                                  (char)sVar5 - (0xff < sVar5),
                                                                  CONCAT11((0 < sVar4) *
                                                                           (sVar4 < 0x100) *
                                                                           (char)sVar4 -
                                                                           (0xff < sVar4),
                                                                           (0 < sVar2) *
                                                                           (sVar2 < 0x100) *
                                                                           (char)sVar2 -
                                                                           (0xff < sVar2))))))));
    uVar12 = CONCAT17((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 - (0xff < sVar19),
                      CONCAT16((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 - (0xff < sVar18),
                               CONCAT15((0 < sVar17) * (sVar17 < 0x100) * (char)sVar17 -
                                        (0xff < sVar17),
                                        CONCAT14((0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 -
                                                 (0xff < sVar16),
                                                 CONCAT13((0 < sVar15) * (sVar15 < 0x100) *
                                                          (char)sVar15 - (0xff < sVar15),
                                                          CONCAT12((0 < sVar14) * (sVar14 < 0x100) *
                                                                   (char)sVar14 - (0xff < sVar14),
                                                                   CONCAT11((0 < sVar13) *
                                                                            (sVar13 < 0x100) *
                                                                            (char)sVar13 -
                                                                            (0xff < sVar13),
                                                                            (0 < sVar11) *
                                                                            (sVar11 < 0x100) *
                                                                            (char)sVar11 -
                                                                            (0xff < sVar11))))))));
    *param_3 = uVar3;
    *(undefined8 *)(param_4 + (int)param_3) = uVar12;
    *param_1 = uVar3;
    *(undefined8 *)(param_2 + (int)param_1) = uVar12;
    param_1 = (undefined8 *)((int)param_1 + param_2 * 2);
    param_3 = (undefined8 *)((int)param_3 + param_4 * 2);
    param_5 = param_5 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


