/* Module: mcmpgdec.dll
   Function: FUN_100068cc
   Address: 100068cc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_100068cc(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined8 uVar5;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined8 uVar14;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  
  iVar3 = 4;
  do {
    uVar5 = *param_1;
    uVar14 = *(undefined8 *)(param_2 + (int)param_1);
    uVar2 = (ushort)(((uint7)(byte)((ulonglong)uVar5 >> 0x18) << 0x30) >> 0x28);
    uVar1 = *param_5;
    sVar4 = ((ushort)uVar5 & 0xff) + (short)uVar1;
    sVar6 = (ushort)(byte)((ulonglong)uVar5 >> 8) + (short)((ulonglong)uVar1 >> 0x10);
    sVar7 = (short)CONCAT21(uVar2,(char)((ulonglong)uVar5 >> 0x10)) +
            (short)((ulonglong)uVar1 >> 0x20);
    sVar8 = (uVar2 >> 8) + (short)((ulonglong)uVar1 >> 0x30);
    uVar1 = param_5[1];
    sVar9 = (ushort)(byte)((ulonglong)uVar5 >> 0x20) + (short)uVar1;
    sVar10 = (ushort)(byte)((ulonglong)uVar5 >> 0x28) + (short)((ulonglong)uVar1 >> 0x10);
    sVar11 = (ushort)(byte)((ulonglong)uVar5 >> 0x30) + (short)((ulonglong)uVar1 >> 0x20);
    sVar12 = (ushort)(byte)((ulonglong)uVar5 >> 0x38) + (short)((ulonglong)uVar1 >> 0x30);
    uVar2 = (ushort)(((uint7)(byte)((ulonglong)uVar14 >> 0x18) << 0x30) >> 0x28);
    uVar5 = param_5[2];
    sVar13 = ((ushort)uVar14 & 0xff) + (short)uVar5;
    sVar15 = (ushort)(byte)((ulonglong)uVar14 >> 8) + (short)((ulonglong)uVar5 >> 0x10);
    sVar16 = (short)CONCAT21(uVar2,(char)((ulonglong)uVar14 >> 0x10)) +
             (short)((ulonglong)uVar5 >> 0x20);
    sVar17 = (uVar2 >> 8) + (short)((ulonglong)uVar5 >> 0x30);
    uVar5 = param_5[3];
    sVar18 = (ushort)(byte)((ulonglong)uVar14 >> 0x20) + (short)uVar5;
    sVar19 = (ushort)(byte)((ulonglong)uVar14 >> 0x28) + (short)((ulonglong)uVar5 >> 0x10);
    sVar20 = (ushort)(byte)((ulonglong)uVar14 >> 0x30) + (short)((ulonglong)uVar5 >> 0x20);
    sVar21 = (ushort)(byte)((ulonglong)uVar14 >> 0x38) + (short)((ulonglong)uVar5 >> 0x30);
    uVar5 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 - (0xff < sVar12),
                     CONCAT16((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 - (0xff < sVar11),
                              CONCAT15((0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 -
                                       (0xff < sVar10),
                                       CONCAT14((0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 -
                                                (0xff < sVar9),
                                                CONCAT13((0 < sVar8) * (sVar8 < 0x100) * (char)sVar8
                                                         - (0xff < sVar8),
                                                         CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                  (char)sVar7 - (0xff < sVar7),
                                                                  CONCAT11((0 < sVar6) *
                                                                           (sVar6 < 0x100) *
                                                                           (char)sVar6 -
                                                                           (0xff < sVar6),
                                                                           (0 < sVar4) *
                                                                           (sVar4 < 0x100) *
                                                                           (char)sVar4 -
                                                                           (0xff < sVar4))))))));
    uVar14 = CONCAT17((0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21),
                      CONCAT16((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                               CONCAT15((0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 -
                                        (0xff < sVar19),
                                        CONCAT14((0 < sVar18) * (sVar18 < 0x100) * (char)sVar18 -
                                                 (0xff < sVar18),
                                                 CONCAT13((0 < sVar17) * (sVar17 < 0x100) *
                                                          (char)sVar17 - (0xff < sVar17),
                                                          CONCAT12((0 < sVar16) * (sVar16 < 0x100) *
                                                                   (char)sVar16 - (0xff < sVar16),
                                                                   CONCAT11((0 < sVar15) *
                                                                            (sVar15 < 0x100) *
                                                                            (char)sVar15 -
                                                                            (0xff < sVar15),
                                                                            (0 < sVar13) *
                                                                            (sVar13 < 0x100) *
                                                                            (char)sVar13 -
                                                                            (0xff < sVar13))))))));
    *param_3 = uVar5;
    *(undefined8 *)(param_4 + (int)param_3) = uVar14;
    *param_1 = uVar5;
    *(undefined8 *)(param_2 + (int)param_1) = uVar14;
    param_1 = (undefined8 *)((int)param_1 + param_2 * 2);
    param_3 = (undefined8 *)((int)param_3 + param_4 * 2);
    param_5 = param_5 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


