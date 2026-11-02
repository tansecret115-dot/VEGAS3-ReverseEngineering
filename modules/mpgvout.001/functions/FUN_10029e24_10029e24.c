/* Module: mpgvout.001
   Function: FUN_10029e24
   Address: 10029e24
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_10029e24(undefined8 *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

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
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
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
  
  iVar9 = param_3 >> 1;
  iVar1 = param_5 >> 1;
  iVar11 = iVar9 * 2 - iVar1;
  iVar12 = param_3 * 4 - param_5;
  iVar16 = param_2 * 4 + param_5 * -3;
  puVar14 = (undefined8 *)((int)param_1 + param_2 * 2);
  iVar7 = param_6 >> 2;
  puVar13 = (undefined2 *)*param_4;
  puVar19 = (undefined1 *)param_4[2];
  puVar15 = (undefined1 *)param_4[1];
  iVar17 = 0;
  if (0 < iVar7) {
    iVar8 = (param_5 >> 4) << 3;
    puVar10 = param_1;
    do {
      iVar17 = iVar17 + 1;
      local_1c = 0;
      if (0 < iVar8) {
        puVar18 = puVar13 + param_3;
        do {
          uVar26 = *puVar10;
          uVar25 = *puVar14;
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          *puVar13 = uVar24;
          *puVar18 = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                      (0xff < uVar29),
                                      CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                               (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          *puVar19 = (char)((ulonglong)uVar26 >> 8);
          *puVar15 = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 6);
          uVar25 = *(undefined8 *)((int)puVar14 + 6);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[1] = uVar24;
          puVar18[1] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[1] = (char)((ulonglong)uVar26 >> 8);
          puVar15[1] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0xc);
          uVar25 = *(undefined8 *)((int)puVar14 + 0xc);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[2] = uVar24;
          puVar18[2] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[2] = (char)((ulonglong)uVar26 >> 8);
          puVar15[2] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0x12);
          uVar25 = *(undefined8 *)((int)puVar14 + 0x12);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[3] = uVar24;
          puVar18[3] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[3] = (char)((ulonglong)uVar26 >> 8);
          puVar15[3] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar10[3];
          uVar25 = puVar14[3];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[4] = uVar24;
          puVar18[4] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[4] = (char)((ulonglong)uVar26 >> 8);
          puVar15[4] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0x1e);
          uVar25 = *(undefined8 *)((int)puVar14 + 0x1e);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[5] = uVar24;
          puVar18[5] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[5] = (char)((ulonglong)uVar26 >> 8);
          puVar15[5] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0x24);
          uVar25 = *(undefined8 *)((int)puVar14 + 0x24);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[6] = uVar24;
          puVar18[6] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[6] = (char)((ulonglong)uVar26 >> 8);
          puVar15[6] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0x2a);
          uVar25 = *(undefined8 *)((int)puVar14 + 0x2a);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[7] = uVar24;
          puVar18[7] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar19[7] = (char)((ulonglong)uVar26 >> 8);
          puVar15[7] = (char)((ulonglong)uVar26 >> 0x18);
          puVar18 = puVar18 + 8;
          puVar13 = puVar13 + 8;
          puVar19 = puVar19 + 8;
          puVar15 = puVar15 + 8;
          puVar10 = puVar10 + 6;
          puVar14 = puVar14 + 6;
          local_1c = local_1c + 8;
        } while (local_1c < iVar8);
      }
      if (local_1c < iVar1) {
        local_1c = iVar1 - local_1c;
        do {
          uVar26 = *puVar10;
          uVar25 = *puVar14;
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          *puVar13 = uVar24;
          puVar13[param_3] =
               (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 - (0xff < uVar29),
                                CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                         (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          *puVar19 = (char)((ulonglong)uVar26 >> 8);
          *puVar15 = (char)((ulonglong)uVar26 >> 0x18);
          puVar13 = puVar13 + 1;
          puVar19 = puVar19 + 1;
          puVar15 = puVar15 + 1;
          puVar10 = (undefined8 *)((int)puVar10 + 6);
          puVar14 = (undefined8 *)((int)puVar14 + 6);
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      puVar13 = (undefined2 *)((int)puVar13 + iVar12);
      puVar19 = puVar19 + iVar11;
      puVar15 = puVar15 + iVar11;
      puVar10 = (undefined8 *)((int)puVar10 + iVar16);
      puVar14 = (undefined8 *)((int)puVar14 + iVar16);
    } while (iVar17 < iVar7);
  }
  puVar10 = (undefined8 *)((int)param_1 + param_2);
  puVar14 = (undefined8 *)((int)puVar10 + param_2 * 2);
  puVar13 = (undefined2 *)(param_3 + *param_4);
  puVar15 = (undefined1 *)(iVar9 + param_4[2]);
  puVar19 = (undefined1 *)(iVar9 + param_4[1]);
  if (0 < iVar7) {
    iVar9 = (param_5 >> 4) << 3;
    iVar17 = 0;
    do {
      iVar17 = iVar17 + 1;
      local_1c = 0;
      if (0 < iVar9) {
        puVar18 = puVar13 + param_3;
        do {
          uVar26 = *puVar10;
          uVar25 = *puVar14;
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          *puVar13 = uVar24;
          *puVar18 = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                      (0xff < uVar29),
                                      CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                               (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          *puVar15 = (char)((ulonglong)uVar26 >> 8);
          *puVar19 = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 6);
          uVar25 = *(undefined8 *)((int)puVar14 + 6);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[1] = uVar24;
          puVar18[1] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar15[1] = (char)((ulonglong)uVar26 >> 8);
          puVar19[1] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0xc);
          uVar25 = *(undefined8 *)((int)puVar14 + 0xc);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[2] = uVar24;
          puVar18[2] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar15[2] = (char)((ulonglong)uVar26 >> 8);
          puVar19[2] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0x12);
          uVar25 = *(undefined8 *)((int)puVar14 + 0x12);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[3] = uVar24;
          puVar18[3] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar15[3] = (char)((ulonglong)uVar26 >> 8);
          puVar19[3] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = puVar10[3];
          uVar25 = puVar14[3];
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[4] = uVar24;
          puVar18[4] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar15[4] = (char)((ulonglong)uVar26 >> 8);
          puVar19[4] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0x1e);
          uVar25 = *(undefined8 *)((int)puVar14 + 0x1e);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[5] = uVar24;
          puVar18[5] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar15[5] = (char)((ulonglong)uVar26 >> 8);
          puVar19[5] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0x24);
          uVar25 = *(undefined8 *)((int)puVar14 + 0x24);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[6] = uVar24;
          puVar18[6] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar15[6] = (char)((ulonglong)uVar26 >> 8);
          puVar19[6] = (char)((ulonglong)uVar26 >> 0x18);
          uVar26 = *(undefined8 *)((int)puVar10 + 0x2a);
          uVar25 = *(undefined8 *)((int)puVar14 + 0x2a);
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          puVar13[7] = uVar24;
          puVar18[7] = (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 -
                                        (0xff < uVar29),
                                        CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                                 (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          puVar15[7] = (char)((ulonglong)uVar26 >> 8);
          puVar19[7] = (char)((ulonglong)uVar26 >> 0x18);
          puVar18 = puVar18 + 8;
          puVar13 = puVar13 + 8;
          puVar15 = puVar15 + 8;
          puVar19 = puVar19 + 8;
          puVar10 = puVar10 + 6;
          puVar14 = puVar14 + 6;
          local_1c = local_1c + 8;
        } while (local_1c < iVar9);
      }
      if (local_1c < iVar1) {
        local_1c = iVar1 - local_1c;
        do {
          uVar26 = *puVar10;
          uVar25 = *puVar14;
          uVar32 = (undefined1)((ulonglong)uVar26 >> 0x28);
          bVar22 = (byte)((ulonglong)uVar26 >> 0x10);
          uVar24 = CONCAT11(uVar32,bVar22);
          uVar27 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x18) << 0x30) >> 0x28);
          uVar3 = CONCAT21(uVar27,(char)uVar25);
          uVar4 = CONCAT41((int)(((uint7)uVar3 << 0x20) >> 0x18),(char)((ulonglong)uVar26 >> 0x18));
          uVar23 = (ushort)(((uint7)(byte)((ulonglong)uVar25 >> 0x28) << 0x30) >> 0x28);
          uVar5 = CONCAT21(uVar23,(char)((ulonglong)uVar25 >> 0x10));
          uVar2 = CONCAT43((int)(((uint7)uVar5 << 0x20) >> 0x18),CONCAT12(uVar32,uVar24));
          uVar20 = psllw((ulonglong)CONCAT52((int5)((uint7)uVar2 >> 0x10),uVar24) &
                         0xffffffffffff00ff,7);
          uVar25 = paddusw(CONCAT26((ushort)(byte)((ulonglong)uVar25 >> 0x20) *
                                    (short)((ulonglong)DAT_1003e670 >> 0x30),
                                    CONCAT24((ushort)(byte)((ulonglong)uVar25 >> 8) *
                                             (short)((ulonglong)DAT_1003e670 >> 0x20),
                                             CONCAT22((ushort)(byte)((ulonglong)uVar26 >> 0x20) *
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
          *puVar13 = uVar24;
          puVar13[param_3] =
               (short)(CONCAT13((uVar29 != 0) * (uVar29 < 0x100) * (char)uVar29 - (0xff < uVar29),
                                CONCAT12((uVar28 != 0) * (uVar28 < 0x100) * (char)uVar28 -
                                         (0xff < uVar28),uVar24)) >> 0x10);
          uVar26 = paddusw(uVar21 >> 0x20,uVar21);
          uVar25 = paddusw(uVar31 >> 0x20,uVar31);
          uVar6 = CONCAT22((short)((ulonglong)uVar25 >> 0x10),(short)((ulonglong)uVar26 >> 0x10));
          uVar26 = paddusw((ulonglong)uVar6,CONCAT44(uVar6,CONCAT22((short)uVar25,(short)uVar26)));
          *puVar15 = (char)((ulonglong)uVar26 >> 8);
          *puVar19 = (char)((ulonglong)uVar26 >> 0x18);
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
          puVar19 = puVar19 + 1;
          puVar10 = (undefined8 *)((int)puVar10 + 6);
          puVar14 = (undefined8 *)((int)puVar14 + 6);
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      puVar13 = (undefined2 *)((int)puVar13 + iVar12);
      puVar15 = puVar15 + iVar11;
      puVar19 = puVar19 + iVar11;
      puVar10 = (undefined8 *)((int)puVar10 + iVar16);
      puVar14 = (undefined8 *)((int)puVar14 + iVar16);
    } while (iVar17 < iVar7);
  }
  return;
}


