/* Module: erv23260.dll
   Function: FUN_63801f40
   Address: 63801f40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Unable to track spacebase fully for stack */

void FUN_63801f40(int *param_1,int *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  short sVar16;
  short sVar19;
  undefined8 uVar17;
  ulonglong uVar18;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  undefined8 uVar23;
  short sVar28;
  short sVar29;
  short sVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  short sVar35;
  short sVar36;
  short sVar37;
  undefined8 uVar34;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  
  uVar17 = DAT_6382d860;
  uVar23 = DAT_6382d850;
  uVar6 = param_1[2];
  uVar11 = (uint)(&stack0xfffffff0 + -(param_2[2] * 2 + 0x68)) & 0xfffffff8;
  uVar9 = param_1[3];
  if (param_4 != 0) {
    uVar6 = uVar6 >> 1;
    uVar9 = uVar9 >> 1;
  }
  *(uint *)(uVar11 + 4) = uVar6;
  *(uint *)(uVar11 + 8) = uVar9;
  iVar13 = *param_2;
  if (param_3 == 0) {
    sVar16 = (short)((ulonglong)DAT_6382d848 >> 0x10);
    sVar29 = (short)((ulonglong)DAT_6382d848 >> 0x20);
    sVar19 = (short)((ulonglong)DAT_6382d848 >> 0x30);
    uVar17 = CONCAT26((short)((ulonglong)uVar17 >> 0x30) - sVar19,
                      CONCAT24((short)((ulonglong)uVar17 >> 0x20) - sVar29,
                               CONCAT22((short)((ulonglong)uVar17 >> 0x10) - sVar16,
                                        (short)uVar17 - (short)DAT_6382d848)));
    uVar23 = CONCAT26((short)((ulonglong)uVar23 >> 0x30) - sVar19,
                      CONCAT24((short)((ulonglong)uVar23 >> 0x20) - sVar29,
                               CONCAT22((short)((ulonglong)uVar23 >> 0x10) - sVar16,
                                        (short)uVar23 - (short)DAT_6382d848)));
  }
  puVar12 = (undefined1 *)(*param_1 + param_1[1] * (uVar9 - 1));
  iVar7 = param_2[1];
  *(int *)(uVar11 + 0xc) = iVar7;
  iVar13 = iVar13 + iVar7 * ((uVar9 - 1) * 2 + 1);
  *(undefined1 **)uVar11 = &stack0xfffffffc;
  uVar33 = DAT_6382d858;
  iVar7 = param_1[1];
  uVar6 = *(uint *)(uVar11 + 4);
  *(undefined8 *)(uVar11 + 0x18) = uVar17;
  *(undefined8 *)(uVar11 + 0x10) = uVar23;
  uVar1 = puVar12[uVar6 - 1];
  puVar12[-1] = *puVar12;
  puVar12[uVar6] = uVar1;
  uVar2 = *(undefined4 *)(puVar12 + (uVar6 - 4));
  uVar3 = *(undefined4 *)(puVar12 + (uVar6 - 8));
  uVar18 = (ulonglong)
           CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >>
                                                                                  0x18) << 0x30) >>
                                                                   0x28),
                                                            CONCAT14((char)((uint)uVar2 >> 0x10),
                                                                     uVar2)) >> 0x20),uVar2) >> 0x18
                                  ),(char)((uint)uVar2 >> 8)),(ushort)(byte)uVar2) &
           0xffffffff00ffffff;
  do {
    sVar38 = (short)uVar33;
    sVar16 = (short)uVar18 * sVar38;
    sVar29 = (short)(uVar18 >> 0x10);
    sVar39 = (short)((ulonglong)uVar33 >> 0x10);
    sVar19 = (short)(uVar18 >> 0x20);
    sVar30 = (short)(uVar18 >> 0x30);
    sVar40 = (short)((ulonglong)uVar33 >> 0x20);
    sVar41 = (short)((ulonglong)uVar33 >> 0x30);
    sVar20 = sVar30 * sVar41;
    sVar22 = (ushort)(byte)((uint)uVar3 >> 0x18) + sVar16;
    sVar24 = (short)uVar18 + sVar29 * sVar39;
    sVar25 = sVar29 + sVar19 * sVar40;
    sVar27 = sVar19 + sVar20;
    sVar16 = sVar29 + sVar16;
    sVar29 = sVar19 + sVar29 * sVar39;
    sVar30 = sVar30 + sVar19 * sVar40;
    sVar20 = ((ushort)*(undefined4 *)(puVar12 + uVar6) & 0xff) + sVar20;
    uVar2 = *(undefined4 *)(puVar12 + (uVar6 - 8));
    uVar23 = *(undefined8 *)(uVar11 + 0x10);
    uVar17 = *(undefined8 *)(uVar11 + 0x10);
    uVar32 = psraw(CONCAT26(sVar29 + (short)((ulonglong)uVar23 >> 0x30),
                            CONCAT24(sVar24 + (short)((ulonglong)uVar23 >> 0x20),
                                     CONCAT22(sVar16 + (short)((ulonglong)uVar23 >> 0x10),
                                              sVar22 + (short)uVar23))),2);
    *(ulonglong *)(uVar11 + 0x50 + uVar6 * 4) =
         CONCAT44(CONCAT22(sVar29,sVar24),CONCAT22(sVar16,sVar22));
    uVar23 = psraw(CONCAT26(sVar20 + (short)((ulonglong)uVar17 >> 0x30),
                            CONCAT24(sVar27 + (short)((ulonglong)uVar17 >> 0x20),
                                     CONCAT22(sVar30 + (short)((ulonglong)uVar17 >> 0x10),
                                              sVar25 + (short)uVar17))),2);
    *(ulonglong *)(uVar11 + 0x58 + uVar6 * 4) =
         CONCAT26(sVar20,CONCAT24(sVar27,CONCAT22(sVar30,sVar25)));
    sVar16 = (short)uVar32;
    sVar29 = (short)((ulonglong)uVar32 >> 0x10);
    sVar19 = (short)((ulonglong)uVar32 >> 0x20);
    sVar30 = (short)((ulonglong)uVar32 >> 0x30);
    sVar20 = (short)uVar23;
    sVar22 = (short)((ulonglong)uVar23 >> 0x10);
    sVar24 = (short)((ulonglong)uVar23 >> 0x20);
    sVar25 = (short)((ulonglong)uVar23 >> 0x30);
    uVar3 = *(undefined4 *)(puVar12 + (uVar6 - 0xc));
    uVar18 = (ulonglong)
             CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                      CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >> 0x10),
                      (short)uVar2) & 0xffffffff00ff00ff;
    *(ulonglong *)(iVar13 + -8 + uVar6 * 2) =
         CONCAT17((0 < sVar25) * (sVar25 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                  (0xff < sVar25),
                  CONCAT16((0 < sVar24) * (sVar24 < 0x100) * (char)((ulonglong)uVar23 >> 0x20) -
                           (0xff < sVar24),
                           CONCAT15((0 < sVar22) * (sVar22 < 0x100) *
                                    (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar22),
                                    CONCAT14((0 < sVar20) * (sVar20 < 0x100) * (char)uVar23 -
                                             (0xff < sVar20),
                                             CONCAT13((0 < sVar30) * (sVar30 < 0x100) *
                                                      (char)((ulonglong)uVar32 >> 0x30) -
                                                      (0xff < sVar30),
                                                      CONCAT12((0 < sVar19) * (sVar19 < 0x100) *
                                                               (char)((ulonglong)uVar32 >> 0x20) -
                                                               (0xff < sVar19),
                                                               CONCAT11((0 < sVar29) *
                                                                        (sVar29 < 0x100) *
                                                                        (char)((ulonglong)uVar32 >>
                                                                              0x10) -
                                                                        (0xff < sVar29),
                                                                        (0 < sVar16) *
                                                                        (sVar16 < 0x100) *
                                                                        (char)uVar32 -
                                                                        (0xff < sVar16))))))));
    bVar15 = 3 < uVar6;
    uVar6 = uVar6 - 4;
  } while (bVar15 && uVar6 != 0);
  iVar4 = *(int *)(uVar11 + 0xc);
  iVar10 = *(int *)(uVar11 + 8) + -1;
  puVar12 = puVar12 + -iVar7;
  iVar14 = iVar13 - iVar4;
  iVar13 = iVar13 + iVar4 * -2;
  iVar8 = *(int *)(uVar11 + 4);
  do {
    *(int *)(uVar11 - 4) = iVar7;
    *(int *)(uVar11 - 8) = iVar10;
    uVar1 = puVar12[iVar8 + -1];
    puVar12[-1] = *puVar12;
    puVar12[iVar8] = uVar1;
    iVar5 = *(int *)(uVar11 - 8);
    iVar7 = *(int *)(uVar11 - 4);
    uVar2 = *(undefined4 *)(puVar12 + iVar8 + -4);
    uVar3 = *(undefined4 *)(puVar12 + iVar8 + -8);
    uVar18 = (ulonglong)
             CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >>
                                                                                    0x18) << 0x30)
                                                                     >> 0x28),
                                                              CONCAT14((char)((uint)uVar2 >> 0x10),
                                                                       uVar2)) >> 0x20),uVar2) >>
                                    0x18),(char)((uint)uVar2 >> 8)),(ushort)(byte)uVar2) &
             0xffffffff00ffffff;
    do {
      sVar16 = (short)uVar18 * sVar38;
      sVar29 = (short)(uVar18 >> 0x10);
      sVar19 = (short)(uVar18 >> 0x20);
      sVar27 = (short)(uVar18 >> 0x30);
      sVar21 = sVar27 * sVar41;
      uVar23 = *(undefined8 *)(uVar11 + 0x50 + iVar8 * 4);
      sVar30 = (ushort)(byte)((uint)uVar3 >> 0x18) + sVar16;
      sVar20 = (short)uVar18 + sVar29 * sVar39;
      sVar26 = sVar29 + sVar19 * sVar40;
      sVar28 = sVar19 + sVar21;
      sVar16 = sVar29 + sVar16;
      sVar29 = sVar19 + sVar29 * sVar39;
      sVar27 = sVar27 + sVar19 * sVar40;
      sVar21 = ((ushort)*(undefined4 *)(puVar12 + iVar8) & 0xff) + sVar21;
      sVar19 = (short)((ulonglong)uVar23 >> 0x10);
      sVar22 = (short)((ulonglong)uVar23 >> 0x20);
      sVar24 = (short)((ulonglong)uVar23 >> 0x30);
      uVar17 = *(undefined8 *)(uVar11 + 0x58 + iVar8 * 4);
      *(ulonglong *)(uVar11 + 0x50 + iVar8 * 4) =
           CONCAT44(CONCAT22(sVar29,sVar20),CONCAT22(sVar16,sVar30));
      sVar35 = (short)((ulonglong)uVar17 >> 0x10);
      sVar36 = (short)((ulonglong)uVar17 >> 0x20);
      sVar37 = (short)((ulonglong)uVar17 >> 0x30);
      uVar33 = *(undefined8 *)(uVar11 + 0x18);
      *(ulonglong *)(uVar11 + 0x58 + iVar8 * 4) =
           CONCAT26(sVar21,CONCAT24(sVar28,CONCAT22(sVar27,sVar26)));
      uVar31 = psraw(CONCAT26(sVar24 * sVar41 + sVar29 + (short)((ulonglong)uVar33 >> 0x30),
                              CONCAT24(sVar22 * sVar40 + sVar20 + (short)((ulonglong)uVar33 >> 0x20)
                                       ,CONCAT22(sVar19 * sVar39 + sVar16 +
                                                 (short)((ulonglong)uVar33 >> 0x10),
                                                 (short)uVar23 * sVar38 + sVar30 + (short)uVar33))),
                     4);
      uVar33 = *(undefined8 *)(uVar11 + 0x18);
      uVar32 = *(undefined8 *)(uVar11 + 0x18);
      uVar34 = psraw(CONCAT26(sVar37 * sVar41 + sVar21 + (short)((ulonglong)uVar33 >> 0x30),
                              CONCAT24(sVar36 * sVar40 + sVar28 + (short)((ulonglong)uVar33 >> 0x20)
                                       ,CONCAT22(sVar35 * sVar39 + sVar27 +
                                                 (short)((ulonglong)uVar33 >> 0x10),
                                                 (short)uVar17 * sVar38 + sVar26 + (short)uVar33))),
                     4);
      uVar33 = psraw(CONCAT26(sVar29 * sVar41 + sVar24 + (short)((ulonglong)uVar32 >> 0x30),
                              CONCAT24(sVar20 * sVar40 + sVar22 + (short)((ulonglong)uVar32 >> 0x20)
                                       ,CONCAT22(sVar16 * sVar39 + sVar19 +
                                                 (short)((ulonglong)uVar32 >> 0x10),
                                                 sVar30 * sVar38 + (short)uVar23 + (short)uVar32))),
                     4);
      uVar23 = *(undefined8 *)(uVar11 + 0x18);
      sVar16 = (short)uVar31;
      sVar29 = (short)((ulonglong)uVar31 >> 0x10);
      sVar19 = (short)((ulonglong)uVar31 >> 0x20);
      sVar30 = (short)((ulonglong)uVar31 >> 0x30);
      sVar20 = (short)uVar34;
      sVar22 = (short)((ulonglong)uVar34 >> 0x10);
      sVar24 = (short)((ulonglong)uVar34 >> 0x20);
      sVar25 = (short)((ulonglong)uVar34 >> 0x30);
      uVar2 = *(undefined4 *)(puVar12 + iVar8 + -8);
      uVar23 = psraw(CONCAT26(sVar21 * sVar41 + sVar37 + (short)((ulonglong)uVar23 >> 0x30),
                              CONCAT24(sVar28 * sVar40 + sVar36 + (short)((ulonglong)uVar23 >> 0x20)
                                       ,CONCAT22(sVar27 * sVar39 + sVar35 +
                                                 (short)((ulonglong)uVar23 >> 0x10),
                                                 sVar26 * sVar38 + (short)uVar17 + (short)uVar23))),
                     4);
      *(ulonglong *)(iVar14 + -8 + iVar8 * 2) =
           CONCAT17((0 < sVar25) * (sVar25 < 0x100) * (char)((ulonglong)uVar34 >> 0x30) -
                    (0xff < sVar25),
                    CONCAT16((0 < sVar24) * (sVar24 < 0x100) * (char)((ulonglong)uVar34 >> 0x20) -
                             (0xff < sVar24),
                             CONCAT15((0 < sVar22) * (sVar22 < 0x100) *
                                      (char)((ulonglong)uVar34 >> 0x10) - (0xff < sVar22),
                                      CONCAT14((0 < sVar20) * (sVar20 < 0x100) * (char)uVar34 -
                                               (0xff < sVar20),
                                               CONCAT13((0 < sVar30) * (sVar30 < 0x100) *
                                                        (char)((ulonglong)uVar31 >> 0x30) -
                                                        (0xff < sVar30),
                                                        CONCAT12((0 < sVar19) * (sVar19 < 0x100) *
                                                                 (char)((ulonglong)uVar31 >> 0x20) -
                                                                 (0xff < sVar19),
                                                                 CONCAT11((0 < sVar29) *
                                                                          (sVar29 < 0x100) *
                                                                          (char)((ulonglong)uVar31
                                                                                >> 0x10) -
                                                                          (0xff < sVar29),
                                                                          (0 < sVar16) *
                                                                          (sVar16 < 0x100) *
                                                                          (char)uVar31 -
                                                                          (0xff < sVar16))))))));
      sVar16 = (short)uVar33;
      sVar29 = (short)((ulonglong)uVar33 >> 0x10);
      sVar19 = (short)((ulonglong)uVar33 >> 0x20);
      sVar30 = (short)((ulonglong)uVar33 >> 0x30);
      sVar20 = (short)uVar23;
      sVar22 = (short)((ulonglong)uVar23 >> 0x10);
      sVar24 = (short)((ulonglong)uVar23 >> 0x20);
      sVar25 = (short)((ulonglong)uVar23 >> 0x30);
      uVar3 = *(undefined4 *)(puVar12 + iVar8 + -0xc);
      uVar18 = (ulonglong)
               CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),
                                        CONCAT12((char)((uint)uVar2 >> 8),(short)uVar2)) >> 0x10),
                        (short)uVar2) & 0xffffffff00ff00ff;
      *(ulonglong *)(iVar13 + -8 + iVar8 * 2) =
           CONCAT17((0 < sVar25) * (sVar25 < 0x100) * (char)((ulonglong)uVar23 >> 0x30) -
                    (0xff < sVar25),
                    CONCAT16((0 < sVar24) * (sVar24 < 0x100) * (char)((ulonglong)uVar23 >> 0x20) -
                             (0xff < sVar24),
                             CONCAT15((0 < sVar22) * (sVar22 < 0x100) *
                                      (char)((ulonglong)uVar23 >> 0x10) - (0xff < sVar22),
                                      CONCAT14((0 < sVar20) * (sVar20 < 0x100) * (char)uVar23 -
                                               (0xff < sVar20),
                                               CONCAT13((0 < sVar30) * (sVar30 < 0x100) *
                                                        (char)((ulonglong)uVar33 >> 0x30) -
                                                        (0xff < sVar30),
                                                        CONCAT12((0 < sVar19) * (sVar19 < 0x100) *
                                                                 (char)((ulonglong)uVar33 >> 0x20) -
                                                                 (0xff < sVar19),
                                                                 CONCAT11((0 < sVar29) *
                                                                          (sVar29 < 0x100) *
                                                                          (char)((ulonglong)uVar33
                                                                                >> 0x10) -
                                                                          (0xff < sVar29),
                                                                          (0 < sVar16) *
                                                                          (sVar16 < 0x100) *
                                                                          (char)uVar33 -
                                                                          (0xff < sVar16))))))));
      iVar10 = iVar8 + -4;
      bVar15 = 3 < iVar8;
      iVar8 = iVar10;
    } while (iVar10 != 0 && bVar15);
    puVar12 = puVar12 + -iVar7;
    iVar14 = iVar14 + iVar4 * -2;
    iVar13 = iVar13 + iVar4 * -2;
    iVar8 = *(int *)(uVar11 + 4);
    iVar10 = iVar5 + -1;
  } while (iVar10 != 0 && 0 < iVar5);
  uVar23 = *(undefined8 *)(uVar11 + 0x10);
  uVar17 = *(undefined8 *)(uVar11 + 0x50 + iVar8 * 4);
  uVar33 = *(undefined8 *)(uVar11 + 0x58 + iVar8 * 4);
  sVar16 = (short)uVar23;
  sVar29 = (short)((ulonglong)uVar23 >> 0x10);
  sVar19 = (short)((ulonglong)uVar23 >> 0x20);
  sVar30 = (short)((ulonglong)uVar23 >> 0x30);
  uVar33 = CONCAT26((short)((ulonglong)uVar33 >> 0x30) + sVar30,
                    CONCAT24((short)((ulonglong)uVar33 >> 0x20) + sVar19,
                             CONCAT22((short)((ulonglong)uVar33 >> 0x10) + sVar29,
                                      (short)uVar33 + sVar16)));
  uVar23 = psraw(CONCAT26((short)((ulonglong)uVar17 >> 0x30) + sVar30,
                          CONCAT24((short)((ulonglong)uVar17 >> 0x20) + sVar19,
                                   CONCAT22((short)((ulonglong)uVar17 >> 0x10) + sVar29,
                                            (short)uVar17 + sVar16))),2);
  do {
    uVar17 = *(undefined8 *)(uVar11 + 0x40 + iVar8 * 4);
    uVar32 = psraw(uVar33,2);
    uVar33 = *(undefined8 *)(uVar11 + 0x48 + iVar8 * 4);
    sVar20 = (short)uVar23;
    sVar22 = (short)((ulonglong)uVar23 >> 0x10);
    sVar24 = (short)((ulonglong)uVar23 >> 0x20);
    sVar25 = (short)((ulonglong)uVar23 >> 0x30);
    sVar27 = (short)uVar32;
    sVar38 = (short)((ulonglong)uVar32 >> 0x10);
    sVar39 = (short)((ulonglong)uVar32 >> 0x20);
    sVar40 = (short)((ulonglong)uVar32 >> 0x30);
    *(ulonglong *)(iVar14 + -8 + iVar8 * 2) =
         CONCAT17((0 < sVar40) * (sVar40 < 0x100) * (char)((ulonglong)uVar32 >> 0x30) -
                  (0xff < sVar40),
                  CONCAT16((0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar32 >> 0x20) -
                           (0xff < sVar39),
                           CONCAT15((0 < sVar38) * (sVar38 < 0x100) *
                                    (char)((ulonglong)uVar32 >> 0x10) - (0xff < sVar38),
                                    CONCAT14((0 < sVar27) * (sVar27 < 0x100) * (char)uVar32 -
                                             (0xff < sVar27),
                                             CONCAT13((0 < sVar25) * (sVar25 < 0x100) *
                                                      (char)((ulonglong)uVar23 >> 0x30) -
                                                      (0xff < sVar25),
                                                      CONCAT12((0 < sVar24) * (sVar24 < 0x100) *
                                                               (char)((ulonglong)uVar23 >> 0x20) -
                                                               (0xff < sVar24),
                                                               CONCAT11((0 < sVar22) *
                                                                        (sVar22 < 0x100) *
                                                                        (char)((ulonglong)uVar23 >>
                                                                              0x10) -
                                                                        (0xff < sVar22),
                                                                        (0 < sVar20) *
                                                                        (sVar20 < 0x100) *
                                                                        (char)uVar23 -
                                                                        (0xff < sVar20))))))));
    uVar32 = psraw(CONCAT26((short)((ulonglong)uVar17 >> 0x30) + sVar30,
                            CONCAT24((short)((ulonglong)uVar17 >> 0x20) + sVar19,
                                     CONCAT22((short)((ulonglong)uVar17 >> 0x10) + sVar29,
                                              (short)uVar17 + sVar16))),2);
    uVar23 = *(undefined8 *)(uVar11 + 0x30 + iVar8 * 4);
    uVar31 = psraw(CONCAT26((short)((ulonglong)uVar33 >> 0x30) + sVar30,
                            CONCAT24((short)((ulonglong)uVar33 >> 0x20) + sVar19,
                                     CONCAT22((short)((ulonglong)uVar33 >> 0x10) + sVar29,
                                              (short)uVar33 + sVar16))),2);
    uVar17 = *(undefined8 *)(uVar11 + 0x38 + iVar8 * 4);
    sVar20 = (short)uVar32;
    sVar22 = (short)((ulonglong)uVar32 >> 0x10);
    sVar24 = (short)((ulonglong)uVar32 >> 0x20);
    sVar25 = (short)((ulonglong)uVar32 >> 0x30);
    sVar27 = (short)uVar31;
    sVar38 = (short)((ulonglong)uVar31 >> 0x10);
    sVar39 = (short)((ulonglong)uVar31 >> 0x20);
    sVar40 = (short)((ulonglong)uVar31 >> 0x30);
    uVar33 = CONCAT26((short)((ulonglong)uVar17 >> 0x30) + sVar30,
                      CONCAT24((short)((ulonglong)uVar17 >> 0x20) + sVar19,
                               CONCAT22((short)((ulonglong)uVar17 >> 0x10) + sVar29,
                                        (short)uVar17 + sVar16)));
    *(ulonglong *)(iVar14 + -0x10 + iVar8 * 2) =
         CONCAT17((0 < sVar40) * (sVar40 < 0x100) * (char)((ulonglong)uVar31 >> 0x30) -
                  (0xff < sVar40),
                  CONCAT16((0 < sVar39) * (sVar39 < 0x100) * (char)((ulonglong)uVar31 >> 0x20) -
                           (0xff < sVar39),
                           CONCAT15((0 < sVar38) * (sVar38 < 0x100) *
                                    (char)((ulonglong)uVar31 >> 0x10) - (0xff < sVar38),
                                    CONCAT14((0 < sVar27) * (sVar27 < 0x100) * (char)uVar31 -
                                             (0xff < sVar27),
                                             CONCAT13((0 < sVar25) * (sVar25 < 0x100) *
                                                      (char)((ulonglong)uVar32 >> 0x30) -
                                                      (0xff < sVar25),
                                                      CONCAT12((0 < sVar24) * (sVar24 < 0x100) *
                                                               (char)((ulonglong)uVar32 >> 0x20) -
                                                               (0xff < sVar24),
                                                               CONCAT11((0 < sVar22) *
                                                                        (sVar22 < 0x100) *
                                                                        (char)((ulonglong)uVar32 >>
                                                                              0x10) -
                                                                        (0xff < sVar22),
                                                                        (0 < sVar20) *
                                                                        (sVar20 < 0x100) *
                                                                        (char)uVar32 -
                                                                        (0xff < sVar20))))))));
    uVar23 = psraw(CONCAT26((short)((ulonglong)uVar23 >> 0x30) + sVar30,
                            CONCAT24((short)((ulonglong)uVar23 >> 0x20) + sVar19,
                                     CONCAT22((short)((ulonglong)uVar23 >> 0x10) + sVar29,
                                              (short)uVar23 + sVar16))),2);
    iVar13 = iVar8 + -8;
    bVar15 = 7 < iVar8;
    iVar8 = iVar13;
  } while (iVar13 != 0 && bVar15);
  return;
}


