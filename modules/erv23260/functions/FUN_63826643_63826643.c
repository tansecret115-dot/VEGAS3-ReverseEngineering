/* Module: erv23260.dll
   Function: FUN_63826643
   Address: 63826643
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63826643(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int in_EAX;
  int extraout_EAX;
  int extraout_EAX_00;
  ulonglong *extraout_EAX_01;
  ulonglong *puVar12;
  ulonglong *extraout_EAX_02;
  ulonglong *extraout_EAX_03;
  undefined1 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  uint *extraout_EDX;
  uint *extraout_EDX_00;
  uint *extraout_EDX_01;
  uint *extraout_EDX_02;
  uint *extraout_EDX_03;
  uint *extraout_EDX_04;
  uint *extraout_EDX_05;
  uint *puVar17;
  uint uVar18;
  int unaff_EBP;
  uint unaff_ESI;
  undefined1 *puVar19;
  ulonglong uVar20;
  ulonglong extraout_MM1;
  ulonglong extraout_MM1_00;
  ulonglong extraout_MM1_01;
  ulonglong extraout_MM1_02;
  ulonglong uVar21;
  ulonglong extraout_MM1_03;
  ulonglong extraout_MM1_04;
  ulonglong extraout_MM1_05;
  ulonglong extraout_MM1_06;
  char cVar22;
  char cVar27;
  short sVar23;
  char cVar28;
  char cVar30;
  short sVar29;
  char cVar31;
  char cVar33;
  short sVar32;
  char cVar34;
  ulonglong in_MM2;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  char cVar36;
  short sVar35;
  ulonglong in_MM3;
  ulonglong uVar37;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  ulonglong uVar38;
  ulonglong uVar39;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  ulonglong in_MM6;
  char cVar55;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  undefined8 uVar56;
  char cVar63;
  undefined8 uStack00000008;
  undefined8 uStack00000018;
  undefined8 uStack00000028;
  undefined8 uStack00000038;
  undefined8 uStack00000048;
  ulonglong uStack00000058;
  undefined8 uStack00000068;
  ulonglong uStack00000078;
  ulonglong in_stack_00000128;
  ulonglong in_stack_00000130;
  ulonglong in_stack_00000138;
  ulonglong in_stack_00000140;
  ulonglong in_stack_00000168;
  ulonglong in_stack_00000170;
  ulonglong in_stack_00000178;
  ulonglong in_stack_00000180;
  uint in_stack_8e0e3320;
  ulonglong auStack_78 [10];
  int aiStack_28 [9];
  undefined4 uStack_4;
  
  uVar18 = *(uint *)(param_1 + param_2);
  *(ulonglong **)((int)&stack0x00000028 + unaff_EBP * 8) = auStack_78 + unaff_EBP;
  *(ulonglong **)((undefined1 *)((int)register0x00000010 + 0x2c) + unaff_EBP * 8) =
       auStack_78 + unaff_EBP;
  if (((unaff_ESI ^ uVar18) & 0xffff) == 0) {
    if (((uVar18 ^ *(uint *)(in_EAX + param_2)) & 0xffff) == 0) {
      uStack_4 = 0x63826a3a;
      uVar20 = FUN_63826c96();
      uVar24 = extraout_MM1_04 >> 1;
      auStack_78[unaff_EBP + 4] = uVar20;
      uVar37 = (in_MM2 & in_MM6) >> 1;
      auStack_78[unaff_EBP + 5] = uVar24;
      auStack_78[unaff_EBP + 6] = uVar37;
      uVar21 = (in_MM3 & in_MM6) >> 1;
      iVar16 = *(int *)(&stack0x00000024 + unaff_EBP * 8);
      uVar18 = *extraout_EDX_03;
      auStack_78[unaff_EBP + 7] = uVar21;
      uVar56 = 0xffffffffffffffff;
      uVar14 = *(uint *)(iVar16 + (int)extraout_EDX_03);
      puVar17 = extraout_EDX_03;
      if (((uVar18 ^ uVar14) & 0xffff) != 0) {
        uStack_4 = 0x63826a89;
        uVar24 = FUN_63826d8f();
        uVar26 = extraout_EAX_02[-2];
        uVar37 = uVar37 & in_MM6;
        uVar20 = extraout_EAX_02[-4];
        cVar48 = (char)(uVar26 >> 8);
        cVar49 = (char)(uVar26 >> 0x10);
        cVar50 = (char)(uVar26 >> 0x18);
        cVar51 = (char)(uVar26 >> 0x20);
        cVar52 = (char)(uVar26 >> 0x28);
        cVar53 = (char)(uVar26 >> 0x30);
        cVar54 = (char)(uVar26 >> 0x38);
        cVar22 = (char)uVar20;
        cVar28 = (char)(uVar20 >> 8);
        cVar31 = (char)(uVar20 >> 0x10);
        cVar34 = (char)(uVar20 >> 0x18);
        cVar40 = (char)(uVar20 >> 0x20);
        cVar42 = (char)(uVar20 >> 0x28);
        cVar44 = (char)(uVar20 >> 0x30);
        cVar46 = (char)(uVar20 >> 0x38);
        uVar20 = CONCAT17((char)(uVar24 >> 0x38) + cVar46,
                          CONCAT16((char)(uVar24 >> 0x30) + cVar44,
                                   CONCAT15((char)(uVar24 >> 0x28) + cVar42,
                                            CONCAT14((char)(uVar24 >> 0x20) + cVar40,
                                                     CONCAT13((char)(uVar24 >> 0x18) + cVar34,
                                                              CONCAT12((char)(uVar24 >> 0x10) +
                                                                       cVar31,CONCAT11((char)(uVar24
                                                                                             >> 8) +
                                                                                       cVar28,(char)
                                                  uVar24 + cVar22))))))) & in_MM6;
        uVar24 = CONCAT17((byte)(uVar37 >> 0x39) + cVar54,
                          CONCAT16((char)(ushort)(uVar37 >> 0x31) + cVar53,
                                   CONCAT15((char)(uint3)(uVar37 >> 0x29) + cVar52,
                                            CONCAT14((char)(uint)(uVar37 >> 0x21) + cVar51,
                                                     CONCAT13((char)(uint5)(uVar37 >> 0x19) + cVar50
                                                              ,CONCAT12((char)(uint6)(uVar37 >> 0x11
                                                                                     ) + cVar49,
                                                                        CONCAT11((char)(uint7)(
                                                  uVar37 >> 9) + cVar48,
                                                  (char)(uVar37 >> 1) + (char)uVar26))))))) & in_MM6
        ;
        sVar23 = (short)(uVar24 >> 1) * (short)DAT_63837b80;
        sVar29 = (short)(uint6)(uVar24 >> 0x11) * (short)((ulonglong)DAT_63837b80 >> 0x10);
        sVar32 = (short)(uint)(uVar24 >> 0x21) * (short)((ulonglong)DAT_63837b80 >> 0x20);
        sVar35 = (ushort)(uVar24 >> 0x31) * (short)((ulonglong)DAT_63837b80 >> 0x30);
        uVar24 = CONCAT17((byte)(uVar20 >> 0x39) + cVar46,
                          CONCAT16((char)(ushort)(uVar20 >> 0x31) + cVar44,
                                   CONCAT15((char)(uint3)(uVar20 >> 0x29) + cVar42,
                                            CONCAT14((char)(uint)(uVar20 >> 0x21) + cVar40,
                                                     CONCAT13((char)(uint5)(uVar20 >> 0x19) + cVar34
                                                              ,CONCAT12((char)(uint6)(uVar20 >> 0x11
                                                                                     ) + cVar31,
                                                                        CONCAT11((char)(uint7)(
                                                  uVar20 >> 9) + cVar28,(char)(uVar20 >> 1) + cVar22
                                                  ))))))) & in_MM6;
        uVar21 = uVar21 & in_MM6;
        cVar55 = (char)uVar56;
        cVar57 = (char)((ulonglong)uVar56 >> 8);
        cVar58 = (char)((ulonglong)uVar56 >> 0x10);
        cVar59 = (char)((ulonglong)uVar56 >> 0x18);
        cVar60 = (char)((ulonglong)uVar56 >> 0x20);
        cVar61 = (char)((ulonglong)uVar56 >> 0x28);
        cVar62 = (char)((ulonglong)uVar56 >> 0x30);
        cVar63 = (char)((ulonglong)uVar56 >> 0x38);
        uVar37 = ~*extraout_EAX_02 & uVar26;
        uVar20 = extraout_EAX_02[-3];
        uVar37 = CONCAT17((char)((ushort)sVar35 >> 8) + (char)(uVar37 >> 0x38),
                          CONCAT16((char)sVar35 + (char)(uVar37 >> 0x30),
                                   CONCAT15((char)((ushort)sVar32 >> 8) + (char)(uVar37 >> 0x28),
                                            CONCAT14((char)sVar32 + (char)(uVar37 >> 0x20),
                                                     CONCAT13((char)((ushort)sVar29 >> 8) +
                                                              (char)(uVar37 >> 0x18),
                                                              CONCAT12((char)sVar29 +
                                                                       (char)(uVar37 >> 0x10),
                                                                       CONCAT11((char)((ushort)
                                                  sVar23 >> 8) + (char)(uVar37 >> 8),
                                                  (char)sVar23 + (char)uVar37))))))) & in_MM6;
        cVar27 = (char)uVar20;
        cVar30 = (char)(uVar20 >> 8);
        cVar33 = (char)(uVar20 >> 0x10);
        cVar36 = (char)(uVar20 >> 0x18);
        cVar41 = (char)(uVar20 >> 0x20);
        cVar43 = (char)(uVar20 >> 0x28);
        cVar45 = (char)(uVar20 >> 0x30);
        cVar47 = (char)(uVar20 >> 0x38);
        uVar20 = (CONCAT17(((byte)(uVar24 >> 0x39) + cVar46) - cVar63,
                           CONCAT16(((char)(ushort)(uVar24 >> 0x31) + cVar44) - cVar62,
                                    CONCAT15(((char)(uint3)(uVar24 >> 0x29) + cVar42) - cVar61,
                                             CONCAT14(((char)(uint)(uVar24 >> 0x21) + cVar40) -
                                                      cVar60,CONCAT13(((char)(uint5)(uVar24 >> 0x19)
                                                                      + cVar34) - cVar59,
                                                                      CONCAT12(((char)(uint6)(uVar24
                                                                                             >> 0x11
                                                  ) + cVar31) - cVar58,
                                                  CONCAT11(((char)(uint7)(uVar24 >> 9) + cVar28) -
                                                           cVar57,((char)(uVar24 >> 1) + cVar22) -
                                                                  cVar55))))))) & in_MM6) >> 1;
        uVar24 = CONCAT17((byte)(extraout_MM1_05 >> 0x39) + cVar47,
                          CONCAT16((char)(ushort)(extraout_MM1_05 >> 0x31) + cVar45,
                                   CONCAT15((char)(uint3)(extraout_MM1_05 >> 0x29) + cVar43,
                                            CONCAT14((char)(uint)(extraout_MM1_05 >> 0x21) + cVar41,
                                                     CONCAT13((char)(uint5)(extraout_MM1_05 >> 0x19)
                                                              + cVar36,CONCAT12((char)(uint6)(
                                                  extraout_MM1_05 >> 0x11) + cVar33,
                                                  CONCAT11((char)(uint7)(extraout_MM1_05 >> 9) +
                                                           cVar30,(char)(extraout_MM1_05 >> 1) +
                                                                  cVar27))))))) & in_MM6;
        uVar25 = extraout_EAX_02[-1];
        cVar22 = (char)(uVar25 >> 8);
        cVar28 = (char)(uVar25 >> 0x10);
        cVar31 = (char)(uVar25 >> 0x18);
        cVar34 = (char)(uVar25 >> 0x20);
        cVar40 = (char)(uVar25 >> 0x28);
        cVar42 = (char)(uVar25 >> 0x30);
        cVar44 = (char)(uVar25 >> 0x38);
        uVar24 = CONCAT17((byte)(uVar24 >> 0x39) + cVar47,
                          CONCAT16((char)(ushort)(uVar24 >> 0x31) + cVar45,
                                   CONCAT15((char)(uint3)(uVar24 >> 0x29) + cVar43,
                                            CONCAT14((char)(uint)(uVar24 >> 0x21) + cVar41,
                                                     CONCAT13((char)(uint5)(uVar24 >> 0x19) + cVar36
                                                              ,CONCAT12((char)(uint6)(uVar24 >> 0x11
                                                                                     ) + cVar33,
                                                                        CONCAT11((char)(uint7)(
                                                  uVar24 >> 9) + cVar30,(char)(uVar24 >> 1) + cVar27
                                                  ))))))) & in_MM6;
        uVar21 = CONCAT17((byte)(uVar21 >> 0x39) + cVar44,
                          CONCAT16((char)(ushort)(uVar21 >> 0x31) + cVar42,
                                   CONCAT15((char)(uint3)(uVar21 >> 0x29) + cVar40,
                                            CONCAT14((char)(uint)(uVar21 >> 0x21) + cVar34,
                                                     CONCAT13((char)(uint5)(uVar21 >> 0x19) + cVar31
                                                              ,CONCAT12((char)(uint6)(uVar21 >> 0x11
                                                                                     ) + cVar28,
                                                                        CONCAT11((char)(uint7)(
                                                  uVar21 >> 9) + cVar22,
                                                  (char)(uVar21 >> 1) + (char)uVar25))))))) & in_MM6
        ;
        uVar24 = (CONCAT17(((byte)(uVar24 >> 0x39) + cVar47) - cVar63,
                           CONCAT16(((char)(ushort)(uVar24 >> 0x31) + cVar45) - cVar62,
                                    CONCAT15(((char)(uint3)(uVar24 >> 0x29) + cVar43) - cVar61,
                                             CONCAT14(((char)(uint)(uVar24 >> 0x21) + cVar41) -
                                                      cVar60,CONCAT13(((char)(uint5)(uVar24 >> 0x19)
                                                                      + cVar36) - cVar59,
                                                                      CONCAT12(((char)(uint6)(uVar24
                                                                                             >> 0x11
                                                  ) + cVar33) - cVar58,
                                                  CONCAT11(((char)(uint7)(uVar24 >> 9) + cVar30) -
                                                           cVar57,((char)(uVar24 >> 1) + cVar27) -
                                                                  cVar55))))))) & in_MM6) >> 1;
        uVar37 = (CONCAT17((byte)(uVar37 >> 0x39) + (cVar54 - cVar63),
                           CONCAT16((char)(ushort)(uVar37 >> 0x31) + (cVar53 - cVar62),
                                    CONCAT15((char)(uint3)(uVar37 >> 0x29) + (cVar52 - cVar61),
                                             CONCAT14((char)(uint)(uVar37 >> 0x21) +
                                                      (cVar51 - cVar60),
                                                      CONCAT13((char)(uint5)(uVar37 >> 0x19) +
                                                               (cVar50 - cVar59),
                                                               CONCAT12((char)(uint6)(uVar37 >> 0x11
                                                                                     ) +
                                                                        (cVar49 - cVar58),
                                                                        CONCAT11((char)(uint7)(
                                                  uVar37 >> 9) + (cVar48 - cVar57),
                                                  (char)(uVar37 >> 1) + ((char)uVar26 - cVar55))))))
                                   )) & in_MM6) >> 1;
        uVar21 = (CONCAT17(((byte)(uVar21 >> 0x39) + cVar44) - cVar63,
                           CONCAT16(((char)(ushort)(uVar21 >> 0x31) + cVar42) - cVar62,
                                    CONCAT15(((char)(uint3)(uVar21 >> 0x29) + cVar40) - cVar61,
                                             CONCAT14(((char)(uint)(uVar21 >> 0x21) + cVar34) -
                                                      cVar60,CONCAT13(((char)(uint5)(uVar21 >> 0x19)
                                                                      + cVar31) - cVar59,
                                                                      CONCAT12(((char)(uint6)(uVar21
                                                                                             >> 0x11
                                                  ) + cVar28) - cVar58,
                                                  CONCAT11(((char)(uint7)(uVar21 >> 9) + cVar22) -
                                                           cVar57,((char)(uVar21 >> 1) +
                                                                  (char)uVar25) - cVar55))))))) &
                 in_MM6) >> 1;
        uVar14 = *extraout_EDX_04;
        puVar17 = extraout_EDX_04;
      }
      puVar15 = (undefined8 *)((int)puVar17 + unaff_EBP * 5 + aiStack_28[unaff_EBP * 2]);
      uVar4 = *(undefined8 *)((int)puVar17 + unaff_EBP * 4 + aiStack_28[unaff_EBP * 2]);
      uVar18 = *(uint *)(*(int *)(&stack0x00000020 + unaff_EBP * 8) + (int)puVar17);
      uVar5 = *puVar15;
      uVar6 = *(undefined8 *)((int)puVar15 + unaff_EBP);
      uVar7 = *(undefined8 *)((int)puVar15 + unaff_EBP * 2);
      uStack00000048 =
           CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (char)(uVar20 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)(uVar20 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar4 >> 0x28) - (char)(uVar20 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                               (char)(uVar20 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                        (char)(uVar20 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar4 >> 0x10) -
                                                                 (char)(uVar20 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar4 >>
                                                                                8) -
                                                                          (char)(uVar20 >> 8),
                                                                          (char)uVar4 - (char)uVar20
                                                                         )))))));
      uStack00000058 =
           CONCAT17((char)((ulonglong)uVar5 >> 0x38) - (char)(uVar24 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar5 >> 0x30) - (char)(uVar24 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar5 >> 0x28) - (char)(uVar24 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar5 >> 0x20) -
                                               (char)(uVar24 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar5 >> 0x18) -
                                                        (char)(uVar24 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar5 >> 0x10) -
                                                                 (char)(uVar24 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar5 >>
                                                                                8) -
                                                                          (char)(uVar24 >> 8),
                                                                          (char)uVar5 - (char)uVar24
                                                                         )))))));
      uStack00000068 =
           CONCAT17((char)((ulonglong)uVar6 >> 0x38) - (char)(uVar37 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar6 >> 0x30) - (char)(uVar37 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar6 >> 0x28) - (char)(uVar37 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar6 >> 0x20) -
                                               (char)(uVar37 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar6 >> 0x18) -
                                                        (char)(uVar37 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar6 >> 0x10) -
                                                                 (char)(uVar37 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar6 >>
                                                                                8) -
                                                                          (char)(uVar37 >> 8),
                                                                          (char)uVar6 - (char)uVar37
                                                                         )))))));
      uStack00000078 =
           CONCAT17((char)((ulonglong)uVar7 >> 0x38) - (char)(uVar21 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar7 >> 0x30) - (char)(uVar21 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar7 >> 0x28) - (char)(uVar21 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar7 >> 0x20) -
                                               (char)(uVar21 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar7 >> 0x18) -
                                                        (char)(uVar21 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar7 >> 0x10) -
                                                                 (char)(uVar21 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar7 >>
                                                                                8) -
                                                                          (char)(uVar21 >> 8),
                                                                          (char)uVar7 - (char)uVar21
                                                                         )))))));
      if (((uVar14 ^ uVar18) & 0xffff) == 0) {
        uVar20 = auStack_78[unaff_EBP];
        uVar37 = auStack_78[unaff_EBP + 1];
        uVar24 = CONCAT17((char)(uVar20 >> 0x38) * '\x02',
                          CONCAT16((char)(uVar20 >> 0x30) * '\x02',
                                   CONCAT15((char)(uVar20 >> 0x28) * '\x02',
                                            CONCAT14((char)(uVar20 >> 0x20) * '\x02',
                                                     CONCAT13((char)(uVar20 >> 0x18) * '\x02',
                                                              CONCAT12((char)(uVar20 >> 0x10) *
                                                                       '\x02',CONCAT11((char)(uVar20
                                                                                             >> 8) *
                                                                                       '\x02',(char)
                                                  uVar20 * '\x02')))))));
        uVar26 = auStack_78[unaff_EBP + 2];
        uVar21 = CONCAT17((char)(uVar37 >> 0x38) * '\x02',
                          CONCAT16((char)(uVar37 >> 0x30) * '\x02',
                                   CONCAT15((char)(uVar37 >> 0x28) * '\x02',
                                            CONCAT14((char)(uVar37 >> 0x20) * '\x02',
                                                     CONCAT13((char)(uVar37 >> 0x18) * '\x02',
                                                              CONCAT12((char)(uVar37 >> 0x10) *
                                                                       '\x02',CONCAT11((char)(uVar37
                                                                                             >> 8) *
                                                                                       '\x02',(char)
                                                  uVar37 * '\x02')))))));
        uVar20 = auStack_78[unaff_EBP + 3];
        uVar26 = CONCAT17((char)(uVar26 >> 0x38) * '\x02',
                          CONCAT16((char)(uVar26 >> 0x30) * '\x02',
                                   CONCAT15((char)(uVar26 >> 0x28) * '\x02',
                                            CONCAT14((char)(uVar26 >> 0x20) * '\x02',
                                                     CONCAT13((char)(uVar26 >> 0x18) * '\x02',
                                                              CONCAT12((char)(uVar26 >> 0x10) *
                                                                       '\x02',CONCAT11((char)(uVar26
                                                                                             >> 8) *
                                                                                       '\x02',(char)
                                                  uVar26 * '\x02')))))));
        uVar18 = 0;
      }
      else {
        uStack_4 = 0x63826baf;
        uVar26 = FUN_63826d8f();
        uVar24 = extraout_EAX_03[-7];
        uVar21 = uVar21 & in_MM6;
        uVar20 = extraout_EAX_03[-5];
        cVar22 = (char)uVar20;
        cVar28 = (char)(uVar20 >> 8);
        cVar31 = (char)(uVar20 >> 0x10);
        cVar34 = (char)(uVar20 >> 0x18);
        cVar40 = (char)(uVar20 >> 0x20);
        cVar42 = (char)(uVar20 >> 0x28);
        cVar44 = (char)(uVar20 >> 0x30);
        cVar46 = (char)(uVar20 >> 0x38);
        cVar48 = (char)(uVar24 >> 8);
        cVar49 = (char)(uVar24 >> 0x10);
        cVar50 = (char)(uVar24 >> 0x18);
        cVar51 = (char)(uVar24 >> 0x20);
        cVar52 = (char)(uVar24 >> 0x28);
        cVar53 = (char)(uVar24 >> 0x30);
        cVar54 = (char)(uVar24 >> 0x38);
        uVar21 = CONCAT17((byte)(uVar21 >> 0x39) + cVar46,
                          CONCAT16((char)(ushort)(uVar21 >> 0x31) + cVar44,
                                   CONCAT15((char)(uint3)(uVar21 >> 0x29) + cVar42,
                                            CONCAT14((char)(uint)(uVar21 >> 0x21) + cVar40,
                                                     CONCAT13((char)(uint5)(uVar21 >> 0x19) + cVar34
                                                              ,CONCAT12((char)(uint6)(uVar21 >> 0x11
                                                                                     ) + cVar31,
                                                                        CONCAT11((char)(uint7)(
                                                  uVar21 >> 9) + cVar28,(char)(uVar21 >> 1) + cVar22
                                                  ))))))) & in_MM6;
        uVar20 = CONCAT17((byte)(extraout_MM1_06 >> 0x39) + cVar54,
                          CONCAT16((char)(ushort)(extraout_MM1_06 >> 0x31) + cVar53,
                                   CONCAT15((char)(uint3)(extraout_MM1_06 >> 0x29) + cVar52,
                                            CONCAT14((char)(uint)(extraout_MM1_06 >> 0x21) + cVar51,
                                                     CONCAT13((char)(uint5)(extraout_MM1_06 >> 0x19)
                                                              + cVar50,CONCAT12((char)(uint6)(
                                                  extraout_MM1_06 >> 0x11) + cVar49,
                                                  CONCAT11((char)(uint7)(extraout_MM1_06 >> 9) +
                                                           cVar48,(char)(extraout_MM1_06 >> 1) +
                                                                  (char)uVar24))))))) & in_MM6;
        sVar23 = (short)(uVar20 >> 1) * (short)DAT_63837b80;
        sVar29 = (short)(uint6)(uVar20 >> 0x11) * (short)((ulonglong)DAT_63837b80 >> 0x10);
        sVar32 = (short)(uint)(uVar20 >> 0x21) * (short)((ulonglong)DAT_63837b80 >> 0x20);
        sVar35 = (ushort)(uVar20 >> 0x31) * (short)((ulonglong)DAT_63837b80 >> 0x30);
        uVar25 = CONCAT17((byte)(uVar21 >> 0x39) + cVar46,
                          CONCAT16((char)(ushort)(uVar21 >> 0x31) + cVar44,
                                   CONCAT15((char)(uint3)(uVar21 >> 0x29) + cVar42,
                                            CONCAT14((char)(uint)(uVar21 >> 0x21) + cVar40,
                                                     CONCAT13((char)(uint5)(uVar21 >> 0x19) + cVar34
                                                              ,CONCAT12((char)(uint6)(uVar21 >> 0x11
                                                                                     ) + cVar31,
                                                                        CONCAT11((char)(uint7)(
                                                  uVar21 >> 9) + cVar28,(char)(uVar21 >> 1) + cVar22
                                                  ))))))) & in_MM6;
        uVar37 = uVar37 & in_MM6;
        cVar55 = (char)uVar56;
        cVar57 = (char)((ulonglong)uVar56 >> 8);
        cVar58 = (char)((ulonglong)uVar56 >> 0x10);
        cVar59 = (char)((ulonglong)uVar56 >> 0x18);
        cVar60 = (char)((ulonglong)uVar56 >> 0x20);
        cVar61 = (char)((ulonglong)uVar56 >> 0x28);
        cVar62 = (char)((ulonglong)uVar56 >> 0x30);
        cVar63 = (char)((ulonglong)uVar56 >> 0x38);
        uVar21 = ~*extraout_EAX_03 & uVar24;
        uVar20 = extraout_EAX_03[-6];
        uVar21 = CONCAT17((char)((ushort)sVar35 >> 8) + (char)(uVar21 >> 0x38),
                          CONCAT16((char)sVar35 + (char)(uVar21 >> 0x30),
                                   CONCAT15((char)((ushort)sVar32 >> 8) + (char)(uVar21 >> 0x28),
                                            CONCAT14((char)sVar32 + (char)(uVar21 >> 0x20),
                                                     CONCAT13((char)((ushort)sVar29 >> 8) +
                                                              (char)(uVar21 >> 0x18),
                                                              CONCAT12((char)sVar29 +
                                                                       (char)(uVar21 >> 0x10),
                                                                       CONCAT11((char)((ushort)
                                                  sVar23 >> 8) + (char)(uVar21 >> 8),
                                                  (char)sVar23 + (char)uVar21))))))) & in_MM6;
        cVar27 = (char)uVar20;
        cVar30 = (char)(uVar20 >> 8);
        cVar33 = (char)(uVar20 >> 0x10);
        cVar36 = (char)(uVar20 >> 0x18);
        cVar41 = (char)(uVar20 >> 0x20);
        cVar43 = (char)(uVar20 >> 0x28);
        cVar45 = (char)(uVar20 >> 0x30);
        cVar47 = (char)(uVar20 >> 0x38);
        uVar20 = (CONCAT17(((byte)(uVar25 >> 0x39) + cVar46) - cVar63,
                           CONCAT16(((char)(ushort)(uVar25 >> 0x31) + cVar44) - cVar62,
                                    CONCAT15(((char)(uint3)(uVar25 >> 0x29) + cVar42) - cVar61,
                                             CONCAT14(((char)(uint)(uVar25 >> 0x21) + cVar40) -
                                                      cVar60,CONCAT13(((char)(uint5)(uVar25 >> 0x19)
                                                                      + cVar34) - cVar59,
                                                                      CONCAT12(((char)(uint6)(uVar25
                                                                                             >> 0x11
                                                  ) + cVar31) - cVar58,
                                                  CONCAT11(((char)(uint7)(uVar25 >> 9) + cVar28) -
                                                           cVar57,((char)(uVar25 >> 1) + cVar22) -
                                                                  cVar55))))))) & in_MM6) >> 1;
        uVar37 = CONCAT17((byte)(uVar37 >> 0x39) + cVar47,
                          CONCAT16((char)(ushort)(uVar37 >> 0x31) + cVar45,
                                   CONCAT15((char)(uint3)(uVar37 >> 0x29) + cVar43,
                                            CONCAT14((char)(uint)(uVar37 >> 0x21) + cVar41,
                                                     CONCAT13((char)(uint5)(uVar37 >> 0x19) + cVar36
                                                              ,CONCAT12((char)(uint6)(uVar37 >> 0x11
                                                                                     ) + cVar33,
                                                                        CONCAT11((char)(uint7)(
                                                  uVar37 >> 9) + cVar30,(char)(uVar37 >> 1) + cVar27
                                                  ))))))) & in_MM6;
        uVar21 = CONCAT17((byte)(uVar21 >> 0x39) + (cVar54 - cVar63),
                          CONCAT16((char)(ushort)(uVar21 >> 0x31) + (cVar53 - cVar62),
                                   CONCAT15((char)(uint3)(uVar21 >> 0x29) + (cVar52 - cVar61),
                                            CONCAT14((char)(uint)(uVar21 >> 0x21) +
                                                     (cVar51 - cVar60),
                                                     CONCAT13((char)(uint5)(uVar21 >> 0x19) +
                                                              (cVar50 - cVar59),
                                                              CONCAT12((char)(uint6)(uVar21 >> 0x11)
                                                                       + (cVar49 - cVar58),
                                                                       CONCAT11((char)(uint7)(uVar21
                                                                                             >> 9) +
                                                                                (cVar48 - cVar57),
                                                                                (char)(uVar21 >> 1)
                                                                                + ((char)uVar24 -
                                                                                  cVar55))))))));
        uVar24 = extraout_EAX_03[-8];
        cVar22 = (char)(uVar24 >> 8);
        cVar28 = (char)(uVar24 >> 0x10);
        cVar31 = (char)(uVar24 >> 0x18);
        cVar34 = (char)(uVar24 >> 0x20);
        cVar40 = (char)(uVar24 >> 0x28);
        cVar42 = (char)(uVar24 >> 0x30);
        cVar44 = (char)(uVar24 >> 0x38);
        uVar25 = CONCAT17((byte)(uVar37 >> 0x39) + cVar47,
                          CONCAT16((char)(ushort)(uVar37 >> 0x31) + cVar45,
                                   CONCAT15((char)(uint3)(uVar37 >> 0x29) + cVar43,
                                            CONCAT14((char)(uint)(uVar37 >> 0x21) + cVar41,
                                                     CONCAT13((char)(uint5)(uVar37 >> 0x19) + cVar36
                                                              ,CONCAT12((char)(uint6)(uVar37 >> 0x11
                                                                                     ) + cVar33,
                                                                        CONCAT11((char)(uint7)(
                                                  uVar37 >> 9) + cVar30,(char)(uVar37 >> 1) + cVar27
                                                  ))))))) & in_MM6;
        uVar37 = CONCAT17((char)(uVar26 >> 0x38) + cVar44,
                          CONCAT16((char)(uVar26 >> 0x30) + cVar42,
                                   CONCAT15((char)(uVar26 >> 0x28) + cVar40,
                                            CONCAT14((char)(uVar26 >> 0x20) + cVar34,
                                                     CONCAT13((char)(uVar26 >> 0x18) + cVar31,
                                                              CONCAT12((char)(uVar26 >> 0x10) +
                                                                       cVar28,CONCAT11((char)(uVar26
                                                                                             >> 8) +
                                                                                       cVar22,(char)
                                                  uVar26 + (char)uVar24))))))) & in_MM6;
        uVar26 = CONCAT17(((byte)(uVar25 >> 0x39) + cVar47) - cVar63,
                          CONCAT16(((char)(ushort)(uVar25 >> 0x31) + cVar45) - cVar62,
                                   CONCAT15(((char)(uint3)(uVar25 >> 0x29) + cVar43) - cVar61,
                                            CONCAT14(((char)(uint)(uVar25 >> 0x21) + cVar41) -
                                                     cVar60,CONCAT13(((char)(uint5)(uVar25 >> 0x19)
                                                                     + cVar36) - cVar59,
                                                                     CONCAT12(((char)(uint6)(uVar25 
                                                  >> 0x11) + cVar33) - cVar58,
                                                  CONCAT11(((char)(uint7)(uVar25 >> 9) + cVar30) -
                                                           cVar57,((char)(uVar25 >> 1) + cVar27) -
                                                                  cVar55))))))) & in_MM6;
        uVar24 = CONCAT17(((byte)(uVar37 >> 0x39) + cVar44) - cVar63,
                          CONCAT16(((char)(ushort)(uVar37 >> 0x31) + cVar42) - cVar62,
                                   CONCAT15(((char)(uint3)(uVar37 >> 0x29) + cVar40) - cVar61,
                                            CONCAT14(((char)(uint)(uVar37 >> 0x21) + cVar34) -
                                                     cVar60,CONCAT13(((char)(uint5)(uVar37 >> 0x19)
                                                                     + cVar31) - cVar59,
                                                                     CONCAT12(((char)(uint6)(uVar37 
                                                  >> 0x11) + cVar28) - cVar58,
                                                  CONCAT11(((char)(uint7)(uVar37 >> 9) + cVar22) -
                                                           cVar57,((char)(uVar37 >> 1) +
                                                                  (char)uVar24) - cVar55)))))));
        puVar17 = extraout_EDX_05;
      }
      puVar15 = (undefined8 *)(aiStack_28[unaff_EBP * 2] + (int)puVar17);
      uVar56 = *puVar15;
      uVar25 = uVar26 >> 1;
      uVar4 = *(undefined8 *)((int)puVar15 + unaff_EBP * 3);
      uVar37 = (uVar21 & in_MM6) >> 1;
      uVar5 = *(undefined8 *)((int)puVar15 + unaff_EBP * 2);
      uStack00000038 =
           CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (char)(uVar20 >> 0x38),
                    CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)(uVar20 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar4 >> 0x28) - (char)(uVar20 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                               (char)(uVar20 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                        (char)(uVar20 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar4 >> 0x10) -
                                                                 (char)(uVar20 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar4 >>
                                                                                8) -
                                                                          (char)(uVar20 >> 8),
                                                                          (char)uVar4 - (char)uVar20
                                                                         )))))));
      uVar4 = *(undefined8 *)((int)puVar15 + unaff_EBP);
      uStack00000028 =
           CONCAT17((char)((ulonglong)uVar5 >> 0x38) - (byte)(uVar26 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar5 >> 0x30) - (char)(uVar25 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar5 >> 0x28) - (char)(uVar25 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar5 >> 0x20) -
                                               (char)(uVar25 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar5 >> 0x18) -
                                                        (char)(uVar25 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar5 >> 0x10) -
                                                                 (char)(uVar25 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar5 >>
                                                                                8) -
                                                                          (char)(uVar25 >> 8),
                                                                          (char)uVar5 - (char)uVar25
                                                                         )))))));
      uStack00000018 =
           CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (byte)((uVar21 & in_MM6) >> 0x39),
                    CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)(uVar37 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar4 >> 0x28) - (char)(uVar37 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                               (char)(uVar37 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                        (char)(uVar37 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar4 >> 0x10) -
                                                                 (char)(uVar37 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar4 >>
                                                                                8) -
                                                                          (char)(uVar37 >> 8),
                                                                          (char)uVar4 - (char)uVar37
                                                                         )))))));
      uVar20 = (uVar24 & in_MM6) >> 1;
      uStack00000008 =
           CONCAT17((char)((ulonglong)uVar56 >> 0x38) - (byte)((uVar24 & in_MM6) >> 0x39),
                    CONCAT16((char)((ulonglong)uVar56 >> 0x30) - (char)(uVar20 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar56 >> 0x28) - (char)(uVar20 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar56 >> 0x20) -
                                               (char)(uVar20 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar56 >> 0x18) -
                                                        (char)(uVar20 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar56 >> 0x10) -
                                                                 (char)(uVar20 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar56
                                                                                >> 8) -
                                                                          (char)(uVar20 >> 8),
                                                                          (char)uVar56 -
                                                                          (char)uVar20)))))));
      goto LAB_63826e48;
    }
LAB_638266a9:
    uStack_4 = 0x638266b8;
    in_stack_00000168 = FUN_63826c96();
    in_stack_00000170 = extraout_MM1_00 >> 1;
    in_MM2 = (in_MM2 & in_MM6) >> 1;
    in_MM3 = (in_MM3 & in_MM6) >> 1;
    in_stack_00000178 = in_MM2;
    *(undefined1 **)((undefined1 *)((int)register0x00000010 + 0x2c) + unaff_EBP * 8) =
         &stack0x00000148;
    in_stack_00000180 = in_MM3;
  }
  else {
    uStack_4 = 0x63826670;
    in_stack_00000128 = FUN_63826c96();
    in_stack_00000130 = extraout_MM1 >> 1;
    in_MM2 = (in_MM2 & in_MM6) >> 1;
    in_MM3 = (in_MM3 & in_MM6) >> 1;
    uVar18 = *extraout_EDX;
    uVar14 = *(uint *)(extraout_EAX + (int)extraout_EDX);
    in_stack_00000138 = in_MM2;
    in_stack_00000140 = in_MM3;
    *(undefined1 **)((int)&stack0x00000028 + unaff_EBP * 8) = &stack0x00000108;
    if (((uVar18 ^ uVar14) & 0xffff) != 0) goto LAB_638266a9;
  }
  uStack_4 = 0x638266f3;
  uVar20 = FUN_63826c96();
  in_MM2 = in_MM2 & in_MM6;
  auStack_78[unaff_EBP + 4] = uVar20;
  uVar24 = in_MM2 >> 1;
  auStack_78[unaff_EBP + 5] = extraout_MM1_01 >> 1;
  in_MM3 = in_MM3 & in_MM6;
  auStack_78[unaff_EBP + 6] = uVar24;
  uVar37 = in_MM3 >> 1;
  uVar18 = *extraout_EDX_00;
  uVar14 = *(uint *)(extraout_EAX_00 + (int)extraout_EDX_00);
  auStack_78[unaff_EBP + 7] = uVar37;
  uVar56 = 0xffffffffffffffff;
  puVar8 = *(undefined4 **)((int)&stack0x00000028 + unaff_EBP * 8);
  if (((uVar18 ^ uVar14) & 0xffff) == 0) {
    uVar21 = CONCAT17((char)(extraout_MM1_01 >> 0x38),
                      CONCAT16((char)(ushort)(extraout_MM1_01 >> 0x31) * '\x02',
                               CONCAT15((char)(uint3)(extraout_MM1_01 >> 0x29) * '\x02',
                                        CONCAT14((char)(uint)(extraout_MM1_01 >> 0x21) * '\x02',
                                                 CONCAT13((char)(uint5)(extraout_MM1_01 >> 0x19) *
                                                          '\x02',CONCAT12((char)(uint6)(
                                                  extraout_MM1_01 >> 0x11) * '\x02',
                                                  CONCAT11((char)(uint7)(extraout_MM1_01 >> 9) *
                                                           '\x02',(char)(extraout_MM1_01 >> 1) *
                                                                  '\x02'))))))) & 0xfeffffffffffffff
    ;
    uVar24 = CONCAT17((char)(in_MM2 >> 0x38),
                      CONCAT16((char)(ushort)(in_MM2 >> 0x31) * '\x02',
                               CONCAT15((char)(uint3)(in_MM2 >> 0x29) * '\x02',
                                        CONCAT14((char)(uint)(in_MM2 >> 0x21) * '\x02',
                                                 CONCAT13((char)(uint5)(in_MM2 >> 0x19) * '\x02',
                                                          CONCAT12((char)(uint6)(in_MM2 >> 0x11) *
                                                                   '\x02',CONCAT11((char)(uint7)(
                                                  in_MM2 >> 9) * '\x02',(char)uVar24 * '\x02')))))))
             & 0xfeffffffffffffff;
    uVar37 = CONCAT17((char)(in_MM3 >> 0x38),
                      CONCAT16((char)(ushort)(in_MM3 >> 0x31) * '\x02',
                               CONCAT15((char)(uint3)(in_MM3 >> 0x29) * '\x02',
                                        CONCAT14((char)(uint)(in_MM3 >> 0x21) * '\x02',
                                                 CONCAT13((char)(uint5)(in_MM3 >> 0x19) * '\x02',
                                                          CONCAT12((char)(uint6)(in_MM3 >> 0x11) *
                                                                   '\x02',CONCAT11((char)(uint7)(
                                                  in_MM3 >> 9) * '\x02',(char)uVar37 * '\x02')))))))
             & 0xfeffffffffffffff;
    puVar17 = extraout_EDX_00;
  }
  else {
    uStack_4 = 0x63826745;
    uVar20 = FUN_63826d8f();
    puVar17 = extraout_EDX_01;
    uVar21 = extraout_MM1_02;
  }
  iVar9 = *(int *)((undefined1 *)((int)register0x00000010 + 0x2c) + unaff_EBP * 8);
  uVar10 = puVar8[0xc];
  iVar16 = aiStack_28[unaff_EBP * 2] + unaff_EBP * 4;
  puVar12 = auStack_78 + unaff_EBP + 8;
  uVar2 = *(undefined4 *)(iVar9 + 0x34);
  uVar37 = uVar37 & in_MM6;
  uVar25 = (uVar24 & in_MM6) >> 1;
  uVar38 = ~*puVar12 & CONCAT44(uVar2,uVar10);
  uVar26 = uVar25 & *puVar12;
  cVar22 = (char)uVar26 + (char)uVar38;
  cVar27 = (char)(uVar26 >> 8) + (char)(uVar38 >> 8);
  cVar28 = (char)(uVar26 >> 0x10) + (char)(uVar38 >> 0x10);
  cVar30 = (char)(uVar26 >> 0x18) + (char)(uVar38 >> 0x18);
  cVar31 = (char)(uVar26 >> 0x20) + (char)(uVar38 >> 0x20);
  cVar33 = (char)(uVar26 >> 0x28) + (char)(uVar38 >> 0x28);
  cVar34 = (char)(uVar26 >> 0x30) + (char)(uVar38 >> 0x30);
  cVar36 = (char)(uVar26 >> 0x38) + (char)(uVar38 >> 0x38);
  uVar11 = puVar8[0xe];
  uVar26 = auStack_78[unaff_EBP + 6];
  uVar3 = *(undefined4 *)(iVar9 + 0x3c);
  uVar24 = CONCAT17((((char)((uint)uVar2 >> 0x18) + (byte)((uVar24 & in_MM6) >> 0x39)) - cVar36) +
                    (char)(uVar26 >> 0x38),
                    CONCAT16((((char)((uint)uVar2 >> 0x10) + (char)(uVar25 >> 0x30)) - cVar34) +
                             (char)(uVar26 >> 0x30),
                             CONCAT15((((char)((uint)uVar2 >> 8) + (char)(uVar25 >> 0x28)) - cVar33)
                                      + (char)(uVar26 >> 0x28),
                                      CONCAT14((((char)uVar2 + (char)(uVar25 >> 0x20)) - cVar31) +
                                               (char)(uVar26 >> 0x20),
                                               CONCAT13((((char)((uint)uVar10 >> 0x18) +
                                                         (char)(uVar25 >> 0x18)) - cVar30) +
                                                        (char)(uVar26 >> 0x18),
                                                        CONCAT12((((char)((uint)uVar10 >> 0x10) +
                                                                  (char)(uVar25 >> 0x10)) - cVar28)
                                                                 + (char)(uVar26 >> 0x10),
                                                                 CONCAT11((((char)((uint)uVar10 >> 8
                                                                                  ) +
                                                                           (char)(uVar25 >> 8)) -
                                                                          cVar27) + (char)(uVar26 >>
                                                                                          8),
                                                                          (((char)uVar10 +
                                                                           (char)uVar25) - cVar22) +
                                                                          (char)uVar26))))))) &
           in_MM6;
  uVar26 = uVar24 >> 1;
  uVar26 = CONCAT17(cVar36 + (byte)(uVar24 >> 0x39),
                    CONCAT16(cVar34 + (char)(uVar26 >> 0x30),
                             CONCAT15(cVar33 + (char)(uVar26 >> 0x28),
                                      CONCAT14(cVar31 + (char)(uVar26 >> 0x20),
                                               CONCAT13(cVar30 + (char)(uVar26 >> 0x18),
                                                        CONCAT12(cVar28 + (char)(uVar26 >> 0x10),
                                                                 CONCAT11(cVar27 + (char)(uVar26 >>
                                                                                         8),
                                                                          cVar22 + (char)uVar26)))))
                            )) & in_MM6;
  uVar38 = ~DAT_63837ba0 & auStack_78[unaff_EBP + 7];
  uVar24 = auStack_78[unaff_EBP + 6];
  uVar25 = CONCAT44(uVar3,uVar11) & DAT_63837ba0;
  cVar40 = (char)uVar56;
  cVar41 = (char)((ulonglong)uVar56 >> 8);
  cVar42 = (char)((ulonglong)uVar56 >> 0x10);
  cVar43 = (char)((ulonglong)uVar56 >> 0x18);
  cVar44 = (char)((ulonglong)uVar56 >> 0x20);
  cVar45 = (char)((ulonglong)uVar56 >> 0x28);
  cVar46 = (char)((ulonglong)uVar56 >> 0x30);
  cVar47 = (char)((ulonglong)uVar56 >> 0x38);
  uVar24 = CONCAT17(((byte)(uVar26 >> 0x39) + (char)(uVar24 >> 0x38)) - cVar47,
                    CONCAT16(((char)(ushort)(uVar26 >> 0x31) + (char)(uVar24 >> 0x30)) - cVar46,
                             CONCAT15(((char)(uint3)(uVar26 >> 0x29) + (char)(uVar24 >> 0x28)) -
                                      cVar45,CONCAT14(((char)(uint)(uVar26 >> 0x21) +
                                                      (char)(uVar24 >> 0x20)) - cVar44,
                                                      CONCAT13(((char)(uint5)(uVar26 >> 0x19) +
                                                               (char)(uVar24 >> 0x18)) - cVar43,
                                                               CONCAT12(((char)(uint6)(uVar26 >>
                                                                                      0x11) +
                                                                        (char)(uVar24 >> 0x10)) -
                                                                        cVar42,CONCAT11(((char)(
                                                  uint7)(uVar26 >> 9) + (char)(uVar24 >> 8)) -
                                                  cVar41,((char)(uVar26 >> 1) + (char)uVar24) -
                                                         cVar40))))))) & in_MM6;
  uVar4 = *(undefined8 *)((int)puVar17 + unaff_EBP * 2 + iVar16);
  uVar26 = uVar24 >> 1;
  iVar16 = iVar16 - unaff_EBP;
  uVar10 = puVar8[8];
  uVar25 = CONCAT17((char)(uVar25 >> 0x38) + (char)(uVar38 >> 0x38) + (char)((uint)uVar3 >> 0x18),
                    CONCAT16((char)(uVar25 >> 0x30) +
                             (char)(uVar38 >> 0x30) + (char)((uint)uVar3 >> 0x10),
                             CONCAT15((char)(uVar25 >> 0x28) +
                                      (char)(uVar38 >> 0x28) + (char)((uint)uVar3 >> 8),
                                      CONCAT14((char)(uVar25 >> 0x20) +
                                               (char)(uVar38 >> 0x20) + (char)uVar3,
                                               CONCAT13((char)(uVar25 >> 0x18) +
                                                        (char)(uVar38 >> 0x18) +
                                                        (char)((uint)uVar11 >> 0x18),
                                                        CONCAT12((char)(uVar25 >> 0x10) +
                                                                 (char)(uVar38 >> 0x10) +
                                                                 (char)((uint)uVar11 >> 0x10),
                                                                 CONCAT11((char)(uVar25 >> 8) +
                                                                          (char)(uVar38 >> 8) +
                                                                          (char)((uint)uVar11 >> 8),
                                                                          (char)uVar25 +
                                                                          (char)uVar38 +
                                                                          (char)uVar11))))))) &
           in_MM6;
  uStack00000068 =
       CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (byte)(uVar24 >> 0x39),
                CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)(uVar26 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar4 >> 0x28) - (char)(uVar26 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar4 >> 0x20) - (char)(uVar26 >> 0x20)
                                           ,CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                     (char)(uVar26 >> 0x18),
                                                     CONCAT12((char)((ulonglong)uVar4 >> 0x10) -
                                                              (char)(uVar26 >> 0x10),
                                                              CONCAT11((char)((ulonglong)uVar4 >> 8)
                                                                       - (char)(uVar26 >> 8),
                                                                       (char)uVar4 - (char)uVar26)))
                                          ))));
  uVar24 = uVar25 >> 1;
  uVar2 = *(undefined4 *)(iVar9 + 0x24);
  uVar25 = CONCAT17((byte)(uVar37 >> 0x39) + (byte)(uVar25 >> 0x39),
                    CONCAT16((char)(ushort)(uVar37 >> 0x31) + (char)(uVar24 >> 0x30),
                             CONCAT15((char)(uint3)(uVar37 >> 0x29) + (char)(uVar24 >> 0x28),
                                      CONCAT14((char)(uint)(uVar37 >> 0x21) + (char)(uVar24 >> 0x20)
                                               ,CONCAT13((char)(uint5)(uVar37 >> 0x19) +
                                                         (char)(uVar24 >> 0x18),
                                                         CONCAT12((char)(uint6)(uVar37 >> 0x11) +
                                                                  (char)(uVar24 >> 0x10),
                                                                  CONCAT11((char)(uint7)(uVar37 >> 9
                                                                                        ) +
                                                                           (char)(uVar24 >> 8),
                                                                           (char)(uVar37 >> 1) +
                                                                           (char)uVar24))))))) &
           in_MM6;
  uVar24 = auStack_78[unaff_EBP + 4];
  uVar37 = auStack_78[unaff_EBP + 7];
  uVar38 = ~*puVar12 & uVar24;
  uVar26 = CONCAT44(uVar2,uVar10) & *puVar12;
  uVar25 = CONCAT17(((byte)(uVar25 >> 0x39) + (char)(uVar37 >> 0x38)) - cVar47,
                    CONCAT16(((char)(ushort)(uVar25 >> 0x31) + (char)(uVar37 >> 0x30)) - cVar46,
                             CONCAT15(((char)(uint3)(uVar25 >> 0x29) + (char)(uVar37 >> 0x28)) -
                                      cVar45,CONCAT14(((char)(uint)(uVar25 >> 0x21) +
                                                      (char)(uVar37 >> 0x20)) - cVar44,
                                                      CONCAT13(((char)(uint5)(uVar25 >> 0x19) +
                                                               (char)(uVar37 >> 0x18)) - cVar43,
                                                               CONCAT12(((char)(uint6)(uVar25 >>
                                                                                      0x11) +
                                                                        (char)(uVar37 >> 0x10)) -
                                                                        cVar42,CONCAT11(((char)(
                                                  uint7)(uVar25 >> 9) + (char)(uVar37 >> 8)) -
                                                  cVar41,((char)(uVar25 >> 1) + (char)uVar37) -
                                                         cVar40))))))) & in_MM6;
  cVar22 = (char)uVar26 + (char)uVar38;
  cVar27 = (char)(uVar26 >> 8) + (char)(uVar38 >> 8);
  cVar28 = (char)(uVar26 >> 0x10) + (char)(uVar38 >> 0x10);
  cVar30 = (char)(uVar26 >> 0x18) + (char)(uVar38 >> 0x18);
  cVar31 = (char)(uVar26 >> 0x20) + (char)(uVar38 >> 0x20);
  cVar33 = (char)(uVar26 >> 0x28) + (char)(uVar38 >> 0x28);
  cVar34 = (char)(uVar26 >> 0x30) + (char)(uVar38 >> 0x30);
  cVar36 = (char)(uVar26 >> 0x38) + (char)(uVar38 >> 0x38);
  uVar26 = uVar25 >> 1;
  uVar11 = puVar8[10];
  uVar3 = *(undefined4 *)(iVar9 + 0x2c);
  uVar4 = *(undefined8 *)((int)puVar17 + unaff_EBP * 4 + iVar16);
  uVar37 = CONCAT17((char)(uVar20 >> 0x38) + cVar36,
                    CONCAT16((char)(uVar20 >> 0x30) + cVar34,
                             CONCAT15((char)(uVar20 >> 0x28) + cVar33,
                                      CONCAT14((char)(uVar20 >> 0x20) + cVar31,
                                               CONCAT13((char)(uVar20 >> 0x18) + cVar30,
                                                        CONCAT12((char)(uVar20 >> 0x10) + cVar28,
                                                                 CONCAT11((char)(uVar20 >> 8) +
                                                                          cVar27,(char)uVar20 +
                                                                                 cVar22))))))) &
           in_MM6;
  uVar26 = CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (byte)(uVar25 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)(uVar26 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar4 >> 0x28) - (char)(uVar26 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                               (char)(uVar26 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                        (char)(uVar26 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar4 >> 0x10) -
                                                                 (char)(uVar26 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar4 >>
                                                                                8) -
                                                                          (char)(uVar26 >> 8),
                                                                          (char)uVar4 - (char)uVar26
                                                                         )))))));
  uVar20 = auStack_78[unaff_EBP + 5];
  uVar37 = CONCAT17((byte)(uVar37 >> 0x39) +
                    (((char)(uVar24 >> 0x38) + (char)((uint)uVar2 >> 0x18)) - cVar36),
                    CONCAT16((char)(ushort)(uVar37 >> 0x31) +
                             (((char)(uVar24 >> 0x30) + (char)((uint)uVar2 >> 0x10)) - cVar34),
                             CONCAT15((char)(uint3)(uVar37 >> 0x29) +
                                      (((char)(uVar24 >> 0x28) + (char)((uint)uVar2 >> 8)) - cVar33)
                                      ,CONCAT14((char)(uint)(uVar37 >> 0x21) +
                                                (((char)(uVar24 >> 0x20) + (char)uVar2) - cVar31),
                                                CONCAT13((char)(uint5)(uVar37 >> 0x19) +
                                                         (((char)(uVar24 >> 0x18) +
                                                          (char)((uint)uVar10 >> 0x18)) - cVar30),
                                                         CONCAT12((char)(uint6)(uVar37 >> 0x11) +
                                                                  (((char)(uVar24 >> 0x10) +
                                                                   (char)((uint)uVar10 >> 0x10)) -
                                                                  cVar28),CONCAT11((char)(uint7)(
                                                  uVar37 >> 9) +
                                                  (((char)(uVar24 >> 8) + (char)((uint)uVar10 >> 8))
                                                  - cVar27),
                                                  (char)(uVar37 >> 1) +
                                                  (((char)uVar24 + (char)uVar10) - cVar22)))))))) &
           in_MM6;
  uVar25 = ~*puVar12 & uVar20;
  uVar38 = CONCAT44(uVar3,uVar11) & *puVar12;
  uVar24 = auStack_78[unaff_EBP + 4];
  cVar22 = (char)uVar38 + (char)uVar25;
  cVar27 = (char)(uVar38 >> 8) + (char)(uVar25 >> 8);
  cVar28 = (char)(uVar38 >> 0x10) + (char)(uVar25 >> 0x10);
  cVar30 = (char)(uVar38 >> 0x18) + (char)(uVar25 >> 0x18);
  cVar31 = (char)(uVar38 >> 0x20) + (char)(uVar25 >> 0x20);
  cVar33 = (char)(uVar38 >> 0x28) + (char)(uVar25 >> 0x28);
  cVar34 = (char)(uVar38 >> 0x30) + (char)(uVar25 >> 0x30);
  cVar36 = (char)(uVar38 >> 0x38) + (char)(uVar25 >> 0x38);
  uVar21 = CONCAT17((byte)(uVar21 >> 0x39) + cVar36,
                    CONCAT16((char)(ushort)(uVar21 >> 0x31) + cVar34,
                             CONCAT15((char)(uint3)(uVar21 >> 0x29) + cVar33,
                                      CONCAT14((char)(uint)(uVar21 >> 0x21) + cVar31,
                                               CONCAT13((char)(uint5)(uVar21 >> 0x19) + cVar30,
                                                        CONCAT12((char)(uint6)(uVar21 >> 0x11) +
                                                                 cVar28,CONCAT11((char)(uint7)(
                                                  uVar21 >> 9) + cVar27,(char)(uVar21 >> 1) + cVar22
                                                  ))))))) & in_MM6;
  uVar24 = CONCAT17(((byte)(uVar37 >> 0x39) + (char)(uVar24 >> 0x38)) - cVar47,
                    CONCAT16(((char)(ushort)(uVar37 >> 0x31) + (char)(uVar24 >> 0x30)) - cVar46,
                             CONCAT15(((char)(uint3)(uVar37 >> 0x29) + (char)(uVar24 >> 0x28)) -
                                      cVar45,CONCAT14(((char)(uint)(uVar37 >> 0x21) +
                                                      (char)(uVar24 >> 0x20)) - cVar44,
                                                      CONCAT13(((char)(uint5)(uVar37 >> 0x19) +
                                                               (char)(uVar24 >> 0x18)) - cVar43,
                                                               CONCAT12(((char)(uint6)(uVar37 >>
                                                                                      0x11) +
                                                                        (char)(uVar24 >> 0x10)) -
                                                                        cVar42,CONCAT11(((char)(
                                                  uint7)(uVar37 >> 9) + (char)(uVar24 >> 8)) -
                                                  cVar41,((char)(uVar37 >> 1) + (char)uVar24) -
                                                         cVar40))))))) & in_MM6;
  uVar37 = uVar24 >> 1;
  uVar4 = *(undefined8 *)((int)puVar17 + unaff_EBP * 2 + iVar16);
  uVar21 = CONCAT17((byte)(uVar21 >> 0x39) +
                    (((char)(uVar20 >> 0x38) + (char)((uint)uVar3 >> 0x18)) - cVar36),
                    CONCAT16((char)(ushort)(uVar21 >> 0x31) +
                             (((char)(uVar20 >> 0x30) + (char)((uint)uVar3 >> 0x10)) - cVar34),
                             CONCAT15((char)(uint3)(uVar21 >> 0x29) +
                                      (((char)(uVar20 >> 0x28) + (char)((uint)uVar3 >> 8)) - cVar33)
                                      ,CONCAT14((char)(uint)(uVar21 >> 0x21) +
                                                (((char)(uVar20 >> 0x20) + (char)uVar3) - cVar31),
                                                CONCAT13((char)(uint5)(uVar21 >> 0x19) +
                                                         (((char)(uVar20 >> 0x18) +
                                                          (char)((uint)uVar11 >> 0x18)) - cVar30),
                                                         CONCAT12((char)(uint6)(uVar21 >> 0x11) +
                                                                  (((char)(uVar20 >> 0x10) +
                                                                   (char)((uint)uVar11 >> 0x10)) -
                                                                  cVar28),CONCAT11((char)(uint7)(
                                                  uVar21 >> 9) +
                                                  (((char)(uVar20 >> 8) + (char)((uint)uVar11 >> 8))
                                                  - cVar27),
                                                  (char)(uVar21 >> 1) +
                                                  (((char)uVar20 + (char)uVar11) - cVar22)))))))) &
           in_MM6;
  uVar5 = *(undefined8 *)((int)puVar17 + unaff_EBP + iVar16);
  uVar20 = auStack_78[unaff_EBP + 5];
  uStack00000078 = uVar26;
  uVar20 = CONCAT17(((byte)(uVar21 >> 0x39) + (char)(uVar20 >> 0x38)) - cVar47,
                    CONCAT16(((char)(ushort)(uVar21 >> 0x31) + (char)(uVar20 >> 0x30)) - cVar46,
                             CONCAT15(((char)(uint3)(uVar21 >> 0x29) + (char)(uVar20 >> 0x28)) -
                                      cVar45,CONCAT14(((char)(uint)(uVar21 >> 0x21) +
                                                      (char)(uVar20 >> 0x20)) - cVar44,
                                                      CONCAT13(((char)(uint5)(uVar21 >> 0x19) +
                                                               (char)(uVar20 >> 0x18)) - cVar43,
                                                               CONCAT12(((char)(uint6)(uVar21 >>
                                                                                      0x11) +
                                                                        (char)(uVar20 >> 0x10)) -
                                                                        cVar42,CONCAT11(((char)(
                                                  uint7)(uVar21 >> 9) + (char)(uVar20 >> 8)) -
                                                  cVar41,((char)(uVar21 >> 1) + (char)uVar20) -
                                                         cVar40))))))) & in_MM6;
  uStack00000048 =
       CONCAT17((char)((ulonglong)uVar5 >> 0x38) - (byte)(uVar24 >> 0x39),
                CONCAT16((char)((ulonglong)uVar5 >> 0x30) - (char)(uVar37 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar5 >> 0x28) - (char)(uVar37 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar5 >> 0x20) - (char)(uVar37 >> 0x20)
                                           ,CONCAT13((char)((ulonglong)uVar5 >> 0x18) -
                                                     (char)(uVar37 >> 0x18),
                                                     CONCAT12((char)((ulonglong)uVar5 >> 0x10) -
                                                              (char)(uVar37 >> 0x10),
                                                              CONCAT11((char)((ulonglong)uVar5 >> 8)
                                                                       - (char)(uVar37 >> 8),
                                                                       (char)uVar5 - (char)uVar37)))
                                          ))));
  uVar24 = uVar20 >> 1;
  uVar20 = CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (byte)(uVar20 >> 0x39),
                    CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)(uVar24 >> 0x30),
                             CONCAT15((char)((ulonglong)uVar4 >> 0x28) - (char)(uVar24 >> 0x28),
                                      CONCAT14((char)((ulonglong)uVar4 >> 0x20) -
                                               (char)(uVar24 >> 0x20),
                                               CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                        (char)(uVar24 >> 0x18),
                                                        CONCAT12((char)((ulonglong)uVar4 >> 0x10) -
                                                                 (char)(uVar24 >> 0x10),
                                                                 CONCAT11((char)((ulonglong)uVar4 >>
                                                                                8) -
                                                                          (char)(uVar24 >> 8),
                                                                          (char)uVar4 - (char)uVar24
                                                                         )))))));
  uStack00000058 = uVar20;
  uVar18 = *(uint *)(*(int *)(&stack0x00000020 + unaff_EBP * 8) + (int)puVar17);
  if (((*puVar17 ^ uVar18) & 0xffff) == 0) {
    uVar20 = auStack_78[unaff_EBP + 3];
    uVar24 = auStack_78[unaff_EBP + 2];
    uVar20 = CONCAT17((char)(uVar20 >> 0x38) * '\x02',
                      CONCAT16((char)(uVar20 >> 0x30) * '\x02',
                               CONCAT15((char)(uVar20 >> 0x28) * '\x02',
                                        CONCAT14((char)(uVar20 >> 0x20) * '\x02',
                                                 CONCAT13((char)(uVar20 >> 0x18) * '\x02',
                                                          CONCAT12((char)(uVar20 >> 0x10) * '\x02',
                                                                   CONCAT11((char)(uVar20 >> 8) *
                                                                            '\x02',(char)uVar20 *
                                                                                   '\x02')))))));
    uVar37 = auStack_78[unaff_EBP + 1];
    uVar26 = CONCAT17((char)(uVar24 >> 0x38) * '\x02',
                      CONCAT16((char)(uVar24 >> 0x30) * '\x02',
                               CONCAT15((char)(uVar24 >> 0x28) * '\x02',
                                        CONCAT14((char)(uVar24 >> 0x20) * '\x02',
                                                 CONCAT13((char)(uVar24 >> 0x18) * '\x02',
                                                          CONCAT12((char)(uVar24 >> 0x10) * '\x02',
                                                                   CONCAT11((char)(uVar24 >> 8) *
                                                                            '\x02',(char)uVar24 *
                                                                                   '\x02')))))));
    uVar24 = auStack_78[unaff_EBP];
    uVar37 = CONCAT17((char)(uVar37 >> 0x38) * '\x02',
                      CONCAT16((char)(uVar37 >> 0x30) * '\x02',
                               CONCAT15((char)(uVar37 >> 0x28) * '\x02',
                                        CONCAT14((char)(uVar37 >> 0x20) * '\x02',
                                                 CONCAT13((char)(uVar37 >> 0x18) * '\x02',
                                                          CONCAT12((char)(uVar37 >> 0x10) * '\x02',
                                                                   CONCAT11((char)(uVar37 >> 8) *
                                                                            '\x02',(char)uVar37 *
                                                                                   '\x02')))))));
  }
  else {
    uStack_4 = 0x638268cd;
    uVar24 = FUN_63826d8f();
    puVar12 = extraout_EAX_01;
    puVar17 = extraout_EDX_02;
    uVar37 = extraout_MM1_03;
  }
  iVar16 = *(int *)((undefined1 *)((int)register0x00000010 + 0x2c) + unaff_EBP * 8);
  uVar10 = puVar8[2];
  uVar25 = uVar37 >> 1;
  uVar2 = *(undefined4 *)(iVar16 + 0xc);
  uVar20 = uVar20 & in_MM6;
  uVar39 = ~*puVar12 & CONCAT44(uVar2,uVar10);
  uVar38 = uVar25 & *puVar12;
  uVar26 = uVar26 & in_MM6;
  uVar21 = puVar12[-7];
  cVar22 = (char)uVar38 + (char)uVar39;
  cVar27 = (char)(uVar38 >> 8) + (char)(uVar39 >> 8);
  cVar28 = (char)(uVar38 >> 0x10) + (char)(uVar39 >> 0x10);
  cVar30 = (char)(uVar38 >> 0x18) + (char)(uVar39 >> 0x18);
  cVar31 = (char)(uVar38 >> 0x20) + (char)(uVar39 >> 0x20);
  cVar33 = (char)(uVar38 >> 0x28) + (char)(uVar39 >> 0x28);
  cVar34 = (char)(uVar38 >> 0x30) + (char)(uVar39 >> 0x30);
  cVar36 = (char)(uVar38 >> 0x38) + (char)(uVar39 >> 0x38);
  uVar11 = *puVar8;
  uVar3 = *(undefined4 *)(iVar16 + 4);
  uVar37 = CONCAT17(((char)((uint)uVar2 >> 0x18) + (byte)(uVar37 >> 0x39) + (char)(uVar21 >> 0x38))
                    - cVar36,CONCAT16(((char)((uint)uVar2 >> 0x10) + (char)(uVar25 >> 0x30) +
                                      (char)(uVar21 >> 0x30)) - cVar34,
                                      CONCAT15(((char)((uint)uVar2 >> 8) + (char)(uVar25 >> 0x28) +
                                               (char)(uVar21 >> 0x28)) - cVar33,
                                               CONCAT14(((char)uVar2 + (char)(uVar25 >> 0x20) +
                                                        (char)(uVar21 >> 0x20)) - cVar31,
                                                        CONCAT13(((char)((uint)uVar10 >> 0x18) +
                                                                  (char)(uVar25 >> 0x18) +
                                                                 (char)(uVar21 >> 0x18)) - cVar30,
                                                                 CONCAT12(((char)((uint)uVar10 >>
                                                                                 0x10) +
                                                                           (char)(uVar25 >> 0x10) +
                                                                          (char)(uVar21 >> 0x10)) -
                                                                          cVar28,CONCAT11(((char)((
                                                  uint)uVar10 >> 8) + (char)(uVar25 >> 8) +
                                                  (char)(uVar21 >> 8)) - cVar27,
                                                  ((char)uVar10 + (char)uVar25 + (char)uVar21) -
                                                  cVar22))))))) & in_MM6;
  uVar21 = uVar37 >> 1;
  puVar15 = (undefined8 *)(aiStack_28[unaff_EBP * 2] + (int)puVar17);
  uVar21 = CONCAT17(cVar36 + (byte)(uVar37 >> 0x39),
                    CONCAT16(cVar34 + (char)(uVar21 >> 0x30),
                             CONCAT15(cVar33 + (char)(uVar21 >> 0x28),
                                      CONCAT14(cVar31 + (char)(uVar21 >> 0x20),
                                               CONCAT13(cVar30 + (char)(uVar21 >> 0x18),
                                                        CONCAT12(cVar28 + (char)(uVar21 >> 0x10),
                                                                 CONCAT11(cVar27 + (char)(uVar21 >>
                                                                                         8),
                                                                          cVar22 + (char)uVar21)))))
                            )) & in_MM6;
  uVar38 = ~DAT_63837ba0 & puVar12[-8];
  uVar37 = puVar12[-7];
  uVar25 = CONCAT44(uVar3,uVar11) & DAT_63837ba0;
  cVar40 = (char)uVar56;
  cVar41 = (char)((ulonglong)uVar56 >> 8);
  cVar42 = (char)((ulonglong)uVar56 >> 0x10);
  cVar43 = (char)((ulonglong)uVar56 >> 0x18);
  cVar44 = (char)((ulonglong)uVar56 >> 0x20);
  cVar45 = (char)((ulonglong)uVar56 >> 0x28);
  cVar46 = (char)((ulonglong)uVar56 >> 0x30);
  cVar47 = (char)((ulonglong)uVar56 >> 0x38);
  uVar37 = CONCAT17(((byte)(uVar21 >> 0x39) + (char)(uVar37 >> 0x38)) - cVar47,
                    CONCAT16(((char)(ushort)(uVar21 >> 0x31) + (char)(uVar37 >> 0x30)) - cVar46,
                             CONCAT15(((char)(uint3)(uVar21 >> 0x29) + (char)(uVar37 >> 0x28)) -
                                      cVar45,CONCAT14(((char)(uint)(uVar21 >> 0x21) +
                                                      (char)(uVar37 >> 0x20)) - cVar44,
                                                      CONCAT13(((char)(uint5)(uVar21 >> 0x19) +
                                                               (char)(uVar37 >> 0x18)) - cVar43,
                                                               CONCAT12(((char)(uint6)(uVar21 >>
                                                                                      0x11) +
                                                                        (char)(uVar37 >> 0x10)) -
                                                                        cVar42,CONCAT11(((char)(
                                                  uint7)(uVar21 >> 9) + (char)(uVar37 >> 8)) -
                                                  cVar41,((char)(uVar21 >> 1) + (char)uVar37) -
                                                         cVar40))))))) & in_MM6;
  uVar56 = *(undefined8 *)((int)puVar15 + unaff_EBP);
  uVar21 = uVar37 >> 1;
  uStack00000018 =
       CONCAT17((char)((ulonglong)uVar56 >> 0x38) - (byte)(uVar37 >> 0x39),
                CONCAT16((char)((ulonglong)uVar56 >> 0x30) - (char)(uVar21 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar56 >> 0x28) - (char)(uVar21 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar56 >> 0x20) -
                                           (char)(uVar21 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar56 >> 0x18) -
                                                    (char)(uVar21 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar56 >> 0x10) -
                                                             (char)(uVar21 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar56 >> 8)
                                                                      - (char)(uVar21 >> 8),
                                                                      (char)uVar56 - (char)uVar21)))
                                          ))));
  uVar10 = puVar8[6];
  uVar37 = CONCAT17((char)(uVar25 >> 0x38) + (char)(uVar38 >> 0x38) + (char)((uint)uVar3 >> 0x18),
                    CONCAT16((char)(uVar25 >> 0x30) +
                             (char)(uVar38 >> 0x30) + (char)((uint)uVar3 >> 0x10),
                             CONCAT15((char)(uVar25 >> 0x28) +
                                      (char)(uVar38 >> 0x28) + (char)((uint)uVar3 >> 8),
                                      CONCAT14((char)(uVar25 >> 0x20) +
                                               (char)(uVar38 >> 0x20) + (char)uVar3,
                                               CONCAT13((char)(uVar25 >> 0x18) +
                                                        (char)(uVar38 >> 0x18) +
                                                        (char)((uint)uVar11 >> 0x18),
                                                        CONCAT12((char)(uVar25 >> 0x10) +
                                                                 (char)(uVar38 >> 0x10) +
                                                                 (char)((uint)uVar11 >> 0x10),
                                                                 CONCAT11((char)(uVar25 >> 8) +
                                                                          (char)(uVar38 >> 8) +
                                                                          (char)((uint)uVar11 >> 8),
                                                                          (char)uVar25 +
                                                                          (char)uVar38 +
                                                                          (char)uVar11))))))) &
           in_MM6;
  uVar21 = uVar37 >> 1;
  uVar2 = *(undefined4 *)(iVar16 + 0x1c);
  uVar21 = CONCAT17((char)(uVar24 >> 0x38) + (byte)(uVar37 >> 0x39),
                    CONCAT16((char)(uVar24 >> 0x30) + (char)(uVar21 >> 0x30),
                             CONCAT15((char)(uVar24 >> 0x28) + (char)(uVar21 >> 0x28),
                                      CONCAT14((char)(uVar24 >> 0x20) + (char)(uVar21 >> 0x20),
                                               CONCAT13((char)(uVar24 >> 0x18) +
                                                        (char)(uVar21 >> 0x18),
                                                        CONCAT12((char)(uVar24 >> 0x10) +
                                                                 (char)(uVar21 >> 0x10),
                                                                 CONCAT11((char)(uVar24 >> 8) +
                                                                          (char)(uVar21 >> 8),
                                                                          (char)uVar24 +
                                                                          (char)uVar21))))))) &
           in_MM6;
  uVar24 = puVar12[-5];
  uVar37 = puVar12[-8];
  uVar38 = ~*puVar12 & uVar24;
  uVar25 = CONCAT44(uVar2,uVar10) & *puVar12;
  uVar37 = CONCAT17(((byte)(uVar21 >> 0x39) + (char)(uVar37 >> 0x38)) - cVar47,
                    CONCAT16(((char)(ushort)(uVar21 >> 0x31) + (char)(uVar37 >> 0x30)) - cVar46,
                             CONCAT15(((char)(uint3)(uVar21 >> 0x29) + (char)(uVar37 >> 0x28)) -
                                      cVar45,CONCAT14(((char)(uint)(uVar21 >> 0x21) +
                                                      (char)(uVar37 >> 0x20)) - cVar44,
                                                      CONCAT13(((char)(uint5)(uVar21 >> 0x19) +
                                                               (char)(uVar37 >> 0x18)) - cVar43,
                                                               CONCAT12(((char)(uint6)(uVar21 >>
                                                                                      0x11) +
                                                                        (char)(uVar37 >> 0x10)) -
                                                                        cVar42,CONCAT11(((char)(
                                                  uint7)(uVar21 >> 9) + (char)(uVar37 >> 8)) -
                                                  cVar41,((char)(uVar21 >> 1) + (char)uVar37) -
                                                         cVar40))))))) & in_MM6;
  cVar22 = (char)uVar25 + (char)uVar38;
  cVar27 = (char)(uVar25 >> 8) + (char)(uVar38 >> 8);
  cVar28 = (char)(uVar25 >> 0x10) + (char)(uVar38 >> 0x10);
  cVar30 = (char)(uVar25 >> 0x18) + (char)(uVar38 >> 0x18);
  cVar31 = (char)(uVar25 >> 0x20) + (char)(uVar38 >> 0x20);
  cVar33 = (char)(uVar25 >> 0x28) + (char)(uVar38 >> 0x28);
  cVar34 = (char)(uVar25 >> 0x30) + (char)(uVar38 >> 0x30);
  cVar36 = (char)(uVar25 >> 0x38) + (char)(uVar38 >> 0x38);
  uVar21 = uVar37 >> 1;
  uVar11 = puVar8[4];
  uVar3 = *(undefined4 *)(iVar16 + 0x14);
  uVar56 = *puVar15;
  uVar25 = CONCAT17((byte)(uVar20 >> 0x39) + cVar36,
                    CONCAT16((char)(ushort)(uVar20 >> 0x31) + cVar34,
                             CONCAT15((char)(uint3)(uVar20 >> 0x29) + cVar33,
                                      CONCAT14((char)(uint)(uVar20 >> 0x21) + cVar31,
                                               CONCAT13((char)(uint5)(uVar20 >> 0x19) + cVar30,
                                                        CONCAT12((char)(uint6)(uVar20 >> 0x11) +
                                                                 cVar28,CONCAT11((char)(uint7)(
                                                  uVar20 >> 9) + cVar27,(char)(uVar20 >> 1) + cVar22
                                                  ))))))) & in_MM6;
  uStack00000008 =
       CONCAT17((char)((ulonglong)uVar56 >> 0x38) - (byte)(uVar37 >> 0x39),
                CONCAT16((char)((ulonglong)uVar56 >> 0x30) - (char)(uVar21 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar56 >> 0x28) - (char)(uVar21 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar56 >> 0x20) -
                                           (char)(uVar21 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar56 >> 0x18) -
                                                    (char)(uVar21 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar56 >> 0x10) -
                                                             (char)(uVar21 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar56 >> 8)
                                                                      - (char)(uVar21 >> 8),
                                                                      (char)uVar56 - (char)uVar21)))
                                          ))));
  uVar20 = puVar12[-6];
  uVar21 = CONCAT17((byte)(uVar25 >> 0x39) +
                    (((char)(uVar24 >> 0x38) + (char)((uint)uVar2 >> 0x18)) - cVar36),
                    CONCAT16((char)(ushort)(uVar25 >> 0x31) +
                             (((char)(uVar24 >> 0x30) + (char)((uint)uVar2 >> 0x10)) - cVar34),
                             CONCAT15((char)(uint3)(uVar25 >> 0x29) +
                                      (((char)(uVar24 >> 0x28) + (char)((uint)uVar2 >> 8)) - cVar33)
                                      ,CONCAT14((char)(uint)(uVar25 >> 0x21) +
                                                (((char)(uVar24 >> 0x20) + (char)uVar2) - cVar31),
                                                CONCAT13((char)(uint5)(uVar25 >> 0x19) +
                                                         (((char)(uVar24 >> 0x18) +
                                                          (char)((uint)uVar10 >> 0x18)) - cVar30),
                                                         CONCAT12((char)(uint6)(uVar25 >> 0x11) +
                                                                  (((char)(uVar24 >> 0x10) +
                                                                   (char)((uint)uVar10 >> 0x10)) -
                                                                  cVar28),CONCAT11((char)(uint7)(
                                                  uVar25 >> 9) +
                                                  (((char)(uVar24 >> 8) + (char)((uint)uVar10 >> 8))
                                                  - cVar27),
                                                  (char)(uVar25 >> 1) +
                                                  (((char)uVar24 + (char)uVar10) - cVar22)))))))) &
           in_MM6;
  uVar37 = ~*puVar12 & uVar20;
  uVar25 = CONCAT44(uVar3,uVar11) & *puVar12;
  uVar24 = puVar12[-5];
  cVar22 = (char)uVar25 + (char)uVar37;
  cVar27 = (char)(uVar25 >> 8) + (char)(uVar37 >> 8);
  cVar28 = (char)(uVar25 >> 0x10) + (char)(uVar37 >> 0x10);
  cVar30 = (char)(uVar25 >> 0x18) + (char)(uVar37 >> 0x18);
  cVar31 = (char)(uVar25 >> 0x20) + (char)(uVar37 >> 0x20);
  cVar33 = (char)(uVar25 >> 0x28) + (char)(uVar37 >> 0x28);
  cVar34 = (char)(uVar25 >> 0x30) + (char)(uVar37 >> 0x30);
  cVar36 = (char)(uVar25 >> 0x38) + (char)(uVar37 >> 0x38);
  uVar37 = CONCAT17((byte)(uVar26 >> 0x39) + cVar36,
                    CONCAT16((char)(ushort)(uVar26 >> 0x31) + cVar34,
                             CONCAT15((char)(uint3)(uVar26 >> 0x29) + cVar33,
                                      CONCAT14((char)(uint)(uVar26 >> 0x21) + cVar31,
                                               CONCAT13((char)(uint5)(uVar26 >> 0x19) + cVar30,
                                                        CONCAT12((char)(uint6)(uVar26 >> 0x11) +
                                                                 cVar28,CONCAT11((char)(uint7)(
                                                  uVar26 >> 9) + cVar27,(char)(uVar26 >> 1) + cVar22
                                                  ))))))) & in_MM6;
  uVar21 = CONCAT17(((byte)(uVar21 >> 0x39) + (char)(uVar24 >> 0x38)) - cVar47,
                    CONCAT16(((char)(ushort)(uVar21 >> 0x31) + (char)(uVar24 >> 0x30)) - cVar46,
                             CONCAT15(((char)(uint3)(uVar21 >> 0x29) + (char)(uVar24 >> 0x28)) -
                                      cVar45,CONCAT14(((char)(uint)(uVar21 >> 0x21) +
                                                      (char)(uVar24 >> 0x20)) - cVar44,
                                                      CONCAT13(((char)(uint5)(uVar21 >> 0x19) +
                                                               (char)(uVar24 >> 0x18)) - cVar43,
                                                               CONCAT12(((char)(uint6)(uVar21 >>
                                                                                      0x11) +
                                                                        (char)(uVar24 >> 0x10)) -
                                                                        cVar42,CONCAT11(((char)(
                                                  uint7)(uVar21 >> 9) + (char)(uVar24 >> 8)) -
                                                  cVar41,((char)(uVar21 >> 1) + (char)uVar24) -
                                                         cVar40))))))) & in_MM6;
  uVar26 = uVar21 >> 1;
  uVar56 = *(undefined8 *)((int)puVar15 + unaff_EBP * 2);
  uVar24 = CONCAT17((byte)(uVar37 >> 0x39) +
                    (((char)(uVar20 >> 0x38) + (char)((uint)uVar3 >> 0x18)) - cVar36),
                    CONCAT16((char)(ushort)(uVar37 >> 0x31) +
                             (((char)(uVar20 >> 0x30) + (char)((uint)uVar3 >> 0x10)) - cVar34),
                             CONCAT15((char)(uint3)(uVar37 >> 0x29) +
                                      (((char)(uVar20 >> 0x28) + (char)((uint)uVar3 >> 8)) - cVar33)
                                      ,CONCAT14((char)(uint)(uVar37 >> 0x21) +
                                                (((char)(uVar20 >> 0x20) + (char)uVar3) - cVar31),
                                                CONCAT13((char)(uint5)(uVar37 >> 0x19) +
                                                         (((char)(uVar20 >> 0x18) +
                                                          (char)((uint)uVar11 >> 0x18)) - cVar30),
                                                         CONCAT12((char)(uint6)(uVar37 >> 0x11) +
                                                                  (((char)(uVar20 >> 0x10) +
                                                                   (char)((uint)uVar11 >> 0x10)) -
                                                                  cVar28),CONCAT11((char)(uint7)(
                                                  uVar37 >> 9) +
                                                  (((char)(uVar20 >> 8) + (char)((uint)uVar11 >> 8))
                                                  - cVar27),
                                                  (char)(uVar37 >> 1) +
                                                  (((char)uVar20 + (char)uVar11) - cVar22)))))))) &
           in_MM6;
  uVar20 = puVar12[-6];
  uVar4 = *(undefined8 *)((int)puVar15 + unaff_EBP * 3);
  in_MM6 = CONCAT17(((byte)(uVar24 >> 0x39) + (char)(uVar20 >> 0x38)) - cVar47,
                    CONCAT16(((char)(ushort)(uVar24 >> 0x31) + (char)(uVar20 >> 0x30)) - cVar46,
                             CONCAT15(((char)(uint3)(uVar24 >> 0x29) + (char)(uVar20 >> 0x28)) -
                                      cVar45,CONCAT14(((char)(uint)(uVar24 >> 0x21) +
                                                      (char)(uVar20 >> 0x20)) - cVar44,
                                                      CONCAT13(((char)(uint5)(uVar24 >> 0x19) +
                                                               (char)(uVar20 >> 0x18)) - cVar43,
                                                               CONCAT12(((char)(uint6)(uVar24 >>
                                                                                      0x11) +
                                                                        (char)(uVar20 >> 0x10)) -
                                                                        cVar42,CONCAT11(((char)(
                                                  uint7)(uVar24 >> 9) + (char)(uVar20 >> 8)) -
                                                  cVar41,((char)(uVar24 >> 1) + (char)uVar20) -
                                                         cVar40))))))) & in_MM6;
  uStack00000038 =
       CONCAT17((char)((ulonglong)uVar4 >> 0x38) - (byte)(uVar21 >> 0x39),
                CONCAT16((char)((ulonglong)uVar4 >> 0x30) - (char)(uVar26 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar4 >> 0x28) - (char)(uVar26 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar4 >> 0x20) - (char)(uVar26 >> 0x20)
                                           ,CONCAT13((char)((ulonglong)uVar4 >> 0x18) -
                                                     (char)(uVar26 >> 0x18),
                                                     CONCAT12((char)((ulonglong)uVar4 >> 0x10) -
                                                              (char)(uVar26 >> 0x10),
                                                              CONCAT11((char)((ulonglong)uVar4 >> 8)
                                                                       - (char)(uVar26 >> 8),
                                                                       (char)uVar4 - (char)uVar26)))
                                          ))));
  uVar20 = in_MM6 >> 1;
  uStack00000028 =
       CONCAT17((char)((ulonglong)uVar56 >> 0x38) - (byte)(in_MM6 >> 0x39),
                CONCAT16((char)((ulonglong)uVar56 >> 0x30) - (char)(uVar20 >> 0x30),
                         CONCAT15((char)((ulonglong)uVar56 >> 0x28) - (char)(uVar20 >> 0x28),
                                  CONCAT14((char)((ulonglong)uVar56 >> 0x20) -
                                           (char)(uVar20 >> 0x20),
                                           CONCAT13((char)((ulonglong)uVar56 >> 0x18) -
                                                    (char)(uVar20 >> 0x18),
                                                    CONCAT12((char)((ulonglong)uVar56 >> 0x10) -
                                                             (char)(uVar20 >> 0x10),
                                                             CONCAT11((char)((ulonglong)uVar56 >> 8)
                                                                      - (char)(uVar20 >> 8),
                                                                      (char)uVar56 - (char)uVar20)))
                                          ))));
LAB_63826e48:
  uStack_4 = 0x63826e5e;
  FUN_63827120();
  uStack_4 = 0x63826e69;
  FUN_63826f95();
  uStack_4 = 0x63826e78;
  puVar13 = (undefined1 *)FUN_63826f10(0x20);
  if ((uVar18 - 1 & 0xc0000 & in_stack_8e0e3320) != 0) {
    iVar16 = 0;
    puVar19 = puVar13;
    do {
      uVar14 = (uint)(byte)puVar19[3];
      iVar16 = uVar18 + 2 + iVar16 + uVar14;
      pcVar1 = puVar19 + 2;
      puVar19 = puVar19 + 4;
      uVar18 = *(uint *)(&DAT_638373ac +
                        (-(uint)((byte)(&DAT_63837811)[uVar14] <
                                (byte)(*pcVar1 + (&DAT_63837810)[uVar14])) |
                        (uint)(byte)(*pcVar1 + (&DAT_63837810)[uVar14])) * 4);
    } while (puVar19 != &stack0x00000050);
    if (((in_stack_8e0e3320 & 0x80000) != 0) &&
       (0xfffff07f < ((uVar18 - 0x82) + iVar16 | 0x7ffff07f))) {
      do {
        puVar13[3] = puVar13[3] | 1;
        puVar13 = puVar13 + 4;
      } while (puVar13 != &stack0x00000050);
    }
  }
  return;
}


