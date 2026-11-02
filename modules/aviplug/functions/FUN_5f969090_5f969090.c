/* Module: aviplug.dll
   Function: FUN_5f969090
   Address: 5f969090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f969090(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  short sVar14;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  short sVar18;
  undefined4 uVar19;
  short sVar21;
  short sVar22;
  undefined8 uVar20;
  short sVar23;
  short sVar25;
  short sVar26;
  undefined8 uVar24;
  short sVar27;
  
  iVar8 = 4;
  puVar9 = param_2 + 0x80;
  do {
    iVar6 = 2;
    while( true ) {
      iVar7 = 2;
      do {
        puVar12 = param_1;
        puVar11 = param_2;
        puVar10 = puVar9;
        uVar19 = CONCAT22((short)puVar10[0x20],(short)*puVar10);
        uVar15 = *puVar11;
        uVar1 = CONCAT44(uVar19,uVar19);
        uVar19 = CONCAT22((short)((ulonglong)puVar10[0x20] >> 0x20),
                          (short)((ulonglong)*puVar10 >> 0x20));
        uVar24 = pmaddwd(uVar1,DAT_5f9da650);
        uVar16 = CONCAT44(uVar19,uVar19);
        uVar17 = pmaddwd(uVar1,DAT_5f9da658);
        uVar13 = packssdw(uVar15,uVar15);
        uVar20 = pmaddwd(uVar16,DAT_5f9da650);
        sVar14 = (short)((ulonglong)uVar13 >> 0x10);
        uVar16 = pmaddwd(uVar16,DAT_5f9da658);
        sVar18 = (short)DAT_5f9da660;
        sVar21 = (short)((ulonglong)DAT_5f9da660 >> 0x10);
        sVar22 = (short)((ulonglong)DAT_5f9da660 >> 0x20);
        sVar23 = (short)((ulonglong)DAT_5f9da660 >> 0x30);
        uVar1 = puVar11[1];
        uVar17 = packssdw(CONCAT44((int)((longlong)uVar24 >> 0x2e),(int)uVar24 >> 0xe),
                          CONCAT44((int)((longlong)uVar17 >> 0x2e),(int)uVar17 >> 0xe));
        sVar25 = (short)((ulonglong)uVar17 >> 0x10);
        sVar26 = (short)((ulonglong)uVar17 >> 0x20);
        sVar27 = (short)((ulonglong)uVar17 >> 0x30);
        uVar13 = psraw(CONCAT26((short)((ulonglong)uVar15 >> 0x10) + sVar23 + sVar27,
                                CONCAT24((short)uVar15 + sVar22 + sVar26,
                                         CONCAT22((short)uVar13 + sVar21 + sVar25,
                                                  (short)uVar13 + sVar18 + (short)uVar17))),6);
        uVar15 = psraw(CONCAT26((short)((ulonglong)uVar15 >> 0x30) + sVar23 + sVar27,
                                CONCAT24((short)((ulonglong)uVar15 >> 0x20) + sVar22 + sVar26,
                                         CONCAT22(sVar14 + sVar21 + sVar25,
                                                  sVar14 + sVar18 + (short)uVar17))),6);
        sVar14 = (short)uVar13;
        sVar25 = (short)((ulonglong)uVar13 >> 0x10);
        sVar26 = (short)((ulonglong)uVar13 >> 0x20);
        sVar27 = (short)((ulonglong)uVar13 >> 0x30);
        sVar2 = (short)uVar15;
        sVar3 = (short)((ulonglong)uVar15 >> 0x10);
        sVar4 = (short)((ulonglong)uVar15 >> 0x20);
        sVar5 = (short)((ulonglong)uVar15 >> 0x30);
        iVar7 = iVar7 + -1;
        puVar9 = puVar10 + 1;
        uVar16 = packssdw(CONCAT44((int)((longlong)uVar20 >> 0x2e),(int)uVar20 >> 0xe),
                          CONCAT44((int)((longlong)uVar16 >> 0x2e),(int)uVar16 >> 0xe));
        param_2 = puVar11 + 0x20;
        *puVar12 = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar15 >> 0x30) -
                            (0xff < sVar5),
                            CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                     (char)((ulonglong)uVar15 >> 0x20) - (0xff < sVar4),
                                     CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                              (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar3),
                                              CONCAT14((0 < sVar2) * (sVar2 < 0x100) * (char)uVar15
                                                       - (0xff < sVar2),
                                                       CONCAT13((0 < sVar27) * (sVar27 < 0x100) *
                                                                (char)((ulonglong)uVar13 >> 0x30) -
                                                                (0xff < sVar27),
                                                                CONCAT12((0 < sVar26) *
                                                                         (sVar26 < 0x100) *
                                                                         (char)((ulonglong)uVar13 >>
                                                                               0x20) -
                                                                         (0xff < sVar26),
                                                                         CONCAT11((0 < sVar25) *
                                                                                  (sVar25 < 0x100) *
                                                                                  (char)((ulonglong)
                                                                                         uVar13 >>
                                                                                        0x10) -
                                                                                  (0xff < sVar25),
                                                                                  (0 < sVar14) *
                                                                                  (sVar14 < 0x100) *
                                                                                  (char)uVar13 -
                                                                                  (0xff < sVar14))))
                                                      ))));
        uVar15 = packssdw(uVar1,uVar1);
        sVar18 = (short)uVar16 + sVar18;
        sVar21 = (short)((ulonglong)uVar16 >> 0x10) + sVar21;
        sVar22 = (short)((ulonglong)uVar16 >> 0x20) + sVar22;
        sVar23 = (short)((ulonglong)uVar16 >> 0x30) + sVar23;
        sVar14 = (short)((ulonglong)uVar15 >> 0x10);
        uVar13 = psraw(CONCAT26((short)((ulonglong)uVar1 >> 0x10) + sVar23,
                                CONCAT24((short)uVar1 + sVar22,
                                         CONCAT22((short)uVar15 + sVar21,(short)uVar15 + sVar18))),6
                      );
        uVar15 = psraw(CONCAT26((short)((ulonglong)uVar1 >> 0x30) + sVar23,
                                CONCAT24((short)((ulonglong)uVar1 >> 0x20) + sVar22,
                                         CONCAT22(sVar14 + sVar21,sVar14 + sVar18))),6);
        sVar14 = (short)uVar13;
        sVar25 = (short)((ulonglong)uVar13 >> 0x10);
        sVar26 = (short)((ulonglong)uVar13 >> 0x20);
        sVar27 = (short)((ulonglong)uVar13 >> 0x30);
        sVar2 = (short)uVar15;
        sVar3 = (short)((ulonglong)uVar15 >> 0x10);
        sVar4 = (short)((ulonglong)uVar15 >> 0x20);
        sVar5 = (short)((ulonglong)uVar15 >> 0x30);
        puVar12[1] = CONCAT17((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar15 >> 0x30) -
                              (0xff < sVar5),
                              CONCAT16((0 < sVar4) * (sVar4 < 0x100) *
                                       (char)((ulonglong)uVar15 >> 0x20) - (0xff < sVar4),
                                       CONCAT15((0 < sVar3) * (sVar3 < 0x100) *
                                                (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar3),
                                                CONCAT14((0 < sVar2) * (sVar2 < 0x100) *
                                                         (char)uVar15 - (0xff < sVar2),
                                                         CONCAT13((0 < sVar27) * (sVar27 < 0x100) *
                                                                  (char)((ulonglong)uVar13 >> 0x30)
                                                                  - (0xff < sVar27),
                                                                  CONCAT12((0 < sVar26) *
                                                                           (sVar26 < 0x100) *
                                                                           (char)((ulonglong)uVar13
                                                                                 >> 0x20) -
                                                                           (0xff < sVar26),
                                                                           CONCAT11((0 < sVar25) *
                                                                                    (sVar25 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar13 >> 0x10) - (0xff < sVar25),
                                                  (0 < sVar14) * (sVar14 < 0x100) * (char)uVar13 -
                                                  (0xff < sVar14))))))));
        param_1 = puVar12 + 2;
      } while (iVar7 != 0);
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) break;
      param_1 = (undefined8 *)((int)(puVar12 + 2) + param_4);
    }
    param_2 = puVar11 + -0x58;
    param_1 = (undefined8 *)((int)puVar12 + (param_3 - param_4) + -0x30);
    puVar9 = puVar10 + 5;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}


