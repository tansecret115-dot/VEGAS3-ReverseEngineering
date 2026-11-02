/* Module: erv23260.dll
   Function: FUN_6382793b
   Address: 6382793b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_6382793b(int param_1,int param_2)

{
  byte in_AL;
  char cVar1;
  byte in_AH;
  int iVar2;
  uint unaff_EBX;
  undefined8 *puVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ushort uVar9;
  ulonglong uVar12;
  undefined8 uVar13;
  ushort uVar14;
  ulonglong uVar17;
  ushort uVar18;
  ulonglong uVar21;
  ulonglong uVar22;
  ushort uVar23;
  ulonglong uVar26;
  undefined8 uVar27;
  char cVar31;
  char cVar32;
  short sVar33;
  char cVar34;
  char cVar35;
  short sVar36;
  char cVar37;
  char cVar38;
  ulonglong uVar28;
  ulonglong uVar29;
  short sVar39;
  undefined8 uVar30;
  char cVar40;
  short sVar42;
  undefined8 in_MM6;
  undefined8 uVar41;
  undefined8 uVar43;
  int aiStack_24 [9];
  undefined4 uVar10;
  undefined6 uVar11;
  undefined4 uVar15;
  undefined6 uVar16;
  undefined4 uVar19;
  undefined6 uVar20;
  undefined4 uVar24;
  undefined6 uVar25;
  
  iVar4 = (int)(param_1 - 0x60U) >> 1;
  iVar2 = unaff_EBP * 3;
  iVar5 = aiStack_24[unaff_EBP * 2 + 2] + -0x30 + param_2 * 8;
  sVar39 = (short)in_MM6;
  sVar36 = (short)((ulonglong)in_MM6 >> 0x30);
  sVar42 = (short)((ulonglong)in_MM6 >> 0x10);
  sVar33 = (short)((ulonglong)in_MM6 >> 0x20);
  if ((param_1 - 0x60U & 1) == 0) {
    iVar5 = iVar4 * unaff_EBP + iVar5;
    iVar4 = (int)(unaff_EBX + 1) >> 1;
    if ((unaff_EBX + 1 & 1) == 0) {
      puVar8 = (undefined8 *)(iVar5 + iVar4);
      puVar3 = (undefined8 *)(unaff_EBP * 4 + (int)puVar8);
      uVar41 = *puVar8;
      uVar28 = psllw(0xffffffffffffffff,9);
      uVar27 = *(undefined8 *)((int)puVar8 + unaff_EBP * 2);
      uVar30 = *(undefined8 *)((int)puVar8 + unaff_EBP + -1);
      uVar43 = *(undefined8 *)((int)puVar8 + iVar2 + -1);
      uVar12 = CONCAT26((short)((ulonglong)uVar41 >> 0x30) * sVar36,
                        CONCAT24((short)((ulonglong)uVar41 >> 0x20) * sVar33,
                                 CONCAT22((short)((ulonglong)uVar41 >> 0x10) * sVar42,
                                          (short)uVar41 * sVar39))) & uVar28;
      uVar17 = CONCAT26((short)((ulonglong)uVar27 >> 0x30) * sVar36,
                        CONCAT24((short)((ulonglong)uVar27 >> 0x20) * sVar33,
                                 CONCAT22((short)((ulonglong)uVar27 >> 0x10) * sVar42,
                                          (short)uVar27 * sVar39))) & uVar28;
      uVar41 = *puVar3;
      uVar12 = CONCAT26((ushort)(uVar12 >> 0x31),
                        CONCAT24((ushort)(uVar12 >> 0x20) >> 1,
                                 CONCAT22((ushort)(uVar12 >> 0x10) >> 1,(ushort)uVar12 >> 1))) |
               CONCAT26((ushort)((short)((ulonglong)uVar30 >> 0x30) * sVar36) >> 9,
                        CONCAT24((ushort)((short)((ulonglong)uVar30 >> 0x20) * sVar33) >> 9,
                                 CONCAT22((ushort)((short)((ulonglong)uVar30 >> 0x10) * sVar42) >> 9
                                          ,(ushort)((short)uVar30 * sVar39) >> 9)));
      uVar27 = *(undefined8 *)((int)puVar3 + unaff_EBP * 2);
      uVar17 = CONCAT26((ushort)(uVar17 >> 0x31),
                        CONCAT24((ushort)(uVar17 >> 0x20) >> 1,
                                 CONCAT22((ushort)(uVar17 >> 0x10) >> 1,(ushort)uVar17 >> 1))) |
               CONCAT26((ushort)((short)((ulonglong)uVar43 >> 0x30) * sVar36) >> 9,
                        CONCAT24((ushort)((short)((ulonglong)uVar43 >> 0x20) * sVar33) >> 9,
                                 CONCAT22((ushort)((short)((ulonglong)uVar43 >> 0x10) * sVar42) >> 9
                                          ,(ushort)((short)uVar43 * sVar39) >> 9)));
      uVar30 = *(undefined8 *)((int)puVar3 + unaff_EBP + -1);
      uVar21 = CONCAT26((short)((ulonglong)uVar41 >> 0x30) * sVar36,
                        CONCAT24((short)((ulonglong)uVar41 >> 0x20) * sVar33,
                                 CONCAT22((short)((ulonglong)uVar41 >> 0x10) * sVar42,
                                          (short)uVar41 * sVar39))) & uVar28;
      uVar28 = CONCAT26((short)((ulonglong)uVar27 >> 0x30) * sVar36,
                        CONCAT24((short)((ulonglong)uVar27 >> 0x20) * sVar33,
                                 CONCAT22((short)((ulonglong)uVar27 >> 0x10) * sVar42,
                                          (short)uVar27 * sVar39))) & uVar28;
      uVar41 = *(undefined8 *)((int)puVar3 + iVar2 + -1);
      uVar21 = CONCAT26((ushort)(uVar21 >> 0x31),
                        CONCAT24((ushort)(uVar21 >> 0x20) >> 1,
                                 CONCAT22((ushort)(uVar21 >> 0x10) >> 1,(ushort)uVar21 >> 1))) |
               CONCAT26((ushort)(sVar36 * (short)((ulonglong)uVar30 >> 0x30)) >> 9,
                        CONCAT24((ushort)(sVar33 * (short)((ulonglong)uVar30 >> 0x20)) >> 9,
                                 CONCAT22((ushort)(sVar42 * (short)((ulonglong)uVar30 >> 0x10)) >> 9
                                          ,(ushort)(sVar39 * (short)uVar30) >> 9)));
      uVar28 = CONCAT26((ushort)(uVar28 >> 0x31),
                        CONCAT24((ushort)(uVar28 >> 0x20) >> 1,
                                 CONCAT22((ushort)(uVar28 >> 0x10) >> 1,(ushort)uVar28 >> 1))) |
               CONCAT26((ushort)(sVar36 * (short)((ulonglong)uVar41 >> 0x30)) >> 9,
                        CONCAT24((ushort)(sVar33 * (short)((ulonglong)uVar41 >> 0x20)) >> 9,
                                 CONCAT22((ushort)(sVar42 * (short)((ulonglong)uVar41 >> 0x10)) >> 9
                                          ,(ushort)(sVar39 * (short)uVar41) >> 9)));
    }
    else {
      puVar6 = (ulonglong *)(iVar5 + iVar4);
      uVar28 = psllw(0xffffffffffffffff,8);
      puVar7 = (ulonglong *)((int)puVar6 + unaff_EBP * 4);
      uVar12 = *puVar6 & uVar28 | ~uVar28 & *(ulonglong *)((int)puVar6 + unaff_EBP);
      uVar17 = *(ulonglong *)((int)puVar6 + unaff_EBP * 2) & uVar28 |
               ~uVar28 & *(ulonglong *)((int)puVar6 + iVar2);
      uVar21 = *puVar7 & uVar28 | ~uVar28 & *(ulonglong *)((int)puVar7 + unaff_EBP);
      uVar28 = *(ulonglong *)((int)puVar7 + unaff_EBP * 2) & uVar28 |
               ~uVar28 & *(ulonglong *)((int)puVar7 + iVar2);
    }
  }
  else {
    iVar5 = iVar5 + iVar4 * unaff_EBP;
    iVar4 = iVar5 + ((int)unaff_EBX >> 1) + (uint)((unaff_EBX & 1) != 0);
    puVar7 = (ulonglong *)(iVar5 + ((int)unaff_EBX >> 1));
    uVar29 = psllw(0xffffffffffffffff,8);
    uVar12 = *(ulonglong *)((int)puVar7 + unaff_EBP * 2);
    uVar17 = *(ulonglong *)((int)puVar7 + unaff_EBP * 4);
    uVar21 = *(ulonglong *)((int)puVar7 + unaff_EBP * 6);
    uVar28 = *puVar7 & uVar29 | ~uVar29 & uVar12;
    uVar41 = *(undefined8 *)(iVar4 + unaff_EBP);
    uVar9 = CONCAT11((char)(uVar28 >> 8) + (char)((ulonglong)uVar41 >> 8),
                     (char)uVar28 + (char)uVar41);
    uVar10 = CONCAT13((char)(uVar28 >> 0x18) + (char)((ulonglong)uVar41 >> 0x18),
                      CONCAT12((char)(uVar28 >> 0x10) + (char)((ulonglong)uVar41 >> 0x10),uVar9));
    uVar11 = CONCAT15((char)(uVar28 >> 0x28) + (char)((ulonglong)uVar41 >> 0x28),
                      CONCAT14((char)(uVar28 >> 0x20) + (char)((ulonglong)uVar41 >> 0x20),uVar10));
    uVar26 = uVar12 & uVar29 | ~uVar29 & uVar17;
    uVar27 = *(undefined8 *)(iVar4 + iVar2);
    uVar14 = CONCAT11((char)(uVar26 >> 8) + (char)((ulonglong)uVar27 >> 8),
                      (char)uVar26 + (char)uVar27);
    uVar15 = CONCAT13((char)(uVar26 >> 0x18) + (char)((ulonglong)uVar27 >> 0x18),
                      CONCAT12((char)(uVar26 >> 0x10) + (char)((ulonglong)uVar27 >> 0x10),uVar14));
    uVar16 = CONCAT15((char)(uVar26 >> 0x28) + (char)((ulonglong)uVar27 >> 0x28),
                      CONCAT14((char)(uVar26 >> 0x20) + (char)((ulonglong)uVar27 >> 0x20),uVar15));
    iVar4 = iVar4 + unaff_EBP * 4;
    uVar22 = uVar17 & uVar29 | ~uVar29 & uVar21;
    uVar30 = *(undefined8 *)(iVar4 + unaff_EBP);
    uVar18 = CONCAT11((char)(uVar22 >> 8) + (char)((ulonglong)uVar30 >> 8),
                      (char)uVar22 + (char)uVar30);
    uVar19 = CONCAT13((char)(uVar22 >> 0x18) + (char)((ulonglong)uVar30 >> 0x18),
                      CONCAT12((char)(uVar22 >> 0x10) + (char)((ulonglong)uVar30 >> 0x10),uVar18));
    uVar20 = CONCAT15((char)(uVar22 >> 0x28) + (char)((ulonglong)uVar30 >> 0x28),
                      CONCAT14((char)(uVar22 >> 0x20) + (char)((ulonglong)uVar30 >> 0x20),uVar19));
    uVar29 = uVar21 & uVar29 | ~uVar29 & puVar7[unaff_EBP];
    uVar43 = *(undefined8 *)(iVar4 + iVar2);
    uVar23 = CONCAT11((char)(uVar29 >> 8) + (char)((ulonglong)uVar43 >> 8),
                      (char)uVar29 + (char)uVar43);
    uVar24 = CONCAT13((char)(uVar29 >> 0x18) + (char)((ulonglong)uVar43 >> 0x18),
                      CONCAT12((char)(uVar29 >> 0x10) + (char)((ulonglong)uVar43 >> 0x10),uVar23));
    uVar25 = CONCAT15((char)(uVar29 >> 0x28) + (char)((ulonglong)uVar43 >> 0x28),
                      CONCAT14((char)(uVar29 >> 0x20) + (char)((ulonglong)uVar43 >> 0x20),uVar24));
    uVar12 = CONCAT26((ushort)(CONCAT17((char)(uVar28 >> 0x38) + (char)((ulonglong)uVar41 >> 0x38),
                                        CONCAT16((char)(uVar28 >> 0x30) +
                                                 (char)((ulonglong)uVar41 >> 0x30),uVar11)) >> 0x31)
                      ,CONCAT24((ushort)((uint6)uVar11 >> 0x21),
                                CONCAT22((ushort)((uint)uVar10 >> 0x11),uVar9 >> 1))) & DAT_638373a0
    ;
    uVar17 = CONCAT26((ushort)(CONCAT17((char)(uVar26 >> 0x38) + (char)((ulonglong)uVar27 >> 0x38),
                                        CONCAT16((char)(uVar26 >> 0x30) +
                                                 (char)((ulonglong)uVar27 >> 0x30),uVar16)) >> 0x31)
                      ,CONCAT24((ushort)((uint6)uVar16 >> 0x21),
                                CONCAT22((ushort)((uint)uVar15 >> 0x11),uVar14 >> 1))) &
             DAT_638373a0;
    uVar21 = CONCAT26((ushort)(CONCAT17((char)(uVar22 >> 0x38) + (char)((ulonglong)uVar30 >> 0x38),
                                        CONCAT16((char)(uVar22 >> 0x30) +
                                                 (char)((ulonglong)uVar30 >> 0x30),uVar20)) >> 0x31)
                      ,CONCAT24((ushort)((uint6)uVar20 >> 0x21),
                                CONCAT22((ushort)((uint)uVar19 >> 0x11),uVar18 >> 1))) &
             DAT_638373a0;
    uVar28 = CONCAT26((ushort)(CONCAT17((char)(uVar29 >> 0x38) + (char)((ulonglong)uVar43 >> 0x38),
                                        CONCAT16((char)(uVar29 >> 0x30) +
                                                 (char)((ulonglong)uVar43 >> 0x30),uVar25)) >> 0x31)
                      ,CONCAT24((ushort)((uint6)uVar25 >> 0x21),
                                CONCAT22((ushort)((uint)uVar24 >> 0x11),uVar23 >> 1))) &
             DAT_638373a0;
  }
  iVar5 = aiStack_24[unaff_EBP * 2 + 1] + -0x30 + param_2 * 8;
  iVar2 = (int)(in_AH - 0x60) >> 1;
  cVar1 = '\x04';
  puVar3 = (undefined8 *)(aiStack_24[unaff_EBP * 2] + param_2 * 8);
  if ((in_AH - 0x60 & 1) == 0) {
    iVar5 = iVar5 + iVar2 * unaff_EBP;
    if ((in_AL & 1) == 0) {
      puVar8 = (undefined8 *)(iVar5 + (uint)(in_AL >> 1));
      uVar41 = 0;
      do {
        uVar27 = *(undefined8 *)((int)puVar8 + unaff_EBP);
        uVar30 = *puVar8;
        sVar33 = (short)(uVar12 >> 0x10);
        sVar36 = (short)(uVar12 >> 0x20);
        sVar39 = (short)(uVar12 >> 0x30);
        uVar26 = CONCAT26((short)((ulonglong)uVar27 >> 0x30) + sVar39,
                          CONCAT24((short)((ulonglong)uVar27 >> 0x20) + sVar36,
                                   CONCAT22((short)((ulonglong)uVar27 >> 0x10) + sVar33,
                                            (short)uVar27 + (short)uVar12))) & _DAT_63837558;
        uVar27 = *puVar3;
        uVar30 = CONCAT26(((ushort)(sVar39 + (short)((ulonglong)uVar30 >> 0x30)) >> 1) -
                          (short)((ulonglong)uVar27 >> 0x30),
                          CONCAT24(((ushort)(sVar36 + (short)((ulonglong)uVar30 >> 0x20)) >> 1) -
                                   (short)((ulonglong)uVar27 >> 0x20),
                                   CONCAT22(((ushort)(sVar33 + (short)((ulonglong)uVar30 >> 0x10))
                                            >> 1) - (short)((ulonglong)uVar27 >> 0x10),
                                            ((ushort)((short)uVar12 + (short)uVar30) >> 1) -
                                            (short)uVar27)));
        uVar27 = *(undefined8 *)((int)puVar3 + unaff_EBP);
        uVar30 = pmaddwd(uVar30,uVar30);
        uVar27 = psllw(CONCAT26((ushort)(uVar26 >> 0x31) - (short)((ulonglong)uVar27 >> 0x30),
                                CONCAT24(((ushort)(uVar26 >> 0x20) >> 1) -
                                         (short)((ulonglong)uVar27 >> 0x20),
                                         CONCAT22(((ushort)(uVar26 >> 0x10) >> 1) -
                                                  (short)((ulonglong)uVar27 >> 0x10),
                                                  ((ushort)uVar26 >> 1) - (short)uVar27))),8);
        uVar27 = pmaddwd(uVar27,uVar27);
        puVar8 = (undefined8 *)((int)puVar8 + unaff_EBP * 2);
        puVar3 = (undefined8 *)((int)puVar3 + unaff_EBP * 2);
        uVar41 = paddusw(uVar41,uVar30);
        uVar41 = paddusw(uVar41,uVar27);
        cVar1 = cVar1 + -1;
        uVar12 = uVar17;
        uVar17 = uVar21;
        uVar21 = uVar28;
      } while (cVar1 != '\0');
      paddusw(CONCAT44((int)uVar41,(int)uVar30),uVar41);
      return;
    }
    iVar5 = iVar5 + (uint)(in_AL >> 1);
    uVar41 = 0;
    do {
      uVar27 = *(undefined8 *)(iVar5 + 1);
      uVar30 = *(undefined8 *)(iVar5 + unaff_EBP);
      iVar5 = iVar5 + unaff_EBP * 2;
      cVar1 = cVar1 + -1;
      uVar13 = psllw(uVar12,8);
      uVar43 = *puVar3;
      uVar43 = CONCAT26(((ushort)(((ushort)(sVar36 * (short)((ulonglong)uVar27 >> 0x30)) >> 1) +
                                 (short)(uVar12 >> 0x30)) >> 1) - (short)((ulonglong)uVar43 >> 0x30)
                        ,CONCAT24(((ushort)(((ushort)(sVar33 * (short)((ulonglong)uVar27 >> 0x20))
                                            >> 1) + (short)(uVar12 >> 0x20)) >> 1) -
                                  (short)((ulonglong)uVar43 >> 0x20),
                                  CONCAT22(((ushort)(((ushort)(sVar42 * (short)((ulonglong)uVar27 >>
                                                                               0x10)) >> 1) +
                                                    (short)(uVar12 >> 0x10)) >> 1) -
                                           (short)((ulonglong)uVar43 >> 0x10),
                                           ((ushort)(((ushort)(sVar39 * (short)uVar27) >> 1) +
                                                    (short)uVar12) >> 1) - (short)uVar43)));
      uVar27 = psllw(*(undefined8 *)((int)puVar3 + unaff_EBP),8);
      uVar27 = CONCAT26(((ushort)(((ushort)(sVar36 * (short)((ulonglong)uVar30 >> 0x30)) >> 1) +
                                 (short)((ulonglong)uVar13 >> 0x30)) >> 1) -
                        (short)((ulonglong)uVar27 >> 0x30),
                        CONCAT24(((ushort)(((ushort)(sVar33 * (short)((ulonglong)uVar30 >> 0x20)) >>
                                           1) + (short)((ulonglong)uVar13 >> 0x20)) >> 1) -
                                 (short)((ulonglong)uVar27 >> 0x20),
                                 CONCAT22(((ushort)(((ushort)(sVar42 * (short)((ulonglong)uVar30 >>
                                                                              0x10)) >> 1) +
                                                   (short)((ulonglong)uVar13 >> 0x10)) >> 1) -
                                          (short)((ulonglong)uVar27 >> 0x10),
                                          ((ushort)(((ushort)(sVar39 * (short)uVar30) >> 1) +
                                                   (short)uVar13) >> 1) - (short)uVar27)));
      uVar30 = pmaddwd(uVar43,uVar43);
      uVar27 = pmaddwd(uVar27,uVar27);
      uVar41 = paddusw(uVar41,uVar30);
      puVar3 = (undefined8 *)((int)puVar3 + unaff_EBP * 2);
      uVar41 = paddusw(uVar41,uVar27);
      uVar12 = uVar17;
      uVar17 = uVar21;
      uVar21 = uVar28;
    } while (cVar1 != '\0');
    paddusw(CONCAT44((int)uVar41,(int)uVar27),uVar41);
    return;
  }
  puVar8 = (undefined8 *)((uint)(in_AL >> 1) + iVar5 + iVar2 * unaff_EBP);
  uVar27 = 0;
  uVar41 = *puVar8;
  do {
    uVar30 = *(undefined8 *)(unaff_EBP + (uint)((in_AL & 1) != 0) + (int)puVar8);
    uVar43 = *(undefined8 *)((int)puVar8 + unaff_EBP * 2);
    cVar31 = (char)((ulonglong)uVar30 >> 8);
    uVar9 = CONCAT11((char)((ulonglong)uVar41 >> 8) + cVar31,(char)uVar41 + (char)uVar30);
    cVar32 = (char)((ulonglong)uVar30 >> 0x10);
    cVar34 = (char)((ulonglong)uVar30 >> 0x18);
    uVar10 = CONCAT13((char)((ulonglong)uVar41 >> 0x18) + cVar34,
                      CONCAT12((char)((ulonglong)uVar41 >> 0x10) + cVar32,uVar9));
    cVar35 = (char)((ulonglong)uVar30 >> 0x20);
    cVar37 = (char)((ulonglong)uVar30 >> 0x28);
    uVar11 = CONCAT15((char)((ulonglong)uVar41 >> 0x28) + cVar37,
                      CONCAT14((char)((ulonglong)uVar41 >> 0x20) + cVar35,uVar10));
    cVar38 = (char)((ulonglong)uVar30 >> 0x30);
    cVar40 = (char)((ulonglong)uVar30 >> 0x38);
    uVar26 = psllw(CONCAT17(cVar40 + (char)((ulonglong)uVar43 >> 0x38),
                            CONCAT16(cVar38 + (char)((ulonglong)uVar43 >> 0x30),
                                     CONCAT15(cVar37 + (char)((ulonglong)uVar43 >> 0x28),
                                              CONCAT14(cVar35 + (char)((ulonglong)uVar43 >> 0x20),
                                                       CONCAT13(cVar34 + (char)((ulonglong)uVar43 >>
                                                                               0x18),
                                                                CONCAT12(cVar32 + (char)((ulonglong)
                                                                                         uVar43 >>
                                                                                        0x10),
                                                                         CONCAT11(cVar31 + (char)((
                                                  ulonglong)uVar43 >> 8),(char)uVar30 + (char)uVar43
                                                  ))))))),7);
    uVar26 = uVar26 & DAT_638373a0;
    uVar30 = *puVar3;
    uVar30 = CONCAT26(((ushort)((ushort)(CONCAT17((char)((ulonglong)uVar41 >> 0x38) + cVar40,
                                                  CONCAT16((char)((ulonglong)uVar41 >> 0x30) +
                                                           cVar38,uVar11)) >> 0x31) +
                               (short)(uVar12 >> 0x30)) >> 1) - (short)((ulonglong)uVar30 >> 0x30),
                      CONCAT24(((ushort)((ushort)((uint6)uVar11 >> 0x21) + (short)(uVar12 >> 0x20))
                               >> 1) - (short)((ulonglong)uVar30 >> 0x20),
                               CONCAT22(((ushort)((ushort)((uint)uVar10 >> 0x11) +
                                                 (short)(uVar12 >> 0x10)) >> 1) -
                                        (short)((ulonglong)uVar30 >> 0x10),
                                        ((ushort)((uVar9 >> 1) + (short)uVar12) >> 1) -
                                        (short)uVar30)));
    uVar41 = psllw(uVar12,8);
    uVar13 = pmaddwd(uVar30,uVar30);
    uVar30 = psllw(*(undefined8 *)((int)puVar3 + unaff_EBP),8);
    puVar8 = (undefined8 *)((int)puVar8 + unaff_EBP * 2);
    uVar41 = CONCAT26(((ushort)((short)(uVar26 >> 0x30) + (short)((ulonglong)uVar41 >> 0x30)) >> 1)
                      - (short)((ulonglong)uVar30 >> 0x30),
                      CONCAT24(((ushort)((short)(uVar26 >> 0x20) +
                                        (short)((ulonglong)uVar41 >> 0x20)) >> 1) -
                               (short)((ulonglong)uVar30 >> 0x20),
                               CONCAT22(((ushort)((short)(uVar26 >> 0x10) +
                                                 (short)((ulonglong)uVar41 >> 0x10)) >> 1) -
                                        (short)((ulonglong)uVar30 >> 0x10),
                                        ((ushort)((short)uVar26 + (short)uVar41) >> 1) -
                                        (short)uVar30)));
    uVar30 = pmaddwd(uVar41,uVar41);
    uVar41 = paddusw(uVar27,uVar13);
    puVar3 = (undefined8 *)((int)puVar3 + unaff_EBP * 2);
    cVar1 = cVar1 + -1;
    uVar27 = paddusw(uVar41,uVar30);
    uVar12 = uVar17;
    uVar17 = uVar21;
    uVar21 = uVar28;
    uVar41 = uVar43;
  } while (cVar1 != '\0');
  paddusw(uVar27,CONCAT44((int)uVar27,(int)uVar30));
  return;
}


