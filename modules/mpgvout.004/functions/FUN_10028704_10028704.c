/* Module: mpgvout.004
   Function: FUN_10028704
   Address: 10028704
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10028704(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar12 = DAT_1003c908;
  uVar6 = DAT_1003c900;
  uVar20 = psllw(*param_2,2);
  uVar2 = psllw(param_2[2],2);
  uVar7 = psllw(param_2[4],2);
  uVar8 = CONCAT22((short)((ulonglong)uVar2 >> 0x20),(short)((ulonglong)uVar20 >> 0x20));
  uVar13 = psllw(param_2[6],2);
  uVar1 = CONCAT22((short)((ulonglong)uVar13 >> 0x20),(short)((ulonglong)uVar7 >> 0x20));
  uVar15 = CONCAT44(CONCAT22((short)uVar13,(short)uVar7),CONCAT22((short)uVar2,(short)uVar20));
  uVar22 = CONCAT44(CONCAT22((short)((ulonglong)uVar13 >> 0x10),(short)((ulonglong)uVar7 >> 0x10)),
                    CONCAT22((short)((ulonglong)uVar2 >> 0x10),(short)((ulonglong)uVar20 >> 0x10)));
  uVar5 = CONCAT44(uVar1,uVar8);
  uVar9 = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar7 >> 0x30),uVar1)) >> 0x20),
                   (int)(CONCAT26((short)((ulonglong)uVar2 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar20 >> 0x30),uVar8)) >> 0x20));
  uVar4 = psllw(param_2[1],2);
  uVar14 = psllw(param_2[3],2);
  uVar2 = psllw(param_2[5],2);
  uVar1 = CONCAT22((short)((ulonglong)uVar14 >> 0x20),(short)((ulonglong)uVar4 >> 0x20));
  uVar13 = psllw(param_2[7],2);
  uVar8 = CONCAT22((short)((ulonglong)uVar13 >> 0x20),(short)((ulonglong)uVar2 >> 0x20));
  uVar3 = CONCAT44(CONCAT22((short)uVar13,(short)uVar2),CONCAT22((short)uVar14,(short)uVar4));
  uVar20 = CONCAT44(CONCAT22((short)((ulonglong)uVar13 >> 0x10),(short)((ulonglong)uVar2 >> 0x10)),
                    CONCAT22((short)((ulonglong)uVar14 >> 0x10),(short)((ulonglong)uVar4 >> 0x10)));
  uVar7 = CONCAT44(uVar8,uVar1);
  uVar2 = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar13 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar2 >> 0x30),uVar8)) >> 0x20),
                   (int)(CONCAT26((short)((ulonglong)uVar14 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar4 >> 0x30),uVar1)) >> 0x20));
  uVar14 = psubsw(uVar9,uVar3);
  uVar4 = paddsw(uVar3,uVar9);
  uVar21 = psubsw(uVar15,uVar2);
  uVar2 = paddsw(uVar2,uVar15);
  uVar15 = psubsw(uVar22,uVar7);
  uVar7 = paddsw(uVar7,uVar22);
  uVar9 = psubsw(uVar5,uVar20);
  uVar20 = paddsw(uVar20,uVar5);
  uVar13 = psubsw(uVar7,uVar20);
  uVar20 = paddsw(uVar20,uVar7);
  uVar7 = psubsw(uVar2,uVar4);
  uVar2 = paddsw(uVar4,uVar2);
  uVar4 = psubsw(uVar2,uVar20);
  uVar3 = paddsw(uVar20,uVar2);
  uVar2 = paddsw(uVar4,_DAT_1003c9a0);
  uVar5 = psraw(uVar2,1);
  uVar2 = paddsw(uVar13,uVar7);
  uVar13 = pmulhw(uVar2,_DAT_1003c918);
  uVar13 = paddsw(uVar13,uVar2);
  uVar2 = psubsw(uVar7,uVar13);
  uVar20 = paddsw(uVar13,uVar7);
  uVar4 = paddsw(uVar14,uVar9);
  uVar7 = paddsw(uVar9,uVar15);
  uVar14 = paddsw(uVar15,uVar21);
  uVar7 = pmulhw(CONCAT26((short)((ulonglong)uVar7 >> 0x30) * 2,
                          CONCAT24((short)((ulonglong)uVar7 >> 0x20) * 2,
                                   CONCAT22((short)((ulonglong)uVar7 >> 0x10) * 2,(short)uVar7 * 2))
                         ),DAT_1003c908);
  uVar13 = pmulhw(uVar21,_DAT_1003c8e0);
  uVar13 = paddsw(uVar13,uVar21);
  uVar22 = psubsw(uVar13,uVar7);
  uVar9 = paddsw(uVar7,uVar13);
  uVar7 = pmulhw(uVar4,DAT_1003c900);
  uVar13 = pmulhw(uVar14,DAT_1003c900);
  uVar14 = paddsw(uVar14,uVar7);
  uVar7 = psubsw(uVar4,uVar13);
  uVar10 = psubsw(uVar9,uVar14);
  uVar16 = paddsw(uVar14,uVar9);
  uVar23 = psubsw(uVar22,uVar7);
  uVar15 = paddsw(uVar7,uVar22);
  uVar9 = psllw(param_2[8],2);
  uVar7 = psllw(param_2[10],2);
  uVar13 = psllw(param_2[0xc],2);
  uVar8 = CONCAT22((short)((ulonglong)uVar7 >> 0x20),(short)((ulonglong)uVar9 >> 0x20));
  uVar4 = psllw(param_2[0xe],2);
  uVar1 = CONCAT22((short)((ulonglong)uVar4 >> 0x20),(short)((ulonglong)uVar13 >> 0x20));
  uVar18 = CONCAT44(CONCAT22((short)uVar4,(short)uVar13),CONCAT22((short)uVar7,(short)uVar9));
  uVar11 = CONCAT44(CONCAT22((short)((ulonglong)uVar4 >> 0x10),(short)((ulonglong)uVar13 >> 0x10)),
                    CONCAT22((short)((ulonglong)uVar7 >> 0x10),(short)((ulonglong)uVar9 >> 0x10)));
  uVar19 = CONCAT44(uVar1,uVar8);
  uVar21 = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar4 >> 0x30),
                                   CONCAT24((short)((ulonglong)uVar13 >> 0x30),uVar1)) >> 0x20),
                    (int)(CONCAT26((short)((ulonglong)uVar7 >> 0x30),
                                   CONCAT24((short)((ulonglong)uVar9 >> 0x30),uVar8)) >> 0x20));
  uVar14 = psllw(param_2[9],2);
  uVar17 = psllw(param_2[0xb],2);
  uVar7 = psllw(param_2[0xd],2);
  uVar1 = CONCAT22((short)((ulonglong)uVar17 >> 0x20),(short)((ulonglong)uVar14 >> 0x20));
  uVar4 = psllw(param_2[0xf],2);
  uVar8 = CONCAT22((short)((ulonglong)uVar4 >> 0x20),(short)((ulonglong)uVar7 >> 0x20));
  uVar22 = CONCAT44(CONCAT22((short)uVar4,(short)uVar7),CONCAT22((short)uVar17,(short)uVar14));
  uVar9 = CONCAT44(CONCAT22((short)((ulonglong)uVar4 >> 0x10),(short)((ulonglong)uVar7 >> 0x10)),
                   CONCAT22((short)((ulonglong)uVar17 >> 0x10),(short)((ulonglong)uVar14 >> 0x10)));
  uVar13 = CONCAT44(uVar8,uVar1);
  uVar7 = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar4 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar7 >> 0x30),uVar8)) >> 0x20),
                   (int)(CONCAT26((short)((ulonglong)uVar17 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar14 >> 0x30),uVar1)) >> 0x20));
  uVar17 = psubsw(uVar21,uVar22);
  uVar14 = paddsw(uVar22,uVar21);
  uVar24 = psubsw(uVar18,uVar7);
  uVar7 = paddsw(uVar7,uVar18);
  uVar18 = psubsw(uVar11,uVar13);
  uVar13 = paddsw(uVar13,uVar11);
  uVar22 = psubsw(uVar19,uVar9);
  uVar9 = paddsw(uVar9,uVar19);
  uVar4 = psubsw(uVar13,uVar9);
  uVar9 = paddsw(uVar9,uVar13);
  uVar13 = psubsw(uVar7,uVar14);
  uVar7 = paddsw(uVar14,uVar7);
  uVar14 = psubsw(uVar7,uVar9);
  uVar9 = paddsw(uVar9,uVar7);
  uVar7 = paddsw(uVar14,_DAT_1003c9a0);
  uVar14 = psraw(uVar7,1);
  uVar7 = paddsw(uVar4,uVar13);
  uVar4 = pmulhw(uVar7,_DAT_1003c918);
  uVar4 = paddsw(uVar4,uVar7);
  uVar7 = psubsw(uVar13,uVar4);
  uVar13 = paddsw(uVar4,uVar13);
  uVar21 = paddsw(uVar17,uVar22);
  uVar4 = paddsw(uVar22,uVar18);
  uVar19 = paddsw(uVar18,uVar24);
  uVar4 = pmulhw(CONCAT26((short)((ulonglong)uVar4 >> 0x30) * 2,
                          CONCAT24((short)((ulonglong)uVar4 >> 0x20) * 2,
                                   CONCAT22((short)((ulonglong)uVar4 >> 0x10) * 2,(short)uVar4 * 2))
                         ),DAT_1003c908);
  uVar22 = pmulhw(uVar24,_DAT_1003c8e0);
  uVar22 = paddsw(uVar22,uVar24);
  uVar18 = psubsw(uVar22,uVar4);
  uVar17 = paddsw(uVar4,uVar22);
  uVar4 = pmulhw(uVar21,DAT_1003c900);
  uVar22 = pmulhw(uVar19,DAT_1003c900);
  uVar19 = paddsw(uVar19,uVar4);
  uVar4 = psubsw(uVar21,uVar22);
  uVar11 = psubsw(uVar17,uVar19);
  uVar22 = paddsw(uVar19,uVar17);
  uVar24 = psubsw(uVar18,uVar4);
  uVar21 = paddsw(uVar4,uVar18);
  uVar4 = paddsw(uVar3,_DAT_1003c9a0);
  uVar17 = psraw(uVar4,1);
  uVar4 = paddsw(uVar16,_DAT_1003c9a0);
  uVar4 = psraw(uVar4,1);
  uVar20 = paddsw(uVar20,_DAT_1003c9a0);
  uVar20 = psraw(uVar20,1);
  uVar8 = CONCAT22((short)((ulonglong)uVar4 >> 0x20),(short)((ulonglong)uVar17 >> 0x20));
  uVar3 = paddsw(uVar23,_DAT_1003c9a0);
  uVar3 = psraw(uVar3,1);
  uVar1 = CONCAT22((short)((ulonglong)uVar3 >> 0x20),(short)((ulonglong)uVar20 >> 0x20));
  uVar23 = CONCAT44(CONCAT22((short)uVar3,(short)uVar20),CONCAT22((short)uVar4,(short)uVar17));
  uVar18 = CONCAT44(CONCAT22((short)((ulonglong)uVar3 >> 0x10),(short)((ulonglong)uVar20 >> 0x10)),
                    CONCAT22((short)((ulonglong)uVar4 >> 0x10),(short)((ulonglong)uVar17 >> 0x10)));
  uVar16 = CONCAT44(uVar1,uVar8);
  uVar17 = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar3 >> 0x30),
                                   CONCAT24((short)((ulonglong)uVar20 >> 0x30),uVar1)) >> 0x20),
                    (int)(CONCAT26((short)((ulonglong)uVar4 >> 0x30),
                                   CONCAT24((short)((ulonglong)uVar17 >> 0x30),uVar8)) >> 0x20));
  uVar20 = paddsw(uVar9,_DAT_1003c9a0);
  uVar9 = psraw(uVar20,1);
  uVar20 = paddsw(uVar22,_DAT_1003c9a0);
  uVar19 = psraw(uVar20,1);
  uVar13 = paddsw(uVar13,_DAT_1003c9a0);
  uVar13 = psraw(uVar13,1);
  uVar1 = CONCAT22((short)((ulonglong)uVar19 >> 0x20),(short)((ulonglong)uVar9 >> 0x20));
  uVar20 = paddsw(uVar24,_DAT_1003c9a0);
  uVar4 = psraw(uVar20,1);
  uVar8 = CONCAT22((short)((ulonglong)uVar4 >> 0x20),(short)((ulonglong)uVar13 >> 0x20));
  uVar22 = CONCAT44(CONCAT22((short)uVar4,(short)uVar13),CONCAT22((short)uVar19,(short)uVar9));
  uVar3 = CONCAT44(CONCAT22((short)((ulonglong)uVar4 >> 0x10),(short)((ulonglong)uVar13 >> 0x10)),
                   CONCAT22((short)((ulonglong)uVar19 >> 0x10),(short)((ulonglong)uVar9 >> 0x10)));
  uVar20 = CONCAT44(uVar8,uVar1);
  uVar13 = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar4 >> 0x30),
                                   CONCAT24((short)((ulonglong)uVar13 >> 0x30),uVar8)) >> 0x20),
                    (int)(CONCAT26((short)((ulonglong)uVar19 >> 0x30),
                                   CONCAT24((short)((ulonglong)uVar9 >> 0x30),uVar1)) >> 0x20));
  uVar19 = psubsw(uVar17,uVar22);
  uVar9 = paddsw(uVar22,uVar17);
  uVar24 = psubsw(uVar23,uVar13);
  uVar13 = paddsw(uVar13,uVar23);
  uVar17 = psubsw(uVar18,uVar20);
  uVar20 = paddsw(uVar20,uVar18);
  uVar22 = psubsw(uVar16,uVar3);
  uVar3 = paddsw(uVar3,uVar16);
  uVar4 = psubsw(uVar20,uVar3);
  uVar3 = paddsw(uVar3,uVar20);
  uVar20 = psubsw(uVar13,uVar9);
  uVar13 = paddsw(uVar9,uVar13);
  uVar9 = psubsw(uVar13,uVar3);
  uVar13 = paddsw(uVar3,uVar13);
  param_1[8] = uVar9;
  *param_1 = uVar13;
  uVar13 = paddsw(uVar4,uVar20);
  uVar4 = pmulhw(uVar13,_DAT_1003c918);
  uVar4 = paddsw(uVar4,uVar13);
  uVar13 = psubsw(uVar20,uVar4);
  uVar20 = paddsw(uVar4,uVar20);
  param_1[0xc] = uVar13;
  param_1[4] = uVar20;
  uVar4 = paddsw(uVar19,uVar22);
  uVar13 = paddsw(uVar22,uVar17);
  uVar9 = paddsw(uVar17,uVar24);
  uVar13 = pmulhw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) * 2,
                           CONCAT24((short)((ulonglong)uVar13 >> 0x20) * 2,
                                    CONCAT22((short)((ulonglong)uVar13 >> 0x10) * 2,
                                             (short)uVar13 * 2))),uVar12);
  uVar20 = pmulhw(uVar24,_DAT_1003c8e0);
  uVar20 = paddsw(uVar20,uVar24);
  uVar22 = psubsw(uVar20,uVar13);
  uVar3 = paddsw(uVar13,uVar20);
  uVar13 = pmulhw(uVar4,uVar6);
  uVar20 = pmulhw(uVar9,uVar6);
  uVar9 = paddsw(uVar9,uVar13);
  uVar13 = psubsw(uVar4,uVar20);
  uVar20 = psubsw(uVar3,uVar9);
  uVar4 = paddsw(uVar9,uVar3);
  param_1[0xe] = uVar20;
  param_1[2] = uVar4;
  uVar20 = psubsw(uVar22,uVar13);
  uVar13 = paddsw(uVar13,uVar22);
  param_1[6] = uVar20;
  param_1[10] = uVar13;
  uVar8 = CONCAT22((short)((ulonglong)uVar15 >> 0x20),(short)((ulonglong)uVar5 >> 0x20));
  uVar1 = CONCAT22((short)((ulonglong)uVar10 >> 0x20),(short)((ulonglong)uVar2 >> 0x20));
  uVar19 = CONCAT44(CONCAT22((short)uVar10,(short)uVar2),CONCAT22((short)uVar15,(short)uVar5));
  uVar17 = CONCAT44(CONCAT22((short)((ulonglong)uVar10 >> 0x10),(short)((ulonglong)uVar2 >> 0x10)),
                    CONCAT22((short)((ulonglong)uVar15 >> 0x10),(short)((ulonglong)uVar5 >> 0x10)));
  uVar22 = CONCAT44(uVar1,uVar8);
  uVar3 = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar10 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar2 >> 0x30),uVar1)) >> 0x20),
                   (int)(CONCAT26((short)((ulonglong)uVar15 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar5 >> 0x30),uVar8)) >> 0x20));
  uVar1 = CONCAT22((short)((ulonglong)uVar21 >> 0x20),(short)((ulonglong)uVar14 >> 0x20));
  uVar8 = CONCAT22((short)((ulonglong)uVar11 >> 0x20),(short)((ulonglong)uVar7 >> 0x20));
  uVar4 = CONCAT44(CONCAT22((short)uVar11,(short)uVar7),CONCAT22((short)uVar21,(short)uVar14));
  uVar20 = CONCAT44(CONCAT22((short)((ulonglong)uVar11 >> 0x10),(short)((ulonglong)uVar7 >> 0x10)),
                    CONCAT22((short)((ulonglong)uVar21 >> 0x10),(short)((ulonglong)uVar14 >> 0x10)))
  ;
  uVar13 = CONCAT44(uVar8,uVar1);
  uVar2 = CONCAT44((int)(CONCAT26((short)((ulonglong)uVar11 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar7 >> 0x30),uVar8)) >> 0x20),
                   (int)(CONCAT26((short)((ulonglong)uVar21 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar14 >> 0x30),uVar1)) >> 0x20));
  uVar9 = psubsw(uVar3,uVar4);
  uVar4 = paddsw(uVar4,uVar3);
  uVar14 = psubsw(uVar19,uVar2);
  uVar2 = paddsw(uVar2,uVar19);
  uVar5 = psubsw(uVar17,uVar13);
  uVar7 = paddsw(uVar13,uVar17);
  uVar3 = psubsw(uVar22,uVar20);
  uVar20 = paddsw(uVar20,uVar22);
  uVar13 = psubsw(uVar7,uVar20);
  uVar20 = paddsw(uVar20,uVar7);
  uVar7 = psubsw(uVar2,uVar4);
  uVar2 = paddsw(uVar4,uVar2);
  uVar4 = psubsw(uVar2,uVar20);
  uVar2 = paddsw(uVar20,uVar2);
  param_1[9] = uVar4;
  param_1[1] = uVar2;
  uVar2 = paddsw(uVar13,uVar7);
  uVar13 = pmulhw(uVar2,_DAT_1003c918);
  uVar13 = paddsw(uVar13,uVar2);
  uVar2 = psubsw(uVar7,uVar13);
  uVar7 = paddsw(uVar13,uVar7);
  param_1[0xd] = uVar2;
  param_1[5] = uVar7;
  uVar2 = paddsw(uVar9,uVar3);
  uVar7 = paddsw(uVar3,uVar5);
  uVar13 = paddsw(uVar5,uVar14);
  uVar12 = pmulhw(CONCAT26((short)((ulonglong)uVar7 >> 0x30) * 2,
                           CONCAT24((short)((ulonglong)uVar7 >> 0x20) * 2,
                                    CONCAT22((short)((ulonglong)uVar7 >> 0x10) * 2,(short)uVar7 * 2)
                                   )),uVar12);
  uVar7 = pmulhw(uVar14,_DAT_1003c8e0);
  uVar7 = paddsw(uVar7,uVar14);
  uVar20 = psubsw(uVar7,uVar12);
  uVar7 = paddsw(uVar12,uVar7);
  uVar12 = pmulhw(uVar2,uVar6);
  uVar6 = pmulhw(uVar13,uVar6);
  uVar13 = paddsw(uVar13,uVar12);
  uVar6 = psubsw(uVar2,uVar6);
  uVar12 = psubsw(uVar7,uVar13);
  uVar2 = paddsw(uVar13,uVar7);
  param_1[0xf] = uVar12;
  param_1[3] = uVar2;
  uVar12 = psubsw(uVar20,uVar6);
  uVar6 = paddsw(uVar6,uVar20);
  param_1[7] = uVar12;
  param_1[0xb] = uVar6;
  return;
}


