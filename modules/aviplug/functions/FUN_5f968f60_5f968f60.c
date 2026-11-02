/* Module: aviplug.dll
   Function: FUN_5f968f60
   Address: 5f968f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f968f60(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  
  iVar7 = 4;
  puVar8 = param_2 + 0x80;
  do {
    iVar5 = 2;
    while( true ) {
      iVar6 = 2;
      do {
        puVar11 = param_1;
        puVar10 = param_2;
        puVar9 = puVar8;
        uVar20 = *puVar9;
        uVar18 = puVar9[0x20];
        uVar22 = packssdw(uVar20,uVar20);
        uVar16 = packssdw(uVar18,uVar18);
        uVar22 = pmulhw(CONCAT44(CONCAT22((short)((ulonglong)uVar16 >> 0x10),
                                          (short)((ulonglong)uVar22 >> 0x10)),
                                 CONCAT22((short)uVar16,(short)uVar22)),DAT_5f9da670);
        uVar16 = CONCAT44((int)uVar20,(int)uVar18);
        uVar18 = CONCAT44((int)((ulonglong)uVar20 >> 0x20),(int)((ulonglong)uVar18 >> 0x20));
        uVar20 = packssdw(uVar16,uVar16);
        uVar16 = pmulhw(uVar20,DAT_5f9da678);
        uVar20 = packssdw(*puVar10,puVar10[1]);
        uVar18 = packssdw(uVar18,uVar18);
        uVar18 = pmulhw(uVar18,DAT_5f9da678);
        uVar20 = psraw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) +
                                (short)((ulonglong)DAT_5f9da680 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar20 >> 0x20) +
                                         (short)((ulonglong)DAT_5f9da680 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar20 >> 0x10) +
                                                  (short)((ulonglong)DAT_5f9da680 >> 0x10),
                                                  (short)uVar20 + (short)DAT_5f9da680))),2);
        uVar17 = (undefined4)((ulonglong)uVar16 >> 0x10);
        uVar21 = CONCAT44(uVar17,uVar17) & _DAT_5f9da688;
        sVar15 = (short)((ulonglong)uVar20 >> 0x10);
        sVar14 = (short)uVar20;
        uVar17 = (undefined4)((ulonglong)uVar18 >> 0x10);
        uVar19 = CONCAT44(uVar17,uVar17) & _DAT_5f9da688;
        sVar12 = (short)((ulonglong)uVar20 >> 0x20);
        sVar13 = (short)((ulonglong)uVar20 >> 0x30);
        uVar22 = psraw(CONCAT26((short)((ulonglong)uVar22 >> 0x30) + sVar13,
                                CONCAT24((short)((ulonglong)uVar22 >> 0x20) + sVar12,
                                         CONCAT22((short)((ulonglong)uVar22 >> 0x10) + sVar15,
                                                  (short)uVar22 + sVar14))),4);
        uVar16 = psraw(CONCAT26((short)(uVar21 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30) +
                                sVar15,CONCAT24((short)(uVar21 >> 0x20) +
                                                (short)((ulonglong)uVar16 >> 0x20) + sVar15,
                                                CONCAT22((short)(uVar21 >> 0x10) +
                                                         (short)((ulonglong)uVar16 >> 0x10) + sVar14
                                                         ,(short)uVar21 + (short)uVar16 + sVar14))),
                       4);
        sVar14 = (short)uVar16;
        sVar15 = (short)((ulonglong)uVar16 >> 0x10);
        sVar1 = (short)uVar22;
        sVar2 = (short)((ulonglong)uVar22 >> 0x10);
        uVar20 = psraw(CONCAT26((short)(uVar19 >> 0x30) + (short)((ulonglong)uVar18 >> 0x30) +
                                sVar13,CONCAT24((short)(uVar19 >> 0x20) +
                                                (short)((ulonglong)uVar18 >> 0x20) + sVar13,
                                                CONCAT22((short)(uVar19 >> 0x10) +
                                                         (short)((ulonglong)uVar18 >> 0x10) + sVar12
                                                         ,(short)uVar19 + (short)uVar18 + sVar12))),
                       4);
        iVar6 = iVar6 + -1;
        *puVar11 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)((ulonglong)uVar22 >> 0x10) -
                            (0xff < sVar2),
                            CONCAT12((0 < sVar1) * (sVar1 < 0x100) * (char)uVar22 - (0xff < sVar1),
                                     CONCAT11((0 < sVar15) * (sVar15 < 0x100) *
                                              (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar15),
                                              (0 < sVar14) * (sVar14 < 0x100) * (char)uVar16 -
                                              (0xff < sVar14))));
        sVar14 = (short)((ulonglong)uVar22 >> 0x20);
        sVar1 = (short)((ulonglong)uVar22 >> 0x30);
        sVar12 = (short)((ulonglong)uVar20 >> 0x20);
        sVar3 = (short)((ulonglong)uVar20 >> 0x30);
        puVar8 = puVar9 + 1;
        param_2 = puVar10 + 0x20;
        sVar15 = (short)((ulonglong)uVar16 >> 0x20);
        sVar2 = (short)((ulonglong)uVar16 >> 0x30);
        sVar13 = (short)uVar20;
        sVar4 = (short)((ulonglong)uVar20 >> 0x10);
        puVar11[2] = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * (char)((ulonglong)uVar20 >> 0x30) -
                              (0xff < sVar3),
                              CONCAT12((0 < sVar12) * (sVar12 < 0x100) *
                                       (char)((ulonglong)uVar20 >> 0x20) - (0xff < sVar12),
                                       CONCAT11((0 < sVar1) * (sVar1 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x30) - (0xff < sVar1),
                                                (0 < sVar14) * (sVar14 < 0x100) *
                                                (char)((ulonglong)uVar22 >> 0x20) - (0xff < sVar14))
                                      ));
        puVar11[1] = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar20 >> 0x10) -
                              (0xff < sVar4),
                              CONCAT12((0 < sVar13) * (sVar13 < 0x100) * (char)uVar20 -
                                       (0xff < sVar13),
                                       CONCAT11((0 < sVar2) * (sVar2 < 0x100) *
                                                (char)((ulonglong)uVar16 >> 0x30) - (0xff < sVar2),
                                                (0 < sVar15) * (sVar15 < 0x100) *
                                                (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar15))
                                      ));
        param_1 = puVar11 + 3;
      } while (iVar6 != 0);
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) break;
      param_1 = (undefined4 *)((int)(puVar11 + 3) + param_4);
    }
    param_2 = puVar10 + -0x58;
    param_1 = (undefined4 *)((int)puVar11 + (param_3 - param_4) + -0x24);
    puVar8 = puVar9 + 5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}


