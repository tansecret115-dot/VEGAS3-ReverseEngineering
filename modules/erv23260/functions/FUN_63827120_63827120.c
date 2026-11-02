/* Module: erv23260.dll
   Function: FUN_63827120
   Address: 63827120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63827120(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  uint uVar3;
  undefined8 *unaff_EDI;
  undefined8 *puVar4;
  undefined8 *puVar5;
  short sVar6;
  short sVar9;
  undefined4 uVar7;
  short sVar10;
  ulonglong in_MM0;
  undefined8 uVar8;
  short sVar11;
  short sVar12;
  short sVar15;
  undefined4 uVar13;
  short sVar16;
  undefined8 in_MM1;
  undefined8 uVar14;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined8 in_MM2;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  undefined8 in_MM3;
  short sVar25;
  short sVar26;
  short sVar28;
  short sVar29;
  undefined8 uVar27;
  short sVar30;
  short sVar31;
  short sVar33;
  short sVar34;
  undefined8 in_MM5;
  undefined8 uVar32;
  short sVar35;
  short sVar36;
  short sVar40;
  short sVar41;
  undefined8 in_MM6;
  undefined8 uVar37;
  short sVar42;
  undefined8 uVar38;
  undefined8 uVar39;
  short sVar43;
  short sVar47;
  short sVar48;
  undefined8 in_MM7;
  undefined8 uVar44;
  short sVar49;
  undefined8 uVar45;
  undefined8 uVar46;
  
  do {
    puVar4 = unaff_EDI;
    uVar7 = *unaff_ESI;
    uVar27 = psllw(0x1000100010001,8);
    uVar13 = *(undefined4 *)((int)unaff_ESI + in_EAX + unaff_EBP * 4);
    uVar44 = pmulhw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar7 >> 0x18
                                                                                ),(char)((ulonglong)
                                                                                         in_MM7 >>
                                                                                        0x18)),
                                                                 (char)((uint)uVar7 >> 0x10)),
                                                        (char)((ulonglong)in_MM7 >> 0x10)),
                                               (char)((uint)uVar7 >> 8)),
                                      (char)((ulonglong)in_MM7 >> 8)),
                             CONCAT11((char)uVar7,(char)in_MM7)),uVar27);
    uVar7 = *(undefined4 *)((int)unaff_ESI + unaff_EBP);
    uVar8 = pmulhw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar13 >> 0x18
                                                                               ),(char)(in_MM0 >>
                                                                                       0x18)),
                                                                (char)((uint)uVar13 >> 0x10)),
                                                       (char)(in_MM0 >> 0x10)),
                                              (char)((uint)uVar13 >> 8)),(char)(in_MM0 >> 8)),
                            CONCAT11((char)uVar13,(char)in_MM0)),uVar27);
    uVar13 = *(undefined4 *)((int)unaff_ESI + in_EAX * 2);
    uVar37 = pmulhw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar7 >> 0x18
                                                                                ),(char)((ulonglong)
                                                                                         in_MM6 >>
                                                                                        0x18)),
                                                                 (char)((uint)uVar7 >> 0x10)),
                                                        (char)((ulonglong)in_MM6 >> 0x10)),
                                               (char)((uint)uVar7 >> 8)),
                                      (char)((ulonglong)in_MM6 >> 8)),
                             CONCAT11((char)uVar7,(char)in_MM6)),uVar27);
    uVar7 = *(undefined4 *)((int)unaff_ESI + unaff_EBP * 2);
    uVar14 = pmulhw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar13 >>
                                                                                0x18),
                                                                          (char)((ulonglong)in_MM1
                                                                                >> 0x18)),
                                                                 (char)((uint)uVar13 >> 0x10)),
                                                        (char)((ulonglong)in_MM1 >> 0x10)),
                                               (char)((uint)uVar13 >> 8)),
                                      (char)((ulonglong)in_MM1 >> 8)),
                             CONCAT11((char)uVar13,(char)in_MM1)),uVar27);
    uVar13 = *(undefined4 *)((int)unaff_ESI + in_EAX + unaff_EBP * 2);
    sVar43 = (short)uVar44 - (short)uVar8;
    sVar9 = (short)((ulonglong)uVar8 >> 0x10);
    sVar47 = (short)((ulonglong)uVar44 >> 0x10) - sVar9;
    sVar10 = (short)((ulonglong)uVar8 >> 0x20);
    sVar48 = (short)((ulonglong)uVar44 >> 0x20) - sVar10;
    sVar11 = (short)((ulonglong)uVar8 >> 0x30);
    sVar49 = (short)((ulonglong)uVar44 >> 0x30) - sVar11;
    uVar1 = *(undefined4 *)((int)unaff_ESI + in_EAX);
    uVar2 = unaff_ESI[unaff_EBP];
    uVar32 = psraw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar7 >> 0x18)
                                                                         ,(char)((ulonglong)in_MM5
                                                                                >> 0x18)),
                                                                (char)((uint)uVar7 >> 0x10)),
                                                       (char)((ulonglong)in_MM5 >> 0x10)),
                                              (char)((uint)uVar7 >> 8)),
                                     (char)((ulonglong)in_MM5 >> 8)),
                            CONCAT11((char)uVar7,(char)in_MM5)),8);
    sVar36 = (short)uVar37 - (short)uVar14;
    sVar6 = (short)((ulonglong)uVar14 >> 0x10);
    sVar40 = (short)((ulonglong)uVar37 >> 0x10) - sVar6;
    sVar16 = (short)((ulonglong)uVar14 >> 0x20);
    sVar41 = (short)((ulonglong)uVar37 >> 0x20) - sVar16;
    sVar17 = (short)((ulonglong)uVar14 >> 0x30);
    sVar42 = (short)((ulonglong)uVar37 >> 0x30) - sVar17;
    uVar37 = psraw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar13 >> 0x18
                                                                               ),(char)((ulonglong)
                                                                                        in_MM2 >>
                                                                                       0x18)),
                                                                (char)((uint)uVar13 >> 0x10)),
                                                       (char)((ulonglong)in_MM2 >> 0x10)),
                                              (char)((uint)uVar13 >> 8)),
                                     (char)((ulonglong)in_MM2 >> 8)),
                            CONCAT11((char)uVar13,(char)in_MM2)),8);
    uVar44 = psraw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18)
                                                                         ,(char)((ulonglong)uVar27
                                                                                >> 0x18)),
                                                                (char)((uint)uVar1 >> 0x10)),
                                                       (char)((ulonglong)uVar27 >> 0x10)),
                                              (char)((uint)uVar1 >> 8)),
                                     (char)((ulonglong)uVar27 >> 8)),
                            CONCAT11((char)uVar1,(char)uVar27)),8);
    uVar27 = psraw(CONCAT62(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11((char)((uint)uVar2 >> 0x18)
                                                                         ,(char)((ulonglong)in_MM3
                                                                                >> 0x18)),
                                                                (char)((uint)uVar2 >> 0x10)),
                                                       (char)((ulonglong)in_MM3 >> 0x10)),
                                              (char)((uint)uVar2 >> 8)),
                                     (char)((ulonglong)in_MM3 >> 8)),
                            CONCAT11((char)uVar2,(char)in_MM3)),8);
    sVar31 = (short)uVar32 - (short)uVar37;
    sVar12 = (short)((ulonglong)uVar37 >> 0x10);
    sVar33 = (short)((ulonglong)uVar32 >> 0x10) - sVar12;
    sVar15 = (short)((ulonglong)uVar37 >> 0x20);
    sVar34 = (short)((ulonglong)uVar32 >> 0x20) - sVar15;
    sVar21 = (short)((ulonglong)uVar37 >> 0x30);
    sVar35 = (short)((ulonglong)uVar32 >> 0x30) - sVar21;
    sVar26 = (short)uVar44 - (short)uVar27;
    sVar23 = (short)((ulonglong)uVar27 >> 0x10);
    sVar28 = (short)((ulonglong)uVar44 >> 0x10) - sVar23;
    sVar24 = (short)((ulonglong)uVar27 >> 0x20);
    sVar29 = (short)((ulonglong)uVar44 >> 0x20) - sVar24;
    sVar25 = (short)((ulonglong)uVar27 >> 0x30);
    sVar30 = (short)((ulonglong)uVar44 >> 0x30) - sVar25;
    sVar18 = (short)uVar37 * 2 + sVar31;
    sVar19 = sVar12 * 2 + sVar33;
    sVar20 = sVar15 * 2 + sVar34;
    sVar21 = sVar21 * 2 + sVar35;
    sVar22 = (short)uVar27 * 2 + sVar26;
    sVar23 = sVar23 * 2 + sVar28;
    sVar24 = sVar24 * 2 + sVar29;
    sVar25 = sVar25 * 2 + sVar30;
    sVar12 = ((short)uVar14 * 2 + sVar36) - sVar18;
    sVar15 = (sVar6 * 2 + sVar40) - sVar19;
    sVar16 = (sVar16 * 2 + sVar41) - sVar20;
    sVar17 = (sVar17 * 2 + sVar42) - sVar21;
    sVar36 = sVar36 - sVar31;
    sVar40 = sVar40 - sVar33;
    sVar41 = sVar41 - sVar34;
    sVar42 = sVar42 - sVar35;
    uVar14 = psllw(CONCAT26(sVar42,CONCAT24(sVar41,CONCAT22(sVar40,sVar36))),2);
    uVar38 = pmulhw(uVar14,DAT_63838cf8);
    uVar14 = psllw(CONCAT26(sVar35 * 2 + sVar42,
                            CONCAT24(sVar34 * 2 + sVar41,
                                     CONCAT22(sVar33 * 2 + sVar40,sVar31 * 2 + sVar36))),2);
    uVar32 = pmulhw(uVar14,DAT_63838cf8);
    sVar6 = ((short)uVar8 * 2 + sVar43) - sVar22;
    sVar9 = (sVar9 * 2 + sVar47) - sVar23;
    sVar10 = (sVar10 * 2 + sVar48) - sVar24;
    sVar11 = (sVar11 * 2 + sVar49) - sVar25;
    sVar18 = sVar18 * 2 + sVar12;
    sVar19 = sVar19 * 2 + sVar15;
    sVar20 = sVar20 * 2 + sVar16;
    sVar21 = sVar21 * 2 + sVar17;
    sVar22 = (sVar22 * 2 + sVar6) - sVar18;
    sVar23 = (sVar23 * 2 + sVar9) - sVar19;
    sVar24 = (sVar24 * 2 + sVar10) - sVar20;
    sVar25 = (sVar25 * 2 + sVar11) - sVar21;
    uVar8 = psllw(CONCAT26(sVar11,CONCAT24(sVar10,CONCAT22(sVar9,sVar6))),2);
    sVar6 = sVar26 * 2 - (short)uVar38;
    sVar26 = (short)((ulonglong)uVar38 >> 0x10);
    sVar9 = sVar28 * 2 - sVar26;
    sVar28 = (short)((ulonglong)uVar38 >> 0x20);
    sVar10 = sVar29 * 2 - sVar28;
    sVar29 = (short)((ulonglong)uVar38 >> 0x30);
    sVar11 = sVar30 * 2 - sVar29;
    uVar37 = psllw(CONCAT26(sVar17,CONCAT24(sVar16,CONCAT22(sVar15,sVar12))),2);
    sVar17 = sVar43 * 2 - (short)uVar32;
    sVar12 = (short)((ulonglong)uVar32 >> 0x10);
    sVar30 = sVar47 * 2 - sVar12;
    sVar15 = (short)((ulonglong)uVar32 >> 0x20);
    sVar31 = sVar48 * 2 - sVar15;
    sVar16 = (short)((ulonglong)uVar32 >> 0x30);
    sVar33 = sVar49 * 2 - sVar16;
    puVar4[8] = CONCAT26(sVar25 * 2,CONCAT24(sVar24 * 2,CONCAT22(sVar23 * 2,sVar22 * 2)));
    *puVar4 = CONCAT26((sVar21 * 2 + sVar25) * 2,
                       CONCAT24((sVar20 * 2 + sVar24) * 2,
                                CONCAT22((sVar19 * 2 + sVar23) * 2,(sVar18 * 2 + sVar22) * 2)));
    uVar14 = pmulhw(uVar8,DAT_63838d48);
    uVar27 = pmulhw(uVar37,DAT_63838cd8);
    uVar44 = pmulhw(uVar8,DAT_63838cd8);
    uVar37 = pmulhw(uVar37,DAT_63838d48);
    uVar8 = CONCAT26((sVar16 * 2 + sVar33) * 2,
                     CONCAT24((sVar15 * 2 + sVar31) * 2,
                              CONCAT22((sVar12 * 2 + sVar30) * 2,((short)uVar32 * 2 + sVar17) * 2)))
    ;
    uVar45 = CONCAT26(sVar33 * 2,CONCAT24(sVar31 * 2,CONCAT22(sVar30 * 2,sVar17 * 2)));
    uVar32 = pmulhw(uVar8,DAT_63838d98);
    uVar38 = CONCAT26((sVar29 * 2 + sVar11) * 2,
                      CONCAT24((sVar28 * 2 + sVar10) * 2,
                               CONCAT22((sVar26 * 2 + sVar9) * 2,((short)uVar38 * 2 + sVar6) * 2)));
    puVar4[4] = CONCAT26((short)((ulonglong)uVar14 >> 0x30) * 2 + (short)((ulonglong)uVar27 >> 0x30)
                         ,CONCAT24((short)((ulonglong)uVar14 >> 0x20) * 2 +
                                   (short)((ulonglong)uVar27 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar14 >> 0x10) * 2 +
                                            (short)((ulonglong)uVar27 >> 0x10),
                                            (short)uVar14 * 2 + (short)uVar27)));
    uVar14 = pmulhw(uVar8,DAT_63838ce0);
    uVar39 = pmulhw(uVar38,DAT_63838ce0);
    uVar8 = pmulhw(uVar38,DAT_63838d98);
    puVar4[0xc] = CONCAT26((short)((ulonglong)uVar44 >> 0x30) +
                           (short)((ulonglong)uVar37 >> 0x30) * -2,
                           CONCAT24((short)((ulonglong)uVar44 >> 0x20) +
                                    (short)((ulonglong)uVar37 >> 0x20) * -2,
                                    CONCAT22((short)((ulonglong)uVar44 >> 0x10) +
                                             (short)((ulonglong)uVar37 >> 0x10) * -2,
                                             (short)uVar44 + (short)uVar37 * -2)));
    uVar27 = CONCAT26(sVar11 * 2,CONCAT24(sVar10 * 2,CONCAT22(sVar9 * 2,sVar6 * 2)));
    uVar38 = pmulhw(uVar45,DAT_63838cd0);
    uVar44 = pmulhw(uVar27,DAT_63838cf0);
    in_MM6 = psraw(uVar39,1);
    uVar37 = pmulhw(uVar45,DAT_63838cf0);
    uVar14 = psraw(uVar14,1);
    in_MM3 = pmulhw(uVar27,DAT_63838cd0);
    sVar6 = (short)((ulonglong)uVar8 >> 0x10);
    in_MM0 = (ulonglong)CONCAT22(sVar6 * 2,(short)uVar8 * 2);
    sVar18 = (short)uVar32 * 2 + (short)in_MM6;
    sVar19 = (short)((ulonglong)uVar32 >> 0x10) * 2 + (short)((ulonglong)in_MM6 >> 0x10);
    sVar20 = (short)((ulonglong)uVar32 >> 0x20) * 2 + (short)((ulonglong)in_MM6 >> 0x20);
    sVar21 = (short)((ulonglong)uVar32 >> 0x30) * 2 + (short)((ulonglong)in_MM6 >> 0x30);
    in_MM5 = CONCAT26(sVar21,CONCAT24(sVar20,CONCAT22(sVar19,sVar18)));
    sVar9 = (short)uVar14 + (short)uVar8 * -2;
    sVar6 = (short)((ulonglong)uVar14 >> 0x10) + sVar6 * -2;
    sVar10 = (short)((ulonglong)uVar14 >> 0x20) + (short)((ulonglong)uVar8 >> 0x20) * -2;
    sVar11 = (short)((ulonglong)uVar14 >> 0x30) + (short)((ulonglong)uVar8 >> 0x30) * -2;
    in_MM1 = CONCAT26(sVar11,CONCAT24(sVar10,CONCAT22(sVar6,sVar9)));
    puVar4[2] = in_MM5;
    sVar22 = (short)uVar38 + (short)uVar44 * 2;
    sVar23 = (short)((ulonglong)uVar38 >> 0x10) + (short)((ulonglong)uVar44 >> 0x10) * 2;
    sVar24 = (short)((ulonglong)uVar38 >> 0x20) + (short)((ulonglong)uVar44 >> 0x20) * 2;
    sVar25 = (short)((ulonglong)uVar38 >> 0x30) + (short)((ulonglong)uVar44 >> 0x30) * 2;
    in_MM7 = CONCAT26(sVar25,CONCAT24(sVar24,CONCAT22(sVar23,sVar22)));
    puVar4[0xe] = in_MM1;
    puVar4[10] = in_MM7;
    sVar12 = (short)uVar37 * 2 - (short)in_MM3;
    sVar15 = (short)((ulonglong)uVar37 >> 0x10) * 2 - (short)((ulonglong)in_MM3 >> 0x10);
    sVar16 = (short)((ulonglong)uVar37 >> 0x20) * 2 - (short)((ulonglong)in_MM3 >> 0x20);
    sVar17 = (short)((ulonglong)uVar37 >> 0x30) * 2 - (short)((ulonglong)in_MM3 >> 0x30);
    in_MM2 = CONCAT26(sVar17,CONCAT24(sVar16,CONCAT22(sVar15,sVar12)));
    unaff_ESI = unaff_ESI + 1;
    puVar4[6] = in_MM2;
    unaff_EDI = puVar4 + 1;
  } while (((uint)unaff_ESI & 4) != 0);
  uVar8 = puVar4[8];
  uVar14 = puVar4[0xc];
  uVar7 = CONCAT22(sVar24,(short)((ulonglong)uVar8 >> 0x20));
  puVar5 = puVar4 + -1;
  uVar13 = CONCAT22(sVar10,(short)((ulonglong)uVar14 >> 0x20));
  uVar3 = 0;
  puVar4[0xc] = CONCAT44(uVar13,uVar7);
  uVar37 = *puVar4;
  puVar4[0xe] = CONCAT44((int)(CONCAT26(sVar11,CONCAT24((short)((ulonglong)uVar14 >> 0x30),uVar13))
                              >> 0x20),
                         (int)(CONCAT26(sVar25,CONCAT24((short)((ulonglong)uVar8 >> 0x30),uVar7)) >>
                              0x20));
  uVar27 = puVar4[4];
  puVar4[8] = CONCAT44(CONCAT22(sVar9,(short)uVar14),CONCAT22(sVar22,(short)uVar8));
  puVar4[10] = CONCAT44(CONCAT22(sVar6,(short)((ulonglong)uVar14 >> 0x10)),
                        CONCAT22(sVar23,(short)((ulonglong)uVar8 >> 0x10)));
  uVar13 = CONCAT22(sVar20,(short)((ulonglong)uVar37 >> 0x20));
  uVar8 = puVar4[0xb];
  uVar7 = CONCAT22(sVar16,(short)((ulonglong)uVar27 >> 0x20));
  uVar14 = puVar4[0xd];
  puVar4[0xb] = CONCAT44(uVar7,uVar13);
  uVar44 = puVar4[7];
  puVar4[0xd] = CONCAT44((int)(CONCAT26(sVar17,CONCAT24((short)((ulonglong)uVar27 >> 0x30),uVar7))
                              >> 0x20),
                         (int)(CONCAT26(sVar21,CONCAT24((short)((ulonglong)uVar37 >> 0x30),uVar13))
                              >> 0x20));
  uVar32 = puVar4[9];
  puVar4[7] = CONCAT44(CONCAT22(sVar12,(short)uVar27),CONCAT22(sVar18,(short)uVar37));
  uVar7 = CONCAT22((short)((ulonglong)uVar32 >> 0x20),(short)((ulonglong)uVar44 >> 0x20));
  puVar4[9] = CONCAT44(CONCAT22(sVar15,(short)((ulonglong)uVar27 >> 0x10)),
                       CONCAT22(sVar19,(short)((ulonglong)uVar37 >> 0x10)));
  uVar13 = CONCAT22((short)((ulonglong)uVar14 >> 0x20),(short)((ulonglong)uVar8 >> 0x20));
  uVar37 = *puVar5;
  uVar27 = *unaff_EDI;
  puVar4[4] = CONCAT44(uVar13,uVar7);
  puVar4[6] = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar14 >> 0x30),
                                      CONCAT24((short)((ulonglong)uVar8 >> 0x30),uVar13)) >> 0x20),
                       (int)(CONCAT26((short)((ulonglong)uVar32 >> 0x30),
                                      CONCAT24((short)((ulonglong)uVar44 >> 0x30),uVar7)) >> 0x20));
  uVar38 = puVar4[3];
  *puVar4 = CONCAT44(CONCAT22((short)uVar14,(short)uVar8),CONCAT22((short)uVar32,(short)uVar44));
  uVar13 = CONCAT22((short)((ulonglong)uVar27 >> 0x20),(short)((ulonglong)uVar37 >> 0x20));
  uVar39 = puVar4[5];
  uVar7 = CONCAT22((short)((ulonglong)uVar39 >> 0x20),(short)((ulonglong)uVar38 >> 0x20));
  puVar4[2] = CONCAT44(CONCAT22((short)((ulonglong)uVar14 >> 0x10),(short)((ulonglong)uVar8 >> 0x10)
                               ),
                       CONCAT22((short)((ulonglong)uVar32 >> 0x10),
                                (short)((ulonglong)uVar44 >> 0x10)));
  puVar4[3] = CONCAT44(uVar7,uVar13);
  puVar4[5] = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar39 >> 0x30),
                                      CONCAT24((short)((ulonglong)uVar38 >> 0x30),uVar7)) >> 0x20),
                       (int)(CONCAT26((short)((ulonglong)uVar27 >> 0x30),
                                      CONCAT24((short)((ulonglong)uVar37 >> 0x30),uVar13)) >> 0x20))
  ;
  *puVar5 = CONCAT44(CONCAT22((short)uVar39,(short)uVar38),CONCAT22((short)uVar27,(short)uVar37));
  *unaff_EDI = CONCAT44(CONCAT22((short)((ulonglong)uVar39 >> 0x10),
                                 (short)((ulonglong)uVar38 >> 0x10)),
                        CONCAT22((short)((ulonglong)uVar27 >> 0x10),
                                 (short)((ulonglong)uVar37 >> 0x10)));
  do {
    uVar8 = puVar5[1];
    uVar14 = puVar5[0xf];
    uVar37 = puVar5[3];
    sVar42 = (short)uVar8 - (short)uVar14;
    sVar9 = (short)((ulonglong)uVar14 >> 0x10);
    sVar43 = (short)((ulonglong)uVar8 >> 0x10) - sVar9;
    sVar10 = (short)((ulonglong)uVar14 >> 0x20);
    sVar47 = (short)((ulonglong)uVar8 >> 0x20) - sVar10;
    sVar11 = (short)((ulonglong)uVar14 >> 0x30);
    sVar48 = (short)((ulonglong)uVar8 >> 0x30) - sVar11;
    uVar8 = puVar5[0xd];
    uVar27 = puVar5[5];
    uVar44 = puVar5[0xb];
    sVar6 = (short)((ulonglong)uVar8 >> 0x10);
    sVar16 = (short)((ulonglong)uVar8 >> 0x20);
    sVar17 = (short)((ulonglong)uVar8 >> 0x30);
    uVar32 = puVar5[3];
    sVar30 = (short)uVar27 - (short)uVar44;
    sVar19 = (short)((ulonglong)uVar44 >> 0x10);
    sVar31 = (short)((ulonglong)uVar27 >> 0x10) - sVar19;
    sVar20 = (short)((ulonglong)uVar44 >> 0x20);
    sVar33 = (short)((ulonglong)uVar27 >> 0x20) - sVar20;
    sVar21 = (short)((ulonglong)uVar44 >> 0x30);
    sVar34 = (short)((ulonglong)uVar27 >> 0x30) - sVar21;
    uVar27 = puVar5[7];
    uVar38 = puVar5[9];
    sVar35 = ((short)uVar37 - (short)uVar8) - sVar30;
    sVar36 = ((short)((ulonglong)uVar37 >> 0x10) - sVar6) - sVar31;
    sVar40 = ((short)((ulonglong)uVar37 >> 0x20) - sVar16) - sVar33;
    sVar41 = ((short)((ulonglong)uVar37 >> 0x30) - sVar17) - sVar34;
    uVar37 = puVar5[5];
    sVar18 = (short)uVar44 + (short)uVar37;
    sVar19 = sVar19 + (short)((ulonglong)uVar37 >> 0x10);
    sVar20 = sVar20 + (short)((ulonglong)uVar37 >> 0x20);
    sVar21 = sVar21 + (short)((ulonglong)uVar37 >> 0x30);
    sVar23 = (short)((ulonglong)uVar38 >> 0x10);
    sVar25 = (short)((ulonglong)uVar38 >> 0x20);
    sVar28 = (short)((ulonglong)uVar38 >> 0x30);
    uVar37 = puVar5[7];
    sVar22 = (short)uVar38 + (short)uVar37;
    sVar24 = sVar23 + (short)((ulonglong)uVar37 >> 0x10);
    sVar26 = sVar25 + (short)((ulonglong)uVar37 >> 0x20);
    sVar29 = sVar28 + (short)((ulonglong)uVar37 >> 0x30);
    sVar12 = ((short)uVar8 + (short)uVar32) - sVar18;
    sVar15 = (sVar6 + (short)((ulonglong)uVar32 >> 0x10)) - sVar19;
    sVar16 = (sVar16 + (short)((ulonglong)uVar32 >> 0x20)) - sVar20;
    sVar17 = (sVar17 + (short)((ulonglong)uVar32 >> 0x30)) - sVar21;
    uVar8 = psllw(CONCAT26(sVar41,CONCAT24(sVar40,CONCAT22(sVar36,sVar35))),2);
    uVar37 = pmulhw(uVar8,DAT_63838cf8);
    uVar8 = psllw(CONCAT26(sVar34 * 2 + sVar41,
                           CONCAT24(sVar33 * 2 + sVar40,
                                    CONCAT22(sVar31 * 2 + sVar36,sVar30 * 2 + sVar35))),2);
    uVar8 = pmulhw(uVar8,DAT_63838cf8);
    sVar6 = ((short)uVar14 * 2 + sVar42) - sVar22;
    sVar9 = (sVar9 * 2 + sVar43) - sVar24;
    sVar10 = (sVar10 * 2 + sVar47) - sVar26;
    sVar11 = (sVar11 * 2 + sVar48) - sVar29;
    uVar39 = psraw(uVar37,1);
    sVar18 = sVar18 * 2 + sVar12;
    sVar19 = sVar19 * 2 + sVar15;
    sVar20 = sVar20 * 2 + sVar16;
    sVar21 = sVar21 * 2 + sVar17;
    uVar32 = psraw(uVar8,1);
    sVar22 = (sVar22 * 2 + sVar6) - sVar18;
    sVar24 = (sVar24 * 2 + sVar9) - sVar19;
    sVar26 = (sVar26 * 2 + sVar10) - sVar20;
    sVar29 = (sVar29 * 2 + sVar11) - sVar21;
    uVar8 = psllw(CONCAT26(sVar11,CONCAT24(sVar10,CONCAT22(sVar9,sVar6))),2);
    sVar6 = ((short)uVar27 - (short)uVar38) - (short)uVar39;
    sVar30 = (short)((ulonglong)uVar39 >> 0x10);
    sVar9 = ((short)((ulonglong)uVar27 >> 0x10) - sVar23) - sVar30;
    sVar23 = (short)((ulonglong)uVar39 >> 0x20);
    sVar10 = ((short)((ulonglong)uVar27 >> 0x20) - sVar25) - sVar23;
    sVar25 = (short)((ulonglong)uVar39 >> 0x30);
    sVar11 = ((short)((ulonglong)uVar27 >> 0x30) - sVar28) - sVar25;
    uVar37 = psllw(CONCAT26(sVar17,CONCAT24(sVar16,CONCAT22(sVar15,sVar12))),2);
    sVar42 = sVar42 - (short)uVar32;
    sVar12 = (short)((ulonglong)uVar32 >> 0x10);
    sVar43 = sVar43 - sVar12;
    sVar15 = (short)((ulonglong)uVar32 >> 0x20);
    sVar47 = sVar47 - sVar15;
    sVar16 = (short)((ulonglong)uVar32 >> 0x30);
    sVar48 = sVar48 - sVar16;
    puVar5[9] = CONCAT26(sVar29 * 2,CONCAT24(sVar26 * 2,CONCAT22(sVar24 * 2,sVar22 * 2)));
    puVar5[1] = CONCAT26((sVar21 * 2 + sVar29) * 2,
                         CONCAT24((sVar20 * 2 + sVar26) * 2,
                                  CONCAT22((sVar19 * 2 + sVar24) * 2,(sVar18 * 2 + sVar22) * 2)));
    uVar14 = pmulhw(uVar8,DAT_63838d48);
    uVar27 = pmulhw(uVar37,DAT_63838cd8);
    uVar44 = pmulhw(uVar8,DAT_63838cd8);
    uVar8 = psllw(CONCAT26(sVar16 * 2 + sVar48,
                           CONCAT24(sVar15 * 2 + sVar47,
                                    CONCAT22(sVar12 * 2 + sVar43,(short)uVar32 * 2 + sVar42))),2);
    uVar37 = pmulhw(uVar37,DAT_63838d48);
    uVar45 = psllw(CONCAT26(sVar48,CONCAT24(sVar47,CONCAT22(sVar43,sVar42))),2);
    uVar32 = pmulhw(uVar8,DAT_63838d98);
    uVar38 = psllw(CONCAT26(sVar25 * 2 + sVar11,
                            CONCAT24(sVar23 * 2 + sVar10,
                                     CONCAT22(sVar30 * 2 + sVar9,(short)uVar39 * 2 + sVar6))),2);
    puVar5[5] = CONCAT26((short)((ulonglong)uVar14 >> 0x30) * 2 + (short)((ulonglong)uVar27 >> 0x30)
                         ,CONCAT24((short)((ulonglong)uVar14 >> 0x20) * 2 +
                                   (short)((ulonglong)uVar27 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar14 >> 0x10) * 2 +
                                            (short)((ulonglong)uVar27 >> 0x10),
                                            (short)uVar14 * 2 + (short)uVar27)));
    uVar14 = pmulhw(uVar8,DAT_63838ce0);
    uVar39 = pmulhw(uVar38,DAT_63838ce0);
    uVar8 = pmulhw(uVar38,DAT_63838d98);
    puVar5[0xd] = CONCAT26((short)((ulonglong)uVar44 >> 0x30) +
                           (short)((ulonglong)uVar37 >> 0x30) * -2,
                           CONCAT24((short)((ulonglong)uVar44 >> 0x20) +
                                    (short)((ulonglong)uVar37 >> 0x20) * -2,
                                    CONCAT22((short)((ulonglong)uVar44 >> 0x10) +
                                             (short)((ulonglong)uVar37 >> 0x10) * -2,
                                             (short)uVar44 + (short)uVar37 * -2)));
    uVar27 = psllw(CONCAT26(sVar11,CONCAT24(sVar10,CONCAT22(sVar9,sVar6))),2);
    uVar46 = pmulhw(uVar45,DAT_63838cd0);
    uVar44 = pmulhw(uVar27,DAT_63838cf0);
    uVar38 = psraw(uVar39,1);
    uVar37 = pmulhw(uVar45,DAT_63838cf0);
    uVar14 = psraw(uVar14,1);
    uVar27 = pmulhw(uVar27,DAT_63838cd0);
    puVar5[3] = CONCAT26((short)((ulonglong)uVar32 >> 0x30) * 2 + (short)((ulonglong)uVar38 >> 0x30)
                         ,CONCAT24((short)((ulonglong)uVar32 >> 0x20) * 2 +
                                   (short)((ulonglong)uVar38 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar32 >> 0x10) * 2 +
                                            (short)((ulonglong)uVar38 >> 0x10),
                                            (short)uVar32 * 2 + (short)uVar38)));
    puVar5[0xf] = CONCAT26((short)((ulonglong)uVar14 >> 0x30) +
                           (short)((ulonglong)uVar8 >> 0x30) * -2,
                           CONCAT24((short)((ulonglong)uVar14 >> 0x20) +
                                    (short)((ulonglong)uVar8 >> 0x20) * -2,
                                    CONCAT22((short)((ulonglong)uVar14 >> 0x10) +
                                             (short)((ulonglong)uVar8 >> 0x10) * -2,
                                             (short)uVar14 + (short)uVar8 * -2)));
    puVar5[0xb] = CONCAT26((short)((ulonglong)uVar46 >> 0x30) +
                           (short)((ulonglong)uVar44 >> 0x30) * 2,
                           CONCAT24((short)((ulonglong)uVar46 >> 0x20) +
                                    (short)((ulonglong)uVar44 >> 0x20) * 2,
                                    CONCAT22((short)((ulonglong)uVar46 >> 0x10) +
                                             (short)((ulonglong)uVar44 >> 0x10) * 2,
                                             (short)uVar46 + (short)uVar44 * 2)));
    uVar3 = uVar3 - 1;
    puVar5[7] = CONCAT26((short)((ulonglong)uVar37 >> 0x30) * 2 - (short)((ulonglong)uVar27 >> 0x30)
                         ,CONCAT24((short)((ulonglong)uVar37 >> 0x20) * 2 -
                                   (short)((ulonglong)uVar27 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar37 >> 0x10) * 2 -
                                            (short)((ulonglong)uVar27 >> 0x10),
                                            (short)uVar37 * 2 - (short)uVar27)));
    puVar5 = puVar5 + -1;
  } while ((POPCOUNT(uVar3 & 0xff) & 1U) == 0);
  return;
}


