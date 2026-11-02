/* Module: erv23260.dll
   Function: FUN_63822238
   Address: 63822238
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63822238(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  uint in_EAX;
  undefined8 *unaff_ESI;
  undefined1 in_MM0_Ba;
  undefined1 in_MM0_Bb;
  undefined1 in_MM0_Bc;
  undefined1 in_MM0_Bd;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar19;
  short sVar18;
  undefined1 uVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined1 uVar24;
  undefined1 uVar26;
  short sVar25;
  undefined1 uVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  sVar8 = (short)in_stack_00000030;
  sVar9 = (short)((ulonglong)in_stack_00000030 >> 0x10);
  sVar10 = (short)((ulonglong)in_stack_00000030 >> 0x20);
  sVar11 = (short)((ulonglong)in_stack_00000030 >> 0x30);
  if ((in_EAX & 1) != 0) {
    if ((in_EAX & 0x100) == 0) {
      uVar5 = *(undefined4 *)unaff_ESI;
      uVar6 = *(undefined4 *)((int)unaff_ESI + param_1);
      sVar34 = CONCAT11(in_MM0_Bd,(char)((uint)uVar5 >> 0x18));
      uVar7 = *(undefined4 *)((int)unaff_ESI + param_1 * 2);
      sVar12 = CONCAT11(in_MM0_Bd,(char)((uint)uVar6 >> 0x18));
      sVar30 = CONCAT11(in_MM0_Bb,(char)((uint)uVar6 >> 8));
      sVar21 = CONCAT11(in_MM0_Ba,(char)uVar6);
      sVar23 = CONCAT11(in_MM0_Bd,(char)((uint)uVar7 >> 0x18));
      sVar13 = CONCAT11(in_MM0_Bb,(char)((uint)uVar7 >> 8));
      sVar25 = CONCAT11(in_MM0_Ba,(char)uVar7);
      sVar22 = (short)(CONCAT35(CONCAT21(sVar12,in_MM0_Bc),
                                CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20);
      uVar6 = *(undefined4 *)((int)unaff_ESI + param_2);
      psraw(CONCAT26(sVar34 + sVar11 + sVar12,
                     CONCAT24((short)(CONCAT35(CONCAT21(sVar34,in_MM0_Bc),
                                               CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >> 0x20)
                              + sVar10 + sVar22,
                              CONCAT22(CONCAT11(in_MM0_Bb,(char)((uint)uVar5 >> 8)) + sVar9 + sVar30
                                       ,CONCAT11(in_MM0_Ba,(char)uVar5) + sVar8 + sVar21))),1);
      sVar28 = (short)(CONCAT35(CONCAT21(sVar23,in_MM0_Bc),
                                CONCAT14((char)((uint)uVar7 >> 0x10),uVar7)) >> 0x20);
      uVar5 = *(undefined4 *)((int)unaff_ESI + param_1 * 4);
      sVar34 = CONCAT11(in_MM0_Bd,(char)((uint)uVar6 >> 0x18));
      sVar18 = CONCAT11(in_MM0_Bb,(char)((uint)uVar6 >> 8));
      sVar29 = CONCAT11(in_MM0_Ba,(char)uVar6);
      psraw(CONCAT26(sVar12 + sVar11 + sVar23,
                     CONCAT24(sVar22 + sVar10 + sVar28,
                              CONCAT22(sVar30 + sVar9 + sVar13,sVar21 + sVar8 + sVar25))),1);
      sVar12 = CONCAT11(in_MM0_Bd,(char)((uint)uVar5 >> 0x18));
      sVar30 = (short)(CONCAT35(CONCAT21(sVar34,in_MM0_Bc),
                                CONCAT14((char)((uint)uVar6 >> 0x10),uVar6)) >> 0x20);
      psraw(CONCAT26(sVar23 + sVar11 + sVar34,
                     CONCAT24(sVar28 + sVar10 + sVar30,
                              CONCAT22(sVar13 + sVar9 + sVar18,sVar25 + sVar8 + sVar29))),1);
      psraw(CONCAT26(sVar34 + sVar11 + sVar12,
                     CONCAT24(sVar30 + sVar10 +
                              (short)(CONCAT35(CONCAT21(sVar12,in_MM0_Bc),
                                               CONCAT14((char)((uint)uVar5 >> 0x10),uVar5)) >> 0x20)
                              ,CONCAT22(sVar18 + sVar9 +
                                        CONCAT11(in_MM0_Bb,(char)((uint)uVar5 >> 8)),
                                        sVar29 + sVar8 + CONCAT11(in_MM0_Ba,(char)uVar5)))),1);
      return;
    }
    uVar1 = *unaff_ESI;
    uVar2 = *(undefined8 *)((int)unaff_ESI + param_1);
    uVar3 = *(undefined8 *)((int)unaff_ESI + param_1 * 2);
    sVar34 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar1 >> 0x20));
    uVar16 = (undefined1)((ulonglong)uVar1 >> 0x18);
    uVar15 = (undefined1)((ulonglong)uVar1 >> 0x10);
    uVar14 = (undefined1)((ulonglong)uVar1 >> 8);
    sVar12 = CONCAT11(in_MM0_Bd,uVar16);
    sVar8 = (short)in_stack_00000038;
    sVar9 = (short)((ulonglong)in_stack_00000038 >> 0x10);
    sVar10 = (short)((ulonglong)in_stack_00000038 >> 0x20);
    sVar11 = (short)((ulonglong)in_stack_00000038 >> 0x30);
    sVar23 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar2 >> 0x20));
    uVar20 = (undefined1)((ulonglong)uVar2 >> 0x18);
    uVar19 = (undefined1)((ulonglong)uVar2 >> 0x10);
    uVar17 = (undefined1)((ulonglong)uVar2 >> 8);
    uVar4 = *(undefined8 *)((int)unaff_ESI + param_2);
    sVar30 = CONCAT11(in_MM0_Bd,uVar20);
    sVar18 = CONCAT11(in_MM0_Ba,uVar17) + CONCAT11(in_MM0_Ba,(char)uVar2);
    sVar21 = CONCAT11(in_MM0_Bb,uVar19) + CONCAT11(in_MM0_Bb,uVar17);
    sVar22 = (short)CONCAT31(CONCAT21(sVar23,in_MM0_Bc),uVar20) +
             (short)CONCAT31(CONCAT21(sVar30,in_MM0_Bc),uVar19);
    sVar23 = sVar23 + sVar30;
    sVar30 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar3 >> 0x20));
    uVar20 = (undefined1)((ulonglong)uVar3 >> 0x18);
    uVar19 = (undefined1)((ulonglong)uVar3 >> 0x10);
    uVar17 = (undefined1)((ulonglong)uVar3 >> 8);
    sVar13 = CONCAT11(in_MM0_Bd,uVar20);
    sVar25 = CONCAT11(in_MM0_Ba,uVar17) + CONCAT11(in_MM0_Ba,(char)uVar3);
    sVar28 = CONCAT11(in_MM0_Bb,uVar19) + CONCAT11(in_MM0_Bb,uVar17);
    sVar29 = (short)CONCAT31(CONCAT21(sVar30,in_MM0_Bc),uVar20) +
             (short)CONCAT31(CONCAT21(sVar13,in_MM0_Bc),uVar19);
    sVar30 = sVar30 + sVar13;
    uVar2 = *(undefined8 *)((int)unaff_ESI + param_1 * 4);
    psraw(CONCAT26(sVar34 + sVar12 + sVar11 + sVar23,
                   CONCAT24((short)CONCAT31(CONCAT21(sVar34,in_MM0_Bc),uVar16) +
                            (short)CONCAT31(CONCAT21(sVar12,in_MM0_Bc),uVar15) + sVar10 + sVar22,
                            CONCAT22(CONCAT11(in_MM0_Bb,uVar15) + CONCAT11(in_MM0_Bb,uVar14) + sVar9
                                     + sVar21,CONCAT11(in_MM0_Ba,uVar14) +
                                              CONCAT11(in_MM0_Ba,(char)uVar1) + sVar8 + sVar18))),2)
    ;
    sVar34 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar4 >> 0x20));
    uVar16 = (undefined1)((ulonglong)uVar4 >> 0x18);
    uVar15 = (undefined1)((ulonglong)uVar4 >> 0x10);
    uVar14 = (undefined1)((ulonglong)uVar4 >> 8);
    sVar12 = CONCAT11(in_MM0_Bd,uVar16);
    sVar31 = CONCAT11(in_MM0_Ba,uVar14) + CONCAT11(in_MM0_Ba,(char)uVar4);
    sVar32 = CONCAT11(in_MM0_Bb,uVar15) + CONCAT11(in_MM0_Bb,uVar14);
    sVar33 = (short)CONCAT31(CONCAT21(sVar34,in_MM0_Bc),uVar16) +
             (short)CONCAT31(CONCAT21(sVar12,in_MM0_Bc),uVar15);
    sVar34 = sVar34 + sVar12;
    sVar12 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar2 >> 0x20));
    uVar16 = (undefined1)((ulonglong)uVar2 >> 0x18);
    uVar15 = (undefined1)((ulonglong)uVar2 >> 0x10);
    uVar14 = (undefined1)((ulonglong)uVar2 >> 8);
    sVar13 = CONCAT11(in_MM0_Bd,uVar16);
    psraw(CONCAT26(sVar23 + sVar11 + sVar30,
                   CONCAT24(sVar22 + sVar10 + sVar29,
                            CONCAT22(sVar21 + sVar9 + sVar28,sVar18 + sVar8 + sVar25))),2);
    psraw(CONCAT26(sVar30 + sVar11 + sVar34,
                   CONCAT24(sVar29 + sVar10 + sVar33,
                            CONCAT22(sVar28 + sVar9 + sVar32,sVar25 + sVar8 + sVar31))),2);
    psraw(CONCAT26(sVar34 + sVar11 + sVar12 + sVar13,
                   CONCAT24(sVar33 + sVar10 +
                            (short)CONCAT31(CONCAT21(sVar12,in_MM0_Bc),uVar16) +
                            (short)CONCAT31(CONCAT21(sVar13,in_MM0_Bc),uVar15),
                            CONCAT22(sVar32 + sVar9 +
                                     CONCAT11(in_MM0_Bb,uVar15) + CONCAT11(in_MM0_Bb,uVar14),
                                     sVar31 + sVar8 +
                                     CONCAT11(in_MM0_Ba,uVar14) + CONCAT11(in_MM0_Ba,(char)uVar2))))
          ,2);
    return;
  }
  if ((in_EAX & 0x100) == 0) {
    return;
  }
  uVar1 = *unaff_ESI;
  uVar2 = *(undefined8 *)((int)unaff_ESI + param_1);
  sVar34 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar1 >> 0x20));
  uVar16 = (undefined1)((ulonglong)uVar1 >> 0x18);
  uVar15 = (undefined1)((ulonglong)uVar1 >> 0x10);
  uVar14 = (undefined1)((ulonglong)uVar1 >> 8);
  uVar3 = *(undefined8 *)((int)unaff_ESI + param_1 * 2);
  sVar12 = CONCAT11(in_MM0_Bd,uVar16);
  sVar23 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar2 >> 0x20));
  uVar20 = (undefined1)((ulonglong)uVar2 >> 0x18);
  uVar19 = (undefined1)((ulonglong)uVar2 >> 0x10);
  uVar17 = (undefined1)((ulonglong)uVar2 >> 8);
  sVar30 = CONCAT11(in_MM0_Bd,uVar20);
  sVar13 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar3 >> 0x20));
  uVar27 = (undefined1)((ulonglong)uVar3 >> 0x18);
  uVar26 = (undefined1)((ulonglong)uVar3 >> 0x10);
  uVar24 = (undefined1)((ulonglong)uVar3 >> 8);
  sVar18 = CONCAT11(in_MM0_Bd,uVar27);
  uVar4 = *(undefined8 *)((int)unaff_ESI + param_2);
  psraw(CONCAT26(sVar34 + sVar11 + sVar12,
                 CONCAT24((short)CONCAT31(CONCAT21(sVar34,in_MM0_Bc),uVar16) + sVar10 +
                          (short)CONCAT31(CONCAT21(sVar12,in_MM0_Bc),uVar15),
                          CONCAT22(CONCAT11(in_MM0_Bb,uVar15) + sVar9 + CONCAT11(in_MM0_Bb,uVar14),
                                   CONCAT11(in_MM0_Ba,uVar14) + sVar8 +
                                   CONCAT11(in_MM0_Ba,(char)uVar1)))),1);
  psraw(CONCAT26(sVar23 + sVar11 + sVar30,
                 CONCAT24((short)CONCAT31(CONCAT21(sVar23,in_MM0_Bc),uVar20) + sVar10 +
                          (short)CONCAT31(CONCAT21(sVar30,in_MM0_Bc),uVar19),
                          CONCAT22(CONCAT11(in_MM0_Bb,uVar19) + sVar9 + CONCAT11(in_MM0_Bb,uVar17),
                                   CONCAT11(in_MM0_Ba,uVar17) + sVar8 +
                                   CONCAT11(in_MM0_Ba,(char)uVar2)))),1);
  sVar34 = CONCAT11(in_MM0_Bd,(char)((ulonglong)uVar4 >> 0x20));
  uVar16 = (undefined1)((ulonglong)uVar4 >> 0x18);
  uVar15 = (undefined1)((ulonglong)uVar4 >> 0x10);
  uVar14 = (undefined1)((ulonglong)uVar4 >> 8);
  sVar12 = CONCAT11(in_MM0_Bd,uVar16);
  psraw(CONCAT26(sVar13 + sVar11 + sVar18,
                 CONCAT24((short)CONCAT31(CONCAT21(sVar13,in_MM0_Bc),uVar27) + sVar10 +
                          (short)CONCAT31(CONCAT21(sVar18,in_MM0_Bc),uVar26),
                          CONCAT22(CONCAT11(in_MM0_Bb,uVar26) + sVar9 + CONCAT11(in_MM0_Bb,uVar24),
                                   CONCAT11(in_MM0_Ba,uVar24) + sVar8 +
                                   CONCAT11(in_MM0_Ba,(char)uVar3)))),1);
  psraw(CONCAT26(sVar34 + sVar11 + sVar12,
                 CONCAT24((short)CONCAT31(CONCAT21(sVar34,in_MM0_Bc),uVar16) + sVar10 +
                          (short)CONCAT31(CONCAT21(sVar12,in_MM0_Bc),uVar15),
                          CONCAT22(CONCAT11(in_MM0_Bb,uVar15) + sVar9 + CONCAT11(in_MM0_Bb,uVar14),
                                   CONCAT11(in_MM0_Ba,uVar14) + sVar8 +
                                   CONCAT11(in_MM0_Ba,(char)uVar4)))),1);
  return;
}


