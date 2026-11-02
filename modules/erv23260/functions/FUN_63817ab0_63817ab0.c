/* Module: erv23260.dll
   Function: FUN_63817ab0
   Address: 63817ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63817ab0(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  short sVar17;
  short sVar24;
  undefined4 uVar18;
  short sVar26;
  undefined6 uVar19;
  short sVar27;
  undefined8 uVar21;
  short sVar28;
  undefined8 uVar22;
  uint6 uVar25;
  short sVar37;
  uint uVar29;
  undefined4 uVar30;
  short sVar38;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  short sVar40;
  undefined8 uVar39;
  short sVar41;
  undefined8 uVar42;
  short sVar43;
  short sVar44;
  short sVar46;
  short sVar47;
  ulonglong uVar45;
  uint7 uVar20;
  byte bVar23;
  undefined6 uVar31;
  uint7 uVar32;
  byte bVar36;
  
  param_4 = param_4 + 0xc >> 2;
  iVar1 = param_5 * 3;
  iVar6 = (param_5 * 4 + -0x20) - param_3;
  uVar2 = param_3 + 0x20U >> 4;
  uVar39 = 0;
  plVar11 = (longlong *)(param_2 + -0x10 + param_5 * -0x10);
  puVar4 = (undefined4 *)(param_5 * 2 + (int)plVar11);
  uVar42 = 0;
  uVar15 = *(ulonglong *)(param_1 + -0x10);
  uVar16 = *(ulonglong *)(param_1 + -8);
  uVar7 = param_5 & 0xfffffff;
  uVar45 = 0;
  uVar3 = uVar2;
  puVar8 = (ulonglong *)(param_1 + -0x10);
  do {
    lVar13 = psllw(uVar15 & 0xff00ff00ff00ff,2);
    *(longlong *)((int)plVar11 + uVar7 * 4) = lVar13;
    uVar21 = pmaddwd(CONCAT26((ushort)(uVar15 >> 0x37),
                              CONCAT24((ushort)(uVar15 >> 0x20) >> 7,
                                       CONCAT22((ushort)(uVar15 >> 0x10) >> 7,(ushort)uVar15 >> 7)))
                     ,0x1000100010001);
    plVar11[uVar7] = lVar13;
    lVar14 = psllw(uVar16 & 0xff00ff00ff00ff,2);
    *(longlong *)((int)plVar11 + param_5 * 0xc) = lVar13;
    uVar33 = pmaddwd(CONCAT26((ushort)(uVar16 >> 0x37),
                              CONCAT24((ushort)(uVar16 >> 0x20) >> 7,
                                       CONCAT22((ushort)(uVar16 >> 0x10) >> 7,(ushort)uVar16 >> 7)))
                     ,0x1000100010001);
    plVar11[param_5 * 2] = lVar13;
    *plVar11 = lVar13 << 2;
    uVar21 = packssdw(uVar21,uVar21);
    *(longlong *)((int)plVar11 + uVar7 * 4 + 8) = lVar14;
    sVar28 = (short)((ulonglong)uVar21 >> 0x10);
    plVar11[uVar7 + 1] = lVar14;
    sVar17 = (short)uVar21 - (short)uVar39;
    sVar37 = (short)((ulonglong)uVar39 >> 0x10);
    sVar24 = (short)uVar21 - sVar37;
    sVar38 = (short)((ulonglong)uVar39 >> 0x20);
    sVar26 = sVar28 - sVar38;
    sVar27 = (short)((ulonglong)uVar39 >> 0x30);
    sVar28 = sVar28 - sVar27;
    *(longlong *)((int)plVar11 + param_5 * 0xc + 8) = lVar14;
    sVar43 = (short)uVar45 + sVar17;
    sVar46 = (short)(uVar45 >> 0x10) + sVar24;
    uVar30 = CONCAT22(sVar46,sVar43);
    plVar11[param_5 * 2 + 1] = lVar14;
    uVar39 = CONCAT26(sVar27 + sVar28,
                      CONCAT24(sVar38 + sVar26,CONCAT22(sVar37 + sVar24,(short)uVar39 + sVar17)));
    *puVar4 = uVar30;
    puVar4[uVar7] = uVar30;
    puVar4[uVar7 * 2] = uVar30;
    sVar26 = sVar26 + sVar43;
    sVar28 = sVar28 + sVar46;
    uVar18 = CONCAT22(sVar28,sVar26);
    puVar4[param_5 * 3] = uVar30;
    uVar21 = packssdw(uVar33,uVar33);
    puVar4[1] = uVar18;
    puVar4[uVar7 + 1] = uVar18;
    sVar24 = (short)((ulonglong)uVar21 >> 0x10);
    puVar4[uVar7 * 2 + 1] = uVar18;
    sVar17 = (short)uVar21 - (short)uVar42;
    sVar27 = (short)((ulonglong)uVar42 >> 0x10);
    sVar37 = (short)uVar21 - sVar27;
    sVar43 = (short)((ulonglong)uVar42 >> 0x20);
    sVar38 = sVar24 - sVar43;
    sVar46 = (short)((ulonglong)uVar42 >> 0x30);
    sVar24 = sVar24 - sVar46;
    puVar4[param_5 * 3 + 1] = uVar18;
    sVar26 = sVar26 + sVar17;
    sVar28 = sVar28 + sVar37;
    uVar18 = CONCAT22(sVar28,sVar26);
    puVar9 = puVar8 + 2;
    uVar3 = uVar3 - 1;
    puVar4[2] = uVar18;
    puVar4[uVar7 + 2] = uVar18;
    uVar42 = CONCAT26(sVar46 + sVar24,
                      CONCAT24(sVar43 + sVar38,CONCAT22(sVar27 + sVar37,(short)uVar42 + sVar17)));
    puVar4[uVar7 * 2 + 2] = uVar18;
    puVar4[param_5 * 3 + 2] = uVar18;
    uVar29 = CONCAT22(sVar24 + sVar28,sVar38 + sVar26);
    uVar45 = (ulonglong)uVar29;
    uVar15 = *puVar9;
    uVar16 = puVar8[3];
    puVar4[3] = uVar29;
    puVar4[uVar7 + 3] = uVar29;
    plVar11[1] = lVar14 << 2;
    puVar4[uVar7 * 2 + 3] = uVar29;
    puVar4[param_5 * 3 + 3] = uVar29;
    plVar11 = plVar11 + 2;
    puVar4 = puVar4 + 4;
    puVar8 = puVar9;
  } while (uVar3 != 0);
  puVar10 = (undefined8 *)((int)puVar9 + uVar7 * -4);
  puVar12 = (undefined8 *)((int)plVar11 + iVar6 + uVar7 * -4);
  puVar5 = puVar12 + param_5 * 2;
  uVar7 = param_5 & 0xfffffff;
  do {
    uVar16 = 0;
    puVar10 = (undefined8 *)((int)puVar10 + iVar6);
    uVar21 = 0;
    uVar39 = *(undefined8 *)((int)puVar10 + uVar7 * 2);
    uVar42 = *(undefined8 *)((int)puVar10 + iVar1);
    uVar15 = CONCAT17((char)((ulonglong)uVar39 >> 0x38) + (char)((ulonglong)uVar42 >> 0x38),
                      CONCAT16((char)((ulonglong)uVar39 >> 0x30) + (char)((ulonglong)uVar42 >> 0x30)
                               ,CONCAT15((char)((ulonglong)uVar39 >> 0x28) +
                                         (char)((ulonglong)uVar42 >> 0x28),
                                         CONCAT14((char)((ulonglong)uVar39 >> 0x20) +
                                                  (char)((ulonglong)uVar42 >> 0x20),
                                                  CONCAT13((char)((ulonglong)uVar39 >> 0x18) +
                                                           (char)((ulonglong)uVar42 >> 0x18),
                                                           CONCAT12((char)((ulonglong)uVar39 >> 0x10
                                                                          ) + (char)((ulonglong)
                                                                                     uVar42 >> 0x10)
                                                                    ,CONCAT11((char)((ulonglong)
                                                                                     uVar39 >> 8) +
                                                                              (char)((ulonglong)
                                                                                     uVar42 >> 8),
                                                                              (char)uVar39 +
                                                                              (char)uVar42)))))));
    uVar39 = 0;
    uVar3 = uVar2;
    do {
      uVar42 = *puVar10;
      uVar33 = *(undefined8 *)((int)puVar10 + uVar7);
      bVar23 = (char)((ulonglong)uVar42 >> 8) + (char)((ulonglong)uVar33 >> 8);
      uVar18 = CONCAT13((char)((ulonglong)uVar42 >> 0x18) + (char)((ulonglong)uVar33 >> 0x18),
                        CONCAT12((char)((ulonglong)uVar42 >> 0x10) +
                                 (char)((ulonglong)uVar33 >> 0x10),
                                 CONCAT11(bVar23,(char)uVar42 + (char)uVar33)));
      uVar19 = CONCAT15((char)((ulonglong)uVar42 >> 0x28) + (char)((ulonglong)uVar33 >> 0x28),
                        CONCAT14((char)((ulonglong)uVar42 >> 0x20) +
                                 (char)((ulonglong)uVar33 >> 0x20),uVar18));
      uVar20 = CONCAT16((char)((ulonglong)uVar42 >> 0x30) + (char)((ulonglong)uVar33 >> 0x30),uVar19
                       );
      uVar34 = pmaddwd(CONCAT26((ushort)(uVar15 >> 0x38),
                                CONCAT24((ushort)(uVar15 >> 0x20) >> 8,
                                         CONCAT22((ushort)(uVar15 >> 0x10) >> 8,(ushort)uVar15 >> 8)
                                        )),0x1000100010001);
      uVar15 = uVar15 & 0xff00ff00ff00ff;
      uVar45 = (ulonglong)uVar20 & 0xff00ff00ff00ff;
      uVar22 = pmaddwd(CONCAT26((ushort)(CONCAT17((char)((ulonglong)uVar42 >> 0x38) +
                                                  (char)((ulonglong)uVar33 >> 0x38),uVar20) >> 0x38)
                                ,CONCAT24((ushort)((uint6)uVar19 >> 0x28),
                                          CONCAT22((ushort)((uint)uVar18 >> 0x18),(ushort)bVar23))),
                       0x1000100010001);
      sVar17 = (short)uVar15 + (short)uVar45;
      sVar26 = (short)(uVar15 >> 0x10) + (short)(uVar45 >> 0x10);
      sVar24 = (short)(uVar15 >> 0x20) + (short)(uVar45 >> 0x20);
      sVar28 = (short)(uVar15 >> 0x30) + (short)(uVar45 >> 0x30);
      *(ulonglong *)((int)puVar5 + uVar7 * 4) =
           CONCAT26(sVar28,CONCAT24(sVar24,CONCAT22(sVar26,sVar17)));
      uVar42 = *puVar12;
      uVar25 = (uint6)((ulonglong)uVar22 >> 0x10) |
               (uint6)(CONCAT44((int)((ulonglong)uVar34 >> 0x20) << 0x10,(int)uVar34 << 0x10) >>
                      0x10);
      uVar33 = *(undefined8 *)((int)puVar12 + uVar7 * 4);
      sVar37 = (short)uVar22 - (short)uVar21;
      sVar46 = (short)((ulonglong)uVar21 >> 0x10);
      sVar38 = (short)uVar25 - sVar46;
      sVar40 = (short)((ulonglong)uVar21 >> 0x20);
      sVar27 = (short)((ulonglong)uVar22 >> 0x20) - sVar40;
      sVar41 = (short)((ulonglong)uVar21 >> 0x30);
      sVar43 = (short)(uVar25 >> 0x20) - sVar41;
      uVar22 = *(undefined8 *)((int)puVar10 + uVar7 * 2 + 8);
      sVar44 = (short)uVar16 + sVar37;
      sVar47 = (short)(uVar16 >> 0x10) + sVar38;
      *(ulonglong *)((int)puVar12 + uVar7 * 4) =
           CONCAT26((sVar28 + (short)((ulonglong)uVar42 >> 0x30)) -
                    (short)((ulonglong)uVar33 >> 0x30),
                    CONCAT24((sVar24 + (short)((ulonglong)uVar42 >> 0x20)) -
                             (short)((ulonglong)uVar33 >> 0x20),
                             CONCAT22((sVar26 + (short)((ulonglong)uVar42 >> 0x10)) -
                                      (short)((ulonglong)uVar33 >> 0x10),
                                      (sVar17 + (short)uVar42) - (short)uVar33)));
      uVar21 = CONCAT26(sVar41 + sVar43,
                        CONCAT24(sVar40 + sVar27,CONCAT22(sVar46 + sVar38,(short)uVar21 + sVar37)));
      *(uint *)((int)puVar5 + uVar7 * 2) = CONCAT22(sVar47,sVar44);
      uVar42 = *(undefined8 *)((int)puVar10 + iVar1 + 8);
      bVar36 = (char)((ulonglong)uVar22 >> 8) + (char)((ulonglong)uVar42 >> 8);
      uVar30 = CONCAT13((char)((ulonglong)uVar22 >> 0x18) + (char)((ulonglong)uVar42 >> 0x18),
                        CONCAT12((char)((ulonglong)uVar22 >> 0x10) +
                                 (char)((ulonglong)uVar42 >> 0x10),
                                 CONCAT11(bVar36,(char)uVar22 + (char)uVar42)));
      uVar31 = CONCAT15((char)((ulonglong)uVar22 >> 0x28) + (char)((ulonglong)uVar42 >> 0x28),
                        CONCAT14((char)((ulonglong)uVar22 >> 0x20) +
                                 (char)((ulonglong)uVar42 >> 0x20),uVar30));
      uVar32 = CONCAT16((char)((ulonglong)uVar22 >> 0x30) + (char)((ulonglong)uVar42 >> 0x30),uVar31
                       );
      sVar44 = sVar44 + sVar27;
      sVar47 = sVar47 + sVar43;
      uVar33 = puVar10[1];
      *(uint *)((int)puVar5 + uVar7 * 2 + 4) = CONCAT22(sVar47,sVar44);
      uVar34 = *(undefined8 *)((int)puVar10 + uVar7 + 8);
      bVar23 = (char)((ulonglong)uVar33 >> 8) + (char)((ulonglong)uVar34 >> 8);
      uVar18 = CONCAT13((char)((ulonglong)uVar33 >> 0x18) + (char)((ulonglong)uVar34 >> 0x18),
                        CONCAT12((char)((ulonglong)uVar33 >> 0x10) +
                                 (char)((ulonglong)uVar34 >> 0x10),
                                 CONCAT11(bVar23,(char)uVar33 + (char)uVar34)));
      uVar19 = CONCAT15((char)((ulonglong)uVar33 >> 0x28) + (char)((ulonglong)uVar34 >> 0x28),
                        CONCAT14((char)((ulonglong)uVar33 >> 0x20) +
                                 (char)((ulonglong)uVar34 >> 0x20),uVar18));
      uVar20 = CONCAT16((char)((ulonglong)uVar33 >> 0x30) + (char)((ulonglong)uVar34 >> 0x30),uVar19
                       );
      uVar35 = pmaddwd(CONCAT26((ushort)(CONCAT17((char)((ulonglong)uVar22 >> 0x38) +
                                                  (char)((ulonglong)uVar42 >> 0x38),uVar32) >> 0x38)
                                ,CONCAT24((ushort)((uint6)uVar31 >> 0x28),
                                          CONCAT22((ushort)((uint)uVar30 >> 0x18),(ushort)bVar36))),
                       0x1000100010001);
      uVar16 = (ulonglong)uVar32 & 0xff00ff00ff00ff;
      uVar15 = (ulonglong)uVar20 & 0xff00ff00ff00ff;
      uVar22 = pmaddwd(CONCAT26((ushort)(CONCAT17((char)((ulonglong)uVar33 >> 0x38) +
                                                  (char)((ulonglong)uVar34 >> 0x38),uVar20) >> 0x38)
                                ,CONCAT24((ushort)((uint6)uVar19 >> 0x28),
                                          CONCAT22((ushort)((uint)uVar18 >> 0x18),(ushort)bVar23))),
                       0x1000100010001);
      sVar17 = (short)uVar16 + (short)uVar15;
      sVar26 = (short)(uVar16 >> 0x10) + (short)(uVar15 >> 0x10);
      sVar24 = (short)(uVar16 >> 0x20) + (short)(uVar15 >> 0x20);
      sVar28 = (short)(uVar16 >> 0x30) + (short)(uVar15 >> 0x30);
      *(ulonglong *)((int)puVar5 + uVar7 * 4 + 8) =
           CONCAT26(sVar28,CONCAT24(sVar24,CONCAT22(sVar26,sVar17)));
      uVar42 = puVar12[1];
      uVar25 = (uint6)((ulonglong)uVar22 >> 0x10) |
               (uint6)(CONCAT44((int)((ulonglong)uVar35 >> 0x20) << 0x10,(int)uVar35 << 0x10) >>
                      0x10);
      uVar33 = *(undefined8 *)((int)puVar12 + uVar7 * 4 + 8);
      sVar37 = (short)uVar22 - (short)uVar39;
      sVar46 = (short)((ulonglong)uVar39 >> 0x10);
      sVar38 = (short)uVar25 - sVar46;
      sVar40 = (short)((ulonglong)uVar39 >> 0x20);
      sVar27 = (short)((ulonglong)uVar22 >> 0x20) - sVar40;
      sVar41 = (short)((ulonglong)uVar39 >> 0x30);
      sVar43 = (short)(uVar25 >> 0x20) - sVar41;
      uVar22 = *(undefined8 *)((int)puVar10 + uVar7 * 2 + 0x10);
      sVar44 = sVar44 + sVar37;
      sVar47 = sVar47 + sVar38;
      *(ulonglong *)((int)puVar12 + uVar7 * 4 + 8) =
           CONCAT26((sVar28 + (short)((ulonglong)uVar42 >> 0x30)) -
                    (short)((ulonglong)uVar33 >> 0x30),
                    CONCAT24((sVar24 + (short)((ulonglong)uVar42 >> 0x20)) -
                             (short)((ulonglong)uVar33 >> 0x20),
                             CONCAT22((sVar26 + (short)((ulonglong)uVar42 >> 0x10)) -
                                      (short)((ulonglong)uVar33 >> 0x10),
                                      (sVar17 + (short)uVar42) - (short)uVar33)));
      uVar39 = CONCAT26(sVar41 + sVar43,
                        CONCAT24(sVar40 + sVar27,CONCAT22(sVar46 + sVar38,(short)uVar39 + sVar37)));
      *(uint *)((int)puVar5 + uVar7 * 2 + 8) = CONCAT22(sVar47,sVar44);
      uVar42 = *(undefined8 *)((int)puVar10 + iVar1 + 0x10);
      uVar15 = CONCAT17((char)((ulonglong)uVar22 >> 0x38) + (char)((ulonglong)uVar42 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar22 >> 0x30) +
                                 (char)((ulonglong)uVar42 >> 0x30),
                                 CONCAT15((char)((ulonglong)uVar22 >> 0x28) +
                                          (char)((ulonglong)uVar42 >> 0x28),
                                          CONCAT14((char)((ulonglong)uVar22 >> 0x20) +
                                                   (char)((ulonglong)uVar42 >> 0x20),
                                                   CONCAT13((char)((ulonglong)uVar22 >> 0x18) +
                                                            (char)((ulonglong)uVar42 >> 0x18),
                                                            CONCAT12((char)((ulonglong)uVar22 >>
                                                                           0x10) +
                                                                     (char)((ulonglong)uVar42 >>
                                                                           0x10),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar22 >> 8) +
                                                                              (char)((ulonglong)
                                                                                     uVar42 >> 8),
                                                                              (char)uVar22 +
                                                                              (char)uVar42)))))));
      uVar29 = CONCAT22(sVar47 + sVar43,sVar44 + sVar27);
      uVar16 = (ulonglong)uVar29;
      puVar10 = puVar10 + 2;
      puVar12 = puVar12 + 2;
      *(uint *)((int)puVar5 + uVar7 * 2 + 0xc) = uVar29;
      puVar5 = puVar5 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    puVar12 = (undefined8 *)((int)puVar12 + iVar6);
    puVar5 = (undefined8 *)((int)puVar5 + iVar6);
    param_4 = param_4 - 1;
  } while (param_4 != 0);
  return;
}


