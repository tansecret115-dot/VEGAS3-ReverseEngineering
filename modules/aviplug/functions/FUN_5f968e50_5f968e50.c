/* Module: aviplug.dll
   Function: FUN_5f968e50
   Address: 5f968e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f968e50(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  short sVar15;
  undefined8 uVar14;
  undefined8 uVar16;
  short sVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  short sVar21;
  short sVar23;
  short sVar24;
  undefined8 uVar22;
  short sVar25;
  
  iVar10 = 8;
  puVar11 = param_2 + 0x80;
  do {
    iVar8 = 2;
    while( true ) {
      uVar9 = 4;
      do {
        do {
          puVar13 = param_1;
          puVar12 = param_2;
          uVar16 = *puVar12;
          uVar18 = *puVar11;
          *puVar11 = 0;
          uVar14 = packssdw(uVar16,uVar16);
          sVar15 = (short)((ulonglong)uVar14 >> 0x10);
          uVar19 = packssdw(uVar18,uVar18);
          uVar22 = pmaddwd(DAT_5f9da650,uVar19);
          uVar18 = puVar12[1];
          uVar20 = pmaddwd(DAT_5f9da658,uVar19);
          *puVar12 = 0;
          uVar19 = packssdw(uVar18,uVar18);
          puVar12[1] = 0;
          sVar17 = (short)((ulonglong)uVar19 >> 0x10);
          param_1 = puVar13 + 2;
          uVar20 = packssdw(CONCAT44((int)((longlong)uVar22 >> 0x2e),(int)uVar22 >> 0xe),
                            CONCAT44((int)((longlong)uVar20 >> 0x2e),(int)uVar20 >> 0xe));
          sVar21 = (short)uVar20 + (short)DAT_5f9da660;
          sVar23 = (short)((ulonglong)uVar20 >> 0x10) + (short)((ulonglong)DAT_5f9da660 >> 0x10);
          sVar24 = (short)((ulonglong)uVar20 >> 0x20) + (short)((ulonglong)DAT_5f9da660 >> 0x20);
          sVar25 = (short)((ulonglong)uVar20 >> 0x30) + (short)((ulonglong)DAT_5f9da660 >> 0x30);
          uVar14 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x10) + sVar25,
                                  CONCAT24((short)uVar16 + sVar24,
                                           CONCAT22((short)uVar14 + sVar23,(short)uVar14 + sVar21)))
                         ,6);
          uVar16 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) + sVar25,
                                  CONCAT24((short)((ulonglong)uVar16 >> 0x20) + sVar24,
                                           CONCAT22(sVar15 + sVar23,sVar15 + sVar21))),6);
          sVar15 = (short)uVar14;
          sVar1 = (short)((ulonglong)uVar14 >> 0x10);
          sVar2 = (short)((ulonglong)uVar14 >> 0x20);
          sVar3 = (short)((ulonglong)uVar14 >> 0x30);
          sVar4 = (short)uVar16;
          sVar5 = (short)((ulonglong)uVar16 >> 0x10);
          sVar6 = (short)((ulonglong)uVar16 >> 0x20);
          sVar7 = (short)((ulonglong)uVar16 >> 0x30);
          uVar19 = psraw(CONCAT26((short)((ulonglong)uVar18 >> 0x10) + sVar25,
                                  CONCAT24((short)uVar18 + sVar24,
                                           CONCAT22((short)uVar19 + sVar23,(short)uVar19 + sVar21)))
                         ,6);
          uVar18 = psraw(CONCAT26((short)((ulonglong)uVar18 >> 0x30) + sVar25,
                                  CONCAT24((short)((ulonglong)uVar18 >> 0x20) + sVar24,
                                           CONCAT22(sVar17 + sVar23,sVar17 + sVar21))),6);
          puVar11 = puVar11 + 1;
          *puVar13 = CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                              (0xff < sVar7),
                              CONCAT16((0 < sVar6) * (sVar6 < 0x100) *
                                       (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar6),
                                       CONCAT15((0 < sVar5) * (sVar5 < 0x100) *
                                                (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar5),
                                                CONCAT14((0 < sVar4) * (sVar4 < 0x100) *
                                                         (char)uVar16 - (0xff < sVar4),
                                                         CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                                                  (char)((ulonglong)uVar14 >> 0x30)
                                                                  - (0xff < sVar3),
                                                                  CONCAT12((0 < sVar2) *
                                                                           (sVar2 < 0x100) *
                                                                           (char)((ulonglong)uVar14
                                                                                 >> 0x20) -
                                                                           (0xff < sVar2),
                                                                           CONCAT11((0 < sVar1) *
                                                                                    (sVar1 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar14 >> 0x10) - (0xff < sVar1),
                                                  (0 < sVar15) * (sVar15 < 0x100) * (char)uVar14 -
                                                  (0xff < sVar15))))))));
          sVar15 = (short)uVar19;
          sVar1 = (short)((ulonglong)uVar19 >> 0x10);
          sVar2 = (short)((ulonglong)uVar19 >> 0x20);
          sVar3 = (short)((ulonglong)uVar19 >> 0x30);
          sVar4 = (short)uVar18;
          sVar5 = (short)((ulonglong)uVar18 >> 0x10);
          sVar6 = (short)((ulonglong)uVar18 >> 0x20);
          sVar7 = (short)((ulonglong)uVar18 >> 0x30);
          uVar9 = uVar9 - 1;
          puVar13[1] = CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar18 >> 0x30) -
                                (0xff < sVar7),
                                CONCAT16((0 < sVar6) * (sVar6 < 0x100) *
                                         (char)((ulonglong)uVar18 >> 0x20) - (0xff < sVar6),
                                         CONCAT15((0 < sVar5) * (sVar5 < 0x100) *
                                                  (char)((ulonglong)uVar18 >> 0x10) - (0xff < sVar5)
                                                  ,CONCAT14((0 < sVar4) * (sVar4 < 0x100) *
                                                            (char)uVar18 - (0xff < sVar4),
                                                            CONCAT13((0 < sVar3) * (sVar3 < 0x100) *
                                                                     (char)((ulonglong)uVar19 >>
                                                                           0x30) - (0xff < sVar3),
                                                                     CONCAT12((0 < sVar2) *
                                                                              (sVar2 < 0x100) *
                                                                              (char)((ulonglong)
                                                                                     uVar19 >> 0x20)
                                                                              - (0xff < sVar2),
                                                                              CONCAT11((0 < sVar1) *
                                                                                       (sVar1 < 
                                                  0x100) * (char)((ulonglong)uVar19 >> 0x10) -
                                                  (0xff < sVar1),
                                                  (0 < sVar15) * (sVar15 < 0x100) * (char)uVar19 -
                                                  (0xff < sVar15))))))));
          param_2 = puVar12 + 2;
        } while ((uVar9 & 1) != 0);
        param_2 = puVar12 + 0x1e;
      } while (uVar9 != 0);
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) break;
      param_1 = (undefined8 *)((int)param_1 + param_4);
    }
    param_2 = puVar12 + -0x5e;
    param_1 = (undefined8 *)((int)puVar13 + (param_3 - param_4) + -0x70);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  return;
}


