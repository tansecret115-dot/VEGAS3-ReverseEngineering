/* Module: erv33260.dll
   Function: FUN_670887d0
   Address: 670887d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_670887d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined1 uVar10;
  undefined1 uVar11;
  ushort uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  ushort uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar19;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort uVar18;
  undefined1 uVar20;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined8 uVar21;
  undefined1 uVar29;
  ushort uVar30;
  undefined1 uVar32;
  undefined1 uVar33;
  ushort uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  ushort uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar41;
  undefined8 uVar31;
  ushort uVar40;
  undefined1 uVar42;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined8 uVar43;
  undefined8 uVar51;
  undefined8 uVar52;
  
  if (param_5 == 0) {
    if (param_6 == param_7) {
      iVar3 = param_4 * 3;
      uVar51 = *param_3;
      uVar52 = *(undefined8 *)((int)param_3 + param_4);
      uVar9 = *(undefined8 *)((int)param_3 + param_4 * 2);
      uVar8 = *(undefined8 *)((int)param_3 + iVar3);
      uVar21 = *param_2;
      uVar6 = pavgb((char)uVar51,(char)uVar21);
      uVar10 = pavgb((char)((ulonglong)uVar51 >> 8),(char)((ulonglong)uVar21 >> 8));
      uVar11 = pavgb((char)((ulonglong)uVar51 >> 0x10),(char)((ulonglong)uVar21 >> 0x10));
      uVar13 = pavgb((char)((ulonglong)uVar51 >> 0x18),(char)((ulonglong)uVar21 >> 0x18));
      uVar14 = pavgb((char)((ulonglong)uVar51 >> 0x20),(char)((ulonglong)uVar21 >> 0x20));
      uVar16 = pavgb((char)((ulonglong)uVar51 >> 0x28),(char)((ulonglong)uVar21 >> 0x28));
      uVar17 = pavgb((char)((ulonglong)uVar51 >> 0x30),(char)((ulonglong)uVar21 >> 0x30));
      uVar19 = pavgb((char)((ulonglong)uVar51 >> 0x38),(char)((ulonglong)uVar21 >> 0x38));
      uVar51 = *(undefined8 *)((int)param_2 + param_4);
      uVar20 = pavgb((char)uVar52,(char)uVar51);
      uVar22 = pavgb((char)((ulonglong)uVar52 >> 8),(char)((ulonglong)uVar51 >> 8));
      uVar23 = pavgb((char)((ulonglong)uVar52 >> 0x10),(char)((ulonglong)uVar51 >> 0x10));
      uVar24 = pavgb((char)((ulonglong)uVar52 >> 0x18),(char)((ulonglong)uVar51 >> 0x18));
      uVar25 = pavgb((char)((ulonglong)uVar52 >> 0x20),(char)((ulonglong)uVar51 >> 0x20));
      uVar26 = pavgb((char)((ulonglong)uVar52 >> 0x28),(char)((ulonglong)uVar51 >> 0x28));
      uVar27 = pavgb((char)((ulonglong)uVar52 >> 0x30),(char)((ulonglong)uVar51 >> 0x30));
      uVar28 = pavgb((char)((ulonglong)uVar52 >> 0x38),(char)((ulonglong)uVar51 >> 0x38));
      uVar51 = *(undefined8 *)((int)param_2 + param_4 * 2);
      uVar29 = pavgb((char)uVar9,(char)uVar51);
      uVar32 = pavgb((char)((ulonglong)uVar9 >> 8),(char)((ulonglong)uVar51 >> 8));
      uVar33 = pavgb((char)((ulonglong)uVar9 >> 0x10),(char)((ulonglong)uVar51 >> 0x10));
      uVar35 = pavgb((char)((ulonglong)uVar9 >> 0x18),(char)((ulonglong)uVar51 >> 0x18));
      uVar36 = pavgb((char)((ulonglong)uVar9 >> 0x20),(char)((ulonglong)uVar51 >> 0x20));
      uVar38 = pavgb((char)((ulonglong)uVar9 >> 0x28),(char)((ulonglong)uVar51 >> 0x28));
      uVar39 = pavgb((char)((ulonglong)uVar9 >> 0x30),(char)((ulonglong)uVar51 >> 0x30));
      uVar41 = pavgb((char)((ulonglong)uVar9 >> 0x38),(char)((ulonglong)uVar51 >> 0x38));
      uVar51 = *(undefined8 *)((int)param_2 + iVar3);
      uVar42 = pavgb((char)uVar8,(char)uVar51);
      uVar44 = pavgb((char)((ulonglong)uVar8 >> 8),(char)((ulonglong)uVar51 >> 8));
      uVar45 = pavgb((char)((ulonglong)uVar8 >> 0x10),(char)((ulonglong)uVar51 >> 0x10));
      uVar46 = pavgb((char)((ulonglong)uVar8 >> 0x18),(char)((ulonglong)uVar51 >> 0x18));
      uVar47 = pavgb((char)((ulonglong)uVar8 >> 0x20),(char)((ulonglong)uVar51 >> 0x20));
      uVar48 = pavgb((char)((ulonglong)uVar8 >> 0x28),(char)((ulonglong)uVar51 >> 0x28));
      uVar49 = pavgb((char)((ulonglong)uVar8 >> 0x30),(char)((ulonglong)uVar51 >> 0x30));
      uVar50 = pavgb((char)((ulonglong)uVar8 >> 0x38),(char)((ulonglong)uVar51 >> 0x38));
      puVar2 = (undefined8 *)((int)param_3 + param_4 * 4);
      puVar5 = (undefined8 *)((int)param_2 + param_4 * 4);
      *param_1 = CONCAT17(uVar19,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar11,CONCAT11(uVar10,uVar6)))))));
      uVar51 = *puVar2;
      uVar52 = *(undefined8 *)((int)puVar2 + param_4);
      param_1[2] = CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,CONCAT13(uVar24,
                                                  CONCAT12(uVar23,CONCAT11(uVar22,uVar20)))))));
      uVar9 = *(undefined8 *)((int)puVar2 + param_4 * 2);
      uVar8 = *(undefined8 *)((int)puVar2 + iVar3);
      param_1[4] = CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar36,CONCAT13(uVar35,
                                                  CONCAT12(uVar33,CONCAT11(uVar32,uVar29)))))));
      param_1[6] = CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(uVar47,CONCAT13(uVar46,
                                                  CONCAT12(uVar45,CONCAT11(uVar44,uVar42)))))));
      uVar21 = *puVar5;
      uVar6 = pavgb((char)uVar51,(char)uVar21);
      uVar10 = pavgb((char)((ulonglong)uVar51 >> 8),(char)((ulonglong)uVar21 >> 8));
      uVar11 = pavgb((char)((ulonglong)uVar51 >> 0x10),(char)((ulonglong)uVar21 >> 0x10));
      uVar13 = pavgb((char)((ulonglong)uVar51 >> 0x18),(char)((ulonglong)uVar21 >> 0x18));
      uVar14 = pavgb((char)((ulonglong)uVar51 >> 0x20),(char)((ulonglong)uVar21 >> 0x20));
      uVar16 = pavgb((char)((ulonglong)uVar51 >> 0x28),(char)((ulonglong)uVar21 >> 0x28));
      uVar17 = pavgb((char)((ulonglong)uVar51 >> 0x30),(char)((ulonglong)uVar21 >> 0x30));
      uVar19 = pavgb((char)((ulonglong)uVar51 >> 0x38),(char)((ulonglong)uVar21 >> 0x38));
      uVar51 = *(undefined8 *)((int)puVar5 + param_4);
      uVar20 = pavgb((char)uVar52,(char)uVar51);
      uVar22 = pavgb((char)((ulonglong)uVar52 >> 8),(char)((ulonglong)uVar51 >> 8));
      uVar23 = pavgb((char)((ulonglong)uVar52 >> 0x10),(char)((ulonglong)uVar51 >> 0x10));
      uVar24 = pavgb((char)((ulonglong)uVar52 >> 0x18),(char)((ulonglong)uVar51 >> 0x18));
      uVar25 = pavgb((char)((ulonglong)uVar52 >> 0x20),(char)((ulonglong)uVar51 >> 0x20));
      uVar26 = pavgb((char)((ulonglong)uVar52 >> 0x28),(char)((ulonglong)uVar51 >> 0x28));
      uVar27 = pavgb((char)((ulonglong)uVar52 >> 0x30),(char)((ulonglong)uVar51 >> 0x30));
      uVar28 = pavgb((char)((ulonglong)uVar52 >> 0x38),(char)((ulonglong)uVar51 >> 0x38));
      param_1[8] = CONCAT17(uVar19,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar14,CONCAT13(uVar13,
                                                  CONCAT12(uVar11,CONCAT11(uVar10,uVar6)))))));
      uVar51 = *(undefined8 *)((int)puVar5 + param_4 * 2);
      uVar6 = pavgb((char)uVar9,(char)uVar51);
      uVar10 = pavgb((char)((ulonglong)uVar9 >> 8),(char)((ulonglong)uVar51 >> 8));
      uVar11 = pavgb((char)((ulonglong)uVar9 >> 0x10),(char)((ulonglong)uVar51 >> 0x10));
      uVar13 = pavgb((char)((ulonglong)uVar9 >> 0x18),(char)((ulonglong)uVar51 >> 0x18));
      uVar14 = pavgb((char)((ulonglong)uVar9 >> 0x20),(char)((ulonglong)uVar51 >> 0x20));
      uVar16 = pavgb((char)((ulonglong)uVar9 >> 0x28),(char)((ulonglong)uVar51 >> 0x28));
      uVar17 = pavgb((char)((ulonglong)uVar9 >> 0x30),(char)((ulonglong)uVar51 >> 0x30));
      uVar19 = pavgb((char)((ulonglong)uVar9 >> 0x38),(char)((ulonglong)uVar51 >> 0x38));
      uVar51 = *(undefined8 *)((int)puVar5 + iVar3);
      uVar29 = pavgb((char)uVar8,(char)uVar51);
      uVar32 = pavgb((char)((ulonglong)uVar8 >> 8),(char)((ulonglong)uVar51 >> 8));
      uVar33 = pavgb((char)((ulonglong)uVar8 >> 0x10),(char)((ulonglong)uVar51 >> 0x10));
      uVar35 = pavgb((char)((ulonglong)uVar8 >> 0x18),(char)((ulonglong)uVar51 >> 0x18));
      uVar36 = pavgb((char)((ulonglong)uVar8 >> 0x20),(char)((ulonglong)uVar51 >> 0x20));
      uVar38 = pavgb((char)((ulonglong)uVar8 >> 0x28),(char)((ulonglong)uVar51 >> 0x28));
      uVar39 = pavgb((char)((ulonglong)uVar8 >> 0x30),(char)((ulonglong)uVar51 >> 0x30));
      uVar41 = pavgb((char)((ulonglong)uVar8 >> 0x38),(char)((ulonglong)uVar51 >> 0x38));
      param_1[10] = CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,CONCAT13(uVar24,
                                                  CONCAT12(uVar23,CONCAT11(uVar22,uVar20)))))));
      param_1[0xc] = CONCAT17(uVar19,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar14,CONCAT13(uVar13
                                                  ,CONCAT12(uVar11,CONCAT11(uVar10,uVar6)))))));
      param_1[0xe] = CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar36,CONCAT13(uVar35
                                                  ,CONCAT12(uVar33,CONCAT11(uVar32,uVar29)))))));
    }
    else {
      uVar51 = packssdw(CONCAT44(param_6,param_6),CONCAT44(param_6,param_6));
      uVar52 = packssdw(CONCAT44(param_7,param_7),CONCAT44(param_7,param_7));
      iVar3 = 4;
      do {
        uVar9 = *param_3;
        uVar8 = psllw((ulonglong)
                      CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)
                                                                                      uVar9 >> 0x18)
                                                                       << 0x30) >> 0x28),
                                                               (char)((ulonglong)uVar9 >> 0x10)) <<
                                              0x20) >> 0x18),(char)((ulonglong)uVar9 >> 8)),
                               (ushort)(byte)uVar9),7);
        uVar31 = psllw((ulonglong)
                       CONCAT16((char)((ulonglong)uVar9 >> 0x38),
                                (uint6)CONCAT14((char)((ulonglong)uVar9 >> 0x30),
                                                (uint)CONCAT12((char)((ulonglong)uVar9 >> 0x28),
                                                               (ushort)(byte)((ulonglong)uVar9 >>
                                                                             0x20)))),7);
        uVar9 = *param_2;
        uVar21 = psllw((ulonglong)
                       CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar9 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar9 >> 0x10)) << 0x20) >> 0x18
                                                  ),CONCAT12((char)((ulonglong)uVar9 >> 8),
                                                             (short)uVar9)) >> 0x10),(short)uVar9) &
                       0xffff00ff00ff00ff,7);
        uVar43 = psllw((ulonglong)
                       CONCAT16((char)((ulonglong)uVar9 >> 0x38),
                                (uint6)CONCAT14((char)((ulonglong)uVar9 >> 0x30),
                                                (uint)CONCAT12((char)((ulonglong)uVar9 >> 0x28),
                                                               (ushort)(byte)((ulonglong)uVar9 >>
                                                                             0x20)))),7);
        uVar9 = pmulhw(uVar8,uVar51);
        uVar8 = pmulhw(uVar21,uVar52);
        uVar9 = paddusw(uVar9,uVar8);
        uVar9 = paddusw(uVar9,_DAT_6718f250);
        uVar7 = (ushort)uVar9 >> 5;
        uVar12 = (ushort)((ulonglong)uVar9 >> 0x10) >> 5;
        uVar15 = (ushort)((ulonglong)uVar9 >> 0x20) >> 5;
        uVar18 = (ushort)((ulonglong)uVar9 >> 0x35);
        uVar9 = pmulhw(uVar31,uVar51);
        uVar8 = pmulhw(uVar43,uVar52);
        uVar9 = paddusw(uVar9,uVar8);
        uVar9 = paddusw(uVar9,_DAT_6718f250);
        uVar30 = (ushort)uVar9 >> 5;
        uVar34 = (ushort)((ulonglong)uVar9 >> 0x10) >> 5;
        uVar37 = (ushort)((ulonglong)uVar9 >> 0x20) >> 5;
        uVar40 = (ushort)((ulonglong)uVar9 >> 0x35);
        *param_1 = CONCAT17((uVar40 != 0) * (uVar40 < 0x100) * (char)uVar40 - (0xff < uVar40),
                            CONCAT16((uVar37 != 0) * (uVar37 < 0x100) * (char)uVar37 -
                                     (0xff < uVar37),
                                     CONCAT15((uVar34 != 0) * (uVar34 < 0x100) * (char)uVar34 -
                                              (0xff < uVar34),
                                              CONCAT14((uVar30 != 0) * (uVar30 < 0x100) *
                                                       (char)uVar30 - (0xff < uVar30),
                                                       CONCAT13((uVar18 != 0) * (uVar18 < 0x100) *
                                                                (char)uVar18 - (0xff < uVar18),
                                                                CONCAT12((uVar15 != 0) *
                                                                         (uVar15 < 0x100) *
                                                                         (char)uVar15 -
                                                                         (0xff < uVar15),
                                                                         CONCAT11((uVar12 != 0) *
                                                                                  (uVar12 < 0x100) *
                                                                                  (char)uVar12 -
                                                                                  (0xff < uVar12),
                                                                                  (uVar7 != 0) *
                                                                                  (uVar7 < 0x100) *
                                                                                  (char)uVar7 -
                                                                                  (0xff < uVar7)))))
                                             )));
        uVar9 = *(undefined8 *)((int)param_3 + param_4);
        uVar43 = psllw((ulonglong)
                       CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)
                                                                                       uVar9 >> 0x18
                                                                                      ) << 0x30) >>
                                                                       0x28),
                                                                (char)((ulonglong)uVar9 >> 0x10)) <<
                                               0x20) >> 0x18),(char)((ulonglong)uVar9 >> 8)),
                                (ushort)(byte)uVar9),7);
        uVar21 = psllw((ulonglong)
                       CONCAT16((char)((ulonglong)uVar9 >> 0x38),
                                (uint6)CONCAT14((char)((ulonglong)uVar9 >> 0x30),
                                                (uint)CONCAT12((char)((ulonglong)uVar9 >> 0x28),
                                                               (ushort)(byte)((ulonglong)uVar9 >>
                                                                             0x20)))),7);
        uVar9 = *(undefined8 *)((int)param_2 + param_4);
        uVar8 = psllw((ulonglong)
                      CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar9 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar9 >> 0x10)) << 0x20) >> 0x18
                                                  ),CONCAT12((char)((ulonglong)uVar9 >> 8),
                                                             (short)uVar9)) >> 0x10),(short)uVar9) &
                      0xffff00ff00ff00ff,7);
        uVar31 = psllw((ulonglong)
                       CONCAT16((char)((ulonglong)uVar9 >> 0x38),
                                (uint6)CONCAT14((char)((ulonglong)uVar9 >> 0x30),
                                                (uint)CONCAT12((char)((ulonglong)uVar9 >> 0x28),
                                                               (ushort)(byte)((ulonglong)uVar9 >>
                                                                             0x20)))),7);
        uVar43 = pmulhw(uVar43,uVar51);
        uVar9 = pmulhw(uVar8,uVar52);
        uVar9 = paddusw(uVar43,uVar9);
        uVar9 = paddusw(uVar9,_DAT_6718f250);
        uVar30 = (ushort)uVar9 >> 5;
        uVar34 = (ushort)((ulonglong)uVar9 >> 0x10) >> 5;
        uVar37 = (ushort)((ulonglong)uVar9 >> 0x20) >> 5;
        uVar40 = (ushort)((ulonglong)uVar9 >> 0x35);
        uVar9 = pmulhw(uVar21,uVar51);
        uVar8 = pmulhw(uVar31,uVar52);
        uVar9 = paddusw(uVar9,uVar8);
        uVar9 = paddusw(uVar9,_DAT_6718f250);
        uVar7 = (ushort)uVar9 >> 5;
        uVar12 = (ushort)((ulonglong)uVar9 >> 0x10) >> 5;
        uVar15 = (ushort)((ulonglong)uVar9 >> 0x20) >> 5;
        uVar18 = (ushort)((ulonglong)uVar9 >> 0x35);
        param_1[2] = CONCAT17((uVar18 != 0) * (uVar18 < 0x100) * (char)uVar18 - (0xff < uVar18),
                              CONCAT16((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                       (0xff < uVar15),
                                       CONCAT15((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 -
                                                (0xff < uVar12),
                                                CONCAT14((uVar7 != 0) * (uVar7 < 0x100) *
                                                         (char)uVar7 - (0xff < uVar7),
                                                         CONCAT13((uVar40 != 0) * (uVar40 < 0x100) *
                                                                  (char)uVar40 - (0xff < uVar40),
                                                                  CONCAT12((uVar37 != 0) *
                                                                           (uVar37 < 0x100) *
                                                                           (char)uVar37 -
                                                                           (0xff < uVar37),
                                                                           CONCAT11((uVar34 != 0) *
                                                                                    (uVar34 < 0x100)
                                                                                    * (char)uVar34 -
                                                                                    (0xff < uVar34),
                                                                                    (uVar30 != 0) *
                                                                                    (uVar30 < 0x100)
                                                                                    * (char)uVar30 -
                                                                                    (0xff < uVar30))
                                                                          ))))));
        param_3 = (undefined8 *)((int)param_3 + param_4 * 2);
        param_2 = (undefined8 *)((int)param_2 + param_4 * 2);
        param_1 = param_1 + 4;
        iVar4 = iVar3 + -1;
        bVar1 = 0 < iVar3;
        iVar3 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
  }
  else {
    uVar51 = *(undefined8 *)((int)param_2 + param_4);
    uVar52 = *(undefined8 *)((int)param_2 + param_4 * 2);
    uVar9 = *(undefined8 *)((int)param_2 + param_4 * 3);
    puVar2 = (undefined8 *)((int)param_2 + param_4 * 4);
    *param_1 = *param_2;
    param_1[2] = uVar51;
    param_1[4] = uVar52;
    param_1[6] = uVar9;
    uVar51 = *(undefined8 *)((int)puVar2 + param_4);
    uVar52 = *(undefined8 *)((int)puVar2 + param_4 * 2);
    uVar9 = *(undefined8 *)((int)puVar2 + param_4 * 3);
    param_1[8] = *puVar2;
    param_1[10] = uVar51;
    param_1[0xc] = uVar52;
    param_1[0xe] = uVar9;
  }
  return;
}


