/* Module: erv23260.dll
   Function: FUN_6382787f
   Address: 6382787f
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall
FUN_6382787f(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  char extraout_CL;
  ushort uVar10;
  int extraout_ECX;
  undefined4 uVar11;
  int iVar12;
  int extraout_ECX_00;
  char extraout_CH;
  undefined8 *extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  uint *extraout_EDX;
  uint *extraout_EDX_00;
  uint *puVar13;
  uint *extraout_EDX_01;
  uint *extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint *extraout_EDX_10;
  uint *extraout_EDX_11;
  uint *extraout_EDX_12;
  uint *extraout_EDX_13;
  uint *extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int extraout_EDX_17;
  uint *extraout_EDX_18;
  uint *extraout_EDX_19;
  uint uVar14;
  uint extraout_EDX_20;
  byte bVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint unaff_EBX;
  int unaff_EBP;
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  bool bVar26;
  bool bVar27;
  char cVar28;
  undefined2 uVar29;
  short sVar30;
  uint6 uVar31;
  char cVar37;
  char cVar39;
  short sVar40;
  char cVar41;
  char cVar42;
  short sVar43;
  char cVar44;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  short sVar45;
  undefined8 uVar46;
  short sVar48;
  short sVar49;
  undefined8 uVar47;
  short sVar50;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined8 uVar51;
  undefined8 uVar52;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  undefined8 uVar58;
  ulonglong in_MM5;
  short sVar59;
  short sVar60;
  undefined4 uVar61;
  short sVar62;
  ulonglong in_MM6;
  undefined8 uVar63;
  undefined4 unaff_retaddr;
  uint uStack0000002c;
  uint uStack00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  uint uStack0000003c;
  uint uStack00000040;
  ulonglong in_stack_00000044;
  ulonglong in_stack_0000004c;
  int in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  uint in_stack_00000060;
  undefined8 *in_stack_0000006c;
  uint in_stack_00000070;
  uint in_stack_00000074;
  int in_stack_00000258;
  int in_stack_00000260;
  byte *pbVar64;
  byte *in_stack_00000264;
  ulonglong in_stack_00000274;
  undefined8 in_stack_0000027c;
  ulonglong in_stack_00000284;
  undefined8 in_stack_0000028c;
  ulonglong in_stack_00000294;
  ulonglong in_stack_0000029c;
  undefined8 in_stack_000002a4;
  ulonglong in_stack_000002ac;
  undefined8 in_stack_000002b4;
  ulonglong in_stack_000002bc;
  undefined8 in_stack_000002c4;
  ulonglong in_stack_000002cc;
  undefined8 in_stack_000002d4;
  ulonglong in_stack_000002dc;
  ulonglong in_stack_000002e4;
  undefined8 in_stack_000002ec;
  ulonglong in_stack_000002f4;
  undefined8 in_stack_000002fc;
  ulonglong uStack_7c;
  ulonglong uStack_74;
  undefined4 uStack_6c;
  int iStack_68;
  undefined8 uStack_64;
  int aiStack_5c [2];
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  ulonglong uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  undefined8 uStack_c;
  uint uStack_4;
  undefined1 uVar38;
  
code_r0x6382787f:
  *(undefined1 *)((int)param_2 + unaff_EBP * 8 + 3) = 0xc1;
  uVar18 = unaff_EBX & 0xffffff00;
  uVar14 = (uint)param_2 >> 3;
  do {
    do {
      uVar17 = param_2[9];
      *(short *)param_2 = (short)*(undefined4 *)(&stack0x00000020 + unaff_EBP * 8);
      uVar19 = param_2[5];
      piVar3 = (int *)((int)&stack0x0000002c + unaff_EBP * 8 + 4);
      *piVar3 = *piVar3 + uVar17;
      iVar7 = *(int *)((int)&uStack_34 + unaff_EBP * 4 + 4);
      param_2[1] = uVar19;
      if (iVar7 <= (int)uVar17) {
        *(char *)((int)&uStack_6c + unaff_EBP * 4 + 3) = (char)uVar18;
        uStack_4 = 0x638278af;
        FUN_63827c6f(param_2,uVar14);
        uVar18 = CONCAT31((int3)(uVar18 >> 8),
                          (&DAT_63837544)[uVar18] | *(byte *)((int)&uStack_6c + unaff_EBP * 4 + 3));
        uVar14 = extraout_EDX_20;
      }
      bVar15 = (byte)uVar18 >> 1;
      uVar18 = CONCAT31((int3)(uVar18 >> 8),bVar15);
      iVar7 = uVar14 * 8;
      param_2 = (uint *)(iVar7 + 8);
      bVar26 = uVar14 < 0x5fffffff;
      uVar14 = uVar14 + 0xa0000001;
      bVar27 = -1 < (int)uVar14;
    } while (bVar26);
    uVar14 = unaff_EBP + -2 + uVar14;
    puVar13 = *(uint **)((int)&uStack_54 + unaff_EBP * 4 + 4);
    param_2 = (uint *)(iVar7 + -8 + unaff_EBP * 8);
  } while (bVar27);
  *(byte *)((int)puVar13 + unaff_EBP * 8 + 10) = bVar15;
  pbVar64 = in_stack_00000264;
LAB_6382459e:
  while( true ) {
    iVar7 = *(int *)((int)&uStack_64 + unaff_EBP * 4 + 4);
    uVar14 = puVar13[unaff_EBP * 2 + 2];
    iVar12 = aiStack_5c[unaff_EBP];
    *(undefined4 *)(iVar7 + 100) = *(undefined4 *)((int)&uStack_4c + unaff_EBP * 4);
    uVar32 = *(undefined8 *)((int)&stack0x0000002c + unaff_EBP * 8);
    *(undefined1 *)(iVar7 + 0x60) = *(undefined1 *)((int)&uStack_64 + unaff_EBP * 4);
    iVar4 = aiStack_5c[unaff_EBP + 1];
    *(undefined8 *)(iVar7 + 0x68) = uVar32;
    iVar7 = (int)uVar14 >> 0x18;
    if (iVar7 == 0) {
      return;
    }
    puVar13 = (uint *)((int)puVar13 + *(int *)(iVar12 + -4 + iVar7 * 4));
    aiStack_5c[unaff_EBP + 1] = iVar4 + *(int *)(iVar12 + 0x1c + iVar7 * 4);
    uVar14 = (uint)*(byte *)((int)puVar13 + 0xb);
    *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 3) = 1;
    *(undefined4 *)((int)&uStack_4c + unaff_EBP * 4) = *(undefined4 *)(iVar12 + 100 + uVar14 * 8);
    iVar7 = iVar12 + uVar14 * 8;
    *(undefined4 *)((int)&uStack_64 + unaff_EBP * 4) = *(undefined4 *)(iVar12 + 0x60 + uVar14 * 8);
    *(uint **)((int)&uStack_54 + unaff_EBP * 4 + 4) = puVar13;
    uVar14 = (uint)*pbVar64;
    in_stack_00000264 = pbVar64 + 1;
    *(int *)((int)&uStack_64 + unaff_EBP * 4 + 4) = iVar7;
    uVar32 = *(undefined8 *)(iVar7 + 0x48);
    uVar11 = *(undefined4 *)(in_stack_00000260 + 0x100 + uVar14 * 4);
    *(undefined4 *)((int)&uStack_2c + unaff_EBP * 4) =
         *(undefined4 *)(in_stack_00000260 + 0x80 + uVar14 * 4);
    *(undefined4 *)((int)&uStack_2c + unaff_EBP * 4 + 4) = uVar11;
    uVar11 = *(undefined4 *)(in_stack_00000260 + 0x200 + uVar14 * 4);
    *(undefined4 *)((int)&uStack_24 + unaff_EBP * 4) =
         *(undefined4 *)(in_stack_00000260 + 0x180 + uVar14 * 4);
    *(undefined4 *)((int)&uStack_24 + unaff_EBP * 4 + 4) = uVar11;
    uVar11 = *(undefined4 *)(in_stack_00000260 + 0x300 + uVar14 * 4);
    *(undefined4 *)((int)&uStack_1c + unaff_EBP * 4) =
         *(undefined4 *)(in_stack_00000260 + 0x280 + uVar14 * 4);
    *(undefined4 *)((int)&uStack_1c + unaff_EBP * 4 + 4) = uVar11;
    uVar11 = *(undefined4 *)(in_stack_00000260 + 0x400 + uVar14 * 4);
    *(undefined4 *)((int)&uStack_14 + unaff_EBP * 4) =
         *(undefined4 *)(in_stack_00000260 + 0x380 + uVar14 * 4);
    *(undefined4 *)((int)&uStack_14 + unaff_EBP * 4 + 4) = uVar11;
    uVar11 = *(undefined4 *)(in_stack_00000260 + uVar14 * 4);
    uVar61 = *(undefined4 *)(&DAT_63837060 + uVar14 * 8);
    uVar5 = *(undefined4 *)(iVar7 + 0x50);
    *(undefined4 *)((int)&uStack_24 + unaff_EBP * 8 + 4) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(&uStack_24 + unaff_EBP) = uVar5;
    *(undefined4 *)((int)&uStack_34 + unaff_EBP * 4 + 4) = uVar11;
    uVar35 = *(ulonglong *)(iVar7 + 0x58);
    uVar33 = *(undefined8 *)(iVar7 + 0x68);
    iVar12 = *(int *)(iVar7 + 0x40);
    iVar7 = *(int *)(iVar7 + 0x44);
    *(undefined8 *)(&stack0x00000054 + unaff_EBP * 2) = uVar32;
    uVar16 = (undefined2)((uint)uVar61 >> 0x10);
    *(int *)((int)&uStack_14 + unaff_EBP * 8 + 4) = (int)uVar32;
    (&uStack_1c)[unaff_EBP] = uVar35;
    *(undefined8 *)((int)&stack0x0000002c + unaff_EBP * 8) = uVar33;
    *(int *)(&uStack_2c + unaff_EBP) = iVar12;
    *(int *)((int)&uStack_2c + unaff_EBP * 8 + 4) = iVar7;
    puVar23 = (undefined8 *)(iVar12 + (int)puVar13);
    uVar14 = iVar7 + (int)puVar13;
    *(undefined8 **)(&uStack_34 + unaff_EBP) = puVar23;
    *(uint *)((int)&uStack_74 + unaff_EBP * 4) = uVar14;
    bVar15 = *(byte *)((int)puVar13 + unaff_EBP * 8 + 10);
    unaff_EBX = 0;
    *(ulonglong *)((int)&uStack_7c + unaff_EBP * 4) =
         CONCAT44((int)(CONCAT26(uVar16,CONCAT24(uVar16,uVar61)) >> 0x20),
                  CONCAT22((short)uVar61,(short)uVar61));
    uVar18 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
    bVar9 = bVar15 | 0x3f;
    uVar17 = CONCAT31((int3)((uint)uVar11 >> 8),bVar15);
    *(byte *)((int)puVar13 + unaff_EBP * 8 + 10) = bVar9;
    if (-1 < (char)bVar9) break;
    uVar18 = 0x80000;
LAB_63825aae:
    uVar19 = CONCAT31((int3)(uVar17 >> 8),1);
    uVar32 = *puVar23;
    iVar7 = uVar18 - *(int *)((int)&uStack_1c + unaff_EBP * 4 + 4);
    while( true ) {
      while( true ) {
        uVar33 = *(undefined8 *)((int)puVar23 + unaff_EBP * 2);
        uVar36 = *(undefined8 *)((int)puVar23 + unaff_EBP * 4);
        sVar48 = (short)((ulonglong)uVar33 >> 0x10);
        sVar49 = (short)((ulonglong)uVar33 >> 0x20);
        sVar50 = (short)((ulonglong)uVar33 >> 0x30);
        uVar34 = *(undefined8 *)((int)puVar23 + unaff_EBP * 6);
        uVar35 = CONCAT26((short)((ulonglong)uVar32 >> 0x30) + sVar50,
                          CONCAT24((short)((ulonglong)uVar32 >> 0x20) + sVar49,
                                   CONCAT22((short)((ulonglong)uVar32 >> 0x10) + sVar48,
                                            (short)uVar32 + (short)uVar33))) & 0xff00ff00ff00ff;
        uVar32 = *(undefined8 *)(unaff_EBP * 3 + (int)puVar23);
        sVar59 = (short)((ulonglong)uVar34 >> 0x10);
        sVar60 = (short)((ulonglong)uVar34 >> 0x20);
        sVar62 = (short)((ulonglong)uVar34 >> 0x30);
        uVar55 = CONCAT26((short)((ulonglong)uVar36 >> 0x30) + sVar62,
                          CONCAT24((short)((ulonglong)uVar36 >> 0x20) + sVar60,
                                   CONCAT22((short)((ulonglong)uVar36 >> 0x10) + sVar59,
                                            (short)uVar36 + (short)uVar34))) & 0xff00ff00ff00ff;
        uVar36 = *(undefined8 *)((int)puVar23 + unaff_EBP);
        uVar46 = *(undefined8 *)((int)puVar23 + unaff_EBP * 5);
        uVar47 = *(undefined8 *)((int)puVar23 + unaff_EBP * 7);
        uVar51 = *(undefined8 *)((int)puVar23 + unaff_EBP * 4);
        uVar36 = pmaddwd(CONCAT26((short)(uVar35 >> 0x30) + (short)(uVar55 >> 0x30) +
                                  ((ushort)((short)((ulonglong)uVar36 >> 0x30) +
                                           (short)((ulonglong)uVar32 >> 0x30)) >> 8) +
                                  ((ushort)((short)((ulonglong)uVar46 >> 0x30) +
                                           (short)((ulonglong)uVar47 >> 0x30)) >> 8),
                                  CONCAT24((short)(uVar35 >> 0x20) + (short)(uVar55 >> 0x20) +
                                           ((ushort)((short)((ulonglong)uVar36 >> 0x20) +
                                                    (short)((ulonglong)uVar32 >> 0x20)) >> 8) +
                                           ((ushort)((short)((ulonglong)uVar46 >> 0x20) +
                                                    (short)((ulonglong)uVar47 >> 0x20)) >> 8),
                                           CONCAT22((short)(uVar35 >> 0x10) +
                                                    (short)(uVar55 >> 0x10) +
                                                    ((ushort)((short)((ulonglong)uVar36 >> 0x10) +
                                                             (short)((ulonglong)uVar32 >> 0x10)) >>
                                                    8) + ((ushort)((short)((ulonglong)uVar46 >> 0x10
                                                                          ) +
                                                                  (short)((ulonglong)uVar47 >> 0x10)
                                                                  ) >> 8),
                                                    (short)uVar35 + (short)uVar55 +
                                                    ((ushort)((short)uVar36 + (short)uVar32) >> 8) +
                                                    ((ushort)((short)uVar46 + (short)uVar47) >> 8)))
                                 ),0xffffffffffffffff);
        uVar52 = psllw(uVar32,8);
        uVar46 = psllw(0xffffffffffffffff,3);
        uVar32 = packssdw(uVar36,uVar36);
        uVar32 = pmaddwd(uVar32,uVar46);
        uVar58 = psllw(*(undefined8 *)((int)puVar23 + unaff_EBP * 5),8);
        uVar63 = psllw(uVar47,8);
        uVar36 = psllw(*(undefined8 *)((int)puVar23 + unaff_EBP),8);
        uVar32 = packssdw(uVar32,uVar32);
        sVar30 = (short)uVar32;
        sVar40 = (short)((ulonglong)uVar32 >> 0x10);
        sVar43 = (short)((ulonglong)uVar32 >> 0x20);
        sVar45 = (short)((ulonglong)uVar32 >> 0x30);
        uVar32 = CONCAT26((short)((ulonglong)uVar36 >> 0x30) - sVar45,
                          CONCAT24((short)((ulonglong)uVar36 >> 0x20) - sVar43,
                                   CONCAT22((short)((ulonglong)uVar36 >> 0x10) - sVar40,
                                            (short)uVar36 - sVar30)));
        uVar33 = CONCAT26(sVar50 - sVar45,
                          CONCAT24(sVar49 - sVar43,CONCAT22(sVar48 - sVar40,(short)uVar33 - sVar30))
                         );
        uVar32 = pmaddwd(uVar32,uVar32);
        uVar36 = CONCAT26((short)((ulonglong)uVar52 >> 0x30) - sVar45,
                          CONCAT24((short)((ulonglong)uVar52 >> 0x20) - sVar43,
                                   CONCAT22((short)((ulonglong)uVar52 >> 0x10) - sVar40,
                                            (short)uVar52 - sVar30)));
        uVar33 = pmaddwd(uVar33,uVar33);
        uVar46 = CONCAT26((short)((ulonglong)uVar51 >> 0x30) - sVar45,
                          CONCAT24((short)((ulonglong)uVar51 >> 0x20) - sVar43,
                                   CONCAT22((short)((ulonglong)uVar51 >> 0x10) - sVar40,
                                            (short)uVar51 - sVar30)));
        uVar36 = pmaddwd(uVar36,uVar36);
        uVar47 = CONCAT26((short)((ulonglong)uVar58 >> 0x30) - sVar45,
                          CONCAT24((short)((ulonglong)uVar58 >> 0x20) - sVar43,
                                   CONCAT22((short)((ulonglong)uVar58 >> 0x10) - sVar40,
                                            (short)uVar58 - sVar30)));
        uVar46 = pmaddwd(uVar46,uVar46);
        uVar34 = CONCAT26(sVar62 - sVar45,
                          CONCAT24(sVar60 - sVar43,CONCAT22(sVar59 - sVar40,(short)uVar34 - sVar30))
                         );
        uVar51 = CONCAT26((short)((ulonglong)uVar63 >> 0x30) - sVar45,
                          CONCAT24((short)((ulonglong)uVar63 >> 0x20) - sVar43,
                                   CONCAT22((short)((ulonglong)uVar63 >> 0x10) - sVar40,
                                            (short)uVar63 - sVar30)));
        uVar33 = paddusw(uVar32,uVar33);
        uVar32 = *puVar23;
        uVar32 = CONCAT26(sVar45 - (short)((ulonglong)uVar32 >> 0x30),
                          CONCAT24(sVar43 - (short)((ulonglong)uVar32 >> 0x20),
                                   CONCAT22(sVar40 - (short)((ulonglong)uVar32 >> 0x10),
                                            sVar30 - (short)uVar32)));
        in_MM5 = pmaddwd(uVar47,uVar47);
        in_MM6 = pmaddwd(uVar34,uVar34);
        uVar33 = paddusw(uVar33,uVar36);
        uVar36 = pmaddwd(uVar51,uVar51);
        uVar33 = paddusw(uVar33,uVar46);
        uVar32 = pmaddwd(uVar32,uVar32);
        uVar33 = paddusw(uVar33,in_MM5);
        uVar33 = paddusw(uVar33,in_MM6);
        bVar9 = (byte)uVar19;
        uVar33 = paddusw(uVar33,uVar36);
        uVar32 = paddusw(uVar32,uVar33);
        uVar32 = paddusw(uVar32,CONCAT44((int)uVar32,(int)uVar33));
        bVar15 = (byte)((ulonglong)uVar32 >> 0x38);
        uVar10 = (ushort)((ulonglong)uVar32 >> 0x30);
        if (2 < bVar9) break;
        puVar23 = puVar23 + unaff_EBP + 1;
        uVar19 = CONCAT31((int3)(uVar19 >> 8),4);
        uVar18 = (uint)uVar10;
        if (bVar9 == 2) {
          uVar14 = uVar14 + uVar18;
          puVar23 = puVar23 + -2;
          uVar17 = uVar18;
          if (iVar7 - uVar18 == 0 || iVar7 < (int)uVar18) goto LAB_63825307;
          uVar32 = *puVar23;
          uVar19 = CONCAT31((uint3)bVar15,3);
          iVar7 = iVar7 - uVar18;
        }
        else {
          uVar17 = uVar19;
          if (iVar7 - uVar18 == 0 || iVar7 < (int)uVar18) goto LAB_63825307;
          uVar32 = *puVar23;
          iVar7 = iVar7 - uVar18;
          uVar14 = uVar18;
        }
      }
      puVar23 = puVar23 + -unaff_EBP;
      uVar17 = (uint)uVar10;
      if (bVar9 == 3) break;
      uVar14 = uVar14 + uVar17;
      if (iVar7 - uVar17 == 0 || iVar7 < (int)uVar17) goto LAB_63825307;
      uVar32 = *puVar23;
      uVar19 = CONCAT31((uint3)bVar15,2);
      iVar7 = iVar7 - uVar17;
    }
    if (iVar7 - uVar17 == 0 || iVar7 < (int)uVar17) {
LAB_63825307:
      pbVar64 = (byte *)((int)&uStack_34 + unaff_EBP * 4);
      bVar15 = *pbVar64;
      *pbVar64 = *pbVar64 >> 1;
      uVar18 = (&stack0x00000060)[unaff_EBP * 2];
      if ((bool)(bVar15 & 1)) {
        FUN_6382787f(uVar17,puVar13,param_3,param_4,param_5,param_6);
        return;
      }
      goto LAB_63825316;
    }
    pbVar2 = (byte *)((int)&uStack_34 + unaff_EBP * 4);
    *pbVar2 = *pbVar2 >> 1;
    iVar12 = *(int *)((int)&stack0x0000002c + unaff_EBP * 8 + 4);
    *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 3) = 0;
    *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 10) = 0x7f;
    *(uint *)((int)&stack0x0000002c + unaff_EBP * 8 + 4) = uVar14 + uVar17 + iVar12;
    *(undefined2 *)(puVar13 + 2) = 0;
    *puVar13 = 0;
    *(undefined2 *)(puVar13 + unaff_EBP * 2) = 0;
    uVar14 = *(uint *)((int)&uStack_74 + unaff_EBP * 4);
    *(undefined2 *)(puVar13 + unaff_EBP * 2 + 2) = 0;
    uVar18 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
    puVar13[1] = uVar14;
    puVar13[3] = uVar14 + 8;
    uVar14 = uVar14 + unaff_EBP * 8;
    puVar13[unaff_EBP * 2 + 1] = uVar14;
    puVar13[unaff_EBP * 2 + 3] = uVar14 + 8;
    if ((uVar18 & 1) != 0) {
      *(uint *)((int)&uStack_64 + unaff_EBP * 4) = uVar18 ^ 1;
      FUN_638264d9(unaff_retaddr,(int)(puVar13 + -4));
      puVar13 = extraout_EDX_14;
      unaff_retaddr = extraout_ECX_06;
    }
    if ((*(uint *)((int)&uStack_64 + unaff_EBP * 4) & 0x40) == 0) {
      uStack_4 = 0x63825c7d;
      FUN_63826de0();
      cVar28 = (char)(iVar7 - uVar17);
      *(char *)(extraout_EDX_15 + 10 + unaff_EBP * 8) =
           *(char *)(extraout_EDX_15 + 10 + unaff_EBP * 8) - cVar28;
      uStack_4 = 0x63825c93;
      FUN_63826de0();
      *(char *)(extraout_EDX_16 + 10 + unaff_EBP * 8) =
           *(char *)(extraout_EDX_16 + 10 + unaff_EBP * 8) + cVar28 * -2;
      uStack_4 = 0x63825cab;
      FUN_63826de0();
      *(char *)(extraout_EDX_17 + 10 + unaff_EBP * 8) =
           *(char *)(extraout_EDX_17 + 10 + unaff_EBP * 8) + cVar28 * -8;
      uStack_4 = 0x63825cc5;
      FUN_63826de0();
      bVar15 = cVar28 << 6;
      puVar13 = extraout_EDX_18;
    }
    else {
      bVar15 = *(byte *)((int)puVar13 + unaff_EBP * 8 + 2);
      bVar9 = *(byte *)(in_stack_00000258 + 3 + (int)puVar13);
      *(uint *)(&stack0x00000000 + unaff_EBP * 8) =
           -(uint)((byte)((*(byte *)((int)puVar13 + unaff_EBP * 8 + -0xd) & 1) + 1) == (bVar15 & 1))
      ;
      (&uStack_4)[unaff_EBP * 2] = -(uint)((bVar9 & 1) == 0 && (bVar15 >> 1 & 2) == 2);
      iVar7 = *(int *)((int)&stack0x0000002c + unaff_EBP * 8);
      *(int *)(&stack0x0000001c + unaff_EBP * 8) = iVar7;
      uStack_4 = unaff_EBP * 3;
      *(int *)(&stack0x00000020 + unaff_EBP * 8) = iVar7 + 0x604;
      *(int *)(&stack0x00000024 + unaff_EBP * 8) = iVar7 + 0xc08;
      uStack_c._4_4_ = 0x63825d38;
      FUN_63827120();
      uStack_4 = 0x63825d4d;
      FUN_6382627c();
      uStack_4 = unaff_EBP * 3;
      uStack_c._4_4_ = 0x63825d5e;
      FUN_63827120();
      psllw(1,10);
      uStack_4 = 0x63825db3;
      FUN_638262d5();
      uStack_4 = unaff_EBP * 3;
      uStack_c._4_4_ = 0x63825dc4;
      FUN_63827120();
      uVar35 = psllw(1,10);
      uStack_4 = 0x63825e1f;
      FUN_638262d5();
      uStack_4 = unaff_EBP * 3;
      uStack_c._4_4_ = 0x63825e31;
      FUN_63827120();
      uStack_4 = 0x63825e5d;
      FUN_638262d5();
      bVar15 = *(byte *)((int)&uStack_64 + unaff_EBP * 4 + 3);
      bVar9 = *pbVar64;
      *(undefined4 *)((int)&uStack_4c + unaff_EBP * 4 + 4) =
           *(undefined4 *)((int)&stack0x0000002c + unaff_EBP * 8);
      *(undefined4 *)((int)&uStack_44 + unaff_EBP * 4) =
           *(undefined4 *)(&stack0x00000020 + unaff_EBP * 8);
      uVar11 = *(undefined4 *)(&DAT_63837060 + (uint)bVar9 * 8 + (bVar15 & 4));
      *(undefined4 *)((int)&uStack_44 + unaff_EBP * 4 + 4) =
           *(undefined4 *)(&stack0x00000024 + unaff_EBP * 8);
      uVar16 = (undefined2)((uint)uVar11 >> 0x10);
      *(ulonglong *)((int)&uStack_7c + unaff_EBP * 4) =
           CONCAT44((int)(CONCAT26(uVar16,CONCAT24(uVar16,uVar11)) >> 0x20),
                    CONCAT22((short)uVar11,(short)uVar11));
      uStack_c._4_4_ = 0x63825ead;
      uStack_4 = unaff_EBP * 3;
      FUN_63827120();
      uStack_4 = 0x63825ec2;
      FUN_6382627c();
      uStack_4 = unaff_EBP * 3;
      uStack_c._4_4_ = 0x63825edc;
      FUN_63827120();
      uStack_4 = 0x63825ef4;
      FUN_6382627c();
      if ((*(uint *)((int)&uStack_64 + unaff_EBP * 4) & 0x100000) == 0) {
        uStack_4 = 0x63825f16;
        uVar32 = FUN_63826497(extraout_ECX_07,extraout_EDX_19);
        (&iStack_68)[unaff_EBP] = (int)uVar32 + -1;
        uStack_4 = 0x63825f2e;
        uVar32 = FUN_63826497(extraout_ECX_08,(int)((ulonglong)uVar32 >> 0x20));
        uVar11 = (undefined4)((ulonglong)uVar32 >> 0x20);
        if ((int)uVar32 < (&iStack_68)[unaff_EBP]) {
          (&iStack_68)[unaff_EBP] = (int)uVar32;
          uStack_4 = 0x6382609e;
          uVar32 = FUN_63826497(extraout_ECX_09,uVar11);
          puVar13 = (uint *)((ulonglong)uVar32 >> 0x20);
          iVar7 = *(int *)((int)&uStack_74 + unaff_EBP * 4) + unaff_EBP * 8;
          if ((int)uVar32 < (&iStack_68)[unaff_EBP]) goto LAB_63826198;
          puVar22 = (undefined4 *)(*(int *)((int)&uStack_44 + unaff_EBP * 4) + -0x604);
          iVar7 = iVar7 + unaff_EBP * 4;
          *(undefined4 **)((int)&stack0x0000002c + unaff_EBP * 8) = puVar22;
          puVar20 = *(undefined4 **)(&stack0x0000001c + unaff_EBP * 8);
          *(ulonglong *)(iVar7 + -0x20) = ~uVar35 & in_stack_00000274 | in_stack_0000029c & uVar35;
          *(undefined8 *)(iVar7 + -0x18) = in_stack_0000027c;
          *(ulonglong *)(iVar7 + unaff_EBP * 4) = in_stack_0000029c;
          *(undefined8 *)(iVar7 + 8 + unaff_EBP * 4) = in_stack_000002a4;
          *(ulonglong *)(iVar7 + -0x10) = ~uVar35 & in_stack_000002bc | in_stack_000002e4 & uVar35;
          *(undefined8 *)(iVar7 + -8) = in_stack_000002c4;
          *(ulonglong *)(iVar7 + unaff_EBP * 8) = in_stack_000002e4;
          *(undefined8 *)(iVar7 + 8 + unaff_EBP * 8) = in_stack_000002ec;
          uVar32 = *(undefined8 *)((int)aiStack_5c + unaff_EBP * 6);
          uVar57 = ~uVar35 & *(ulonglong *)((int)&uStack_64 + unaff_EBP * 6) |
                   *(ulonglong *)((int)&uStack_3c + unaff_EBP * 6) & uVar35;
          uVar55 = *(ulonglong *)((int)&stack0x0000002c + unaff_EBP * 6);
          uVar33 = *(undefined8 *)((int)&stack0x00000034 + unaff_EBP * 6);
          in_MM6 = *(ulonglong *)((int)&uStack_c + unaff_EBP * 6);
          in_MM5 = *(ulonglong *)((int)&uStack_2c + unaff_EBP * 6);
          uVar56 = ~uVar35 & *(ulonglong *)((int)&uStack_34 + unaff_EBP * 6) | uVar35 & in_MM6;
          uVar36 = *(undefined8 *)((int)&uStack_4 + unaff_EBP * 6);
          do {
            *puVar20 = puVar20[0x181];
            puVar20[1] = puVar20[0x182];
            puVar20 = puVar20 + 2;
          } while (puVar20 < puVar22);
          puVar20 = *(undefined4 **)((int)&uStack_44 + unaff_EBP * 4);
          puVar22 = *(undefined4 **)(&stack0x00000020 + unaff_EBP * 8);
          bVar15 = *(byte *)((int)&uStack_6c + unaff_EBP * 4 + 1);
          uVar38 = 0x20;
        }
        else {
          uStack_4 = 0x63825f4d;
          uVar32 = FUN_63826497(extraout_ECX_09,uVar11);
          puVar13 = (uint *)((ulonglong)uVar32 >> 0x20);
          iVar7 = *(int *)((int)&uStack_74 + unaff_EBP * 4) + unaff_EBP * 8;
          if ((&iStack_68)[unaff_EBP] <= (int)uVar32) goto LAB_63825f64;
LAB_63826198:
          puVar22 = (undefined4 *)(*(int *)((int)&uStack_44 + unaff_EBP * 4 + 4) + -0xc08);
          iVar7 = iVar7 + unaff_EBP * 4;
          *(undefined4 **)((int)&stack0x0000002c + unaff_EBP * 8) = puVar22;
          puVar20 = *(undefined4 **)(&stack0x0000001c + unaff_EBP * 8);
          *(ulonglong *)(iVar7 + -0x20) = in_stack_00000284;
          *(undefined8 *)(iVar7 + -0x18) = in_stack_0000028c;
          *(ulonglong *)(iVar7 + unaff_EBP * 4) =
               ~uVar35 & in_stack_000002ac | in_stack_00000284 & uVar35;
          *(undefined8 *)(iVar7 + 8 + unaff_EBP * 4) = in_stack_000002b4;
          *(ulonglong *)(iVar7 + -0x10) = in_stack_000002cc;
          *(undefined8 *)(iVar7 + -8) = in_stack_000002d4;
          *(ulonglong *)(iVar7 + unaff_EBP * 8) =
               ~uVar35 & in_stack_000002f4 | in_stack_000002cc & uVar35;
          *(undefined8 *)(iVar7 + 8 + unaff_EBP * 8) = in_stack_000002fc;
          uVar57 = *(ulonglong *)((int)&uStack_54 + unaff_EBP * 6);
          uVar32 = *(undefined8 *)((int)&uStack_4c + unaff_EBP * 6);
          uVar33 = *(undefined8 *)((int)&stack0x00000044 + unaff_EBP * 6);
          uVar55 = ~uVar35 & *(ulonglong *)((int)&stack0x0000003c + unaff_EBP * 6) |
                   *(ulonglong *)((int)&param_6 + unaff_EBP * 6) & uVar35;
          uVar56 = *(ulonglong *)((int)&uStack_24 + unaff_EBP * 6);
          in_MM5 = *(ulonglong *)((int)&uStack_1c + unaff_EBP * 6);
          in_MM6 = ~uVar35 & *(ulonglong *)((int)&param_3 + unaff_EBP * 6) | uVar35 & uVar56;
          uVar36 = *(undefined8 *)((int)&param_5 + unaff_EBP * 6);
          do {
            *puVar20 = puVar20[0x302];
            puVar20[1] = puVar20[0x303];
            puVar20 = puVar20 + 2;
          } while (puVar20 < puVar22);
          puVar20 = *(undefined4 **)((int)&uStack_44 + unaff_EBP * 4 + 4);
          puVar22 = *(undefined4 **)(&stack0x00000024 + unaff_EBP * 8);
          bVar15 = *(byte *)((int)&uStack_6c + unaff_EBP * 4 + 2);
          uVar38 = 0x30;
        }
      }
      else {
        iVar7 = *(int *)((int)&uStack_74 + unaff_EBP * 4) + unaff_EBP * 8;
        puVar13 = extraout_EDX_19;
LAB_63825f64:
        iVar7 = iVar7 + unaff_EBP * 4;
        bVar15 = *(byte *)(&uStack_6c + unaff_EBP);
        *(ulonglong *)(iVar7 + -0x20) = ~uVar35 & in_stack_00000274 | in_stack_00000294 & uVar35;
        *(undefined8 *)(iVar7 + -0x18) = in_stack_0000027c;
        *(ulonglong *)(iVar7 + unaff_EBP * 4) =
             ~uVar35 & in_stack_000002ac | in_stack_00000294 & uVar35;
        *(undefined8 *)(iVar7 + 8 + unaff_EBP * 4) = in_stack_000002b4;
        *(ulonglong *)(iVar7 + -0x10) = ~uVar35 & in_stack_000002bc | in_stack_000002dc & uVar35;
        *(undefined8 *)(iVar7 + -8) = in_stack_000002c4;
        *(ulonglong *)(iVar7 + unaff_EBP * 8) =
             ~uVar35 & in_stack_000002f4 | in_stack_000002dc & uVar35;
        *(undefined8 *)(iVar7 + 8 + unaff_EBP * 8) = in_stack_000002fc;
        puVar20 = *(undefined4 **)((int)&uStack_4c + unaff_EBP * 4 + 4);
        puVar22 = *(undefined4 **)((int)&stack0x0000002c + unaff_EBP * 8);
        *(undefined4 **)((int)&stack0x0000002c + unaff_EBP * 8) = puVar20;
        uVar32 = *(undefined8 *)((int)aiStack_5c + unaff_EBP * 6);
        uVar57 = ~uVar35 & *(ulonglong *)((int)&uStack_64 + unaff_EBP * 6) |
                 *(ulonglong *)((int)&uStack_44 + unaff_EBP * 6) & uVar35;
        uVar33 = *(undefined8 *)((int)&stack0x00000044 + unaff_EBP * 6);
        uVar55 = ~uVar35 & *(ulonglong *)((int)&stack0x0000003c + unaff_EBP * 6) |
                 *(ulonglong *)(&stack0x00000024 + unaff_EBP * 6) & uVar35;
        in_MM6 = *(ulonglong *)((int)&uStack_14 + unaff_EBP * 6) & uVar35;
        uVar56 = ~uVar35 & *(ulonglong *)((int)&uStack_34 + unaff_EBP * 6) | in_MM6;
        in_MM5 = *(ulonglong *)((int)&uStack_2c + unaff_EBP * 6);
        in_MM6 = in_MM6 | ~uVar35 & *(ulonglong *)((int)&param_3 + unaff_EBP * 6);
        uVar36 = *(undefined8 *)((int)&param_5 + unaff_EBP * 6);
        uVar38 = 0x10;
      }
      *(ulonglong *)(iVar7 + -0x40) = uVar57;
      *(undefined8 *)(iVar7 + -0x38) = uVar32;
      *(ulonglong *)(iVar7 + -0x30) = uVar56;
      *(ulonglong *)(iVar7 + -0x28) = in_MM5;
      *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 3) = uVar38;
      iVar7 = iVar7 + unaff_EBP * 8;
      *(ulonglong *)(iVar7 + unaff_EBP * 4) = uVar55;
      *(undefined8 *)(iVar7 + 8 + unaff_EBP * 4) = uVar33;
      *(ulonglong *)(iVar7 + unaff_EBP * 8) = in_MM6;
      *(undefined8 *)(iVar7 + 8 + unaff_EBP * 8) = uVar36;
      puVar25 = *(undefined4 **)((int)&uStack_4c + unaff_EBP * 4);
      if (puVar20 != puVar22) {
        do {
          uVar11 = *puVar20;
          puVar20 = puVar20 + 1;
          *puVar25 = uVar11;
          puVar25 = puVar25 + 1;
        } while (puVar20 < puVar22);
      }
      bVar15 = bVar15 >> 2;
      *(undefined4 **)((int)&uStack_4c + unaff_EBP * 4) = puVar25;
    }
    *(byte *)((int)puVar13 + unaff_EBP * 8 + 10) =
         *(char *)((int)puVar13 + unaff_EBP * 8 + 10) - bVar15;
    pbVar64 = in_stack_00000264;
  }
  *(undefined4 *)(&uStack_c + unaff_EBP) = 0x3ffff;
  uVar11 = 0;
  if ((uVar18 & 0xf00) != 0) {
    uStack_4 = 0x6382470b;
    FUN_63827500(0,(uint)puVar13);
    param_2 = extraout_EDX_01;
    if (-1 < *(int *)((int)&uStack_14 + unaff_EBP * 4)) goto code_r0x6382787f;
    unaff_EBX = -*(int *)((int)&uStack_14 + unaff_EBP * 4 + 4);
    uVar18 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
    *(uint *)(&uStack_1c + unaff_EBP) = unaff_EBX;
    uVar14 = *(uint *)((int)&uStack_74 + unaff_EBP * 4);
    if ((uVar18 & 0x100) != 0) goto code_r0x6382787f;
    unaff_EBX = 0xc100c100;
    uVar11 = 0x1000100;
    puVar13 = extraout_EDX_01;
  }
  (&stack0x00000034)[unaff_EBP * 2] = unaff_EBX;
  (&stack0x00000038)[unaff_EBP * 2] = unaff_EBX;
  while( true ) {
    *(undefined4 *)((int)&stack0x0000003c + unaff_EBP * 8) = uVar11;
    *(undefined4 *)((int)&stack0x0000003c + unaff_EBP * 8 + 4) = uVar11;
    puVar23 = *(undefined8 **)(&uStack_34 + unaff_EBP);
    uVar17 = 0xffffffff;
    if (((uVar18 & 8) != 0) &&
       (uVar17 = (uint)*(byte *)((int)puVar13 + 10), *(byte *)((int)puVar13 + 10) == 5)) {
      uVar17 = 0xffffffff;
    }
    uVar32 = 0xffff0003ffff;
    uStack_4 = 0x63824772;
    FUN_638242b0();
    uVar19 = (uint)uVar32;
    uVar18 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
    _uStack0000002c = in_MM6;
    _uStack0000003c = in_MM5;
    puVar13 = extraout_EDX_02;
    if (((uVar18 & 0x8000) == 0) && (*(uint *)((int)&uStack_2c + unaff_EBP * 4) <= uVar19)) break;
LAB_63824cb2:
    uVar18 = uVar18 ^ 0x1000;
    in_MM5 = _uStack0000003c;
    in_MM6 = _uStack0000002c;
    if ((uVar18 & 0x1000) != 0) {
      puVar13[1] = uVar14;
      uVar18 = uVar14 + unaff_EBP * 8;
      puVar13[unaff_EBP * 2 + 1] = uVar18;
      puVar13[unaff_EBP * 2 + 3] = uVar18 + 8;
      *(undefined2 *)(puVar13 + 2) = 0;
      *puVar13 = 0;
      *(undefined2 *)(puVar13 + unaff_EBP * 2) = 0;
      puVar13[3] = uVar14 + 8;
      *(undefined2 *)(puVar13 + unaff_EBP * 2 + 2) = 0;
      goto LAB_63825130;
    }
LAB_638251ce:
    iVar7 = uStack0000002c;
    iVar12 = uStack00000030;
    *(uint *)(&param_6 + unaff_EBP) = uStack0000002c;
    *(int *)((int)&param_6 + unaff_EBP * 8 + 4) = iVar12;
    iVar4 = uStack0000003c;
    (&param_3)[unaff_EBP * 2] = uVar14;
    *(int *)(&param_5 + unaff_EBP) = iVar4;
    iVar6 = uStack00000040;
    *(uint *)((int)&param_5 + unaff_EBP * 8 + 4) = uStack00000040;
    *(int *)(&uStack_c + unaff_EBP) = iVar7 + iVar12 + iVar4 + iVar6;
    uVar18 = uVar18 + 0x4400;
    iVar7 = *(int *)(&uStack_24 + unaff_EBP);
    *(undefined4 *)((int)&uStack_14 + unaff_EBP * 8 + 4) =
         *(undefined4 *)((int)&uStack_24 + unaff_EBP * 8 + 4);
    uVar14 = iVar7 + (int)puVar13;
    *(uint *)((int)&uStack_64 + unaff_EBP * 4) = uVar18;
    *(uint *)((int)&uStack_74 + unaff_EBP * 4) = uVar14;
    uVar11 = 0x81008100;
  }
  in_stack_0000004c = in_MM6;
  in_stack_00000044 = in_MM5;
  uVar55 = psllw(0xffffffffffffffff,0xf);
  in_stack_00000054 = uVar19 - *(int *)((int)&uStack_2c + unaff_EBP * 4 + 4);
  if ((int)uVar17 < 0) {
    uVar57 = *(ulonglong *)((int)&uStack_3c + unaff_EBP * 4);
    if ((uVar18 & 0x10) != 0) {
      uVar18 = extraout_EDX_02[unaff_EBP * 2] >> 0xe & 0x1c;
      uVar11 = *(undefined4 *)((int)extraout_EDX_02 + in_stack_00000258 * 2 + unaff_EBP * 8 + 0x10);
      uVar35 = CONCAT26((ushort)(uVar55 >> 0x38),
                        CONCAT24((ushort)(uVar55 >> 0x20) >> 8,
                                 CONCAT22((ushort)(uVar55 >> 0x10) >> 8,(ushort)uVar55 >> 8)));
      uVar16 = (undefined2)(extraout_EDX_02[unaff_EBP * 2 + -4] >> 0x10);
      uVar61 = (undefined4)(CONCAT26(uVar16,CONCAT24((short)((uint)uVar11 >> 0x10),uVar11)) >> 0x20)
      ;
      in_MM6 = CONCAT44(uVar61,CONCAT22((short)extraout_EDX_02[unaff_EBP * 2 + -4],(short)uVar11));
      uVar56 = uVar55 | uVar35;
      uVar11 = *(undefined4 *)((int)extraout_EDX_02 + in_stack_00000258 * 2 + 0x10);
      uVar57 = CONCAT44(uVar61,CONCAT22((short)((uint)*(undefined4 *)
                                                       ((int)extraout_EDX_02 +
                                                       in_stack_00000258 * 2 + unaff_EBP * 8) >>
                                               0x10),uVar16)) &
               *(ulonglong *)(&stack0x00000034 + unaff_EBP * 2);
      uVar16 = (undefined2)(extraout_EDX_02[-4] >> 0x10);
      uVar32 = *(undefined8 *)((int)&stack0x0000003c + unaff_EBP * 8);
      in_MM5 = CONCAT26(-(ushort)((short)(uVar57 >> 0x30) == (short)((ulonglong)uVar32 >> 0x30)),
                        CONCAT24(-(ushort)((short)(uVar57 >> 0x20) ==
                                          (short)((ulonglong)uVar32 >> 0x20)),
                                 CONCAT22(-(ushort)((short)(uVar57 >> 0x10) ==
                                                   (short)((ulonglong)uVar32 >> 0x10)),
                                          -(ushort)((short)uVar57 == (short)uVar32))));
      uVar61 = *(undefined4 *)(&DAT_63837360 + uVar18);
      uVar18 = uVar18 * 2;
      uVar54 = (undefined1)((uint)uVar61 >> 0x18);
      uVar53 = (undefined1)((uint)uVar61 >> 0x10);
      uVar38 = (undefined1)((uint)uVar61 >> 8);
      uVar57 = CONCAT44((int)(CONCAT26(uVar16,CONCAT24((short)((uint)uVar11 >> 0x10),uVar11)) >>
                             0x20),
                        CONCAT22((short)((uint)*(undefined4 *)
                                                ((int)extraout_EDX_02 + in_stack_00000258 * 2) >>
                                        0x10),uVar16)) & in_MM5 &
               CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar54,uVar54),uVar53),
                                                         CONCAT14(uVar53,uVar61)) >> 0x20),uVar38),
                                 uVar38),CONCAT11((char)uVar61,(char)uVar61));
      cVar28 = (char)uVar57 + (char)uVar56;
      cVar37 = (char)(uVar57 >> 8) + (char)(uVar55 >> 8);
      cVar39 = (char)(uVar57 >> 0x10) + (char)(uVar56 >> 0x10);
      cVar41 = (char)(uVar57 >> 0x18) + (char)(uVar55 >> 0x18);
      cVar42 = (char)(uVar57 >> 0x20) + (char)(uVar56 >> 0x20);
      cVar44 = (char)(uVar57 >> 0x28) + (char)(uVar55 >> 0x28);
      uVar55 = CONCAT17((char)(uVar57 >> 0x38) + (char)(uVar55 >> 0x38),
                        CONCAT16((char)(uVar57 >> 0x30) + (char)(uVar56 >> 0x30),
                                 CONCAT15(cVar44,CONCAT14(cVar42,CONCAT13(cVar41,CONCAT12(cVar39,
                                                  CONCAT11(cVar37,cVar28)))))));
      if ((uVar18 & 0x20) != 0) {
        uVar32 = psubusb(uVar55 >> 0x10,uVar55);
        uVar31 = CONCAT15((char)((ulonglong)uVar32 >> 0x28) + cVar44,
                          CONCAT14((char)((ulonglong)uVar32 >> 0x20) + cVar42,
                                   CONCAT13((char)((ulonglong)uVar32 >> 0x18) + cVar41,
                                            CONCAT12((char)((ulonglong)uVar32 >> 0x10) + cVar39,
                                                     CONCAT11((char)((ulonglong)uVar32 >> 8) +
                                                              cVar37,(char)uVar32 + cVar28)))));
        uVar55 = (ulonglong)(uVar31 >> 0x20 ^ uVar31 ^ uVar31 >> 0x10);
      }
      uVar38 = (undefined1)(uVar55 >> 8);
      uVar16 = CONCAT11(uVar38,uVar38);
      uVar29 = CONCAT11((char)uVar55,(char)uVar55);
      uVar32 = psubusb(CONCAT44(CONCAT22(uVar16,uVar16),CONCAT22(uVar29,uVar29)),
                       *(undefined8 *)(&DAT_63837690 + uVar18));
      uVar57 = psllw(0xffffffffffffffff,3);
      uVar33 = paddusb(uVar32,*(undefined8 *)(&DAT_63837710 + uVar18));
      uVar32 = *(undefined8 *)(&DAT_63837790 + uVar18);
      uVar57 = CONCAT17((char)((ulonglong)uVar33 >> 0x38) - (char)((ulonglong)uVar32 >> 0x38),
                        CONCAT16((char)((ulonglong)uVar33 >> 0x30) -
                                 (char)((ulonglong)uVar32 >> 0x30),
                                 CONCAT15((char)((ulonglong)uVar33 >> 0x28) -
                                          (char)((ulonglong)uVar32 >> 0x28),
                                          CONCAT14((char)((ulonglong)uVar33 >> 0x20) -
                                                   (char)((ulonglong)uVar32 >> 0x20),
                                                   CONCAT13((char)((ulonglong)uVar33 >> 0x18) -
                                                            (char)((ulonglong)uVar32 >> 0x18),
                                                            CONCAT12((char)((ulonglong)uVar33 >>
                                                                           0x10) -
                                                                     (char)((ulonglong)uVar32 >>
                                                                           0x10),
                                                                     CONCAT11((char)((ulonglong)
                                                                                     uVar33 >> 8) -
                                                                              (char)((ulonglong)
                                                                                     uVar32 >> 8),
                                                                              (char)uVar33 -
                                                                              (char)uVar32))))))) &
               uVar57;
    }
    (&stack0x00000044)[unaff_EBP] = uVar57;
    uStack_4 = 0x6382488b;
    param_3 = uVar14;
    FUN_63824275((int)*(char *)((int)extraout_EDX_02 + in_stack_00000258 * 2 + 3));
    iVar7 = (int)uVar35;
    cVar28 = *(char *)(extraout_EDX_03 + -0xd);
    *(ulonglong *)((int)&stack0x0000002c + iVar7 * 8) = in_MM6;
    *(ulonglong *)((int)&stack0x0000003c + iVar7 * 8) = in_MM5;
    (&param_3)[iVar7] = uVar14;
    uStack_4 = 0x638248a9;
    FUN_63824275((int)cVar28);
    iVar12 = (int)uVar35;
    iVar7 = *(int *)((int)&uStack_14 + unaff_EBP * 8 + 4);
    *(ulonglong *)((int)&stack0x0000002c + iVar12 * 8) = in_MM6;
    *(ulonglong *)((int)&stack0x0000003c + iVar12 * 8) = in_MM5;
    (&param_3)[iVar12] = uVar14;
    uVar14 = (uint)*(byte *)((int)&stack0x00000044 + unaff_EBP * 8 + 6);
    uStack_4 = 0x63824904;
    in_stack_00000058 = uVar19;
    FUN_63824a08((char)(*(byte *)((int)&stack0x00000044 + unaff_EBP * 8 + 4) - uVar14 >> 3),
                 (extraout_EDX_04 - iVar7) +
                 ((int)((uint)*(byte *)((int)&stack0x00000044 + unaff_EBP * 8 + 2) +
                       (uVar14 - 0x80) * unaff_EBP + -0x80) >> 1));
    uVar14 = (*(int *)((int)&uStack_14 + unaff_EBP * 8 + 4) + 0x7f +
             (extraout_ECX_00 - *(int *)((int)&uStack_54 + unaff_EBP * 4 + 4))) *
             *(int *)((int)&uStack_c + unaff_EBP * 8 + 4) >> 0x18;
    puVar23 = *(undefined8 **)(&uStack_34 + unaff_EBP);
    uStack_4 = 0x6382493a;
    uVar17 = in_stack_00000058;
    FUN_63824275(uVar14);
    iVar12 = (int)uVar35;
    iVar7 = *(int *)((int)&uStack_74 + unaff_EBP * 4);
    cVar28 = *(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 3);
    (&param_3)[iVar12] = uVar14;
    cVar28 = cVar28 + '\x04';
    *(ulonglong *)((int)&stack0x0000002c + iVar12 * 8) = in_MM6;
    *(ulonglong *)((int)&stack0x0000003c + iVar12 * 8) = in_MM5;
    uVar32 = 0x3ffff;
    cVar37 = *(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 7);
    iVar7 = param_3 - iVar7;
    cVar39 = (char)iVar7 * '\x02';
    if ((cVar39 < cVar28) ||
       (cVar28 = *(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 1) + -4, cVar28 < cVar39)) {
      cVar37 = cVar37 + '\x04';
      iVar7 = (iVar7 + 0x7f) * *(int *)((int)&uStack_c + unaff_EBP * 8 + 4);
      iVar12 = iVar7 >> 0x18;
      cVar39 = (char)((uint)iVar7 >> 0x18);
      if ((cVar39 < cVar37) ||
         (cVar37 = *(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 5) + -4, cVar37 < cVar39)) {
        iVar12 = (int)cVar37;
      }
      uVar18 = 0xe2;
      iVar7 = iVar12 * unaff_EBP + (int)cVar28 >> 1;
      uVar14 = *(uint *)((int)&uStack_74 + unaff_EBP * 4);
    }
    else {
      cVar37 = cVar37 + '\x04';
      cVar28 = (char)((uint)((iVar7 + 0x7f) * *(int *)((int)&uStack_c + unaff_EBP * 8 + 4)) >> 0x18)
      ;
      if (cVar37 <= cVar28) {
        iVar7 = unaff_EBP + 1 + param_3;
        cVar37 = *(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 5) + -4;
        uVar18 = 0x82;
        if (cVar28 <= cVar37) goto LAB_63824b92;
      }
      uVar18 = 0xe2;
      iVar7 = cVar37 * unaff_EBP + (int)cVar39 >> 1;
      uVar14 = *(uint *)((int)&uStack_74 + unaff_EBP * 4);
    }
  }
  else {
    iVar7 = *(char *)(uVar17 + 0x63837c90) * unaff_EBP;
    uVar18 = CONCAT31((int3)(uVar17 >> 8),*(undefined1 *)(uVar17 + 0x63837c9a));
  }
  do {
    iVar12 = (int)uVar35;
    uVar17 = (uint)uVar32;
    iVar7 = uVar14 + iVar7;
LAB_63824b92:
    uStack_4 = 0x63824b97;
    FUN_638242b0();
    *(ulonglong *)((int)&stack0x0000002c + iVar12 * 8) = in_MM6;
    uVar35 = 0xffffffff;
    bVar15 = *(byte *)(iVar12 + 0x63837c7f + uVar18 * 4);
    bVar9 = *(byte *)(iVar12 + 0x63837c81 + uVar18 * 4);
    uVar18 = CONCAT31((int3)(uVar18 >> 8),bVar9);
    uVar14 = iVar7 + (uint)bVar15;
    uVar32 = CONCAT44(uVar17,uVar17);
    *(ulonglong *)((int)&stack0x0000003c + iVar12 * 8) = in_MM5;
    in_MM6 = 0;
    iVar7 = *(int *)(&stack0x00000304 + (uint)(bVar15 >> 4) * 4);
  } while (bVar9 < 0xf0);
  uVar14 = iVar7 + uVar14;
  iVar12 = uVar14 - *(int *)((int)&uStack_74 + unaff_EBP * 4);
  iVar7 = *(int *)((int)&uStack_c + unaff_EBP * 8 + 4);
  cVar28 = (char)iVar12 * '\x02';
  *(char *)(extraout_EDX_05 + 2) = cVar28;
  cVar37 = (char)((uint)((iVar12 + 0x7f) * iVar7) >> 0x18);
  *(char *)(extraout_EDX_05 + 3) = cVar37;
  if (((((*(uint *)((int)&uStack_64 + unaff_EBP * 4) & 2) != 0) &&
       (*(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 3) < cVar28)) &&
      (cVar28 < *(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 1))) &&
     ((*(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 7) < cVar37 &&
      (cVar37 < *(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 5))))) {
    uStack_4 = 0x63824c20;
    uVar14 = FUN_638253c3();
    uVar17 = uVar18;
    cVar28 = extraout_CL;
    cVar37 = extraout_CH;
  }
  puVar13 = *(uint **)((int)&uStack_54 + unaff_EBP * 4 + 4);
  in_stack_0000005c = uVar17;
  *(char *)((int)&uStack_34 + unaff_EBP * 8 + 4) = cVar28;
  in_stack_00000060 = uVar14;
  *(char *)((int)&uStack_34 + unaff_EBP * 8 + 5) = cVar37;
  if ((((*(uint *)((int)&uStack_64 + unaff_EBP * 4) & 4) == 0) ||
      (*(char *)((int)puVar13 + 2) <=
       (char)(*(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 3) + '\x02'))) ||
     ((char)(*(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 1) + -2) <=
      *(char *)((int)puVar13 + 2))) {
LAB_63824c7e:
    uVar16 = (undefined2)*(undefined4 *)((int)&uStack_34 + unaff_EBP * 8 + 4);
    if (in_stack_00000054 < (int)uVar17) {
LAB_63824c96:
      uVar14 = *(uint *)((int)&uStack_74 + unaff_EBP * 4);
      uVar18 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
      _uStack0000002c = in_stack_0000004c;
      _uStack0000003c = in_stack_00000044;
      goto LAB_63824cb2;
    }
LAB_63825109:
    *(undefined2 *)puVar13 = uVar16;
    puVar13[1] = in_stack_00000060;
    *(undefined2 *)(puVar13 + 2) = uVar16;
    uVar18 = in_stack_00000060 + unaff_EBP * 8;
    *(undefined2 *)(puVar13 + unaff_EBP * 2) = uVar16;
    puVar13[unaff_EBP * 2 + 1] = uVar18;
    *(undefined2 *)(puVar13 + unaff_EBP * 2 + 2) = uVar16;
    uVar14 = in_stack_00000060 + 8;
    puVar13[3] = uVar14;
    puVar13[unaff_EBP * 2 + 3] = uVar18 + 8;
  }
  else {
    uVar14 = *puVar13;
    if (((*(char *)((int)puVar13 + 3) <=
          (char)(*(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 7) + '\x02')) ||
        ((char)(*(char *)((int)&stack0x00000044 + unaff_EBP * 8 + 5) + -2) <=
         *(char *)((int)puVar13 + 3))) || ((int)uVar17 <= *(int *)((int)&uStack_24 + unaff_EBP * 4))
       ) goto LAB_63824c7e;
    uVar33 = psubusw(uVar32,param_5);
    uVar35 = CONCAT44(param_4,param_3);
    uVar32 = psubusw(param_5,param_6);
    *(undefined8 *)(aiStack_5c + unaff_EBP * 2) = uVar33;
    uVar33 = psubusw(param_6,uVar35);
    *(undefined8 *)(&uStack_6c + unaff_EBP * 2) = uVar32;
    (&uStack_64)[unaff_EBP] = uVar33;
    (&uStack_74)[unaff_EBP] = uVar35;
    in_stack_00000034 = *(int *)((int)&uStack_74 + unaff_EBP * 4);
    puVar21 = (undefined8 *)
              (in_stack_00000034 + ((int)*(char *)((int)puVar13 + 2) >> 1) +
              (((int)uVar14 >> 0x19) + 1) * unaff_EBP);
    iVar7 = *(int *)((int)&uStack_24 + unaff_EBP * 4 + 4);
    in_stack_0000006c = puVar21;
    in_stack_00000038 = (uVar17 * 3 >> 2) - iVar7;
    iVar7 = ((uint)(in_stack_00000054 * 3) >> 2) - iVar7;
    uVar14 = 10;
    if (iVar7 <= in_stack_00000038) {
      in_stack_00000038 = iVar7;
    }
    in_MM5 = _uStack0000003c & 0xffffffff;
    if (in_stack_00000038 < 1) goto LAB_63824c7e;
    uVar55 = _uStack0000002c & 0xffffffff;
    in_stack_00000074 = uStack0000003c;
    uVar18 = (uint)puVar13 >> 3;
    do {
      do {
        while( true ) {
          puVar24 = puVar23;
          uVar32 = *(undefined8 *)((int)puVar21 + unaff_EBP);
          uVar33 = *(undefined8 *)((int)puVar24 + unaff_EBP);
          uVar36 = *(undefined8 *)(unaff_EBP * 3 + (int)puVar21);
          uVar33 = psllw(CONCAT26((short)((ulonglong)uVar32 >> 0x30) -
                                  (short)((ulonglong)uVar33 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar32 >> 0x20) -
                                           (short)((ulonglong)uVar33 >> 0x20),
                                           CONCAT22((short)((ulonglong)uVar32 >> 0x10) -
                                                    (short)((ulonglong)uVar33 >> 0x10),
                                                    (short)uVar32 - (short)uVar33))),8);
          uVar32 = *(undefined8 *)(unaff_EBP * 3 + (int)puVar24);
          uVar34 = pmaddwd(uVar33,uVar33);
          uVar33 = *(undefined8 *)(unaff_EBP * 5 + (int)puVar21);
          uVar36 = psllw(CONCAT26((short)((ulonglong)uVar36 >> 0x30) -
                                  (short)((ulonglong)uVar32 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar36 >> 0x20) -
                                           (short)((ulonglong)uVar32 >> 0x20),
                                           CONCAT22((short)((ulonglong)uVar36 >> 0x10) -
                                                    (short)((ulonglong)uVar32 >> 0x10),
                                                    (short)uVar36 - (short)uVar32))),8);
          uVar32 = *(undefined8 *)(unaff_EBP * 5 + (int)puVar24);
          uVar46 = pmaddwd(uVar36,uVar36);
          uVar36 = *puVar21;
          uVar33 = psllw(CONCAT26((short)((ulonglong)uVar33 >> 0x30) -
                                  (short)((ulonglong)uVar32 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar33 >> 0x20) -
                                           (short)((ulonglong)uVar32 >> 0x20),
                                           CONCAT22((short)((ulonglong)uVar33 >> 0x10) -
                                                    (short)((ulonglong)uVar32 >> 0x10),
                                                    (short)uVar33 - (short)uVar32))),8);
          uVar32 = *puVar24;
          uVar32 = CONCAT26((short)((ulonglong)uVar36 >> 0x30) - (short)((ulonglong)uVar32 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar36 >> 0x20) -
                                     (short)((ulonglong)uVar32 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar36 >> 0x10) -
                                              (short)((ulonglong)uVar32 >> 0x10),
                                              (short)uVar36 - (short)uVar32)));
          uVar47 = pmaddwd(uVar33,uVar33);
          uVar51 = pmaddwd(uVar32,uVar32);
          uVar32 = *(undefined8 *)((int)puVar21 + unaff_EBP * 6);
          uVar36 = paddusw(uVar34,uVar46);
          uVar33 = *(undefined8 *)((int)puVar24 + unaff_EBP * 6);
          uVar33 = CONCAT26((short)((ulonglong)uVar32 >> 0x30) - (short)((ulonglong)uVar33 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar32 >> 0x20) -
                                     (short)((ulonglong)uVar33 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar32 >> 0x10) -
                                              (short)((ulonglong)uVar33 >> 0x10),
                                              (short)uVar32 - (short)uVar33)));
          uVar36 = paddusw(uVar36,uVar47);
          uVar32 = *(undefined8 *)(unaff_EBP * 7 + (int)puVar21);
          uVar47 = pmaddwd(uVar33,uVar33);
          uVar33 = *(undefined8 *)(unaff_EBP * 7 + (int)puVar24);
          uVar34 = paddusw(uVar36,uVar51);
          uVar36 = *(undefined8 *)((int)puVar21 + unaff_EBP * 2);
          uVar33 = psllw(CONCAT26((short)((ulonglong)uVar32 >> 0x30) -
                                  (short)((ulonglong)uVar33 >> 0x30),
                                  CONCAT24((short)((ulonglong)uVar32 >> 0x20) -
                                           (short)((ulonglong)uVar33 >> 0x20),
                                           CONCAT22((short)((ulonglong)uVar32 >> 0x10) -
                                                    (short)((ulonglong)uVar33 >> 0x10),
                                                    (short)uVar32 - (short)uVar33))),8);
          uVar32 = *(undefined8 *)((int)puVar24 + unaff_EBP * 2);
          uVar46 = CONCAT26((short)((ulonglong)uVar36 >> 0x30) - (short)((ulonglong)uVar32 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar36 >> 0x20) -
                                     (short)((ulonglong)uVar32 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar36 >> 0x10) -
                                              (short)((ulonglong)uVar32 >> 0x10),
                                              (short)uVar36 - (short)uVar32)));
          uVar36 = pmaddwd(uVar33,uVar33);
          uVar32 = *(undefined8 *)((int)puVar21 + unaff_EBP * 4);
          uVar46 = pmaddwd(uVar46,uVar46);
          uVar33 = *(undefined8 *)((int)puVar24 + unaff_EBP * 4);
          uVar33 = CONCAT26((short)((ulonglong)uVar32 >> 0x30) - (short)((ulonglong)uVar33 >> 0x30),
                            CONCAT24((short)((ulonglong)uVar32 >> 0x20) -
                                     (short)((ulonglong)uVar33 >> 0x20),
                                     CONCAT22((short)((ulonglong)uVar32 >> 0x10) -
                                              (short)((ulonglong)uVar33 >> 0x10),
                                              (short)uVar32 - (short)uVar33)));
          uVar32 = paddusw(uVar34,uVar47);
          uVar32 = paddusw(uVar32,uVar36);
          uVar33 = pmaddwd(uVar33,uVar33);
          uVar32 = paddusw(uVar32,uVar46);
          uVar32 = paddusw(uVar32,uVar33);
          uVar35 = paddusw(CONCAT44((int)uVar32,(int)uVar36),uVar32);
          iVar7 = ((uVar18 & 0x7fffffff) >> 0x1d) + unaff_EBP;
          uVar32 = psubusw(uVar55,uVar35 >> 0x30);
          uVar57 = (&uStack_74)[iVar7];
          uVar17 = -(uint)((int)uVar32 == 0);
          uVar35 = (ulonglong)uVar17;
          uVar55 = psubusw(uVar55,uVar32);
          in_MM6 = 0;
          (&uStack_7c)[iVar7] = uVar55;
          bVar15 = *(byte *)(uVar17 + 0x63837c7f + uVar14 * 4);
          bVar9 = *(byte *)(uVar17 + 0x63837c81 + uVar14 * 4);
          uVar14 = (uint)bVar9;
          if (0xef < bVar9) break;
          puVar21 = (undefined8 *)
                    ((int)puVar21 +
                    *(int *)(&stack0x00000304 + (uint)(bVar15 >> 4) * 4) + (uint)bVar15);
          puVar23 = puVar24;
        }
        iVar7 = (int)puVar21 + *(int *)(&stack0x00000304 + (uint)(bVar15 >> 4) * 4) + (uint)bVar15;
        uStack_4 = uVar18;
        uVar14 = (uint)uVar55;
        if ((*(uint *)((int)&uStack_64 + unaff_EBP * 4) & 2) == 0) {
          uVar10 = CONCAT11((char)((uint)(((iVar7 - in_stack_00000034) + 0x7f) *
                                         *(int *)((int)&uStack_c + unaff_EBP * 8 + 4)) >> 0x18),
                            ((char)iVar7 - (char)in_stack_00000034) * '\x02');
        }
        else {
          puVar23 = (undefined8 *)(iVar7 + unaff_EBP);
          if (in_stack_0000006c == puVar23) {
            in_stack_00000070 = uVar14;
          }
          else {
            uStack_c._4_4_ = 0x63824e8a;
            in_stack_00000070 = uVar14;
            FUN_63825502();
            iVar7 = iVar7 + 8 + unaff_EBP * 8;
            puVar24 = puVar24 + unaff_EBP + 1;
            puVar23 = extraout_ECX_01;
          }
          cVar28 = ((char)puVar23 - (char)in_stack_00000034) * '\x02';
          cVar37 = (char)((uint)(((iVar7 - in_stack_00000034) + 0x7f) *
                                *(int *)((int)&uStack_c + unaff_EBP * 8 + 4)) >> 0x18);
          uVar10 = CONCAT11(cVar37,cVar28);
          uVar18 = (uint)uVar10;
          uVar19 = (uint)uVar57 & 0xffff;
          uVar17 = (uint)uVar57 >> 0x10;
          uVar8 = (uint)(uVar57 >> 0x20);
          if (uVar19 < uVar17) {
            if ((int)in_stack_00000070 <= (int)uVar19) goto LAB_63824fd0;
            uVar14 = uVar8 & 0xffff;
            if (uVar14 < uVar8 >> 0x10) {
              cVar37 = SBORROW4(uVar14,in_stack_00000070);
              cVar28 = (int)(uVar14 - in_stack_00000070) < 0;
              bVar26 = uVar14 == in_stack_00000070;
              if ((int)uVar14 < (int)in_stack_00000070) {
                uStack_c._4_4_ = 0x63824fae;
                uVar8 = FUN_63825670();
                uVar16 = (undefined2)extraout_ECX_05;
                puVar24 = puVar24 + unaff_EBP + 1;
                iVar7 = iVar7 + 8 + unaff_EBP * 8;
                uVar18 = extraout_ECX_05;
                uVar19 = extraout_EDX_09;
                if (bVar26 || cVar37 != cVar28) {
                  if ((int)uVar8 <= (int)extraout_EDX_09) goto LAB_63824fc8;
                }
                else if ((int)uVar14 < (int)extraout_EDX_09) {
                  uVar10 = CONCAT11((char)(extraout_ECX_05 >> 8) + '\x01',
                                    (char)extraout_ECX_05 + '\x01');
                  goto LAB_6382501f;
                }
              }
            }
            else if ((int)(uVar8 >> 0x10) < (int)in_stack_00000070) {
              cVar37 = SBORROW4(iVar7,unaff_EBP);
              iVar7 = iVar7 - unaff_EBP;
              cVar28 = iVar7 < 0;
              bVar26 = iVar7 == 0;
              uStack_c._4_4_ = 0x63824f74;
              uVar8 = FUN_6382566e();
              uVar16 = (undefined2)extraout_ECX_04;
              iVar7 = iVar7 + 8 + unaff_EBP * 9;
              puVar24 = puVar24 + unaff_EBP + 1;
              uVar18 = extraout_ECX_04;
              uVar19 = extraout_EDX_08;
              if (bVar26 || cVar37 != cVar28) {
                if ((int)uVar8 <= (int)extraout_EDX_08) goto LAB_63824f0b;
              }
              else if ((int)uVar14 < (int)extraout_EDX_08) {
                uVar10 = CONCAT11((char)(extraout_ECX_04 >> 8) + -1,(char)extraout_ECX_04 + '\x01');
                iVar7 = iVar7 - unaff_EBP;
                goto LAB_6382501f;
              }
            }
            uVar10 = (ushort)CONCAT31((int3)(uVar18 >> 8),(char)uVar18 + '\x01');
            uVar14 = uVar19;
          }
          else if ((int)uVar17 < (int)in_stack_00000070) {
            uVar14 = uVar8 & 0xffff;
            if (uVar14 < uVar8 >> 0x10) {
              if ((int)uVar14 < (int)in_stack_00000070) {
                cVar37 = SBORROW4(iVar7,1);
                cVar28 = iVar7 + -1 < 0;
                bVar26 = iVar7 == 1;
                uStack_c._4_4_ = 0x63824f24;
                uVar8 = FUN_63825670();
                uVar16 = (undefined2)extraout_ECX_03;
                puVar24 = puVar24 + unaff_EBP + 1;
                iVar7 = iVar7 + 8 + unaff_EBP * 8;
                uVar18 = extraout_ECX_03;
                uVar17 = extraout_EDX_07;
                if (bVar26 || cVar37 != cVar28) {
                  if ((int)extraout_EDX_07 < (int)uVar8) goto LAB_63824f46;
LAB_63824fc8:
                  uVar10 = CONCAT11((char)((ushort)uVar16 >> 8) + '\x01',(char)uVar16);
                  uVar14 = uVar8;
                }
                else {
                  if ((int)extraout_EDX_07 <= (int)uVar14) goto LAB_63824f46;
                  iVar7 = iVar7 + -1;
                  uVar10 = CONCAT11((char)(extraout_ECX_03 >> 8) + '\x01',(char)extraout_ECX_03 + -1
                                   );
                }
                goto LAB_6382501f;
              }
            }
            else if ((int)(uVar8 >> 0x10) < (int)in_stack_00000070) {
              iVar7 = iVar7 - unaff_EBP;
              cVar37 = SBORROW4(iVar7,1);
              cVar28 = iVar7 + -1 < 0;
              bVar26 = iVar7 == 1;
              uStack_c._4_4_ = 0x63824ee7;
              uVar8 = FUN_6382566e();
              uVar16 = (undefined2)extraout_ECX_02;
              iVar7 = iVar7 + 8 + unaff_EBP * 9;
              puVar24 = puVar24 + unaff_EBP + 1;
              uVar18 = extraout_ECX_02;
              uVar17 = extraout_EDX_06;
              if (bVar26 || cVar37 != cVar28) {
                if ((int)extraout_EDX_06 < (int)uVar8) goto LAB_63824f46;
LAB_63824f0b:
                uVar10 = CONCAT11((char)((ushort)uVar16 >> 8) + -1,(char)uVar16);
                iVar7 = iVar7 - unaff_EBP;
                uVar14 = uVar8;
              }
              else {
                if ((int)extraout_EDX_06 <= (int)uVar14) goto LAB_63824f46;
                uVar10 = CONCAT11((char)(extraout_ECX_02 >> 8) + -1,(char)extraout_ECX_02 + -1);
                iVar7 = (iVar7 + -1) - unaff_EBP;
              }
              goto LAB_6382501f;
            }
LAB_63824f46:
            uVar10 = (ushort)CONCAT31((int3)(uVar18 >> 8),(char)uVar18 + -1);
            iVar7 = iVar7 + -1;
            uVar14 = uVar17;
          }
          else {
LAB_63824fd0:
            uVar18 = uVar8 & 0xffff;
            uVar8 = uVar8 >> 0x10;
            uVar14 = in_stack_00000070;
            if (uVar8 < uVar18) {
              if ((int)uVar8 < (int)in_stack_00000070) {
                uVar10 = CONCAT11(cVar37 + -1,cVar28);
                iVar7 = iVar7 - unaff_EBP;
                uVar14 = uVar8;
              }
            }
            else if ((int)uVar18 < (int)in_stack_00000070) {
              uVar10 = CONCAT11(cVar37 + '\x01',cVar28);
              uVar14 = uVar18;
            }
          }
        }
LAB_6382501f:
        uVar17 = uStack_4;
        iVar12 = in_stack_00000034;
        *(int *)(uStack_4 * 8 + 4) = iVar7;
        *(char *)(uStack_4 * 8) = (char)uVar10;
        *(char *)(uStack_4 * 8 + 1) = (char)(uVar10 >> 8);
        *(uint *)(&uStack_7c + ((uStack_4 & 0x7fffffff) >> 0x1d) + unaff_EBP) = uVar14;
        if (in_stack_00000038 < (int)uVar14) {
          puVar13 = *(uint **)((int)&uStack_54 + unaff_EBP * 4 + 4);
          if (in_stack_00000054 <= (int)in_stack_0000005c) goto LAB_63824c96;
          uVar16 = (undefined2)*(undefined4 *)((int)&uStack_34 + unaff_EBP * 8 + 4);
          goto LAB_63825109;
        }
        in_stack_00000038 = in_stack_00000038 - uVar14;
        puVar21 = in_stack_0000006c + 1;
        in_stack_00000034 = in_stack_00000034 + 8;
        uVar18 = uVar17 + 0xa0000001;
        bVar26 = -1 < (int)uVar18;
        uVar55 = (ulonglong)in_stack_00000074;
        uVar14 = 10;
        puVar23 = puVar24 + 1;
      } while (uVar17 < 0x5fffffff);
      puVar21 = in_stack_0000006c + unaff_EBP;
      in_stack_0000006c = puVar21;
      in_MM5 = (ulonglong)uStack00000030;
      uVar55 = _uStack0000003c >> 0x20;
      in_stack_00000074 = uStack00000030;
      uVar18 = unaff_EBP + -2 + uVar18;
      in_stack_00000034 = iVar12 + -8 + unaff_EBP * 8;
      puVar23 = puVar24 + unaff_EBP + -1;
    } while (bVar26);
    puVar13 = *(uint **)((int)&uStack_54 + unaff_EBP * 4 + 4);
    _uStack0000002c = CONCAT44(uStack00000030,(int)(&uStack_7c)[unaff_EBP]);
    _uStack0000002c = CONCAT44(*(undefined4 *)(&uStack_64 + unaff_EBP),(int)(&uStack_7c)[unaff_EBP])
    ;
    uVar14 = (&uStack_6c)[unaff_EBP * 2];
    _uStack0000003c = CONCAT44(uVar14,(int)(&uStack_74)[unaff_EBP]);
    uVar18 = *puVar13 ^ puVar13[2] | puVar13[2] ^ puVar13[unaff_EBP * 2] |
             puVar13[unaff_EBP * 2] ^ puVar13[unaff_EBP * 2 + 2];
    if ((char)uVar18 != '\0' || (char)(uVar18 >> 8) != '\0') {
      *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 3) = 0x41;
    }
  }
LAB_63825130:
  uVar18 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
  if ((uVar18 & 0x2000) == 0) {
    uVar14 = puVar13[1];
    uVar38 = 0x81;
    if ((uVar18 & 0x800) == 0) {
      (&param_4)[unaff_EBP * 2] = *puVar13;
      uVar38 = *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 3);
      if ((uVar18 & 0x200) == 0) {
        if ((uVar18 & 0xc00) != 0) goto LAB_638251ce;
        goto LAB_6382529e;
      }
    }
    uVar14 = uStack0000002c + uStack00000030 + uStack0000003c + uStack00000040;
    uVar17 = *(uint *)(&uStack_c + unaff_EBP);
    if ((int)uVar17 <= (int)uVar14) {
      _uStack0000002c = (&param_6)[unaff_EBP];
      _uStack0000003c = (&param_5)[unaff_EBP];
      uVar14 = (&param_3)[unaff_EBP * 2];
      puVar13[1] = uVar14;
      uVar14 = uVar14 + 8;
      puVar13[3] = uVar14;
      uVar18 = (&param_4)[unaff_EBP * 2];
      uVar16 = (undefined2)uVar18;
      *(undefined2 *)(puVar13 + 2) = uVar16;
      *puVar13 = uVar18;
      *(undefined2 *)(puVar13 + unaff_EBP * 2) = uVar16;
      uVar14 = uVar14 + unaff_EBP * 8;
      puVar13[unaff_EBP * 2 + 3] = uVar14;
      *(undefined2 *)(puVar13 + unaff_EBP * 2 + 2) = uVar16;
      puVar13[unaff_EBP * 2 + 1] = uVar14 - 8;
      uVar38 = 1;
      uVar14 = uVar17;
    }
    *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 3) = uVar38;
    uVar18 = *(uint *)(&uStack_1c + unaff_EBP);
    if ((int)uVar18 <= (int)uVar14) {
      pcVar1 = (char *)((int)&uStack_34 + unaff_EBP * 4);
      *pcVar1 = *pcVar1 + '\x01';
      puVar23 = *(undefined8 **)(&uStack_34 + unaff_EBP);
      goto LAB_63825aae;
    }
  }
  else {
    iVar7 = *(int *)(&uStack_c + unaff_EBP);
    *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 3) = 0x81;
    if (iVar7 <= (int)(uStack0000002c + uStack00000030 + uStack0000003c + uStack00000040)) {
      _uStack0000002c = (&param_6)[unaff_EBP];
      _uStack0000003c = (&param_5)[unaff_EBP];
      uVar14 = (&param_3)[unaff_EBP * 2];
      puVar13[1] = uVar14;
      uVar14 = uVar14 + 8;
      puVar13[3] = uVar14;
      *puVar13 = 0;
      *(undefined2 *)(puVar13 + 2) = 0;
      uVar14 = uVar14 + unaff_EBP * 8;
      puVar13[unaff_EBP * 2 + 3] = uVar14;
      uVar14 = uVar14 - 8;
      *(undefined2 *)(puVar13 + unaff_EBP * 2) = 0;
      puVar13[unaff_EBP * 2 + 1] = uVar14;
      *(undefined2 *)(puVar13 + unaff_EBP * 2 + 2) = 0;
      *(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 3) = 1;
    }
  }
LAB_6382529e:
  uVar17 = *(uint *)((int)&uStack_34 + unaff_EBP * 4 + 4);
  puVar13 = *(uint **)((int)&uStack_54 + unaff_EBP * 4 + 4);
  uVar18 = uStack00000030 + uStack00000040 + uStack0000003c + uStack0000002c;
  uVar19 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
  uVar8 = CONCAT31((int3)(_uStack0000002c >> 8),*(undefined1 *)((int)puVar13 + unaff_EBP * 8 + 10))
          & 0xfffffff0;
  bVar15 = (byte)uVar8 |
           (((uVar17 < uStack00000030) * '\x02' + (uVar17 < uStack00000040)) * '\x02' +
           (uVar17 < uStack0000003c)) * '\x02' + (uVar17 < uStack0000002c);
  uVar17 = CONCAT31((int3)(uVar8 >> 8),bVar15);
  *(byte *)((int)puVar13 + unaff_EBP * 8 + 10) = bVar15;
  if ((uVar19 & 0x20000) != 0) {
    puVar23 = *(undefined8 **)(&uStack_34 + unaff_EBP);
    (&stack0x00000060)[unaff_EBP * 2] = uVar18;
    if (*(uint *)((int)&uStack_1c + unaff_EBP * 4) <= uVar18) goto LAB_63825aae;
    goto LAB_63825307;
  }
LAB_63825316:
  uVar14 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
  iVar7 = *(int *)((int)&stack0x0000002c + unaff_EBP * 8 + 4) + uVar18;
  *(int *)((int)&stack0x0000002c + unaff_EBP * 8 + 4) = iVar7;
  if ((uVar14 & 0x20) == 0) {
    bVar15 = *(byte *)((int)puVar13 + unaff_EBP * 8 + 10);
    if ((bVar15 & 1) != 0) {
      uVar14 = *puVar13;
      uStack_4 = 0x63825344;
      FUN_63825724();
      bVar15 = *(char *)((int)extraout_EDX_10 + unaff_EBP * 8 + 10) - (char)uVar14;
      *(byte *)((int)extraout_EDX_10 + unaff_EBP * 8 + 10) = bVar15;
      puVar13 = extraout_EDX_10;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = puVar13[2];
      uStack_4 = 0x63825364;
      FUN_63825724();
      bVar15 = *(char *)((int)extraout_EDX_11 + unaff_EBP * 8 + 10) + (char)uVar14 * -2;
      *(byte *)((int)extraout_EDX_11 + unaff_EBP * 8 + 10) = bVar15;
      puVar13 = extraout_EDX_11;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = puVar13[unaff_EBP * 2];
      uStack_4 = 0x63825387;
      FUN_63825724();
      bVar15 = *(char *)((int)extraout_EDX_12 + unaff_EBP * 8 + 10) + (char)uVar14 * -4;
      *(byte *)((int)extraout_EDX_12 + unaff_EBP * 8 + 10) = bVar15;
      puVar13 = extraout_EDX_12;
    }
    pbVar64 = in_stack_00000264;
    if ((bVar15 & 8) != 0) {
      uVar14 = puVar13[unaff_EBP * 2 + 2];
      uStack_4 = 0x638253b1;
      FUN_63825724();
      *(char *)((int)extraout_EDX_13 + unaff_EBP * 8 + 10) =
           *(char *)((int)extraout_EDX_13 + unaff_EBP * 8 + 10) + (char)uVar14 * -8;
      puVar13 = extraout_EDX_13;
    }
  }
  else {
    if ((uVar14 & 1) != 0) {
      FUN_638264d9(iVar7,(int)(puVar13 + -4));
      uVar14 = *(uint *)((int)&uStack_64 + unaff_EBP * 4);
      iVar7 = extraout_ECX;
      puVar13 = extraout_EDX;
    }
    bVar15 = *(byte *)((int)puVar13 + unaff_EBP * 8 + 2);
    *(uint *)((int)&uStack_64 + unaff_EBP * 4) = uVar14 | 1;
    pbVar64 = in_stack_00000264;
    if ((bVar15 & 0x20) == 0) {
      *(uint *)((int)&uStack_64 + unaff_EBP * 4) = (uVar14 | 1) ^ 1;
      FUN_638264d9(iVar7,(int)puVar13);
      puVar13 = extraout_EDX_00;
    }
  }
  goto LAB_6382459e;
}


