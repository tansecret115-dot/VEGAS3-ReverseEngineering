/* Module: aviplug.dll
   Function: FUN_5f969ac0
   Address: 5f969ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f969ac0(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_MM2;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  iVar11 = 8;
  puVar12 = param_2 + 0x80;
  do {
    iVar9 = 2;
    while( true ) {
      iVar10 = 2;
      do {
        puVar14 = param_1;
        puVar13 = param_2;
        uVar15 = CONCAT44((int)puVar12[0x20],(int)*puVar12);
        uVar20 = packssdw(uVar15,uVar15);
        uVar16 = CONCAT44((int)((ulonglong)puVar12[0x20] >> 0x20),(int)((ulonglong)*puVar12 >> 0x20)
                         );
        uVar15 = packssdw(*puVar13,puVar13[1]);
        uVar18 = packssdw(uVar16,uVar16);
        sVar1 = (short)((ulonglong)DAT_5f9da6b8 >> 0x10);
        sVar2 = (short)((ulonglong)DAT_5f9da6b8 >> 0x20);
        sVar3 = (short)((ulonglong)DAT_5f9da6b8 >> 0x30);
        uVar15 = CONCAT26((short)((ulonglong)uVar15 >> 0x30) + sVar3,
                          CONCAT24((short)((ulonglong)uVar15 >> 0x20) + sVar2,
                                   CONCAT22((short)((ulonglong)uVar15 >> 0x10) + sVar1,
                                            (short)uVar15 + (short)DAT_5f9da6b8)));
        uVar19 = pmaddwd(uVar20,DAT_5f9da6c0);
        uVar17 = pshufw(in_MM2,uVar15,0xfe);
        uVar20 = pmaddwd(uVar20,DAT_5f9da6c8);
        uVar16 = pshufw(puVar13[1],uVar15,0xa5);
        uVar15 = pshufw(uVar15,uVar15,0x40);
        uVar20 = packssdw(CONCAT44((int)((longlong)uVar20 >> 0x2e),(int)uVar20 >> 0xe),
                          CONCAT44((int)((longlong)uVar19 >> 0x2e),(int)uVar19 >> 0xe));
        uVar19 = packssdw(puVar13[2],puVar13[3]);
        uVar19 = CONCAT26((short)((ulonglong)uVar19 >> 0x30) + sVar3,
                          CONCAT24((short)((ulonglong)uVar19 >> 0x20) + sVar2,
                                   CONCAT22((short)((ulonglong)uVar19 >> 0x10) + sVar1,
                                            (short)uVar19 + (short)DAT_5f9da6b8)));
        uVar21 = pshufw(uVar20,uVar20,0x49);
        uVar22 = pshufw(uVar21,uVar21,0x49);
        uVar15 = psraw(CONCAT26((short)((ulonglong)uVar15 >> 0x30) +
                                (short)((ulonglong)uVar20 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar15 >> 0x20) +
                                         (short)((ulonglong)uVar20 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar15 >> 0x10) +
                                                  (short)((ulonglong)uVar20 >> 0x10),
                                                  (short)uVar15 + (short)uVar20))),6);
        uVar16 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) +
                                (short)((ulonglong)uVar21 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar16 >> 0x20) +
                                         (short)((ulonglong)uVar21 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar16 >> 0x10) +
                                                  (short)((ulonglong)uVar21 >> 0x10),
                                                  (short)uVar16 + (short)uVar21))),6);
        sVar1 = (short)uVar15;
        sVar2 = (short)((ulonglong)uVar15 >> 0x10);
        sVar3 = (short)((ulonglong)uVar15 >> 0x20);
        sVar4 = (short)((ulonglong)uVar15 >> 0x30);
        sVar5 = (short)uVar16;
        sVar6 = (short)((ulonglong)uVar16 >> 0x10);
        sVar7 = (short)((ulonglong)uVar16 >> 0x20);
        sVar8 = (short)((ulonglong)uVar16 >> 0x30);
        uVar15 = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                          (0xff < sVar8),
                          CONCAT16((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar16 >> 0x20)
                                   - (0xff < sVar7),
                                   CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                            (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar6),
                                            CONCAT14((0 < sVar5) * (sVar5 < 0x100) * (char)uVar16 -
                                                     (0xff < sVar5),
                                                     CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                              (char)((ulonglong)uVar15 >> 0x30) -
                                                              (0xff < sVar4),
                                                              CONCAT12((0 < sVar3) * (sVar3 < 0x100)
                                                                       * (char)((ulonglong)uVar15 >>
                                                                               0x20) -
                                                                       (0xff < sVar3),
                                                                       CONCAT11((0 < sVar2) *
                                                                                (sVar2 < 0x100) *
                                                                                (char)((ulonglong)
                                                                                       uVar15 >>
                                                                                      0x10) -
                                                                                (0xff < sVar2),
                                                                                (0 < sVar1) *
                                                                                (sVar1 < 0x100) *
                                                                                (char)uVar15 -
                                                                                (0xff < sVar1)))))))
                         );
        uVar20 = pmaddwd(DAT_5f9da6c0,uVar18);
        uVar17 = psraw(CONCAT26((short)((ulonglong)uVar17 >> 0x30) +
                                (short)((ulonglong)uVar22 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar17 >> 0x20) +
                                         (short)((ulonglong)uVar22 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar17 >> 0x10) +
                                                  (short)((ulonglong)uVar22 >> 0x10),
                                                  (short)uVar17 + (short)uVar22))),6);
        uVar21 = pmaddwd(DAT_5f9da6c8,uVar18);
        uVar16 = pshufw(uVar16,uVar19,0xa5);
        *puVar14 = uVar15;
        uVar15 = pshufw(uVar15,uVar19,0x40);
        uVar18 = CONCAT44((int)((longlong)uVar20 >> 0x2e),(int)uVar20 >> 0xe);
        uVar20 = packssdw(CONCAT44((int)((longlong)uVar21 >> 0x2e),(int)uVar21 >> 0xe),uVar18);
        uVar19 = pshufw(uVar19,uVar19,0xfe);
        uVar15 = psraw(CONCAT26((short)((ulonglong)uVar15 >> 0x30) +
                                (short)((ulonglong)uVar20 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar15 >> 0x20) +
                                         (short)((ulonglong)uVar20 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar15 >> 0x10) +
                                                  (short)((ulonglong)uVar20 >> 0x10),
                                                  (short)uVar15 + (short)uVar20))),6);
        sVar1 = (short)uVar17;
        sVar2 = (short)((ulonglong)uVar17 >> 0x10);
        sVar3 = (short)((ulonglong)uVar17 >> 0x20);
        sVar4 = (short)((ulonglong)uVar17 >> 0x30);
        sVar5 = (short)uVar15;
        sVar6 = (short)((ulonglong)uVar15 >> 0x10);
        sVar7 = (short)((ulonglong)uVar15 >> 0x20);
        sVar8 = (short)((ulonglong)uVar15 >> 0x30);
        uVar20 = pshufw(uVar20,uVar20,0x49);
        puVar14[1] = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar15 >> 0x30) -
                              (0xff < sVar8),
                              CONCAT16((0 < sVar7) * (sVar7 < 0x100) *
                                       (char)((ulonglong)uVar15 >> 0x20) - (0xff < sVar7),
                                       CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                                (char)((ulonglong)uVar15 >> 0x10) - (0xff < sVar6),
                                                CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                                         (char)uVar15 - (0xff < sVar5),
                                                         CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                                  (char)((ulonglong)uVar17 >> 0x30)
                                                                  - (0xff < sVar4),
                                                                  CONCAT12((0 < sVar3) *
                                                                           (sVar3 < 0x100) *
                                                                           (char)((ulonglong)uVar17
                                                                                 >> 0x20) -
                                                                           (0xff < sVar3),
                                                                           CONCAT11((0 < sVar2) *
                                                                                    (sVar2 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar17 >> 0x10) - (0xff < sVar2),
                                                  (0 < sVar1) * (sVar1 < 0x100) * (char)uVar17 -
                                                  (0xff < sVar1))))))));
        uVar17 = pshufw(uVar18,uVar20,0x49);
        uVar15 = psraw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) +
                                (short)((ulonglong)uVar20 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar16 >> 0x20) +
                                         (short)((ulonglong)uVar20 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar16 >> 0x10) +
                                                  (short)((ulonglong)uVar20 >> 0x10),
                                                  (short)uVar16 + (short)uVar20))),6);
        uVar16 = psraw(CONCAT26((short)((ulonglong)uVar19 >> 0x30) +
                                (short)((ulonglong)uVar17 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar19 >> 0x20) +
                                         (short)((ulonglong)uVar17 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar19 >> 0x10) +
                                                  (short)((ulonglong)uVar17 >> 0x10),
                                                  (short)uVar19 + (short)uVar17))),6);
        sVar1 = (short)uVar15;
        sVar2 = (short)((ulonglong)uVar15 >> 0x10);
        sVar3 = (short)((ulonglong)uVar15 >> 0x20);
        sVar4 = (short)((ulonglong)uVar15 >> 0x30);
        sVar5 = (short)uVar16;
        sVar6 = (short)((ulonglong)uVar16 >> 0x10);
        sVar7 = (short)((ulonglong)uVar16 >> 0x20);
        sVar8 = (short)((ulonglong)uVar16 >> 0x30);
        param_2 = puVar13 + 0x20;
        puVar12 = puVar12 + 1;
        puVar14[2] = CONCAT17((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar16 >> 0x30) -
                              (0xff < sVar8),
                              CONCAT16((0 < sVar7) * (sVar7 < 0x100) *
                                       (char)((ulonglong)uVar16 >> 0x20) - (0xff < sVar7),
                                       CONCAT15((0 < sVar6) * (sVar6 < 0x100) *
                                                (char)((ulonglong)uVar16 >> 0x10) - (0xff < sVar6),
                                                CONCAT14((0 < sVar5) * (sVar5 < 0x100) *
                                                         (char)uVar16 - (0xff < sVar5),
                                                         CONCAT13((0 < sVar4) * (sVar4 < 0x100) *
                                                                  (char)((ulonglong)uVar15 >> 0x30)
                                                                  - (0xff < sVar4),
                                                                  CONCAT12((0 < sVar3) *
                                                                           (sVar3 < 0x100) *
                                                                           (char)((ulonglong)uVar15
                                                                                 >> 0x20) -
                                                                           (0xff < sVar3),
                                                                           CONCAT11((0 < sVar2) *
                                                                                    (sVar2 < 0x100)
                                                                                    * (char)((
                                                  ulonglong)uVar15 >> 0x10) - (0xff < sVar2),
                                                  (0 < sVar1) * (sVar1 < 0x100) * (char)uVar15 -
                                                  (0xff < sVar1))))))));
        in_MM2 = 0;
        iVar10 = iVar10 + -1;
        param_1 = puVar14 + 3;
      } while (iVar10 != 0);
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) break;
      param_1 = (undefined8 *)((int)(puVar14 + 3) + param_4);
    }
    param_2 = puVar13 + -0x5c;
    param_1 = (undefined8 *)((int)puVar14 + (param_3 - param_4) + -0x48);
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}


