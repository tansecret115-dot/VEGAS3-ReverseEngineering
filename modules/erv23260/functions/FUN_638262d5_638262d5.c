/* Module: erv23260.dll
   Function: FUN_638262d5
   Address: 638262d5
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638262d5(void)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined8 *puVar5;
  int unaff_EBX;
  int unaff_EBP;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 in_MM0;
  undefined8 uVar8;
  undefined8 in_MM1;
  undefined8 uVar9;
  undefined8 in_MM2;
  undefined8 uVar10;
  undefined8 in_MM3;
  undefined8 uVar11;
  short sVar12;
  short sVar15;
  short sVar16;
  undefined8 in_MM4;
  undefined8 uVar13;
  ulonglong uVar14;
  short sVar17;
  undefined8 in_MM5;
  ulonglong uVar18;
  ulonglong uVar21;
  ushort uVar22;
  ushort uVar23;
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
  undefined2 uVar19;
  undefined2 uVar20;
  
  *(int *)(abStack_66 + unaff_EBP * 4 + 2) = unaff_EBX;
  *(undefined8 *)(unaff_EBX + 0x20) = in_MM0;
  uVar8 = psllw(in_MM0,4);
  *(undefined8 *)(unaff_EBX + 0x28) = in_MM1;
  uVar9 = psllw(in_MM1,4);
  *(undefined8 *)(unaff_EBX + 0x30) = in_MM2;
  uVar10 = psllw(in_MM2,4);
  *(undefined8 *)(unaff_EBX + 0x10) = in_MM3;
  uVar11 = psllw(in_MM3,4);
  *(undefined8 *)(unaff_EBX + 0x18) = in_MM4;
  uVar13 = psllw(in_MM4,4);
  uStack00000038 =
       CONCAT26((short)((ulonglong)in_MM5 >> 0x30) - (short)((ulonglong)uVar10 >> 0x30),
                CONCAT24((short)((ulonglong)in_MM5 >> 0x20) - (short)((ulonglong)uVar10 >> 0x20),
                         CONCAT22((short)((ulonglong)in_MM5 >> 0x10) -
                                  (short)((ulonglong)uVar10 >> 0x10),(short)in_MM5 - (short)uVar10))
               );
  sVar12 = (short)in_stack_00000050;
  sVar15 = (short)((ulonglong)in_stack_00000050 >> 0x10);
  sVar16 = (short)((ulonglong)in_stack_00000050 >> 0x20);
  sVar17 = (short)((ulonglong)in_stack_00000050 >> 0x30);
  uStack00000040 =
       CONCAT26(sVar17 - (short)((ulonglong)uVar11 >> 0x30),
                CONCAT24(sVar16 - (short)((ulonglong)uVar11 >> 0x20),
                         CONCAT22(sVar15 - (short)((ulonglong)uVar11 >> 0x10),sVar12 - (short)uVar11
                                 )));
  uStack00000020 =
       CONCAT26(sVar17 - (short)((ulonglong)uVar8 >> 0x30),
                CONCAT24(sVar16 - (short)((ulonglong)uVar8 >> 0x20),
                         CONCAT22(sVar15 - (short)((ulonglong)uVar8 >> 0x10),sVar12 - (short)uVar8))
               );
  uStack00000010 =
       CONCAT44(CONCAT22(in_stack_000000b0,in_stack_00000090),CONCAT22(in_stack_00000070,sVar12));
  uStack00000048 =
       CONCAT26((short)((ulonglong)in_stack_00000058 >> 0x30) - (short)((ulonglong)uVar13 >> 0x30),
                CONCAT24((short)((ulonglong)in_stack_00000058 >> 0x20) -
                         (short)((ulonglong)uVar13 >> 0x20),
                         CONCAT22((short)((ulonglong)in_stack_00000058 >> 0x10) -
                                  (short)((ulonglong)uVar13 >> 0x10),
                                  (short)in_stack_00000058 - (short)uVar13)));
  uStack00000030 =
       CONCAT26(in_stack_000000b0 - (short)((ulonglong)uVar9 >> 0x30),
                CONCAT24(in_stack_00000090 - (short)((ulonglong)uVar9 >> 0x20),
                         CONCAT22(in_stack_00000070 - (short)((ulonglong)uVar9 >> 0x10),
                                  sVar12 - (short)uVar9)));
  uStack_4 = 0x63826354;
  FUN_6382705b();
  puVar6 = &DAT_63838ce0;
  uStack_4 = 0x63826361;
  FUN_63826f0b(8);
  if ((in_stack_8e0e3320 & 0x100000) == 0) {
    uStack_4 = 0x63826391;
    FUN_63826f0b(0x10);
    puVar6 = (undefined8 *)&DAT_63838d78;
    uStack_4 = 0x638263b5;
    FUN_63826f0b(0x18);
    in_stack_1c1c6724 = in_stack_1c1c69a8;
  }
  uVar18 = DAT_63837398;
  uVar3 = DAT_63837390;
  puVar7 = &stack0x00000050;
  uVar22 = (ushort)auStack_78[(int)puVar6] >> 2;
  uVar23 = (ushort)((uint)auStack_78[(int)puVar6] >> 0x12);
  bVar4 = abStack_66[(int)puVar6 * 4] >> 1;
  puVar5 = *(undefined8 **)(abStack_66 + (int)puVar6 * 4 + 2);
  uVar8 = puVar5[4];
  uVar8 = paddsw(CONCAT26((short)((ulonglong)uVar8 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar8 >> 0x20),
                                   CONCAT22((short)((ulonglong)uStack00000020 >> 0x10) * uVar23 +
                                            (short)((ulonglong)uVar8 >> 0x10),
                                            (short)uStack00000020 * uVar22 + (short)uVar8))) | 1,
                 DAT_63837390);
  abStack_66[(int)puVar6 * 4] = bVar4;
  uVar8 = psubusw(uVar8,DAT_63837390);
  uVar2 = auStack_60[(int)puVar6];
  puVar5[4] = uVar8;
  uVar21 = 2;
  if ((uVar2 & 0x100000) == 0) {
    do {
      uVar8 = puVar7[-4];
      uVar21 = uVar21 >> 1;
      uVar9 = puVar7[-2];
      uVar10 = *puVar7;
      uVar11 = puVar7[-8];
      uVar13 = puVar5[5];
      uVar1 = puVar5[2];
      uVar10 = paddsw(CONCAT26((short)((ulonglong)uVar10 >> 0x30) * uVar23,
                               CONCAT24((short)((ulonglong)uVar10 >> 0x20) * uVar22,
                                        CONCAT22((short)((ulonglong)uVar10 >> 0x10) * uVar23,
                                                 (short)uVar10 * uVar22))),uVar3);
      uVar11 = paddsw(CONCAT26((short)((ulonglong)uVar11 >> 0x30) * uVar23,
                               CONCAT24((short)((ulonglong)uVar11 >> 0x20) * uVar22,
                                        CONCAT22((short)((ulonglong)uVar11 >> 0x10) * uVar23,
                                                 (short)uVar11 * uVar22))),uVar3);
      uVar10 = psubusw(uVar10,uVar18);
      uVar8 = paddsw(CONCAT26((short)((ulonglong)uVar8 >> 0x30) * uVar23 +
                              (short)((ulonglong)uVar13 >> 0x30),
                              CONCAT24((short)((ulonglong)uVar8 >> 0x20) * uVar22 +
                                       (short)((ulonglong)uVar13 >> 0x20),
                                       CONCAT22((short)((ulonglong)uVar8 >> 0x10) * uVar23 +
                                                (short)((ulonglong)uVar13 >> 0x10),
                                                (short)uVar8 * uVar22 + (short)uVar13))) | uVar21,
                     uVar3);
      uVar11 = psubusw(uVar11,uVar18);
      uVar9 = paddsw(CONCAT26((short)((ulonglong)uVar9 >> 0x30) * uVar23 +
                              (short)((ulonglong)uVar1 >> 0x30),
                              CONCAT24((short)((ulonglong)uVar9 >> 0x20) * uVar22 +
                                       (short)((ulonglong)uVar1 >> 0x20),
                                       CONCAT22((short)((ulonglong)uVar9 >> 0x10) * uVar23 +
                                                (short)((ulonglong)uVar1 >> 0x10),
                                                (short)uVar9 * uVar22 + (short)uVar1))) | uVar21,
                     uVar3);
      uVar14 = uVar3 ^ uVar18;
      sVar12 = (short)uVar14;
      sVar15 = (short)(uVar14 >> 0x10);
      sVar16 = (short)(uVar14 >> 0x20);
      sVar17 = (short)(uVar14 >> 0x30);
      uVar8 = psubusw(uVar8,uVar18);
      uVar9 = psubusw(uVar9,uVar18);
      *puVar5 = CONCAT26((short)((ulonglong)uVar10 >> 0x30) - sVar17,
                         CONCAT24((short)((ulonglong)uVar10 >> 0x20) - sVar16,
                                  CONCAT22((short)((ulonglong)uVar10 >> 0x10) - sVar15,
                                           (short)uVar10 - sVar12)));
      puVar5[7] = CONCAT26((short)((ulonglong)uVar11 >> 0x30) - sVar17,
                           CONCAT24((short)((ulonglong)uVar11 >> 0x20) - sVar16,
                                    CONCAT22((short)((ulonglong)uVar11 >> 0x10) - sVar15,
                                             (short)uVar11 - sVar12)));
      puVar5[5] = CONCAT26((short)((ulonglong)uVar8 >> 0x30) - sVar17,
                           CONCAT24((short)((ulonglong)uVar8 >> 0x20) - sVar16,
                                    CONCAT22((short)((ulonglong)uVar8 >> 0x10) - sVar15,
                                             (short)uVar8 - sVar12)));
      puVar5[2] = CONCAT26((short)((ulonglong)uVar9 >> 0x30) - sVar17,
                           CONCAT24((short)((ulonglong)uVar9 >> 0x20) - sVar16,
                                    CONCAT22((short)((ulonglong)uVar9 >> 0x10) - sVar15,
                                             (short)uVar9 - sVar12)));
      uVar19 = (undefined2)(uVar18 >> 0x20);
      uVar20 = (undefined2)(uVar18 >> 0x30);
      uVar18 = CONCAT26(uVar20,CONCAT24(uVar20,CONCAT22(uVar19,uVar19)));
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
      bVar4 = bVar4 ^ 0x80;
    } while ((char)bVar4 < '\0');
    *(undefined4 *)(&stack0x00000028 + (int)puVar6 * 8) = in_stack_1c1c6724;
  }
  return;
}


