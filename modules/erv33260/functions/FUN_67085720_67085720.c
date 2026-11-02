/* Module: erv33260.dll
   Function: FUN_67085720
   Address: 67085720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_67085720(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar8;
  ushort uVar9;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar10;
  undefined8 uVar11;
  ushort uVar12;
  ushort uVar14;
  ushort uVar15;
  undefined8 uVar13;
  ushort uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (param_5 != 0) {
    iVar4 = 4;
    do {
      uVar18 = param_2[1];
      uVar19 = *(undefined8 *)((int)param_2 + param_4);
      uVar7 = *(undefined8 *)((int)param_2 + param_4 + 8);
      puVar1 = (undefined8 *)((int)param_2 + param_4 * 2);
      *param_1 = *param_2;
      param_1[1] = uVar18;
      param_1[2] = uVar19;
      param_1[3] = uVar7;
      uVar18 = puVar1[1];
      uVar19 = *(undefined8 *)((int)puVar1 + param_4);
      uVar7 = *(undefined8 *)((int)puVar1 + param_4 + 8);
      param_2 = (undefined8 *)((int)puVar1 + param_4 * 2);
      param_1[4] = *puVar1;
      param_1[5] = uVar18;
      param_1[6] = uVar19;
      param_1[7] = uVar7;
      param_1 = param_1 + 8;
      iVar3 = iVar4 + -1;
      bVar2 = 0 < iVar4;
      iVar4 = iVar3;
    } while (iVar3 != 0 && bVar2);
    return;
  }
  if (param_6 != param_7) {
    uVar18 = packssdw(CONCAT44(param_6,param_6),CONCAT44(param_6,param_6));
    uVar19 = packssdw(CONCAT44(param_7,param_7),CONCAT44(param_7,param_7));
    iVar4 = 0x10;
    do {
      uVar7 = *param_3;
      uVar6 = psllw((ulonglong)
                    CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)uVar7
                                                                                   >> 0x18) << 0x30)
                                                                    >> 0x28),
                                                             (char)((ulonglong)uVar7 >> 0x10)) <<
                                            0x20) >> 0x18),(char)((ulonglong)uVar7 >> 8)),
                             (ushort)(byte)uVar7),7);
      uVar13 = psllw((ulonglong)
                     CONCAT16((char)((ulonglong)uVar7 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar7 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar7 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar7 >> 0x20
                                                                           )))),7);
      uVar7 = *param_2;
      uVar11 = psllw((ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar7 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar7 >> 0x10)) << 0x20) >> 0x18
                                                  ),CONCAT12((char)((ulonglong)uVar7 >> 8),
                                                             (short)uVar7)) >> 0x10),(short)uVar7) &
                     0xffff00ff00ff00ff,7);
      uVar17 = psllw((ulonglong)
                     CONCAT16((char)((ulonglong)uVar7 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar7 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar7 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar7 >> 0x20
                                                                           )))),7);
      uVar7 = pmulhw(uVar6,uVar18);
      uVar6 = pmulhw(uVar11,uVar19);
      uVar7 = paddusw(uVar7,uVar6);
      uVar7 = paddusw(uVar7,_DAT_67091e08);
      uVar5 = (ushort)uVar7 >> 5;
      uVar8 = (ushort)((ulonglong)uVar7 >> 0x10) >> 5;
      uVar9 = (ushort)((ulonglong)uVar7 >> 0x20) >> 5;
      uVar10 = (ushort)((ulonglong)uVar7 >> 0x35);
      uVar7 = pmulhw(uVar13,uVar18);
      uVar6 = pmulhw(uVar17,uVar19);
      uVar7 = paddusw(uVar7,uVar6);
      uVar7 = paddusw(uVar7,_DAT_67091e08);
      uVar12 = (ushort)uVar7 >> 5;
      uVar14 = (ushort)((ulonglong)uVar7 >> 0x10) >> 5;
      uVar15 = (ushort)((ulonglong)uVar7 >> 0x20) >> 5;
      uVar16 = (ushort)((ulonglong)uVar7 >> 0x35);
      *param_1 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                          CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15)
                                   ,CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                             (0xff < uVar14),
                                             CONCAT14((uVar12 != 0) * (uVar12 < 0x100) *
                                                      (char)uVar12 - (0xff < uVar12),
                                                      CONCAT13((uVar10 != 0) * (uVar10 < 0x100) *
                                                               (char)uVar10 - (0xff < uVar10),
                                                               CONCAT12((uVar9 != 0) *
                                                                        (uVar9 < 0x100) *
                                                                        (char)uVar9 - (0xff < uVar9)
                                                                        ,CONCAT11((uVar8 != 0) *
                                                                                  (uVar8 < 0x100) *
                                                                                  (char)uVar8 -
                                                                                  (0xff < uVar8),
                                                                                  (uVar5 != 0) *
                                                                                  (uVar5 < 0x100) *
                                                                                  (char)uVar5 -
                                                                                  (0xff < uVar5)))))
                                            )));
      uVar7 = param_3[1];
      uVar17 = psllw((ulonglong)
                     CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)
                                                                                     uVar7 >> 0x18)
                                                                      << 0x30) >> 0x28),
                                                              (char)((ulonglong)uVar7 >> 0x10)) <<
                                             0x20) >> 0x18),(char)((ulonglong)uVar7 >> 8)),
                              (ushort)(byte)uVar7),7);
      uVar11 = psllw((ulonglong)
                     CONCAT16((char)((ulonglong)uVar7 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar7 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar7 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar7 >> 0x20
                                                                           )))),7);
      uVar7 = param_2[1];
      uVar6 = psllw((ulonglong)
                    CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar7 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar7 >> 0x10)) << 0x20) >> 0x18
                                                  ),CONCAT12((char)((ulonglong)uVar7 >> 8),
                                                             (short)uVar7)) >> 0x10),(short)uVar7) &
                    0xffff00ff00ff00ff,7);
      uVar13 = psllw((ulonglong)
                     CONCAT16((char)((ulonglong)uVar7 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar7 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar7 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar7 >> 0x20
                                                                           )))),7);
      uVar17 = pmulhw(uVar17,uVar18);
      uVar7 = pmulhw(uVar6,uVar19);
      uVar7 = paddusw(uVar17,uVar7);
      uVar7 = paddusw(uVar7,_DAT_67091e08);
      uVar12 = (ushort)uVar7 >> 5;
      uVar14 = (ushort)((ulonglong)uVar7 >> 0x10) >> 5;
      uVar15 = (ushort)((ulonglong)uVar7 >> 0x20) >> 5;
      uVar16 = (ushort)((ulonglong)uVar7 >> 0x35);
      uVar7 = pmulhw(uVar11,uVar18);
      uVar6 = pmulhw(uVar13,uVar19);
      uVar7 = paddusw(uVar7,uVar6);
      uVar7 = paddusw(uVar7,_DAT_67091e08);
      uVar5 = (ushort)uVar7 >> 5;
      uVar8 = (ushort)((ulonglong)uVar7 >> 0x10) >> 5;
      uVar9 = (ushort)((ulonglong)uVar7 >> 0x20) >> 5;
      uVar10 = (ushort)((ulonglong)uVar7 >> 0x35);
      param_1[1] = CONCAT17((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                            CONCAT16((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                                     CONCAT15((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 -
                                              (0xff < uVar8),
                                              CONCAT14((uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5
                                                       - (0xff < uVar5),
                                                       CONCAT13((uVar16 != 0) * (uVar16 < 0x100) *
                                                                (char)uVar16 - (0xff < uVar16),
                                                                CONCAT12((uVar15 != 0) *
                                                                         (uVar15 < 0x100) *
                                                                         (char)uVar15 -
                                                                         (0xff < uVar15),
                                                                         CONCAT11((uVar14 != 0) *
                                                                                  (uVar14 < 0x100) *
                                                                                  (char)uVar14 -
                                                                                  (0xff < uVar14),
                                                                                  (uVar12 != 0) *
                                                                                  (uVar12 < 0x100) *
                                                                                  (char)uVar12 -
                                                                                  (0xff < uVar12))))
                                                      ))));
      param_3 = (undefined8 *)((int)param_3 + param_4);
      param_2 = (undefined8 *)((int)param_2 + param_4);
      param_1 = param_1 + 2;
      iVar3 = iVar4 + -1;
      bVar2 = 0 < iVar4;
      iVar4 = iVar3;
    } while (iVar3 != 0 && bVar2);
    return;
  }
  iVar4 = 0x10;
  do {
    uVar18 = *param_3;
    uVar19 = *param_2;
    uVar7 = paddusw((ulonglong)
                    CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)
                                                                                    uVar18 >> 0x18)
                                                                     << 0x30) >> 0x28),
                                                             (char)((ulonglong)uVar18 >> 0x10)) <<
                                            0x20) >> 0x18),(char)((ulonglong)uVar18 >> 8)),
                             (ushort)(byte)uVar18),
                    (ulonglong)
                    CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar19 >> 0x10)) << 0x20) >>
                                                  0x18),
                                             CONCAT12((char)((ulonglong)uVar19 >> 8),(short)uVar19))
                                   >> 0x10),(short)uVar19) & 0xffff00ff00ff00ff);
    uVar7 = paddusw(uVar7,0x1000100010001);
    uVar5 = (ushort)uVar7 >> 1;
    uVar8 = (ushort)((ulonglong)uVar7 >> 0x10) >> 1;
    uVar9 = (ushort)((ulonglong)uVar7 >> 0x20) >> 1;
    uVar10 = (ushort)((ulonglong)uVar7 >> 0x31);
    uVar18 = paddusw((ulonglong)
                     CONCAT16((char)((ulonglong)uVar18 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar18 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar18 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar18 >>
                                                                           0x20)))),
                     (ulonglong)
                     CONCAT16((char)((ulonglong)uVar19 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar19 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar19 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar19 >>
                                                                           0x20)))));
    uVar18 = paddusw(uVar18,0x1000100010001);
    uVar12 = (ushort)uVar18 >> 1;
    uVar14 = (ushort)((ulonglong)uVar18 >> 0x10) >> 1;
    uVar15 = (ushort)((ulonglong)uVar18 >> 0x20) >> 1;
    uVar16 = (ushort)((ulonglong)uVar18 >> 0x31);
    *param_1 = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                        CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                                 CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                          (0xff < uVar14),
                                          CONCAT14((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                                   (0xff < uVar12),
                                                   CONCAT13((uVar10 != 0) * (uVar10 < 0x100) *
                                                            (char)uVar10 - (0xff < uVar10),
                                                            CONCAT12((uVar9 != 0) * (uVar9 < 0x100)
                                                                     * (char)uVar9 - (0xff < uVar9),
                                                                     CONCAT11((uVar8 != 0) *
                                                                              (uVar8 < 0x100) *
                                                                              (char)uVar8 -
                                                                              (0xff < uVar8),
                                                                              (uVar5 != 0) *
                                                                              (uVar5 < 0x100) *
                                                                              (char)uVar5 -
                                                                              (0xff < uVar5))))))));
    uVar18 = param_3[1];
    uVar19 = param_2[1];
    uVar7 = paddusw((ulonglong)
                    CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)
                                                                                    uVar18 >> 0x18)
                                                                     << 0x30) >> 0x28),
                                                             (char)((ulonglong)uVar18 >> 0x10)) <<
                                            0x20) >> 0x18),(char)((ulonglong)uVar18 >> 8)),
                             (ushort)(byte)uVar18),
                    (ulonglong)
                    CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar19 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar19 >> 0x10)) << 0x20) >>
                                                  0x18),
                                             CONCAT12((char)((ulonglong)uVar19 >> 8),(short)uVar19))
                                   >> 0x10),(short)uVar19) & 0xffff00ff00ff00ff);
    uVar7 = paddusw(uVar7,0x1000100010001);
    uVar5 = (ushort)uVar7 >> 1;
    uVar8 = (ushort)((ulonglong)uVar7 >> 0x10) >> 1;
    uVar9 = (ushort)((ulonglong)uVar7 >> 0x20) >> 1;
    uVar10 = (ushort)((ulonglong)uVar7 >> 0x31);
    uVar18 = paddusw((ulonglong)
                     CONCAT16((char)((ulonglong)uVar18 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar18 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar18 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar18 >>
                                                                           0x20)))),
                     (ulonglong)
                     CONCAT16((char)((ulonglong)uVar19 >> 0x38),
                              (uint6)CONCAT14((char)((ulonglong)uVar19 >> 0x30),
                                              (uint)CONCAT12((char)((ulonglong)uVar19 >> 0x28),
                                                             (ushort)(byte)((ulonglong)uVar19 >>
                                                                           0x20)))));
    uVar18 = paddusw(uVar18,0x1000100010001);
    uVar12 = (ushort)uVar18 >> 1;
    uVar14 = (ushort)((ulonglong)uVar18 >> 0x10) >> 1;
    uVar15 = (ushort)((ulonglong)uVar18 >> 0x20) >> 1;
    uVar16 = (ushort)((ulonglong)uVar18 >> 0x31);
    param_1[1] = CONCAT17((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                          CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15)
                                   ,CONCAT15((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 -
                                             (0xff < uVar14),
                                             CONCAT14((uVar12 != 0) * (uVar12 < 0x100) *
                                                      (char)uVar12 - (0xff < uVar12),
                                                      CONCAT13((uVar10 != 0) * (uVar10 < 0x100) *
                                                               (char)uVar10 - (0xff < uVar10),
                                                               CONCAT12((uVar9 != 0) *
                                                                        (uVar9 < 0x100) *
                                                                        (char)uVar9 - (0xff < uVar9)
                                                                        ,CONCAT11((uVar8 != 0) *
                                                                                  (uVar8 < 0x100) *
                                                                                  (char)uVar8 -
                                                                                  (0xff < uVar8),
                                                                                  (uVar5 != 0) *
                                                                                  (uVar5 < 0x100) *
                                                                                  (char)uVar5 -
                                                                                  (0xff < uVar5)))))
                                            )));
    param_3 = (undefined8 *)((int)param_3 + param_4);
    param_2 = (undefined8 *)((int)param_2 + param_4);
    param_1 = param_1 + 2;
    iVar3 = iVar4 + -1;
    bVar2 = 0 < iVar4;
    iVar4 = iVar3;
  } while (iVar3 != 0 && bVar2);
  return;
}


