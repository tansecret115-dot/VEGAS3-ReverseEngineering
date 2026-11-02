/* Module: erv23260.dll
   Function: FUN_63824a08
   Address: 63824a08
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_63824a08(undefined1 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  undefined1 uVar5;
  char cVar7;
  uint uVar6;
  uint uVar9;
  int unaff_EBP;
  undefined8 *unaff_EDI;
  int iVar10;
  short in_MM0_Wa;
  short in_MM0_Wb;
  short in_MM0_Wc;
  short in_MM0_Wd;
  short sVar11;
  short sVar13;
  short sVar14;
  undefined8 uVar12;
  short sVar15;
  undefined4 uVar16;
  undefined8 in_MM2;
  undefined8 uVar19;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uVar29;
  short sVar36;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  undefined4 in_MM6_Da;
  undefined4 uVar37;
  short sVar38;
  undefined8 auStack_78 [15];
  char cVar8;
  undefined6 uVar17;
  uint7 uVar18;
  byte bVar20;
  undefined6 uVar24;
  uint7 uVar25;
  byte bVar28;
  undefined6 uVar30;
  uint7 uVar31;
  byte bVar35;
  
  uVar6 = (uint)CONCAT11(4,param_1);
  uVar27 = *unaff_EDI;
  uVar12 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
  uVar21 = CONCAT17((char)((ulonglong)uVar27 >> 0x38) + (char)((ulonglong)uVar12 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar27 >> 0x30) + (char)((ulonglong)uVar12 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar27 >> 0x28) +
                                      (char)((ulonglong)uVar12 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar27 >> 0x20) +
                                               (char)((ulonglong)uVar12 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar27 >> 0x18) +
                                                        (char)((ulonglong)uVar12 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar27 >> 0x10) +
                                                                 (char)((ulonglong)uVar12 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar27
                                                                                >> 8) +
                                                                          (char)((ulonglong)uVar12
                                                                                >> 8),
                                                                          (char)uVar27 +
                                                                          (char)uVar12)))))));
  uVar27 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
  uVar12 = 0;
  do {
    auStack_78[unaff_EBP] = in_MM2;
    do {
      uVar37 = in_MM6_Da;
      uVar19 = *(undefined8 *)(unaff_EBP * 3 + (int)unaff_EDI);
      bVar28 = (char)((ulonglong)uVar27 >> 8) + (char)((ulonglong)uVar19 >> 8);
      uVar23 = CONCAT13((char)((ulonglong)uVar27 >> 0x18) + (char)((ulonglong)uVar19 >> 0x18),
                        CONCAT12((char)((ulonglong)uVar27 >> 0x10) +
                                 (char)((ulonglong)uVar19 >> 0x10),
                                 CONCAT11(bVar28,(char)uVar27 + (char)uVar19)));
      uVar24 = CONCAT15((char)((ulonglong)uVar27 >> 0x28) + (char)((ulonglong)uVar19 >> 0x28),
                        CONCAT14((char)((ulonglong)uVar27 >> 0x20) +
                                 (char)((ulonglong)uVar19 >> 0x20),uVar23));
      uVar25 = CONCAT16((char)((ulonglong)uVar27 >> 0x30) + (char)((ulonglong)uVar19 >> 0x30),uVar24
                       );
      uVar32 = uVar21 & 0xff00ff00ff00ff;
      uVar1 = *(undefined8 *)(unaff_EBP * 3 + 8 + (int)unaff_EDI);
      uVar2 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 2 + 8);
      bVar20 = (char)((ulonglong)uVar1 >> 8) + (char)((ulonglong)uVar2 >> 8);
      uVar16 = CONCAT13((char)((ulonglong)uVar1 >> 0x18) + (char)((ulonglong)uVar2 >> 0x18),
                        CONCAT12((char)((ulonglong)uVar1 >> 0x10) + (char)((ulonglong)uVar2 >> 0x10)
                                 ,CONCAT11(bVar20,(char)uVar1 + (char)uVar2)));
      uVar17 = CONCAT15((char)((ulonglong)uVar1 >> 0x28) + (char)((ulonglong)uVar2 >> 0x28),
                        CONCAT14((char)((ulonglong)uVar1 >> 0x20) + (char)((ulonglong)uVar2 >> 0x20)
                                 ,uVar16));
      uVar18 = CONCAT16((char)((ulonglong)uVar1 >> 0x30) + (char)((ulonglong)uVar2 >> 0x30),uVar17);
      uVar33 = (ulonglong)uVar25 & 0xff00ff00ff00ff;
      in_MM0_Wa = in_MM0_Wa + (short)uVar32 + (short)uVar33;
      in_MM0_Wb = in_MM0_Wb + (short)(uVar32 >> 0x10) + (short)(uVar33 >> 0x10);
      in_MM0_Wc = in_MM0_Wc + (short)(uVar32 >> 0x20) + (short)(uVar33 >> 0x20);
      in_MM0_Wd = in_MM0_Wd + (short)(uVar32 >> 0x30) + (short)(uVar33 >> 0x30);
      uVar26 = unaff_EDI[1];
      uVar32 = (ulonglong)uVar18 & 0xff00ff00ff00ff;
      uVar34 = *(undefined8 *)((int)unaff_EDI + unaff_EBP + 8);
      bVar35 = (char)((ulonglong)uVar26 >> 8) + (char)((ulonglong)uVar34 >> 8);
      uVar29 = CONCAT13((char)((ulonglong)uVar26 >> 0x18) + (char)((ulonglong)uVar34 >> 0x18),
                        CONCAT12((char)((ulonglong)uVar26 >> 0x10) +
                                 (char)((ulonglong)uVar34 >> 0x10),
                                 CONCAT11(bVar35,(char)uVar26 + (char)uVar34)));
      uVar30 = CONCAT15((char)((ulonglong)uVar26 >> 0x28) + (char)((ulonglong)uVar34 >> 0x28),
                        CONCAT14((char)((ulonglong)uVar26 >> 0x20) +
                                 (char)((ulonglong)uVar34 >> 0x20),uVar29));
      uVar31 = CONCAT16((char)((ulonglong)uVar26 >> 0x30) + (char)((ulonglong)uVar34 >> 0x30),uVar30
                       );
      uVar33 = (ulonglong)uVar31 & 0xff00ff00ff00ff;
      uVar22 = pmaddwd(CONCAT26((ushort)(uVar21 >> 0x38),
                                CONCAT24((ushort)(uVar21 >> 0x20) >> 8,
                                         CONCAT22((ushort)(uVar21 >> 0x10) >> 8,(ushort)uVar21 >> 8)
                                        )),0x1000100010001);
      uVar34 = pmaddwd(CONCAT26((ushort)(CONCAT17((char)((ulonglong)uVar26 >> 0x38) +
                                                  (char)((ulonglong)uVar34 >> 0x38),uVar31) >> 0x38)
                                ,CONCAT24((ushort)((uint6)uVar30 >> 0x28),
                                          CONCAT22((ushort)((uint)uVar29 >> 0x18),(ushort)bVar35))),
                       0x1000100010001);
      uVar26 = pmaddwd(CONCAT26((ushort)(CONCAT17((char)((ulonglong)uVar27 >> 0x38) +
                                                  (char)((ulonglong)uVar19 >> 0x38),uVar25) >> 0x38)
                                ,CONCAT24((ushort)((uint6)uVar24 >> 0x28),
                                          CONCAT22((ushort)((uint)uVar23 >> 0x18),(ushort)bVar28))),
                       0x1000100010001);
      uVar19 = pmaddwd(CONCAT26((ushort)(CONCAT17((char)((ulonglong)uVar1 >> 0x38) +
                                                  (char)((ulonglong)uVar2 >> 0x38),uVar18) >> 0x38),
                                CONCAT24((ushort)((uint6)uVar17 >> 0x28),
                                         CONCAT22((ushort)((uint)uVar16 >> 0x18),(ushort)bVar20))),
                       0x1000100010001);
      unaff_EDI = (undefined8 *)((int)unaff_EDI + unaff_EBP * 4);
      sVar11 = (short)uVar12 + (short)uVar32 + (short)uVar33;
      sVar13 = (short)((ulonglong)uVar12 >> 0x10) + (short)(uVar32 >> 0x10) +
               (short)(uVar33 >> 0x10);
      sVar14 = (short)((ulonglong)uVar12 >> 0x20) + (short)(uVar32 >> 0x20) +
               (short)(uVar33 >> 0x20);
      sVar15 = (short)((ulonglong)uVar12 >> 0x30) + (short)(uVar32 >> 0x30) +
               (short)(uVar33 >> 0x30);
      uVar12 = CONCAT26(sVar15,CONCAT24(sVar14,CONCAT22(sVar13,sVar11)));
      sVar38 = (short)uVar34 + (short)uVar22 +
               (short)((ulonglong)uVar34 >> 0x20) + (short)((ulonglong)uVar22 >> 0x20);
      uVar27 = *unaff_EDI;
      sVar36 = (short)uVar26 + (short)uVar19 +
               (short)((ulonglong)uVar26 >> 0x20) + (short)((ulonglong)uVar19 >> 0x20);
      uVar19 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
      uVar21 = CONCAT17((char)((ulonglong)uVar27 >> 0x38) + (char)((ulonglong)uVar19 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar27 >> 0x30) +
                                 (char)((ulonglong)uVar19 >> 0x30),
                                 CONCAT15((char)((ulonglong)uVar27 >> 0x28) +
                                          (char)((ulonglong)uVar19 >> 0x28),
                                          CONCAT14((char)((ulonglong)uVar27 >> 0x20) +
                                                   (char)((ulonglong)uVar19 >> 0x20),
                                                   CONCAT13((char)((ulonglong)uVar27 >> 0x18) +
                                                            (char)((ulonglong)uVar19 >> 0x18),
                                                            CONCAT12((char)((ulonglong)uVar27 >>
                                                                           0x10) +
                                                                     (char)((ulonglong)uVar19 >>
                                                                           0x10),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar27 >> 8) +
                                                                              (char)((ulonglong)
                                                                                     uVar19 >> 8),
                                                                              (char)uVar27 +
                                                                              (char)uVar19)))))));
      in_MM6_Da = CONCAT22(sVar36,sVar38);
      uVar27 = *(undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
      cVar8 = (char)(uVar6 >> 8);
      uVar5 = (undefined1)uVar6;
      cVar7 = cVar8 + -2;
      uVar6 = (uint)CONCAT11(cVar7,uVar5);
    } while (cVar7 != '\0' && '\x01' < cVar8);
    uVar6 = (uint)CONCAT11(3,uVar5);
    in_MM2 = CONCAT44(in_MM6_Da,uVar37);
  } while (cVar7 == '\0');
  iVar3 = unaff_EBP * 2;
  iVar10 = param_2 + unaff_EBP * -2;
  uVar4 = (uint)CONCAT11((char)in_EAX + '\x01',(char)in_EAX);
  uVar27 = CONCAT44(*(undefined4 *)(iVar10 + 4 + iVar3),*(undefined4 *)(iVar10 + iVar3));
  do {
    uVar23 = *(undefined4 *)(iVar10 + 8 + iVar3);
    uVar27 = CONCAT26((short)((ulonglong)uVar27 >> 0x30) - in_MM0_Wd,
                      CONCAT24((short)((ulonglong)uVar27 >> 0x20) - in_MM0_Wc,
                               CONCAT22((short)((ulonglong)uVar27 >> 0x10) - in_MM0_Wb,
                                        (short)uVar27 - in_MM0_Wa)));
    uVar16 = *(undefined4 *)(iVar10 + 0xc + iVar3);
    pmaddwd(uVar27,uVar27);
    uVar29 = *(undefined4 *)(iVar10 + 0xc + unaff_EBP * 0xc);
    uVar27 = CONCAT26((short)((uint)uVar16 >> 0x10) - sVar15,
                      CONCAT24((short)uVar16 - sVar14,
                               CONCAT22((short)((uint)uVar23 >> 0x10) - sVar13,
                                        (short)uVar23 - sVar11)));
    uVar16 = *(undefined4 *)(iVar10 + 0xc + unaff_EBP * 0x10);
    pmaddwd(uVar27,uVar27);
    uVar23 = *(undefined4 *)(iVar10 + 0xc + unaff_EBP * 4);
    uVar27 = CONCAT26((short)((uint)uVar16 >> 0x10) - sVar36,
                      CONCAT24((short)uVar16 - sVar38,
                               CONCAT22((short)((uint)uVar29 >> 0x10) -
                                        (short)((uint)uVar37 >> 0x10),(short)uVar29 - (short)uVar37)
                              ));
    uVar16 = *(undefined4 *)(iVar10 + 0xc + unaff_EBP * 8);
    pmaddwd(uVar27,uVar27);
    uVar27 = auStack_78[unaff_EBP];
    uVar27 = CONCAT26((short)((uint)uVar16 >> 0x10) - (short)((ulonglong)uVar27 >> 0x30),
                      CONCAT24((short)uVar16 - (short)((ulonglong)uVar27 >> 0x20),
                               CONCAT22((short)((uint)uVar23 >> 0x10) -
                                        (short)((ulonglong)uVar27 >> 0x10),
                                        (short)uVar23 - (short)uVar27)));
    bVar20 = (char)uVar4 - 1;
    pmaddwd(uVar27,uVar27);
    uVar9 = -(uint)((char)uVar4 == '\0') & (unaff_EBP + 0x7fffffff) - in_EAX;
    iVar10 = iVar10 + 4 + uVar9 * 4;
    uVar27 = CONCAT44(*(undefined4 *)(iVar10 + 4 + iVar3),*(undefined4 *)(iVar10 + iVar3));
    bVar28 = (byte)((int)uVar9 >> 0x1f) & (byte)(uVar4 >> 8);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar20 + bVar28);
    cVar7 = (char)uVar6;
    uVar6 = (uint)(byte)(cVar7 - CARRY1(bVar20,bVar28));
  } while (CARRY1(bVar20,bVar28) <= cVar7);
  return CONCAT26(in_MM0_Wd,CONCAT24(in_MM0_Wc,CONCAT22(in_MM0_Wb,in_MM0_Wa)));
}


