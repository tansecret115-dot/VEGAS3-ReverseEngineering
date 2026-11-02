/* Module: mpgvout.002
   Function: FUN_10028b80
   Address: 10028b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10028b80(undefined8 *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  undefined7 uVar2;
  uint3 uVar3;
  undefined5 uVar4;
  uint3 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  undefined1 *puVar19;
  byte bVar22;
  undefined8 uVar20;
  ulonglong uVar21;
  ushort uVar23;
  undefined2 uVar24;
  ushort uVar27;
  ushort uVar28;
  undefined8 uVar25;
  undefined8 uVar26;
  ushort uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  undefined1 uVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  int local_1c;
  
  iVar10 = param_3 >> 1;
  iVar1 = param_5 >> 1;
  iVar15 = iVar10 * 2 - iVar1;
  iVar16 = param_3 * 4 - param_5;
  iVar7 = (param_2 - param_5) * 4;
  puVar13 = (undefined8 *)((int)param_1 + param_2 * 2);
  iVar8 = param_6 >> 2;
  puVar12 = (undefined2 *)*param_4;
  puVar19 = (undefined1 *)param_4[2];
  puVar14 = (undefined1 *)param_4[1];
  iVar17 = 0;
  if (0 < iVar8) {
    iVar9 = (param_5 >> 4) << 3;
    puVar11 = param_1;
    do {
      iVar17 = iVar17 + 1;
      local_1c = 0;
      if (0 < iVar9) {
        puVar18 = puVar12 + param_3;
        do {
          uVar26 = *puVar11;
          uVar25 = *puVar13;
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          *puVar12 = uVar24;
          *puVar18 = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                      (0xff < uVar29),
                                      CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                               (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          *puVar19 = (char)((ulonglong)uVar26 >> 8);
          *puVar14 = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[1];
          uVar25 = puVar13[1];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[1] = uVar24;
          puVar18[1] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[1] = (char)((ulonglong)uVar26 >> 8);
          puVar14[1] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[2];
          uVar25 = puVar13[2];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[2] = uVar24;
          puVar18[2] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[2] = (char)((ulonglong)uVar26 >> 8);
          puVar14[2] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[3];
          uVar25 = puVar13[3];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[3] = uVar24;
          puVar18[3] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[3] = (char)((ulonglong)uVar26 >> 8);
          puVar14[3] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[4];
          uVar25 = puVar13[4];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[4] = uVar24;
          puVar18[4] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[4] = (char)((ulonglong)uVar26 >> 8);
          puVar14[4] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[5];
          uVar25 = puVar13[5];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[5] = uVar24;
          puVar18[5] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[5] = (char)((ulonglong)uVar26 >> 8);
          puVar14[5] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[6];
          uVar25 = puVar13[6];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[6] = uVar24;
          puVar18[6] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[6] = (char)((ulonglong)uVar26 >> 8);
          puVar14[6] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[7];
          uVar25 = puVar13[7];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[7] = uVar24;
          puVar18[7] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[7] = (char)((ulonglong)uVar26 >> 8);
          puVar14[7] = (char)((ulonglong)uVar26 >> 0x18);
          puVar18 = puVar18 + 8;
          puVar12 = puVar12 + 8;
          puVar19 = puVar19 + 8;
          puVar14 = puVar14 + 8;
          puVar11 = puVar11 + 8;
          puVar13 = puVar13 + 8;
          local_1c = local_1c + 8;
        } while (local_1c < iVar9);
      }
      if (local_1c < iVar1) {
        local_1c = iVar1 - local_1c;
        do {
          uVar26 = *puVar11;
          uVar25 = *puVar13;
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          *puVar12 = uVar24;
          puVar12[param_3] =
               (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 - (0xff < uVar29),
                                CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                         (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          *puVar19 = (char)((ulonglong)uVar26 >> 8);
          *puVar14 = (char)((ulonglong)uVar26 >> 0x18);
          puVar12 = puVar12 + 1;
          puVar19 = puVar19 + 1;
          puVar14 = puVar14 + 1;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      puVar12 = (undefined2 *)((int)puVar12 + iVar16);
      puVar19 = puVar19 + iVar15;
      puVar14 = puVar14 + iVar15;
      puVar11 = (undefined8 *)((int)puVar11 + iVar7);
      puVar13 = (undefined8 *)((int)puVar13 + iVar7);
    } while (iVar17 < iVar8);
  }
  puVar11 = (undefined8 *)((int)param_1 + param_2);
  puVar13 = (undefined8 *)((int)puVar11 + param_2 * 2);
  puVar12 = (undefined2 *)(param_3 + *param_4);
  puVar14 = (undefined1 *)(iVar10 + param_4[2]);
  puVar19 = (undefined1 *)(iVar10 + param_4[1]);
  if (0 < iVar8) {
    iVar10 = (param_5 >> 4) << 3;
    iVar17 = 0;
    do {
      iVar17 = iVar17 + 1;
      local_1c = 0;
      if (0 < iVar10) {
        puVar18 = puVar12 + param_3;
        do {
          uVar26 = *puVar11;
          uVar25 = *puVar13;
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          *puVar12 = uVar24;
          *puVar18 = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                      (0xff < uVar29),
                                      CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                               (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          *puVar14 = (char)((ulonglong)uVar26 >> 8);
          *puVar19 = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[1];
          uVar25 = puVar13[1];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[1] = uVar24;
          puVar18[1] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar14[1] = (char)((ulonglong)uVar26 >> 8);
          puVar19[1] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[2];
          uVar25 = puVar13[2];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[2] = uVar24;
          puVar18[2] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar14[2] = (char)((ulonglong)uVar26 >> 8);
          puVar19[2] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[3];
          uVar25 = puVar13[3];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[3] = uVar24;
          puVar18[3] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar14[3] = (char)((ulonglong)uVar26 >> 8);
          puVar19[3] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[4];
          uVar25 = puVar13[4];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[4] = uVar24;
          puVar18[4] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar14[4] = (char)((ulonglong)uVar26 >> 8);
          puVar19[4] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[5];
          uVar25 = puVar13[5];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[5] = uVar24;
          puVar18[5] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar14[5] = (char)((ulonglong)uVar26 >> 8);
          puVar19[5] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[6];
          uVar25 = puVar13[6];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[6] = uVar24;
          puVar18[6] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar14[6] = (char)((ulonglong)uVar26 >> 8);
          puVar19[6] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar11[7];
          uVar25 = puVar13[7];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          puVar12[7] = uVar24;
          puVar18[7] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar14[7] = (char)((ulonglong)uVar26 >> 8);
          puVar19[7] = (char)((ulonglong)uVar26 >> 0x18);
          puVar18 = puVar18 + 8;
          puVar12 = puVar12 + 8;
          puVar14 = puVar14 + 8;
          puVar19 = puVar19 + 8;
          puVar11 = puVar11 + 8;
          puVar13 = puVar13 + 8;
          local_1c = local_1c + 8;
        } while (local_1c < iVar10);
      }
      if (local_1c < iVar1) {
        local_1c = iVar1 - local_1c;
        do {
          uVar26 = *puVar11;
          uVar25 = *puVar13;
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x30);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x20) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x20));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x30) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x28) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x28) *
                                                      (short)((ulonglong)DAT_1003e670 >> 0x10),
                                                      (ushort)(byte)((ulonglong)uVar26 >> 8) *
                                                      (short)DAT_1003e670))),
                           CONCAT26((short)((ulonglong)DAT_1003e668 >> 0x30) * (uVar23 >> 8),
                                    CONCAT24((short)((ulonglong)DAT_1003e668 >> 0x20) * (short)uVar5
                                             ,CONCAT22((short)((ulonglong)DAT_1003e668 >> 0x10) *
                                                       (short)((uint7)uVar2 >> 0x10),
                                                       (short)DAT_1003e668 * (ushort)bVar22))));
          uVar30 = psllw((ulonglong)CONCAT52(uVar4,(ushort)(byte)uVar26),7);
          uVar26 = paddusw(uVar25,CONCAT26((short)((ulonglong)DAT_1003e678 >> 0x30) * (uVar27 >> 8),
                                           CONCAT24((short)((ulonglong)DAT_1003e678 >> 0x20) *
                                                    (short)uVar3,
                                                    CONCAT22((short)((ulonglong)DAT_1003e678 >> 0x10
                                                                    ) * (short)uVar4,
                                                             (short)DAT_1003e678 *
                                                             (ushort)(byte)uVar26))));
          uVar23 = (ushort)uVar26 >> 1;
          uVar27 = (ushort)((ulonglong)uVar26 >> 0x10) >> 1;
          uVar28 = (ushort)((ulonglong)uVar26 >> 0x20) >> 1;
          uVar29 = (ushort)((ulonglong)uVar26 >> 0x31);
          uVar26 = pmulhw(CONCAT26((short)((ulonglong)uVar20 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar20 >> 0x10) - uVar27,
                                                     (short)uVar20 - uVar23))),DAT_1003e680);
          uVar25 = pmulhw(CONCAT26(uVar29,CONCAT24(uVar28,CONCAT22(uVar27,uVar23))),DAT_1003e690);
          uVar20 = pmulhw(CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar29,
                                   CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar28,
                                            CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar27,
                                                     (short)uVar30 - uVar23))),DAT_1003e688);
          sVar33 = (short)((ulonglong)DAT_1003e6a0 >> 0x10);
          sVar34 = (short)((ulonglong)DAT_1003e6a0 >> 0x20);
          sVar35 = (short)((ulonglong)DAT_1003e6a0 >> 0x30);
          uVar21 = CONCAT26((short)((ulonglong)uVar26 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar26 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar26 >> 0x10) + sVar33,
                                              (short)uVar26 + (short)DAT_1003e6a0)));
          uVar31 = CONCAT26((short)((ulonglong)uVar20 >> 0x30) + sVar35,
                            CONCAT24((short)((ulonglong)uVar20 >> 0x20) + sVar34,
                                     CONCAT22((short)((ulonglong)uVar20 >> 0x10) + sVar33,
                                              (short)uVar20 + (short)DAT_1003e6a0)));
          uVar23 = (ushort)((short)uVar25 + (short)DAT_1003e698) >> 6;
          uVar27 = (ushort)((short)((ulonglong)uVar25 >> 0x10) +
                           (short)((ulonglong)DAT_1003e698 >> 0x10)) >> 6;
          uVar28 = (ushort)((short)((ulonglong)uVar25 >> 0x20) +
                           (short)((ulonglong)DAT_1003e698 >> 0x20)) >> 6;
          uVar29 = (ushort)((short)((ulonglong)uVar25 >> 0x30) +
                           (short)((ulonglong)DAT_1003e698 >> 0x30)) >> 6;
          uVar24 = CONCAT11((uVar27 != 0) * (uVar27 < 0x100) * (char)uVar27 - (0xff < uVar27),
                            (uVar23 != 0) * (uVar23 < 0x100) * (char)uVar23 - (0xff < uVar23));
          *puVar12 = uVar24;
          puVar12[param_3] =
               (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 - (0xff < uVar29),
                                CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                         (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          *puVar14 = (char)((ulonglong)uVar26 >> 8);
          *puVar19 = (char)((ulonglong)uVar26 >> 0x18);
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
          puVar19 = puVar19 + 1;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      puVar12 = (undefined2 *)((int)puVar12 + iVar16);
      puVar14 = puVar14 + iVar15;
      puVar19 = puVar19 + iVar15;
      puVar11 = (undefined8 *)((int)puVar11 + iVar7);
      puVar13 = (undefined8 *)((int)puVar13 + iVar7);
    } while (iVar17 < iVar8);
  }
  return;
}


