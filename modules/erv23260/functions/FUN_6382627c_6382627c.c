/* Module: erv23260.dll
   Function: FUN_6382627c
   Address: 6382627c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6382627c(void)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined8 *puVar5;
  ulonglong *unaff_ESI;
  undefined8 *puVar6;
  ulonglong *unaff_EDI;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  short sVar17;
  short sVar20;
  short sVar21;
  ulonglong uVar18;
  undefined8 uVar19;
  short sVar22;
  undefined2 uVar23;
  undefined8 in_MM5;
  undefined2 uVar24;
  ulonglong uVar25;
  ushort uVar26;
  ushort uVar27;
  undefined8 uStack00000010;
  undefined8 uStack00000020;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  short in_stack_00000070;
  short in_stack_00000090;
  short in_stack_000000b0;
  undefined4 in_stack_1c1c6724;
  undefined4 in_stack_1c1c69a8;
  uint in_stack_8e0e3320;
  undefined4 auStack_78 [4];
  byte abStack_66 [6];
  uint auStack_60 [23];
  undefined4 uStack_4;
  
  uVar18 = CONCAT44(*(undefined4 *)(&stack0x00000004 + unaff_EBP * 8),
                    *(undefined4 *)(&stack0x00000004 + unaff_EBP * 8));
  uVar12 = CONCAT44(*(undefined4 *)(&stack0x00000000 + unaff_EBP * 8),
                    *(undefined4 *)(&stack0x00000000 + unaff_EBP * 8));
  uVar7 = psllw(1,10);
  uVar14 = *unaff_ESI & uVar18;
  uVar9 = *unaff_EDI & uVar12;
  uVar15 = uVar14 | ~uVar18 & uVar7;
  uVar10 = uVar9 | ~uVar12 & uVar7;
  uVar14 = CONCAT26((short)(uVar14 >> 0x30) + (short)(uVar9 >> 0x30),
                    CONCAT24((short)(uVar14 >> 0x20) + (short)(uVar9 >> 0x20),
                             CONCAT22((short)(uVar14 >> 0x10) + (short)(uVar9 >> 0x10),
                                      (short)uVar14 + (short)uVar9))) |
           ~uVar18 & uVar7 & ~uVar12 & uVar7;
  uVar7 = unaff_ESI[1];
  uVar25 = (uVar12 & uVar18) >> 0x3f;
  uVar9 = unaff_EDI[1];
  uVar8 = CONCAT26((ushort)(uVar14 >> 0x30) >> uVar25,
                   CONCAT24((ushort)(uVar14 >> 0x20) >> uVar25,
                            CONCAT22((ushort)(uVar14 >> 0x10) >> uVar25,(ushort)uVar14 >> uVar25)));
  *(int *)(abStack_66 + unaff_EBP * 4 + 2) = unaff_EBX;
  *(undefined8 *)(unaff_EBX + 0x20) = uVar8;
  uVar8 = psllw(uVar8,4);
  *(ulonglong *)(unaff_EBX + 0x28) = uVar10;
  uVar11 = psllw(uVar10,4);
  *(ulonglong *)(unaff_EBX + 0x30) = uVar12 & uVar9;
  uVar13 = psllw(uVar12 & uVar9,4);
  *(ulonglong *)(unaff_EBX + 0x10) = uVar15;
  uVar16 = psllw(uVar15,4);
  *(ulonglong *)(unaff_EBX + 0x18) = uVar18 & uVar7;
  uVar19 = psllw(uVar18 & uVar7,4);
  uStack00000038 =
       CONCAT26((short)((ulonglong)in_MM5 >> 0x30) - (short)((ulonglong)uVar13 >> 0x30),
                CONCAT24((short)((ulonglong)in_MM5 >> 0x20) - (short)((ulonglong)uVar13 >> 0x20),
                         CONCAT22((short)((ulonglong)in_MM5 >> 0x10) -
                                  (short)((ulonglong)uVar13 >> 0x10),(short)in_MM5 - (short)uVar13))
               );
  sVar17 = (short)in_stack_00000050;
  sVar20 = (short)((ulonglong)in_stack_00000050 >> 0x10);
  sVar21 = (short)((ulonglong)in_stack_00000050 >> 0x20);
  sVar22 = (short)((ulonglong)in_stack_00000050 >> 0x30);
  uStack00000040 =
       CONCAT26(sVar22 - (short)((ulonglong)uVar16 >> 0x30),
                CONCAT24(sVar21 - (short)((ulonglong)uVar16 >> 0x20),
                         CONCAT22(sVar20 - (short)((ulonglong)uVar16 >> 0x10),sVar17 - (short)uVar16
                                 )));
  uStack00000020 =
       CONCAT26(sVar22 - (short)((ulonglong)uVar8 >> 0x30),
                CONCAT24(sVar21 - (short)((ulonglong)uVar8 >> 0x20),
                         CONCAT22(sVar20 - (short)((ulonglong)uVar8 >> 0x10),sVar17 - (short)uVar8))
               );
  uStack00000010 =
       CONCAT44(CONCAT22(in_stack_000000b0,in_stack_00000090),CONCAT22(in_stack_00000070,sVar17));
  uStack00000048 =
       CONCAT26((short)((ulonglong)in_stack_00000058 >> 0x30) - (short)((ulonglong)uVar19 >> 0x30),
                CONCAT24((short)((ulonglong)in_stack_00000058 >> 0x20) -
                         (short)((ulonglong)uVar19 >> 0x20),
                         CONCAT22((short)((ulonglong)in_stack_00000058 >> 0x10) -
                                  (short)((ulonglong)uVar19 >> 0x10),
                                  (short)in_stack_00000058 - (short)uVar19)));
  uStack00000030 =
       CONCAT26(in_stack_000000b0 - (short)((ulonglong)uVar11 >> 0x30),
                CONCAT24(in_stack_00000090 - (short)((ulonglong)uVar11 >> 0x20),
                         CONCAT22(in_stack_00000070 - (short)((ulonglong)uVar11 >> 0x10),
                                  sVar17 - (short)uVar11)));
  uStack_4 = 0x63826354;
  FUN_6382705b();
  puVar5 = &DAT_63838ce0;
  uStack_4 = 0x63826361;
  FUN_63826f0b(8);
  if ((in_stack_8e0e3320 & 0x100000) == 0) {
    uStack_4 = 0x63826391;
    FUN_63826f0b(0x10);
    puVar5 = (undefined8 *)&DAT_63838d78;
    uStack_4 = 0x638263b5;
    FUN_63826f0b(0x18);
    in_stack_1c1c6724 = in_stack_1c1c69a8;
  }
  uVar9 = DAT_63837398;
  uVar7 = DAT_63837390;
  puVar6 = &stack0x00000050;
  uVar26 = (ushort)auStack_78[(int)puVar5] >> 2;
  uVar27 = (ushort)((uint)auStack_78[(int)puVar5] >> 0x12);
  bVar3 = abStack_66[(int)puVar5 * 4] >> 1;
  puVar4 = *(undefined8 **)(abStack_66 + (int)puVar5 * 4 + 2);
  uVar8 = puVar4[4];
  uVar8 = paddsw(CONCAT26((short)((ulonglong)uVar8 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar8 >> 0x20),
                                   CONCAT22((short)((ulonglong)uStack00000020 >> 0x10) * uVar27 +
                                            (short)((ulonglong)uVar8 >> 0x10),
                                            (short)uStack00000020 * uVar26 + (short)uVar8))) | 1,
                 DAT_63837390);
  abStack_66[(int)puVar5 * 4] = bVar3;
  uVar8 = psubusw(uVar8,DAT_63837390);
  uVar2 = auStack_60[(int)puVar5];
  puVar4[4] = uVar8;
  uVar14 = 2;
  if ((uVar2 & 0x100000) == 0) {
    do {
      uVar8 = puVar6[-4];
      uVar14 = uVar14 >> 1;
      uVar11 = puVar6[-2];
      uVar13 = *puVar6;
      uVar16 = puVar6[-8];
      uVar19 = puVar4[5];
      uVar1 = puVar4[2];
      uVar13 = paddsw(CONCAT26((short)((ulonglong)uVar13 >> 0x30) * uVar27,
                               CONCAT24((short)((ulonglong)uVar13 >> 0x20) * uVar26,
                                        CONCAT22((short)((ulonglong)uVar13 >> 0x10) * uVar27,
                                                 (short)uVar13 * uVar26))),uVar7);
      uVar16 = paddsw(CONCAT26((short)((ulonglong)uVar16 >> 0x30) * uVar27,
                               CONCAT24((short)((ulonglong)uVar16 >> 0x20) * uVar26,
                                        CONCAT22((short)((ulonglong)uVar16 >> 0x10) * uVar27,
                                                 (short)uVar16 * uVar26))),uVar7);
      uVar13 = psubusw(uVar13,uVar9);
      uVar8 = paddsw(CONCAT26((short)((ulonglong)uVar8 >> 0x30) * uVar27 +
                              (short)((ulonglong)uVar19 >> 0x30),
                              CONCAT24((short)((ulonglong)uVar8 >> 0x20) * uVar26 +
                                       (short)((ulonglong)uVar19 >> 0x20),
                                       CONCAT22((short)((ulonglong)uVar8 >> 0x10) * uVar27 +
                                                (short)((ulonglong)uVar19 >> 0x10),
                                                (short)uVar8 * uVar26 + (short)uVar19))) | uVar14,
                     uVar7);
      uVar16 = psubusw(uVar16,uVar9);
      uVar11 = paddsw(CONCAT26((short)((ulonglong)uVar11 >> 0x30) * uVar27 +
                               (short)((ulonglong)uVar1 >> 0x30),
                               CONCAT24((short)((ulonglong)uVar11 >> 0x20) * uVar26 +
                                        (short)((ulonglong)uVar1 >> 0x20),
                                        CONCAT22((short)((ulonglong)uVar11 >> 0x10) * uVar27 +
                                                 (short)((ulonglong)uVar1 >> 0x10),
                                                 (short)uVar11 * uVar26 + (short)uVar1))) | uVar14,
                      uVar7);
      uVar10 = uVar7 ^ uVar9;
      sVar17 = (short)uVar10;
      sVar20 = (short)(uVar10 >> 0x10);
      sVar21 = (short)(uVar10 >> 0x20);
      sVar22 = (short)(uVar10 >> 0x30);
      uVar8 = psubusw(uVar8,uVar9);
      uVar11 = psubusw(uVar11,uVar9);
      *puVar4 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) - sVar22,
                         CONCAT24((short)((ulonglong)uVar13 >> 0x20) - sVar21,
                                  CONCAT22((short)((ulonglong)uVar13 >> 0x10) - sVar20,
                                           (short)uVar13 - sVar17)));
      puVar4[7] = CONCAT26((short)((ulonglong)uVar16 >> 0x30) - sVar22,
                           CONCAT24((short)((ulonglong)uVar16 >> 0x20) - sVar21,
                                    CONCAT22((short)((ulonglong)uVar16 >> 0x10) - sVar20,
                                             (short)uVar16 - sVar17)));
      puVar4[5] = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar22,
                           CONCAT24((short)((ulonglong)uVar8 >> 0x20) - sVar21,
                                    CONCAT22((short)((ulonglong)uVar8 >> 0x10) - sVar20,
                                             (short)uVar8 - sVar17)));
      puVar4[2] = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar22,
                           CONCAT24((short)((ulonglong)uVar11 >> 0x20) - sVar21,
                                    CONCAT22((short)((ulonglong)uVar11 >> 0x10) - sVar20,
                                             (short)uVar11 - sVar17)));
      uVar23 = (undefined2)(uVar9 >> 0x20);
      uVar24 = (undefined2)(uVar9 >> 0x30);
      uVar9 = CONCAT26(uVar24,CONCAT24(uVar24,CONCAT22(uVar23,uVar23)));
      puVar6 = puVar6 + 1;
      puVar4 = puVar4 + 1;
      bVar3 = bVar3 ^ 0x80;
    } while ((char)bVar3 < '\0');
    *(undefined4 *)(&stack0x00000028 + (int)puVar5 * 8) = in_stack_1c1c6724;
  }
  return;
}


