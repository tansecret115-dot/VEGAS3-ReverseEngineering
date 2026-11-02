/* Module: erv33260.dll
   Function: FUN_6708e730
   Address: 6708e730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6708e730(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  short sVar18;
  short sVar23;
  undefined4 uVar19;
  short sVar25;
  short sVar26;
  ulonglong uVar20;
  undefined8 uVar21;
  short sVar27;
  undefined8 uVar22;
  uint6 uVar24;
  short sVar32;
  uint uVar28;
  short sVar33;
  ulonglong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulonglong uVar34;
  short sVar36;
  undefined8 uVar35;
  short sVar37;
  undefined8 uVar38;
  short sVar39;
  short sVar40;
  short sVar43;
  short sVar44;
  ulonglong uVar42;
  undefined4 uVar41;
  
  param_4 = param_4 + 0xc >> 2;
  iVar6 = (param_5 * 4 + -0x20) - param_3;
  uVar2 = param_3 + 0x20U >> 4;
  uVar35 = 0;
  plVar10 = (longlong *)(param_2 + -0x10 + param_5 * -0x10);
  puVar4 = (undefined4 *)(param_5 * 2 + (int)plVar10);
  uVar38 = 0;
  uVar20 = *(ulonglong *)(param_1 + -0x10);
  uVar29 = *(ulonglong *)(param_1 + -8);
  uVar7 = param_5 & 0xfffffff;
  uVar42 = 0;
  uVar3 = uVar2;
  puVar8 = (ulonglong *)(param_1 + -0x10);
  do {
    lVar12 = psllw(uVar20 & 0xff00ff00ff00ff,2);
    *(longlong *)((int)plVar10 + uVar7 * 4) = lVar12;
    uVar21 = pmaddwd(CONCAT26((ushort)(uVar20 >> 0x37),
                              CONCAT24((ushort)(uVar20 >> 0x20) >> 7,
                                       CONCAT22((ushort)(uVar20 >> 0x10) >> 7,(ushort)uVar20 >> 7)))
                     ,0x1000100010001);
    plVar10[uVar7] = lVar12;
    lVar16 = psllw(uVar29 & 0xff00ff00ff00ff,2);
    *(longlong *)((int)plVar10 + param_5 * 0xc) = lVar12;
    uVar30 = pmaddwd(CONCAT26((ushort)(uVar29 >> 0x37),
                              CONCAT24((ushort)(uVar29 >> 0x20) >> 7,
                                       CONCAT22((ushort)(uVar29 >> 0x10) >> 7,(ushort)uVar29 >> 7)))
                     ,0x1000100010001);
    plVar10[param_5 * 2] = lVar12;
    *plVar10 = lVar12 << 2;
    uVar21 = packssdw(uVar21,uVar21);
    *(longlong *)((int)plVar10 + uVar7 * 4 + 8) = lVar16;
    sVar27 = (short)((ulonglong)uVar21 >> 0x10);
    plVar10[uVar7 + 1] = lVar16;
    sVar18 = (short)uVar21 - (short)uVar35;
    sVar32 = (short)((ulonglong)uVar35 >> 0x10);
    sVar23 = (short)uVar21 - sVar32;
    sVar33 = (short)((ulonglong)uVar35 >> 0x20);
    sVar25 = sVar27 - sVar33;
    sVar26 = (short)((ulonglong)uVar35 >> 0x30);
    sVar27 = sVar27 - sVar26;
    *(longlong *)((int)plVar10 + param_5 * 0xc + 8) = lVar16;
    sVar39 = (short)uVar42 + sVar18;
    sVar43 = (short)(uVar42 >> 0x10) + sVar23;
    uVar41 = CONCAT22(sVar43,sVar39);
    plVar10[param_5 * 2 + 1] = lVar16;
    uVar35 = CONCAT26(sVar26 + sVar27,
                      CONCAT24(sVar33 + sVar25,CONCAT22(sVar32 + sVar23,(short)uVar35 + sVar18)));
    *puVar4 = uVar41;
    puVar4[uVar7] = uVar41;
    puVar4[uVar7 * 2] = uVar41;
    sVar25 = sVar25 + sVar39;
    sVar27 = sVar27 + sVar43;
    uVar19 = CONCAT22(sVar27,sVar25);
    puVar4[param_5 * 3] = uVar41;
    uVar21 = packssdw(uVar30,uVar30);
    puVar4[1] = uVar19;
    puVar4[uVar7 + 1] = uVar19;
    sVar23 = (short)((ulonglong)uVar21 >> 0x10);
    puVar4[uVar7 * 2 + 1] = uVar19;
    sVar18 = (short)uVar21 - (short)uVar38;
    sVar26 = (short)((ulonglong)uVar38 >> 0x10);
    sVar32 = (short)uVar21 - sVar26;
    sVar39 = (short)((ulonglong)uVar38 >> 0x20);
    sVar33 = sVar23 - sVar39;
    sVar43 = (short)((ulonglong)uVar38 >> 0x30);
    sVar23 = sVar23 - sVar43;
    puVar4[param_5 * 3 + 1] = uVar19;
    sVar25 = sVar25 + sVar18;
    sVar27 = sVar27 + sVar32;
    uVar19 = CONCAT22(sVar27,sVar25);
    puVar9 = puVar8 + 2;
    uVar3 = uVar3 - 1;
    puVar4[2] = uVar19;
    puVar4[uVar7 + 2] = uVar19;
    uVar38 = CONCAT26(sVar43 + sVar23,
                      CONCAT24(sVar39 + sVar33,CONCAT22(sVar26 + sVar32,(short)uVar38 + sVar18)));
    puVar4[uVar7 * 2 + 2] = uVar19;
    puVar4[param_5 * 3 + 2] = uVar19;
    uVar28 = CONCAT22(sVar23 + sVar27,sVar33 + sVar25);
    uVar42 = (ulonglong)uVar28;
    uVar20 = *puVar9;
    uVar29 = puVar8[3];
    puVar4[3] = uVar28;
    puVar4[uVar7 + 3] = uVar28;
    plVar10[1] = lVar16 << 2;
    puVar4[uVar7 * 2 + 3] = uVar28;
    puVar4[param_5 * 3 + 3] = uVar28;
    plVar10 = plVar10 + 2;
    puVar4 = puVar4 + 4;
    puVar8 = puVar9;
  } while (uVar3 != 0);
  puVar9 = (ulonglong *)((int)puVar9 + uVar7 * -4);
  puVar11 = (undefined8 *)((int)plVar10 + iVar6 + uVar7 * -4);
  puVar5 = puVar11 + param_5 * 2;
  uVar7 = param_5 & 0xfffffff;
  do {
    uVar20 = 0;
    puVar9 = (ulonglong *)((int)puVar9 + iVar6);
    uVar35 = 0;
    uVar38 = 0;
    uVar3 = uVar2;
    do {
      uVar29 = *puVar9;
      uVar13 = uVar29 & 0xff00ff00ff00ff;
      uVar42 = *(ulonglong *)((int)puVar9 + uVar7);
      uVar17 = uVar42 & 0xff00ff00ff00ff;
      uVar1 = *(ulonglong *)((int)puVar9 + uVar7 * 2);
      uVar34 = uVar1 & 0xff00ff00ff00ff;
      uVar15 = *(ulonglong *)((int)puVar9 + param_5 * 3);
      uVar14 = uVar15 & 0xff00ff00ff00ff;
      sVar18 = (short)uVar17 + (short)uVar13 + (short)uVar34 + (short)uVar14;
      sVar25 = (short)(uVar17 >> 0x10) + (short)(uVar13 >> 0x10) + (short)(uVar34 >> 0x10) +
               (short)(uVar14 >> 0x10);
      sVar23 = (short)(uVar17 >> 0x20) + (short)(uVar13 >> 0x20) + (short)(uVar34 >> 0x20) +
               (short)(uVar14 >> 0x20);
      sVar27 = (short)(uVar17 >> 0x30) + (short)(uVar13 >> 0x30) + (short)(uVar34 >> 0x30) +
               (short)(uVar14 >> 0x30);
      uVar30 = pmaddwd(CONCAT26((ushort)(uVar1 >> 0x38) + (ushort)(uVar15 >> 0x38),
                                CONCAT24(((ushort)(uVar1 >> 0x20) >> 8) +
                                         ((ushort)(uVar15 >> 0x20) >> 8),
                                         CONCAT22(((ushort)(uVar1 >> 0x10) >> 8) +
                                                  ((ushort)(uVar15 >> 0x10) >> 8),
                                                  ((ushort)uVar1 >> 8) + ((ushort)uVar15 >> 8)))),
                       0x1000100010001);
      *(ulonglong *)((int)puVar5 + uVar7 * 4) =
           CONCAT26(sVar27,CONCAT24(sVar23,CONCAT22(sVar25,sVar18)));
      uVar22 = pmaddwd(CONCAT26((ushort)(uVar29 >> 0x38) + (ushort)(uVar42 >> 0x38),
                                CONCAT24(((ushort)(uVar29 >> 0x20) >> 8) +
                                         ((ushort)(uVar42 >> 0x20) >> 8),
                                         CONCAT22(((ushort)(uVar29 >> 0x10) >> 8) +
                                                  ((ushort)(uVar42 >> 0x10) >> 8),
                                                  ((ushort)uVar29 >> 8) + ((ushort)uVar42 >> 8)))),
                       0x1000100010001);
      uVar21 = *puVar11;
      uVar24 = (uint6)((ulonglong)uVar22 >> 0x10) |
               (uint6)(CONCAT44((int)((ulonglong)uVar30 >> 0x20) << 0x10,(int)uVar30 << 0x10) >>
                      0x10);
      uVar30 = *(undefined8 *)((int)puVar11 + uVar7 * 4);
      sVar32 = (short)uVar22 - (short)uVar35;
      sVar43 = (short)((ulonglong)uVar35 >> 0x10);
      sVar33 = (short)uVar24 - sVar43;
      sVar36 = (short)((ulonglong)uVar35 >> 0x20);
      sVar26 = (short)((ulonglong)uVar22 >> 0x20) - sVar36;
      sVar37 = (short)((ulonglong)uVar35 >> 0x30);
      sVar39 = (short)(uVar24 >> 0x20) - sVar37;
      sVar40 = (short)uVar20 + sVar32;
      sVar44 = (short)(uVar20 >> 0x10) + sVar33;
      *(ulonglong *)((int)puVar11 + uVar7 * 4) =
           CONCAT26((sVar27 + (short)((ulonglong)uVar21 >> 0x30)) -
                    (short)((ulonglong)uVar30 >> 0x30),
                    CONCAT24((sVar23 + (short)((ulonglong)uVar21 >> 0x20)) -
                             (short)((ulonglong)uVar30 >> 0x20),
                             CONCAT22((sVar25 + (short)((ulonglong)uVar21 >> 0x10)) -
                                      (short)((ulonglong)uVar30 >> 0x10),
                                      (sVar18 + (short)uVar21) - (short)uVar30)));
      uVar35 = CONCAT26(sVar37 + sVar39,
                        CONCAT24(sVar36 + sVar26,CONCAT22(sVar43 + sVar33,(short)uVar35 + sVar32)));
      *(uint *)((int)puVar5 + uVar7 * 2) = CONCAT22(sVar44,sVar40);
      sVar40 = sVar40 + sVar26;
      sVar44 = sVar44 + sVar39;
      *(uint *)((int)puVar5 + uVar7 * 2 + 4) = CONCAT22(sVar44,sVar40);
      uVar20 = puVar9[1];
      uVar15 = uVar20 & 0xff00ff00ff00ff;
      uVar29 = *(ulonglong *)((int)puVar9 + uVar7 + 8);
      uVar14 = uVar29 & 0xff00ff00ff00ff;
      uVar42 = *(ulonglong *)((int)puVar9 + uVar7 * 2 + 8);
      uVar17 = uVar42 & 0xff00ff00ff00ff;
      uVar1 = *(ulonglong *)((int)puVar9 + param_5 * 3 + 8);
      uVar13 = uVar1 & 0xff00ff00ff00ff;
      sVar18 = (short)uVar14 + (short)uVar15 + (short)uVar17 + (short)uVar13;
      sVar25 = (short)(uVar14 >> 0x10) + (short)(uVar15 >> 0x10) + (short)(uVar17 >> 0x10) +
               (short)(uVar13 >> 0x10);
      sVar23 = (short)(uVar14 >> 0x20) + (short)(uVar15 >> 0x20) + (short)(uVar17 >> 0x20) +
               (short)(uVar13 >> 0x20);
      sVar27 = (short)(uVar14 >> 0x30) + (short)(uVar15 >> 0x30) + (short)(uVar17 >> 0x30) +
               (short)(uVar13 >> 0x30);
      uVar31 = pmaddwd(CONCAT26((ushort)(uVar42 >> 0x38) + (ushort)(uVar1 >> 0x38),
                                CONCAT24(((ushort)(uVar42 >> 0x20) >> 8) +
                                         ((ushort)(uVar1 >> 0x20) >> 8),
                                         CONCAT22(((ushort)(uVar42 >> 0x10) >> 8) +
                                                  ((ushort)(uVar1 >> 0x10) >> 8),
                                                  ((ushort)uVar42 >> 8) + ((ushort)uVar1 >> 8)))),
                       0x1000100010001);
      *(ulonglong *)((int)puVar5 + uVar7 * 4 + 8) =
           CONCAT26(sVar27,CONCAT24(sVar23,CONCAT22(sVar25,sVar18)));
      uVar22 = pmaddwd(CONCAT26((ushort)(uVar20 >> 0x38) + (ushort)(uVar29 >> 0x38),
                                CONCAT24(((ushort)(uVar20 >> 0x20) >> 8) +
                                         ((ushort)(uVar29 >> 0x20) >> 8),
                                         CONCAT22(((ushort)(uVar20 >> 0x10) >> 8) +
                                                  ((ushort)(uVar29 >> 0x10) >> 8),
                                                  ((ushort)uVar20 >> 8) + ((ushort)uVar29 >> 8)))),
                       0x1000100010001);
      uVar21 = puVar11[1];
      uVar30 = *(undefined8 *)((int)puVar11 + uVar7 * 4 + 8);
      uVar24 = (uint6)((ulonglong)uVar22 >> 0x10) |
               (uint6)(CONCAT44((int)((ulonglong)uVar31 >> 0x20) << 0x10,(int)uVar31 << 0x10) >>
                      0x10);
      sVar32 = (short)uVar22 - (short)uVar38;
      sVar43 = (short)((ulonglong)uVar38 >> 0x10);
      sVar33 = (short)uVar24 - sVar43;
      sVar36 = (short)((ulonglong)uVar38 >> 0x20);
      sVar26 = (short)((ulonglong)uVar22 >> 0x20) - sVar36;
      sVar37 = (short)((ulonglong)uVar38 >> 0x30);
      sVar39 = (short)(uVar24 >> 0x20) - sVar37;
      *(ulonglong *)((int)puVar11 + uVar7 * 4 + 8) =
           CONCAT26((sVar27 + (short)((ulonglong)uVar21 >> 0x30)) -
                    (short)((ulonglong)uVar30 >> 0x30),
                    CONCAT24((sVar23 + (short)((ulonglong)uVar21 >> 0x20)) -
                             (short)((ulonglong)uVar30 >> 0x20),
                             CONCAT22((sVar25 + (short)((ulonglong)uVar21 >> 0x10)) -
                                      (short)((ulonglong)uVar30 >> 0x10),
                                      (sVar18 + (short)uVar21) - (short)uVar30)));
      sVar40 = sVar40 + sVar32;
      sVar44 = sVar44 + sVar33;
      uVar38 = CONCAT26(sVar37 + sVar39,
                        CONCAT24(sVar36 + sVar26,CONCAT22(sVar43 + sVar33,(short)uVar38 + sVar32)));
      *(uint *)((int)puVar5 + uVar7 * 2 + 8) = CONCAT22(sVar44,sVar40);
      uVar28 = CONCAT22(sVar44 + sVar39,sVar40 + sVar26);
      uVar20 = (ulonglong)uVar28;
      puVar9 = puVar9 + 2;
      puVar11 = puVar11 + 2;
      *(uint *)((int)puVar5 + uVar7 * 2 + 0xc) = uVar28;
      puVar5 = puVar5 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    puVar11 = (undefined8 *)((int)puVar11 + iVar6);
    puVar5 = (undefined8 *)((int)puVar5 + iVar6);
    param_4 = param_4 - 1;
  } while (param_4 != 0);
  return;
}


