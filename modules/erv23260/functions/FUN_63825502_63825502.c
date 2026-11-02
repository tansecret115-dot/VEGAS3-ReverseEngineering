/* Module: erv23260.dll
   Function: FUN_63825502
   Address: 63825502
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_63825502(void)

{
  int in_EAX;
  int iVar1;
  byte unaff_BL;
  byte bVar2;
  byte bVar3;
  uint unaff_EBP;
  int unaff_ESI;
  undefined8 *puVar4;
  undefined8 *unaff_EDI;
  undefined4 uVar5;
  undefined8 uVar7;
  ulonglong uVar8;
  ushort uVar9;
  char cVar12;
  char cVar13;
  ushort uVar14;
  char cVar15;
  char cVar16;
  ushort uVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar10;
  ushort uVar20;
  ulonglong uVar11;
  char cVar21;
  char cVar22;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  longlong lVar23;
  undefined8 uVar30;
  short sVar31;
  short sVar33;
  short sVar34;
  undefined8 uVar32;
  ushort uVar35;
  ushort uVar37;
  ushort uVar38;
  undefined8 uVar36;
  ushort uVar39;
  undefined8 in_MM6;
  undefined8 in_MM7;
  undefined8 uVar40;
  undefined6 uVar6;
  
  bVar2 = unaff_BL & 0xf;
  puVar4 = (undefined8 *)(unaff_ESI - unaff_EBP);
LAB_63825507:
  uVar30 = *puVar4;
  uVar10 = *(undefined8 *)((int)puVar4 + unaff_EBP);
  uVar32 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
  uVar30 = CONCAT17((char)((ulonglong)uVar30 >> 0x38) + (char)((ulonglong)uVar10 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar30 >> 0x30) + (char)((ulonglong)uVar10 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar30 >> 0x28) +
                                      (char)((ulonglong)uVar10 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar30 >> 0x20) +
                                               (char)((ulonglong)uVar10 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar30 >> 0x18) +
                                                        (char)((ulonglong)uVar10 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar30 >> 0x10) +
                                                                 (char)((ulonglong)uVar10 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar30
                                                                                >> 8) +
                                                                          (char)((ulonglong)uVar10
                                                                                >> 8),
                                                                          (char)uVar30 +
                                                                          (char)uVar10)))))));
  do {
    bVar3 = bVar2;
    lVar23 = *(longlong *)((int)puVar4 + unaff_EBP * 2);
    uVar30 = CONCAT26((ushort)((ulonglong)uVar30 >> 0x31),
                      CONCAT24((ushort)((ulonglong)uVar30 >> 0x20) >> 1,
                               CONCAT22((ushort)((ulonglong)uVar30 >> 0x10) >> 1,(ushort)uVar30 >> 1
                                       )));
    uVar32 = psllw(uVar32,8);
    iVar1 = in_EAX;
    while( true ) {
      in_EAX = iVar1;
      uVar7 = *unaff_EDI;
      uVar30 = CONCAT26((short)((ulonglong)uVar30 >> 0x30) - (short)((ulonglong)uVar7 >> 0x30),
                        CONCAT24((short)((ulonglong)uVar30 >> 0x20) -
                                 (short)((ulonglong)uVar7 >> 0x20),
                                 CONCAT22((short)((ulonglong)uVar30 >> 0x10) -
                                          (short)((ulonglong)uVar7 >> 0x10),
                                          (short)uVar30 - (short)uVar7)));
      cVar22 = (char)lVar23;
      cVar24 = (char)((ulonglong)lVar23 >> 8);
      cVar25 = (char)((ulonglong)lVar23 >> 0x10);
      cVar26 = (char)((ulonglong)lVar23 >> 0x18);
      cVar27 = (char)((ulonglong)lVar23 >> 0x20);
      cVar28 = (char)((ulonglong)lVar23 >> 0x28);
      cVar29 = (char)((ulonglong)lVar23 >> 0x30);
      bVar2 = (byte)((ulonglong)lVar23 >> 0x38);
      uVar36 = psllw(CONCAT17((char)((ulonglong)uVar10 >> 0x38) + bVar2,
                              CONCAT16((char)((ulonglong)uVar10 >> 0x30) + cVar29,
                                       CONCAT15((char)((ulonglong)uVar10 >> 0x28) + cVar28,
                                                CONCAT14((char)((ulonglong)uVar10 >> 0x20) + cVar27,
                                                         CONCAT13((char)((ulonglong)uVar10 >> 0x18)
                                                                  + cVar26,CONCAT12((char)((
                                                  ulonglong)uVar10 >> 0x10) + cVar25,
                                                  CONCAT11((char)((ulonglong)uVar10 >> 8) + cVar24,
                                                           (char)uVar10 + cVar22))))))),8);
      uVar7 = pmaddwd(uVar30,uVar30);
      uVar35 = (ushort)uVar36 >> 1;
      uVar37 = (ushort)((ulonglong)uVar36 >> 0x10) >> 1;
      uVar38 = (ushort)((ulonglong)uVar36 >> 0x20) >> 1;
      uVar39 = (ushort)((ulonglong)uVar36 >> 0x31);
      uVar30 = CONCAT26((short)((ulonglong)uVar32 >> 0x30) - uVar39,
                        CONCAT24((short)((ulonglong)uVar32 >> 0x20) - uVar38,
                                 CONCAT22((short)((ulonglong)uVar32 >> 0x10) - uVar37,
                                          (short)uVar32 - uVar35)));
      uVar36 = pmaddwd(uVar30,uVar30);
      uVar9 = (ushort)((short)uVar10 * (short)DAT_63837380) >> 1;
      uVar14 = (ushort)((short)((ulonglong)uVar10 >> 0x10) *
                       (short)((ulonglong)DAT_63837380 >> 0x10)) >> 1;
      uVar17 = (ushort)((short)((ulonglong)uVar10 >> 0x20) *
                       (short)((ulonglong)DAT_63837380 >> 0x20)) >> 1;
      uVar20 = (ushort)((short)((ulonglong)uVar10 >> 0x30) *
                       (short)((ulonglong)DAT_63837380 >> 0x30)) >> 1;
      uVar30 = psllw(*unaff_EDI,8);
      puVar4 = (undefined8 *)((int)puVar4 + unaff_EBP * 2);
      uVar10 = CONCAT26((short)((ulonglong)uVar30 >> 0x30) - uVar20,
                        CONCAT24((short)((ulonglong)uVar30 >> 0x20) - uVar17,
                                 CONCAT22((short)((ulonglong)uVar30 >> 0x10) - uVar14,
                                          (short)uVar30 - uVar9)));
      uVar30 = *unaff_EDI;
      uVar30 = CONCAT26(uVar20 - (short)((ulonglong)uVar30 >> 0x30),
                        CONCAT24(uVar17 - (short)((ulonglong)uVar30 >> 0x20),
                                 CONCAT22(uVar14 - (short)((ulonglong)uVar30 >> 0x10),
                                          uVar9 - (short)uVar30)));
      uVar32 = pmaddwd(uVar10,uVar10);
      uVar11 = pmaddwd(uVar30,uVar30);
      uVar8 = paddusw(uVar7,uVar36);
      uVar36 = paddusw(in_MM6,uVar8 & _DAT_63837388);
      uVar11 = uVar11 & _DAT_63837388;
      sVar31 = (short)((ulonglong)lVar23 >> 8);
      sVar33 = (short)((ulonglong)lVar23 >> 0x18);
      sVar34 = (short)((ulonglong)lVar23 >> 0x28);
      uVar10 = *(undefined8 *)((int)puVar4 + unaff_EBP);
      uVar40 = paddusw(in_MM7,CONCAT26((short)(uVar11 >> 0x30),
                                       CONCAT24((short)((ulonglong)uVar32 >> 0x30) +
                                                (short)(uVar11 >> 0x20),
                                                CONCAT22((short)(uVar11 >> 0x10),
                                                         (short)((ulonglong)uVar32 >> 0x10) +
                                                         (short)uVar11))));
      cVar12 = (char)((ulonglong)uVar10 >> 8);
      uVar9 = CONCAT11(cVar24 + cVar12,cVar22 + (char)uVar10);
      cVar13 = (char)((ulonglong)uVar10 >> 0x10);
      cVar15 = (char)((ulonglong)uVar10 >> 0x18);
      uVar5 = CONCAT13(cVar26 + cVar15,CONCAT12(cVar25 + cVar13,uVar9));
      cVar16 = (char)((ulonglong)uVar10 >> 0x20);
      cVar18 = (char)((ulonglong)uVar10 >> 0x28);
      uVar6 = CONCAT15(cVar28 + cVar18,CONCAT14(cVar27 + cVar16,uVar5));
      cVar19 = (char)((ulonglong)uVar10 >> 0x30);
      cVar21 = (char)((ulonglong)uVar10 >> 0x38);
      uVar30 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
      uVar30 = CONCAT26(((ushort)((ushort)bVar2 * (short)((ulonglong)DAT_63837b78 >> 0x30)) >> 1) -
                        (short)((ulonglong)uVar30 >> 0x30),
                        CONCAT24(((ushort)(sVar34 * (short)((ulonglong)DAT_63837b78 >> 0x20)) >> 1)
                                 - (short)((ulonglong)uVar30 >> 0x20),
                                 CONCAT22(((ushort)(sVar33 * (short)((ulonglong)DAT_63837b78 >> 0x10
                                                                    )) >> 1) -
                                          (short)((ulonglong)uVar30 >> 0x10),
                                          ((ushort)(sVar31 * (short)DAT_63837b78) >> 1) -
                                          (short)uVar30)));
      uVar7 = pmaddwd(uVar30,uVar30);
      uVar30 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
      uVar32 = CONCAT26((ushort)(CONCAT17(bVar2 + cVar21,CONCAT16(cVar29 + cVar19,uVar6)) >> 0x31) -
                        (short)((ulonglong)uVar30 >> 0x30),
                        CONCAT24((ushort)((uint6)uVar6 >> 0x21) - (short)((ulonglong)uVar30 >> 0x20)
                                 ,CONCAT22((ushort)((uint)uVar5 >> 0x11) -
                                           (short)((ulonglong)uVar30 >> 0x10),
                                           (uVar9 >> 1) - (short)uVar30)));
      uVar30 = psllw(uVar30,8);
      uVar30 = CONCAT26(((ushort)(sVar34 * (short)((ulonglong)DAT_63837548 >> 0x30)) >> 1) -
                        (short)((ulonglong)uVar30 >> 0x30),
                        CONCAT24(((ushort)(sVar33 * (short)((ulonglong)DAT_63837548 >> 0x20)) >> 1)
                                 - (short)((ulonglong)uVar30 >> 0x20),
                                 CONCAT22(((ushort)(sVar31 * (short)((ulonglong)DAT_63837548 >> 0x10
                                                                    )) >> 1) -
                                          (short)((ulonglong)uVar30 >> 0x10),
                                          ((ushort)((short)(lVar23 << 8) * (short)DAT_63837548) >> 1
                                          ) - (short)uVar30)));
      uVar8 = pmaddwd(uVar30,uVar30);
      uVar30 = pmaddwd(uVar32,uVar32);
      uVar32 = psllw(*unaff_EDI,8);
      uVar40 = paddusw(uVar40,CONCAT44((uint)((ulonglong)uVar7 >> 0x30),(uint)uVar7 >> 0x10));
      uVar32 = CONCAT26((short)((ulonglong)uVar32 >> 0x30) - uVar39,
                        CONCAT24((short)((ulonglong)uVar32 >> 0x20) - uVar38,
                                 CONCAT22((short)((ulonglong)uVar32 >> 0x10) - uVar37,
                                          (short)uVar32 - uVar35)));
      uVar7 = pmaddwd(uVar32,uVar32);
      unaff_EDI = (undefined8 *)((int)unaff_EDI + unaff_EBP * 2);
      uVar30 = paddusw(CONCAT44((uint)((ulonglong)uVar30 >> 0x30),(uint)uVar30 >> 0x10),uVar36);
      in_MM7 = paddusw(uVar40,uVar8 & _DAT_63837388);
      uVar32 = *(undefined8 *)((int)unaff_EDI + unaff_EBP);
      in_MM6 = paddusw(CONCAT44((uint)((ulonglong)uVar7 >> 0x30),(uint)uVar7 >> 0x10),uVar30);
      uVar9 = CONCAT11(cVar24 + cVar12,cVar22 + (char)uVar10);
      uVar5 = CONCAT13(cVar26 + cVar15,CONCAT12(cVar25 + cVar13,uVar9));
      uVar6 = CONCAT15(cVar28 + cVar18,CONCAT14(cVar27 + cVar16,uVar5));
      uVar30 = CONCAT17(bVar2 + cVar21,CONCAT16(cVar29 + cVar19,uVar6));
      bVar2 = bVar3 + 0x80;
      if ((char)(bVar3 + 0x80) < '\0') break;
      uVar7 = paddusw(CONCAT44((int)in_MM6,CONCAT22(uVar37,uVar35)),in_MM6);
      bVar2 = bVar3 - 0x40;
      if (-1 < (char)(bVar3 - 0x40)) break;
      uVar36 = paddusw(CONCAT44((int)in_MM7,(int)(uVar8 & _DAT_63837388)),in_MM7);
      uVar30 = CONCAT26((ushort)((ulonglong)uVar30 >> 0x31),
                        CONCAT24((ushort)((uint6)uVar6 >> 0x21),
                                 CONCAT22((ushort)((uint)uVar5 >> 0x11),uVar9 >> 1)));
      lVar23 = *(longlong *)((int)puVar4 + unaff_EBP * 2);
      bVar3 = bVar3 + 0x40;
      *(ulonglong *)(&stack0x0000002c + in_EAX * 8) =
           CONCAT44((int)((ulonglong)uVar7 >> 0x20),(int)((ulonglong)uVar36 >> 0x20));
      uVar32 = psllw(uVar32,8);
      iVar1 = in_EAX + 2;
      if (-3 < in_EAX) {
        unaff_EDI = unaff_EDI + unaff_EBP * -2 + 1;
        puVar4 = puVar4 + unaff_EBP * -2 + 1;
        bVar2 = bVar3 * '\x02';
        in_EAX = in_EAX + -1;
        unaff_EBP = unaff_EBP & 0xfffffff;
        if (iVar1 != 0) {
          return bVar2;
        }
        goto LAB_63825507;
      }
    }
  } while( true );
}


