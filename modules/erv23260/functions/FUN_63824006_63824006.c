/* Module: erv23260.dll
   Function: FUN_63824006
   Address: 63824006
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63824006(undefined4 param_1,int param_2,int param_3,uint *param_4,int param_5,undefined4 param_6
            ,int param_7,undefined4 param_8,int param_9,byte *param_10,int param_11)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  char extraout_CL;
  byte bVar9;
  ushort uVar10;
  undefined4 *puVar11;
  int extraout_ECX;
  undefined4 uVar12;
  int extraout_ECX_00;
  char extraout_CH;
  undefined8 *extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  int extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  uint *puVar13;
  uint uVar14;
  int extraout_EDX;
  uint *extraout_EDX_00;
  int extraout_EDX_01;
  uint *extraout_EDX_02;
  uint *extraout_EDX_03;
  uint *extraout_EDX_04;
  uint *extraout_EDX_05;
  uint *extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint *extraout_EDX_14;
  uint *extraout_EDX_15;
  uint *extraout_EDX_16;
  uint *extraout_EDX_17;
  uint *extraout_EDX_18;
  int extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  uint *extraout_EDX_22;
  uint *extraout_EDX_23;
  uint extraout_EDX_24;
  int extraout_EDX_25;
  undefined2 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
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
  ulonglong in_MM5;
  ulonglong uVar57;
  undefined8 uVar58;
  short sVar59;
  short sVar60;
  ulonglong in_MM6;
  undefined4 uVar61;
  short sVar62;
  undefined8 uVar63;
  ulonglong uStackY_2070;
  undefined8 uStackY_2068;
  undefined4 uStackY_2060;
  int iStackY_205c;
  undefined8 uStackY_2058;
  int aiStackY_2050 [2];
  undefined8 uStackY_2048;
  undefined8 uStackY_2040;
  undefined8 uStackY_2038;
  undefined8 uStackY_2030;
  undefined8 uStackY_2028;
  undefined8 uStackY_2020;
  undefined8 uStackY_2018;
  undefined8 uStackY_2010;
  undefined8 uStackY_2008;
  undefined8 uStackY_2000;
  uint auStackY_1ff8 [2];
  uint in_stack_ffffe010;
  undefined4 in_stack_ffffe014;
  undefined8 in_stack_ffffe018;
  undefined8 in_stack_ffffe020;
  int aiStack_1fd8 [2];
  ulonglong uStack_1fd0;
  undefined8 uStack_1fc8;
  undefined8 uStack_1fc0;
  undefined8 uStack_1fb8;
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  uint auStack_1fa0 [6];
  undefined8 *puStack_1f88;
  uint uStack_1f84;
  uint uStack_1f80;
  undefined4 uStack_1da0;
  int iStack_1d9c;
  int iStack_1d98;
  int iStack_1d94;
  byte *pbStack_1d90;
  ulonglong uStack_1d80;
  undefined8 uStack_1d78;
  ulonglong uStack_1d70;
  undefined8 uStack_1d68;
  ulonglong uStack_1d60;
  ulonglong uStack_1d58;
  undefined8 uStack_1d50;
  ulonglong uStack_1d48;
  undefined8 uStack_1d40;
  ulonglong uStack_1d38;
  undefined8 uStack_1d30;
  ulonglong uStack_1d28;
  undefined8 uStack_1d20;
  ulonglong uStack_1d18;
  ulonglong uStack_1d10;
  undefined8 uStack_1d08;
  ulonglong uStack_1d00;
  undefined8 uStack_1cf8;
  int aiStack_1cf0 [15];
  uint uStack_1cb4;
  int aiStack_ff4 [1017];
  undefined1 uVar38;
  
  iVar16 = 0;
  do {
    iVar16 = iVar16 + 0x200;
  } while (iVar16 < param_7);
  (&uStackY_2030)[param_7] = DAT_63837b90;
  *(undefined4 *)((int)&uStackY_2030 + param_7 * 4) = 0xe2681e98;
  *(undefined4 *)((int)&uStackY_2030 + param_7 * 4 + 4) = 0xe2681e98;
  *(undefined4 *)(&uStackY_2008 + param_7) = param_8;
  iStack_1d94 = param_11;
  pbStack_1d90 = param_10;
  iStack_1d98 = param_7;
  *(uint *)((int)&uStack_1fa8 + param_7 * 8 + 4) = (uint)(param_9 != 0);
  aiStackY_2050[param_7] = param_3;
  *(undefined4 *)((int)&uStackY_2048 + param_7 * 4) = param_6;
  iStack_1d9c = param_7 * -8;
  *(undefined1 *)((int)&uStackY_2028 + param_7 * 4) = 0;
  uStack_1da0 = 0;
  aiStack_1cf0[9] = param_7 + -0x92;
  aiStack_1cf0[6] = -aiStack_1cf0[9] + -0xf4;
  aiStack_1cf0[10] = param_7 + -0x12 + aiStack_1cf0[9];
  aiStack_1cf0[5] = -aiStack_1cf0[9] + -0x84 + aiStack_1cf0[6];
  iVar16 = aiStack_1cf0[10] * 2;
  aiStack_1cf0[0xb] = iVar16 + 0x90;
  iVar6 = aiStack_1cf0[5] * 2;
  aiStack_1cf0[4] = iVar6 + 0x70;
  aiStack_1cf0[3] = aiStack_1cf0[4];
  aiStack_1cf0[0xc] = aiStack_1cf0[0xb];
  aiStack_1cf0[0xd] = iVar16 + 0x128 + aiStack_1cf0[0xb];
  aiStack_1cf0[2] = iVar6 + 0xc0 + aiStack_1cf0[4];
  aiStack_1cf0[0xe] = aiStack_1cf0[0xd] + -8;
  aiStack_1cf0[1] = aiStack_1cf0[2] + 8;
  uVar14 = aiStack_1cf0[0xd] + 200 + aiStack_1cf0[0xd] + -8;
  uStack_1cb4 = uVar14;
  aiStack_1cf0[0] = aiStack_1cf0[2] + 0x30 + aiStack_1cf0[2] + 8;
  aiStack_1cf0[8] = 0xffffff80;
  aiStack_1cf0[7] = 0xffffff80;
  *(undefined1 **)((int)&uStackY_2068 + param_7 * 4 + 4) = &stack0xfffffff0;
  auStackY_1ff8[param_7 * 2 + -1] = *(uint *)(&DAT_6383701b + (uVar14 >> 10));
  iVar16 = param_5 - (int)param_4;
  if (param_2 == 0) {
    while( true ) {
      aiStackY_2050[param_7 + 1] = iVar16;
      bVar9 = *(byte *)((int)param_4 + param_7 * 8 + 3);
      if ((bVar9 & 0xb0) == 0 || (char)bVar9 < '\0') {
        uVar14 = *(uint *)(param_3 + 0x60 + (uint)*(byte *)((int)param_4 + 0xb) * 8);
        iVar6 = param_3 + (uint)*(byte *)((int)param_4 + 0xb) * 8;
        *(uint *)((int)&uStackY_2058 + param_7 * 4) = uVar14;
        bVar9 = *pbStack_1d90;
        *(uint **)((int)&uStackY_2048 + param_7 * 4 + 4) = param_4;
        bVar8 = *(byte *)((int)param_4 + param_7 * 8 + 3);
        pbStack_1d90 = pbStack_1d90 + 1;
        *(undefined4 *)(&uStack_1fc8 + param_7) = *(undefined4 *)(iVar6 + 100);
        puVar11 = (undefined4 *)(iVar16 + (int)param_4);
        uVar12 = *(undefined4 *)(&DAT_63837060 + ((uVar14 >> 0x1a & 1) + (uint)bVar9 * 2) * 4);
        *(undefined4 *)((int)&uStack_1fc8 + param_7 * 8 + 4) = *(undefined4 *)(iVar6 + 0x6c);
        uVar15 = (undefined2)((uint)uVar12 >> 0x10);
        *(int *)((int)&uStackY_2058 + param_7 * 4 + 4) = iVar6;
        iVar16 = *(int *)(iVar6 + 0x40);
        *(ulonglong *)((int)&uStackY_2070 + param_7 * 4) =
             CONCAT44((int)(CONCAT26(uVar15,CONCAT24(uVar15,uVar12)) >> 0x20),
                      CONCAT22((short)uVar12,(short)uVar12));
        *(int *)(&uStackY_2028 + param_7) = (int)puVar11 + iVar16;
        if (bVar8 == 0) {
          auStackY_1ff8[0] = 0x63824151;
          FUN_63826de0();
          pcVar1 = (char *)(extraout_EDX + 10 + param_7 * 8);
          *pcVar1 = *pcVar1 + (char)iVar6 * -0x10;
          auStackY_1ff8[0] = 0x63824165;
          FUN_63826de0();
          *(undefined1 *)((int)extraout_EDX_00 + param_7 * 8 + 10) =
               *(undefined1 *)((int)extraout_EDX_00 + param_7 * 8 + 10);
          param_4 = extraout_EDX_00;
        }
        else {
          *(int *)(&uStackY_2020 + param_7) = iVar16;
          if (bVar8 < 0x82) {
            uVar12 = *puVar11;
            *(undefined4 *)(&uStackY_2010 + param_7) = puVar11[1];
            *(undefined4 *)((int)&uStackY_2010 + param_7 * 8 + 4) = uVar12;
            auStackY_1ff8[0] = 0x63824245;
            FUN_63825724();
            pcVar1 = (char *)(extraout_EDX_01 + 10 + param_7 * 8);
            *pcVar1 = *pcVar1 + (char)uVar12 * -0x10;
            uVar12 = *(undefined4 *)((int)&uStackY_2010 + param_7 * 8 + 4);
            auStackY_1ff8[0] = 0x63824263;
            FUN_63825724();
            *(char *)((int)extraout_EDX_02 + param_7 * 8 + 10) =
                 *(char *)((int)extraout_EDX_02 + param_7 * 8 + 10) + (char)uVar12 * -0x20;
            param_4 = extraout_EDX_02;
          }
          else {
            uVar12 = puVar11[1];
            *(undefined4 *)((int)&uStackY_2020 + param_7 * 8 + 4) = *(undefined4 *)(iVar6 + 0x44);
            iVar16 = *(int *)(iVar6 + 0x50);
            *(undefined4 *)((int)&uStackY_2010 + param_7 * 8 + 4) = uVar12;
            *(int *)(&uStackY_2018 + param_7) = iVar16;
            auStackY_1ff8[0] = 0x63827908;
            FUN_63827c6f((uint)puVar11 >> 3,((uint)puVar11 >> 3) + 0x20000000);
            uVar14 = *(uint *)((int)&uStackY_2048 + param_7 * 4) >> 3;
            bVar9 = (&DAT_63837544)[iVar16];
            pbVar3 = (byte *)(*(int *)((int)&uStackY_2048 + param_7 * 4 + 4) + 10 + param_7 * 8);
            *pbVar3 = *pbVar3 | bVar9;
            auStackY_1ff8[0] = 0x63827928;
            FUN_63827c6f(uVar14,extraout_EDX_25 + uVar14);
            param_4 = *(uint **)((int)&uStackY_2048 + param_7 * 4 + 4);
            pbVar3 = (byte *)((int)param_4 + param_7 * 8 + 10);
            *pbVar3 = *pbVar3 | (&DAT_63837546)[CONCAT31((int3)((uint)iVar16 >> 8),bVar9)];
          }
        }
        iVar16 = *(int *)((int)&uStackY_2058 + param_7 * 4 + 4);
        param_3 = aiStackY_2050[param_7];
        uVar12 = *(undefined4 *)(&uStack_1fc8 + param_7);
        *(undefined1 *)(iVar16 + 0x60) = *(undefined1 *)((int)&uStackY_2058 + param_7 * 4);
        uVar61 = *(undefined4 *)((int)&uStack_1fc8 + param_7 * 8 + 4);
        *(undefined4 *)(iVar16 + 100) = uVar12;
        *(undefined4 *)(iVar16 + 0x6c) = uVar61;
        iVar16 = aiStackY_2050[param_7 + 1];
      }
      iVar6 = (int)param_4[param_7 * 2 + 2] >> 0x18;
      if (iVar6 == 0) break;
      param_4 = (uint *)((int)param_4 + *(int *)(param_3 + -4 + iVar6 * 4));
      iVar16 = iVar16 + *(int *)(param_3 + 0x1c + iVar6 * 4);
    }
    return;
  }
  do {
    aiStackY_2050[param_7 + 1] = iVar16;
    uVar14 = (uint)*(byte *)((int)param_4 + 0xb);
    *(undefined1 *)((int)param_4 + param_7 * 8 + 3) = 1;
    *(undefined4 *)((int)&uStackY_2040 + param_7 * 4) = *(undefined4 *)(param_3 + 100 + uVar14 * 8);
    iVar16 = param_3 + uVar14 * 8;
    *(undefined4 *)((int)&uStackY_2058 + param_7 * 4) = *(undefined4 *)(param_3 + 0x60 + uVar14 * 8)
    ;
    *(uint **)((int)&uStackY_2048 + param_7 * 4 + 4) = param_4;
    uVar14 = (uint)*pbStack_1d90;
    *(int *)((int)&uStackY_2058 + param_7 * 4 + 4) = iVar16;
    iVar6 = iStack_1d94;
    pbStack_1d90 = pbStack_1d90 + 1;
    uVar32 = *(undefined8 *)(iVar16 + 0x48);
    uVar12 = *(undefined4 *)(iStack_1d94 + 0x100 + uVar14 * 4);
    *(undefined4 *)((int)&uStackY_2020 + param_7 * 4) =
         *(undefined4 *)(iStack_1d94 + 0x80 + uVar14 * 4);
    *(undefined4 *)((int)&uStackY_2020 + param_7 * 4 + 4) = uVar12;
    uVar12 = *(undefined4 *)(iVar6 + 0x200 + uVar14 * 4);
    *(undefined4 *)((int)&uStackY_2018 + param_7 * 4) = *(undefined4 *)(iVar6 + 0x180 + uVar14 * 4);
    *(undefined4 *)((int)&uStackY_2018 + param_7 * 4 + 4) = uVar12;
    uVar12 = *(undefined4 *)(iVar6 + 0x300 + uVar14 * 4);
    *(undefined4 *)((int)&uStackY_2010 + param_7 * 4) = *(undefined4 *)(iVar6 + 0x280 + uVar14 * 4);
    *(undefined4 *)((int)&uStackY_2010 + param_7 * 4 + 4) = uVar12;
    uVar12 = *(undefined4 *)(iVar6 + 0x400 + uVar14 * 4);
    *(undefined4 *)((int)&uStackY_2008 + param_7 * 4) = *(undefined4 *)(iVar6 + 0x380 + uVar14 * 4);
    *(undefined4 *)((int)&uStackY_2008 + param_7 * 4 + 4) = uVar12;
    uVar12 = *(undefined4 *)(iVar6 + uVar14 * 4);
    uVar61 = *(undefined4 *)(&DAT_63837060 + uVar14 * 8);
    uVar4 = *(undefined4 *)(iVar16 + 0x50);
    *(undefined4 *)((int)&uStackY_2018 + param_7 * 8 + 4) = *(undefined4 *)(iVar16 + 0x54);
    *(undefined4 *)(&uStackY_2018 + param_7) = uVar4;
    *(undefined4 *)((int)&uStackY_2028 + param_7 * 4 + 4) = uVar12;
    uVar35 = *(ulonglong *)(iVar16 + 0x58);
    uVar33 = *(undefined8 *)(iVar16 + 0x68);
    iVar6 = *(int *)(iVar16 + 0x40);
    iVar16 = *(int *)(iVar16 + 0x44);
    *(undefined8 *)(auStack_1fa0 + param_7 * 2) = uVar32;
    uVar15 = (undefined2)((uint)uVar61 >> 0x10);
    *(int *)((int)&uStackY_2008 + param_7 * 8 + 4) = (int)uVar32;
    (&uStackY_2010)[param_7] = uVar35;
    (&uStack_1fc8)[param_7] = uVar33;
    *(int *)(&uStackY_2020 + param_7) = iVar6;
    *(int *)((int)&uStackY_2020 + param_7 * 8 + 4) = iVar16;
    puVar23 = (undefined8 *)(iVar6 + (int)param_4);
    uVar14 = iVar16 + (int)param_4;
    *(undefined8 **)(&uStackY_2028 + param_7) = puVar23;
    *(uint *)((int)&uStackY_2068 + param_7 * 4) = uVar14;
    bVar9 = *(byte *)((int)param_4 + param_7 * 8 + 10);
    uVar17 = 0;
    *(ulonglong *)((int)&uStackY_2070 + param_7 * 4) =
         CONCAT44((int)(CONCAT26(uVar15,CONCAT24(uVar15,uVar61)) >> 0x20),
                  CONCAT22((short)uVar61,(short)uVar61));
    uVar19 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
    bVar8 = bVar9 | 0x3f;
    uVar18 = CONCAT31((int3)((uint)uVar12 >> 8),bVar9);
    *(byte *)((int)param_4 + param_7 * 8 + 10) = bVar8;
    if ((char)bVar8 < '\0') {
      uVar19 = 0x80000;
      goto LAB_63825aae;
    }
    *(undefined4 *)(&uStackY_2000 + param_7) = 0x3ffff;
    uVar12 = 0;
    if ((uVar19 & 0xf00) == 0) {
LAB_63824738:
      *(uint *)(&uStack_1fc0 + param_7) = uVar17;
      *(uint *)((int)&uStack_1fc0 + param_7 * 8 + 4) = uVar17;
      while( true ) {
        *(undefined4 *)(&uStack_1fb8 + param_7) = uVar12;
        *(undefined4 *)((int)&uStack_1fb8 + param_7 * 8 + 4) = uVar12;
        puVar23 = *(undefined8 **)(&uStackY_2028 + param_7);
        uVar18 = 0xffffffff;
        if (((uVar19 & 8) != 0) &&
           (uVar18 = (uint)*(byte *)((int)param_4 + 10), *(byte *)((int)param_4 + 10) == 5)) {
          uVar18 = 0xffffffff;
        }
        uVar32 = 0xffff0003ffff;
        auStackY_1ff8[0] = 0x63824772;
        FUN_638242b0();
        iVar16 = iStack_1d9c;
        uVar17 = (uint)uVar32;
        uVar19 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
        uStack_1fc8 = in_MM6;
        uStack_1fb8 = in_MM5;
        param_4 = extraout_EDX_06;
        if (((uVar19 & 0x8000) == 0) && (*(uint *)((int)&uStackY_2020 + param_7 * 4) <= uVar17))
        break;
LAB_63824cb2:
        uVar19 = uVar19 ^ 0x1000;
        in_MM5 = uStack_1fb8;
        in_MM6 = uStack_1fc8;
        if ((uVar19 & 0x1000) != 0) {
          param_4[1] = uVar14;
          uVar19 = uVar14 + param_7 * 8;
          param_4[param_7 * 2 + 1] = uVar19;
          param_4[param_7 * 2 + 3] = uVar19 + 8;
          *(undefined2 *)(param_4 + 2) = 0;
          *param_4 = 0;
          *(undefined2 *)(param_4 + param_7 * 2) = 0;
          param_4[3] = uVar14 + 8;
          *(undefined2 *)(param_4 + param_7 * 2 + 2) = 0;
          goto LAB_63825130;
        }
LAB_638251ce:
        iVar16 = (uint)uStack_1fc8;
        iVar6 = uStack_1fc8._4_4_;
        *(uint *)(&stack0xffffe020 + param_7 * 8) = (uint)uStack_1fc8;
        *(int *)(&stack0xffffe024 + param_7 * 8) = iVar6;
        iVar20 = (uint)uStack_1fb8;
        *(uint *)(&stack0xffffe010 + param_7 * 8) = uVar14;
        *(int *)(&stack0xffffe018 + param_7 * 8) = iVar20;
        iVar5 = uStack_1fb8._4_4_;
        *(uint *)(&stack0xffffe01c + param_7 * 8) = uStack_1fb8._4_4_;
        *(int *)(&uStackY_2000 + param_7) = iVar16 + iVar6 + iVar20 + iVar5;
        uVar19 = uVar19 + 0x4400;
        iVar16 = *(int *)(&uStackY_2018 + param_7);
        *(undefined4 *)((int)&uStackY_2008 + param_7 * 8 + 4) =
             *(undefined4 *)((int)&uStackY_2018 + param_7 * 8 + 4);
        uVar14 = iVar16 + (int)param_4;
        *(uint *)((int)&uStackY_2058 + param_7 * 4) = uVar19;
        *(uint *)((int)&uStackY_2068 + param_7 * 4) = uVar14;
        uVar12 = 0x81008100;
      }
      uStack_1fa8 = in_MM6;
      uStack_1fb0 = in_MM5;
      uVar55 = psllw(0xffffffffffffffff,0xf);
      auStack_1fa0[0] = uVar17 - *(int *)((int)&uStackY_2020 + param_7 * 4 + 4);
      if ((int)uVar18 < 0) {
        uVar57 = *(ulonglong *)((int)&uStackY_2030 + param_7 * 4);
        if ((uVar19 & 0x10) != 0) {
          uVar19 = extraout_EDX_06[param_7 * 2] >> 0xe & 0x1c;
          uVar12 = *(undefined4 *)((int)extraout_EDX_06 + iStack_1d9c * 2 + param_7 * 8 + 0x10);
          uVar35 = CONCAT26((ushort)(uVar55 >> 0x38),
                            CONCAT24((ushort)(uVar55 >> 0x20) >> 8,
                                     CONCAT22((ushort)(uVar55 >> 0x10) >> 8,(ushort)uVar55 >> 8)));
          uVar15 = (undefined2)(extraout_EDX_06[param_7 * 2 + -4] >> 0x10);
          uVar61 = (undefined4)
                   (CONCAT26(uVar15,CONCAT24((short)((uint)uVar12 >> 0x10),uVar12)) >> 0x20);
          in_MM6 = CONCAT44(uVar61,CONCAT22((short)extraout_EDX_06[param_7 * 2 + -4],(short)uVar12))
          ;
          uVar56 = uVar55 | uVar35;
          uVar12 = *(undefined4 *)((int)extraout_EDX_06 + iStack_1d9c * 2 + 0x10);
          uVar57 = CONCAT44(uVar61,CONCAT22((short)((uint)*(undefined4 *)
                                                           ((int)extraout_EDX_06 +
                                                           iStack_1d9c * 2 + param_7 * 8) >> 0x10),
                                            uVar15)) & (&uStack_1fc0)[param_7];
          uVar15 = (undefined2)(extraout_EDX_06[-4] >> 0x10);
          uVar32 = (&uStack_1fb8)[param_7];
          in_MM5 = CONCAT26(-(ushort)((short)(uVar57 >> 0x30) == (short)((ulonglong)uVar32 >> 0x30))
                            ,CONCAT24(-(ushort)((short)(uVar57 >> 0x20) ==
                                               (short)((ulonglong)uVar32 >> 0x20)),
                                      CONCAT22(-(ushort)((short)(uVar57 >> 0x10) ==
                                                        (short)((ulonglong)uVar32 >> 0x10)),
                                               -(ushort)((short)uVar57 == (short)uVar32))));
          uVar61 = *(undefined4 *)(&DAT_63837360 + uVar19);
          uVar19 = uVar19 * 2;
          uVar54 = (undefined1)((uint)uVar61 >> 0x18);
          uVar53 = (undefined1)((uint)uVar61 >> 0x10);
          uVar38 = (undefined1)((uint)uVar61 >> 8);
          uVar57 = CONCAT44((int)(CONCAT26(uVar15,CONCAT24((short)((uint)uVar12 >> 0x10),uVar12)) >>
                                 0x20),
                            CONCAT22((short)((uint)*(undefined4 *)
                                                    ((int)extraout_EDX_06 + iStack_1d9c * 2) >> 0x10
                                            ),uVar15)) & in_MM5 &
                   CONCAT62(CONCAT51(CONCAT41((int)(CONCAT35(CONCAT21(CONCAT11(uVar54,uVar54),uVar53
                                                                     ),CONCAT14(uVar53,uVar61)) >>
                                                   0x20),uVar38),uVar38),
                            CONCAT11((char)uVar61,(char)uVar61));
          cVar28 = (char)uVar57 + (char)uVar56;
          cVar37 = (char)(uVar57 >> 8) + (char)(uVar55 >> 8);
          cVar39 = (char)(uVar57 >> 0x10) + (char)(uVar56 >> 0x10);
          cVar41 = (char)(uVar57 >> 0x18) + (char)(uVar55 >> 0x18);
          cVar42 = (char)(uVar57 >> 0x20) + (char)(uVar56 >> 0x20);
          cVar44 = (char)(uVar57 >> 0x28) + (char)(uVar55 >> 0x28);
          uVar55 = CONCAT17((char)(uVar57 >> 0x38) + (char)(uVar55 >> 0x38),
                            CONCAT16((char)(uVar57 >> 0x30) + (char)(uVar56 >> 0x30),
                                     CONCAT15(cVar44,CONCAT14(cVar42,CONCAT13(cVar41,CONCAT12(cVar39
                                                  ,CONCAT11(cVar37,cVar28)))))));
          if ((uVar19 & 0x20) != 0) {
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
          uVar15 = CONCAT11(uVar38,uVar38);
          uVar29 = CONCAT11((char)uVar55,(char)uVar55);
          uVar32 = psubusb(CONCAT44(CONCAT22(uVar15,uVar15),CONCAT22(uVar29,uVar29)),
                           *(undefined8 *)(&DAT_63837690 + uVar19));
          uVar57 = psllw(0xffffffffffffffff,3);
          uVar33 = paddusb(uVar32,*(undefined8 *)(&DAT_63837710 + uVar19));
          uVar32 = *(undefined8 *)(&DAT_63837790 + uVar19);
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
                                                                                         uVar33 >> 8
                                                                                        ) - (char)((
                                                  ulonglong)uVar32 >> 8),(char)uVar33 - (char)uVar32
                                                  ))))))) & uVar57;
        }
        (&uStack_1fb0)[param_7] = uVar57;
        auStackY_1ff8[0] = 0x6382488b;
        in_stack_ffffe010 = uVar14;
        FUN_63824275((int)*(char *)((int)extraout_EDX_06 + iVar16 * 2 + 3));
        iVar16 = (int)uVar35;
        cVar28 = *(char *)(extraout_EDX_07 + -0xd);
        (&uStack_1fc8)[iVar16] = in_MM6;
        (&uStack_1fb8)[iVar16] = in_MM5;
        *(uint *)(&stack0xffffe010 + iVar16 * 4) = uVar14;
        auStackY_1ff8[0] = 0x638248a9;
        FUN_63824275((int)cVar28);
        iVar6 = (int)uVar35;
        iVar16 = *(int *)((int)&uStackY_2008 + param_7 * 8 + 4);
        (&uStack_1fc8)[iVar6] = in_MM6;
        (&uStack_1fb8)[iVar6] = in_MM5;
        *(uint *)(&stack0xffffe010 + iVar6 * 4) = uVar14;
        uVar14 = (uint)*(byte *)((int)&uStack_1fb0 + param_7 * 8 + 6);
        auStackY_1ff8[0] = 0x63824904;
        auStack_1fa0[1] = uVar17;
        FUN_63824a08((char)(*(byte *)((int)&uStack_1fb0 + param_7 * 8 + 4) - uVar14 >> 3),
                     (extraout_EDX_08 - iVar16) +
                     ((int)((uint)*(byte *)((int)&uStack_1fb0 + param_7 * 8 + 2) +
                           (uVar14 - 0x80) * param_7 + -0x80) >> 1));
        iVar20 = (int)((*(int *)((int)&uStackY_2008 + param_7 * 8 + 4) + 0x7f +
                       (extraout_ECX_00 - *(int *)((int)&uStackY_2048 + param_7 * 4 + 4))) *
                      auStackY_1ff8[param_7 * 2 + -1]) >> 0x18;
        puVar23 = *(undefined8 **)(&uStackY_2028 + param_7);
        auStackY_1ff8[0] = 0x6382493a;
        uVar18 = auStack_1fa0[1];
        FUN_63824275(iVar20);
        iVar6 = (int)uVar35;
        iVar16 = *(int *)((int)&uStackY_2068 + param_7 * 4);
        cVar28 = *(char *)((int)&uStack_1fb0 + param_7 * 8 + 3);
        *(int *)(&stack0xffffe010 + iVar6 * 4) = iVar20;
        cVar28 = cVar28 + '\x04';
        (&uStack_1fc8)[iVar6] = in_MM6;
        (&uStack_1fb8)[iVar6] = in_MM5;
        uVar32 = 0x3ffff;
        cVar37 = *(char *)((int)&uStack_1fb0 + param_7 * 8 + 7);
        iVar16 = in_stack_ffffe010 - iVar16;
        cVar39 = (char)iVar16 * '\x02';
        if ((cVar39 < cVar28) ||
           (cVar28 = *(char *)((int)&uStack_1fb0 + param_7 * 8 + 1) + -4, cVar28 < cVar39)) {
          cVar37 = cVar37 + '\x04';
          iVar16 = (iVar16 + 0x7f) * auStackY_1ff8[param_7 * 2 + -1];
          iVar6 = iVar16 >> 0x18;
          cVar39 = (char)((uint)iVar16 >> 0x18);
          if ((cVar39 < cVar37) ||
             (cVar37 = *(char *)((int)&uStack_1fb0 + param_7 * 8 + 5) + -4, cVar37 < cVar39)) {
            iVar6 = (int)cVar37;
          }
          uVar19 = 0xe2;
          iVar16 = iVar6 * param_7 + (int)cVar28 >> 1;
          uVar14 = *(uint *)((int)&uStackY_2068 + param_7 * 4);
        }
        else {
          cVar37 = cVar37 + '\x04';
          cVar28 = (char)((iVar16 + 0x7f) * auStackY_1ff8[param_7 * 2 + -1] >> 0x18);
          if (cVar37 <= cVar28) {
            iVar16 = param_7 + 1 + in_stack_ffffe010;
            cVar37 = *(char *)((int)&uStack_1fb0 + param_7 * 8 + 5) + -4;
            uVar19 = 0x82;
            uVar33 = in_stack_ffffe020;
            if (cVar28 <= cVar37) goto LAB_63824b92;
          }
          uVar19 = 0xe2;
          iVar16 = cVar37 * param_7 + (int)cVar39 >> 1;
          uVar14 = *(uint *)((int)&uStackY_2068 + param_7 * 4);
        }
      }
      else {
        iVar16 = *(char *)(uVar18 + 0x63837c90) * param_7;
        uVar19 = CONCAT31((int3)(uVar18 >> 8),*(undefined1 *)(uVar18 + 0x63837c9a));
      }
      do {
        iVar6 = (int)uVar35;
        uVar18 = (uint)uVar32;
        iVar16 = uVar14 + iVar16;
        uVar33 = in_stack_ffffe020;
LAB_63824b92:
        auStackY_1ff8[0] = 0x63824b97;
        FUN_638242b0();
        (&uStack_1fc8)[iVar6] = in_MM6;
        uVar35 = 0xffffffff;
        bVar9 = *(byte *)(iVar6 + 0x63837c7f + uVar19 * 4);
        bVar8 = *(byte *)(iVar6 + 0x63837c81 + uVar19 * 4);
        uVar19 = CONCAT31((int3)(uVar19 >> 8),bVar8);
        uVar14 = iVar16 + (uint)bVar9;
        uVar32 = CONCAT44(uVar18,uVar18);
        (&uStack_1fb8)[iVar6] = in_MM5;
        in_MM6 = 0;
        iVar16 = aiStack_1cf0[bVar9 >> 4];
        in_stack_ffffe020 = uVar33;
      } while (bVar8 < 0xf0);
      uVar14 = iVar16 + uVar14;
      iVar16 = uVar14 - *(int *)((int)&uStackY_2068 + param_7 * 4);
      uVar17 = auStackY_1ff8[param_7 * 2 + -1];
      cVar28 = (char)iVar16 * '\x02';
      *(char *)(extraout_EDX_09 + 2) = cVar28;
      cVar37 = (char)((iVar16 + 0x7f) * uVar17 >> 0x18);
      *(char *)(extraout_EDX_09 + 3) = cVar37;
      if (((((*(uint *)((int)&uStackY_2058 + param_7 * 4) & 2) != 0) &&
           (*(char *)((int)&uStack_1fb0 + param_7 * 8 + 3) < cVar28)) &&
          (cVar28 < *(char *)((int)&uStack_1fb0 + param_7 * 8 + 1))) &&
         ((*(char *)((int)&uStack_1fb0 + param_7 * 8 + 7) < cVar37 &&
          (cVar37 < *(char *)((int)&uStack_1fb0 + param_7 * 8 + 5))))) {
        auStackY_1ff8[0] = 0x63824c20;
        uVar14 = FUN_638253c3();
        uVar18 = uVar19;
        cVar28 = extraout_CL;
        cVar37 = extraout_CH;
      }
      param_4 = *(uint **)((int)&uStackY_2048 + param_7 * 4 + 4);
      auStack_1fa0[2] = uVar18;
      *(char *)((int)&uStackY_2028 + param_7 * 8 + 4) = cVar28;
      auStack_1fa0[3] = uVar14;
      *(char *)((int)&uStackY_2028 + param_7 * 8 + 5) = cVar37;
      uVar14 = auStack_1fa0[2];
      in_stack_ffffe020 = uVar33;
      if ((((*(uint *)((int)&uStackY_2058 + param_7 * 4) & 4) == 0) ||
          (*(char *)((int)param_4 + 2) <=
           (char)(*(char *)((int)&uStack_1fb0 + param_7 * 8 + 3) + '\x02'))) ||
         ((char)(*(char *)((int)&uStack_1fb0 + param_7 * 8 + 1) + -2) <= *(char *)((int)param_4 + 2)
         )) {
LAB_63824c7e:
        uVar15 = (undefined2)*(undefined4 *)((int)&uStackY_2028 + param_7 * 8 + 4);
        if ((int)auStack_1fa0[0] < (int)auStack_1fa0[2]) {
LAB_63824c96:
          uVar14 = *(uint *)((int)&uStackY_2068 + param_7 * 4);
          uVar19 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
          uStack_1fc8 = uStack_1fa8;
          uStack_1fb8 = uStack_1fb0;
          goto LAB_63824cb2;
        }
LAB_63825109:
        *(undefined2 *)param_4 = uVar15;
        param_4[1] = auStack_1fa0[3];
        *(undefined2 *)(param_4 + 2) = uVar15;
        uVar19 = auStack_1fa0[3] + param_7 * 8;
        *(undefined2 *)(param_4 + param_7 * 2) = uVar15;
        param_4[param_7 * 2 + 1] = uVar19;
        *(undefined2 *)(param_4 + param_7 * 2 + 2) = uVar15;
        uVar14 = auStack_1fa0[3] + 8;
        param_4[3] = uVar14;
        param_4[param_7 * 2 + 3] = uVar19 + 8;
      }
      else {
        uVar19 = *param_4;
        if (((*(char *)((int)param_4 + 3) <=
              (char)(*(char *)((int)&uStack_1fb0 + param_7 * 8 + 7) + '\x02')) ||
            ((char)(*(char *)((int)&uStack_1fb0 + param_7 * 8 + 5) + -2) <=
             *(char *)((int)param_4 + 3))) ||
           ((int)auStack_1fa0[2] <= *(int *)((int)&uStackY_2018 + param_7 * 4))) goto LAB_63824c7e;
        uVar36 = psubusw(uVar32,in_stack_ffffe018);
        uVar35 = CONCAT44(in_stack_ffffe014,in_stack_ffffe010);
        uVar32 = psubusw(in_stack_ffffe018,uVar33);
        *(undefined8 *)(aiStackY_2050 + param_7 * 2) = uVar36;
        uVar33 = psubusw(uVar33,uVar35);
        *(undefined8 *)(&uStackY_2060 + param_7 * 2) = uVar32;
        (&uStackY_2058)[param_7] = uVar33;
        (&uStackY_2068)[param_7] = uVar35;
        uStack_1fc0._0_4_ = *(int *)((int)&uStackY_2068 + param_7 * 4);
        puVar21 = (undefined8 *)
                  ((int)uStack_1fc0 + ((int)*(char *)((int)param_4 + 2) >> 1) +
                  (((int)uVar19 >> 0x19) + 1) * param_7);
        iVar16 = *(int *)((int)&uStackY_2018 + param_7 * 4 + 4);
        puStack_1f88 = puVar21;
        uStack_1fc0._4_4_ = (uVar14 * 3 >> 2) - iVar16;
        iVar16 = (auStack_1fa0[0] * 3 >> 2) - iVar16;
        uVar14 = 10;
        if (iVar16 <= uStack_1fc0._4_4_) {
          uStack_1fc0._4_4_ = iVar16;
        }
        in_MM5 = uStack_1fb8 & 0xffffffff;
        if (uStack_1fc0._4_4_ < 1) goto LAB_63824c7e;
        uVar55 = uStack_1fc8 & 0xffffffff;
        uStack_1f80 = (uint)uStack_1fb8;
        uVar19 = (uint)param_4 >> 3;
        do {
          do {
            while( true ) {
              puVar24 = puVar23;
              uVar32 = *(undefined8 *)((int)puVar21 + param_7);
              uVar33 = *(undefined8 *)((int)puVar24 + param_7);
              uVar36 = *(undefined8 *)(param_7 * 3 + (int)puVar21);
              uVar33 = psllw(CONCAT26((short)((ulonglong)uVar32 >> 0x30) -
                                      (short)((ulonglong)uVar33 >> 0x30),
                                      CONCAT24((short)((ulonglong)uVar32 >> 0x20) -
                                               (short)((ulonglong)uVar33 >> 0x20),
                                               CONCAT22((short)((ulonglong)uVar32 >> 0x10) -
                                                        (short)((ulonglong)uVar33 >> 0x10),
                                                        (short)uVar32 - (short)uVar33))),8);
              uVar32 = *(undefined8 *)(param_7 * 3 + (int)puVar24);
              uVar34 = pmaddwd(uVar33,uVar33);
              uVar33 = *(undefined8 *)(param_7 * 5 + (int)puVar21);
              uVar36 = psllw(CONCAT26((short)((ulonglong)uVar36 >> 0x30) -
                                      (short)((ulonglong)uVar32 >> 0x30),
                                      CONCAT24((short)((ulonglong)uVar36 >> 0x20) -
                                               (short)((ulonglong)uVar32 >> 0x20),
                                               CONCAT22((short)((ulonglong)uVar36 >> 0x10) -
                                                        (short)((ulonglong)uVar32 >> 0x10),
                                                        (short)uVar36 - (short)uVar32))),8);
              uVar32 = *(undefined8 *)(param_7 * 5 + (int)puVar24);
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
              uVar32 = CONCAT26((short)((ulonglong)uVar36 >> 0x30) -
                                (short)((ulonglong)uVar32 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar36 >> 0x20) -
                                         (short)((ulonglong)uVar32 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar36 >> 0x10) -
                                                  (short)((ulonglong)uVar32 >> 0x10),
                                                  (short)uVar36 - (short)uVar32)));
              uVar47 = pmaddwd(uVar33,uVar33);
              uVar51 = pmaddwd(uVar32,uVar32);
              uVar32 = *(undefined8 *)((int)puVar21 + param_7 * 6);
              uVar36 = paddusw(uVar34,uVar46);
              uVar33 = *(undefined8 *)((int)puVar24 + param_7 * 6);
              uVar33 = CONCAT26((short)((ulonglong)uVar32 >> 0x30) -
                                (short)((ulonglong)uVar33 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar32 >> 0x20) -
                                         (short)((ulonglong)uVar33 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar32 >> 0x10) -
                                                  (short)((ulonglong)uVar33 >> 0x10),
                                                  (short)uVar32 - (short)uVar33)));
              uVar36 = paddusw(uVar36,uVar47);
              uVar32 = *(undefined8 *)(param_7 * 7 + (int)puVar21);
              uVar47 = pmaddwd(uVar33,uVar33);
              uVar33 = *(undefined8 *)(param_7 * 7 + (int)puVar24);
              uVar34 = paddusw(uVar36,uVar51);
              uVar36 = *(undefined8 *)((int)puVar21 + param_7 * 2);
              uVar33 = psllw(CONCAT26((short)((ulonglong)uVar32 >> 0x30) -
                                      (short)((ulonglong)uVar33 >> 0x30),
                                      CONCAT24((short)((ulonglong)uVar32 >> 0x20) -
                                               (short)((ulonglong)uVar33 >> 0x20),
                                               CONCAT22((short)((ulonglong)uVar32 >> 0x10) -
                                                        (short)((ulonglong)uVar33 >> 0x10),
                                                        (short)uVar32 - (short)uVar33))),8);
              uVar32 = *(undefined8 *)((int)puVar24 + param_7 * 2);
              uVar46 = CONCAT26((short)((ulonglong)uVar36 >> 0x30) -
                                (short)((ulonglong)uVar32 >> 0x30),
                                CONCAT24((short)((ulonglong)uVar36 >> 0x20) -
                                         (short)((ulonglong)uVar32 >> 0x20),
                                         CONCAT22((short)((ulonglong)uVar36 >> 0x10) -
                                                  (short)((ulonglong)uVar32 >> 0x10),
                                                  (short)uVar36 - (short)uVar32)));
              uVar36 = pmaddwd(uVar33,uVar33);
              uVar32 = *(undefined8 *)((int)puVar21 + param_7 * 4);
              uVar46 = pmaddwd(uVar46,uVar46);
              uVar33 = *(undefined8 *)((int)puVar24 + param_7 * 4);
              uVar33 = CONCAT26((short)((ulonglong)uVar32 >> 0x30) -
                                (short)((ulonglong)uVar33 >> 0x30),
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
              iVar16 = ((uVar19 & 0x7fffffff) >> 0x1d) + param_7;
              uVar33 = psubusw(uVar55,uVar35 >> 0x30);
              uVar32 = (&uStackY_2068)[iVar16];
              uVar18 = -(uint)((int)uVar33 == 0);
              uVar35 = (ulonglong)uVar18;
              uVar55 = psubusw(uVar55,uVar33);
              in_MM6 = 0;
              (&uStackY_2070)[iVar16] = uVar55;
              bVar9 = *(byte *)(uVar18 + 0x63837c7f + uVar14 * 4);
              bVar8 = *(byte *)(uVar18 + 0x63837c81 + uVar14 * 4);
              uVar14 = (uint)bVar8;
              if (0xef < bVar8) break;
              puVar21 = (undefined8 *)((int)puVar21 + aiStack_1cf0[bVar9 >> 4] + (uint)bVar9);
              puVar23 = puVar24;
            }
            iVar16 = (int)puVar21 + aiStack_1cf0[bVar9 >> 4] + (uint)bVar9;
            auStackY_1ff8[0] = uVar19;
            uVar14 = (uint)uVar55;
            if ((*(uint *)((int)&uStackY_2058 + param_7 * 4) & 2) == 0) {
              uVar10 = CONCAT11((char)(((iVar16 - (int)uStack_1fc0) + 0x7f) *
                                       auStackY_1ff8[param_7 * 2 + -1] >> 0x18),
                                ((char)iVar16 - (char)(int)uStack_1fc0) * '\x02');
            }
            else {
              puVar23 = (undefined8 *)(iVar16 + param_7);
              if (puStack_1f88 == puVar23) {
                uStack_1f84 = uVar14;
              }
              else {
                uStackY_2000._4_4_ = 0x63824e8a;
                uStack_1f84 = uVar14;
                FUN_63825502();
                iVar16 = iVar16 + 8 + param_7 * 8;
                puVar24 = puVar24 + param_7 + 1;
                puVar23 = extraout_ECX_01;
              }
              cVar28 = ((char)puVar23 - (char)(int)uStack_1fc0) * '\x02';
              cVar37 = (char)(((iVar16 - (int)uStack_1fc0) + 0x7f) * auStackY_1ff8[param_7 * 2 + -1]
                             >> 0x18);
              uVar10 = CONCAT11(cVar37,cVar28);
              uVar19 = (uint)uVar10;
              uVar17 = (uint)uVar32 & 0xffff;
              uVar18 = (uint)uVar32 >> 0x10;
              uVar7 = (uint)((ulonglong)uVar32 >> 0x20);
              if (uVar17 < uVar18) {
                if ((int)uStack_1f84 <= (int)uVar17) goto LAB_63824fd0;
                uVar14 = uVar7 & 0xffff;
                if (uVar14 < uVar7 >> 0x10) {
                  cVar37 = SBORROW4(uVar14,uStack_1f84);
                  cVar28 = (int)(uVar14 - uStack_1f84) < 0;
                  bVar26 = uVar14 == uStack_1f84;
                  if ((int)uVar14 < (int)uStack_1f84) {
                    uStackY_2000._4_4_ = 0x63824fae;
                    uVar7 = FUN_63825670();
                    uVar15 = (undefined2)extraout_ECX_05;
                    puVar24 = puVar24 + param_7 + 1;
                    iVar16 = iVar16 + 8 + param_7 * 8;
                    uVar19 = extraout_ECX_05;
                    uVar17 = extraout_EDX_13;
                    if (bVar26 || cVar37 != cVar28) {
                      if ((int)uVar7 <= (int)extraout_EDX_13) goto LAB_63824fc8;
                    }
                    else if ((int)uVar14 < (int)extraout_EDX_13) {
                      uVar10 = CONCAT11((char)(extraout_ECX_05 >> 8) + '\x01',
                                        (char)extraout_ECX_05 + '\x01');
                      goto LAB_6382501f;
                    }
                  }
                }
                else if ((int)(uVar7 >> 0x10) < (int)uStack_1f84) {
                  cVar37 = SBORROW4(iVar16,param_7);
                  iVar16 = iVar16 - param_7;
                  cVar28 = iVar16 < 0;
                  bVar26 = iVar16 == 0;
                  uStackY_2000._4_4_ = 0x63824f74;
                  uVar7 = FUN_6382566e();
                  uVar15 = (undefined2)extraout_ECX_04;
                  iVar16 = iVar16 + 8 + param_7 * 9;
                  puVar24 = puVar24 + param_7 + 1;
                  uVar19 = extraout_ECX_04;
                  uVar17 = extraout_EDX_12;
                  if (bVar26 || cVar37 != cVar28) {
                    if ((int)uVar7 <= (int)extraout_EDX_12) goto LAB_63824f0b;
                  }
                  else if ((int)uVar14 < (int)extraout_EDX_12) {
                    uVar10 = CONCAT11((char)(extraout_ECX_04 >> 8) + -1,
                                      (char)extraout_ECX_04 + '\x01');
                    iVar16 = iVar16 - param_7;
                    goto LAB_6382501f;
                  }
                }
                uVar10 = (ushort)CONCAT31((int3)(uVar19 >> 8),(char)uVar19 + '\x01');
                uVar14 = uVar17;
              }
              else if ((int)uVar18 < (int)uStack_1f84) {
                uVar14 = uVar7 & 0xffff;
                if (uVar14 < uVar7 >> 0x10) {
                  if ((int)uVar14 < (int)uStack_1f84) {
                    cVar37 = SBORROW4(iVar16,1);
                    cVar28 = iVar16 + -1 < 0;
                    bVar26 = iVar16 == 1;
                    uStackY_2000._4_4_ = 0x63824f24;
                    uVar7 = FUN_63825670();
                    uVar15 = (undefined2)extraout_ECX_03;
                    puVar24 = puVar24 + param_7 + 1;
                    iVar16 = iVar16 + 8 + param_7 * 8;
                    uVar19 = extraout_ECX_03;
                    uVar18 = extraout_EDX_11;
                    if (bVar26 || cVar37 != cVar28) {
                      if ((int)extraout_EDX_11 < (int)uVar7) goto LAB_63824f46;
LAB_63824fc8:
                      uVar10 = CONCAT11((char)((ushort)uVar15 >> 8) + '\x01',(char)uVar15);
                      uVar14 = uVar7;
                    }
                    else {
                      if ((int)extraout_EDX_11 <= (int)uVar14) goto LAB_63824f46;
                      iVar16 = iVar16 + -1;
                      uVar10 = CONCAT11((char)(extraout_ECX_03 >> 8) + '\x01',
                                        (char)extraout_ECX_03 + -1);
                    }
                    goto LAB_6382501f;
                  }
                }
                else if ((int)(uVar7 >> 0x10) < (int)uStack_1f84) {
                  iVar16 = iVar16 - param_7;
                  cVar37 = SBORROW4(iVar16,1);
                  cVar28 = iVar16 + -1 < 0;
                  bVar26 = iVar16 == 1;
                  uStackY_2000._4_4_ = 0x63824ee7;
                  uVar7 = FUN_6382566e();
                  uVar15 = (undefined2)extraout_ECX_02;
                  iVar16 = iVar16 + 8 + param_7 * 9;
                  puVar24 = puVar24 + param_7 + 1;
                  uVar19 = extraout_ECX_02;
                  uVar18 = extraout_EDX_10;
                  if (bVar26 || cVar37 != cVar28) {
                    if ((int)extraout_EDX_10 < (int)uVar7) goto LAB_63824f46;
LAB_63824f0b:
                    uVar10 = CONCAT11((char)((ushort)uVar15 >> 8) + -1,(char)uVar15);
                    iVar16 = iVar16 - param_7;
                    uVar14 = uVar7;
                  }
                  else {
                    if ((int)extraout_EDX_10 <= (int)uVar14) goto LAB_63824f46;
                    uVar10 = CONCAT11((char)(extraout_ECX_02 >> 8) + -1,(char)extraout_ECX_02 + -1);
                    iVar16 = (iVar16 + -1) - param_7;
                  }
                  goto LAB_6382501f;
                }
LAB_63824f46:
                uVar10 = (ushort)CONCAT31((int3)(uVar19 >> 8),(char)uVar19 + -1);
                iVar16 = iVar16 + -1;
                uVar14 = uVar18;
              }
              else {
LAB_63824fd0:
                uVar19 = uVar7 & 0xffff;
                uVar7 = uVar7 >> 0x10;
                uVar14 = uStack_1f84;
                if (uVar7 < uVar19) {
                  if ((int)uVar7 < (int)uStack_1f84) {
                    uVar10 = CONCAT11(cVar37 + -1,cVar28);
                    iVar16 = iVar16 - param_7;
                    uVar14 = uVar7;
                  }
                }
                else if ((int)uVar19 < (int)uStack_1f84) {
                  uVar10 = CONCAT11(cVar37 + '\x01',cVar28);
                  uVar14 = uVar19;
                }
              }
            }
LAB_6382501f:
            iVar6 = uStack_1fc0._4_4_;
            uVar18 = auStackY_1ff8[0];
            *(int *)(auStackY_1ff8[0] * 8 + 4) = iVar16;
            *(char *)(auStackY_1ff8[0] * 8) = (char)uVar10;
            *(char *)(auStackY_1ff8[0] * 8 + 1) = (char)(uVar10 >> 8);
            iVar20 = uStack_1fc0._4_4_ - uVar14;
            *(uint *)(&uStackY_2070 + ((auStackY_1ff8[0] & 0x7fffffff) >> 0x1d) + param_7) = uVar14;
            iVar16 = (int)uStack_1fc0;
            if (iVar6 < (int)uVar14) {
              param_4 = *(uint **)((int)&uStackY_2048 + param_7 * 4 + 4);
              if ((int)auStack_1fa0[0] <= (int)auStack_1fa0[2]) goto LAB_63824c96;
              uVar15 = (undefined2)*(undefined4 *)((int)&uStackY_2028 + param_7 * 8 + 4);
              goto LAB_63825109;
            }
            uStack_1fc0._4_4_ = iVar20;
            puVar21 = puStack_1f88 + 1;
            uStack_1fc0._0_4_ = (int)uStack_1fc0 + 8;
            uVar19 = uVar18 + 0xa0000001;
            bVar26 = -1 < (int)uVar19;
            uVar55 = (ulonglong)uStack_1f80;
            uVar14 = 10;
            puVar23 = puVar24 + 1;
          } while (uVar18 < 0x5fffffff);
          puVar21 = puStack_1f88 + param_7;
          puStack_1f88 = puVar21;
          in_MM5 = (ulonglong)uStack_1fc8._4_4_;
          uVar55 = uStack_1fb8 >> 0x20;
          uStack_1f80 = uStack_1fc8._4_4_;
          uVar19 = param_7 + -2 + uVar19;
          uStack_1fc0._0_4_ = iVar16 + -8 + param_7 * 8;
          puVar23 = puVar24 + param_7 + -1;
        } while (bVar26);
        param_4 = *(uint **)((int)&uStackY_2048 + param_7 * 4 + 4);
        uStack_1fc8 = CONCAT44(uStack_1fc8._4_4_,(int)(&uStackY_2070)[param_7]);
        uStack_1fc8 = CONCAT44(*(undefined4 *)(&uStackY_2058 + param_7),
                               (int)(&uStackY_2070)[param_7]);
        uVar14 = (&uStackY_2060)[param_7 * 2];
        uStack_1fb8 = CONCAT44(uVar14,*(undefined4 *)(&uStackY_2068 + param_7));
        uVar19 = *param_4 ^ param_4[2] | param_4[2] ^ param_4[param_7 * 2] |
                 param_4[param_7 * 2] ^ param_4[param_7 * 2 + 2];
        if ((char)uVar19 != '\0' || (char)(uVar19 >> 8) != '\0') {
          *(undefined1 *)((int)param_4 + param_7 * 8 + 3) = 0x41;
        }
      }
LAB_63825130:
      uVar19 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
      if ((uVar19 & 0x2000) == 0) {
        uVar14 = param_4[1];
        uVar38 = 0x81;
        if ((uVar19 & 0x800) == 0) {
          *(uint *)(&stack0xffffe014 + param_7 * 8) = *param_4;
          uVar38 = *(undefined1 *)((int)param_4 + param_7 * 8 + 3);
          if ((uVar19 & 0x200) == 0) {
            if ((uVar19 & 0xc00) != 0) goto LAB_638251ce;
            goto LAB_6382529e;
          }
        }
        uVar14 = (uint)uStack_1fc8 + uStack_1fc8._4_4_ + (uint)uStack_1fb8 + uStack_1fb8._4_4_;
        uVar18 = *(uint *)(&uStackY_2000 + param_7);
        if ((int)uVar18 <= (int)uVar14) {
          uStack_1fc8 = *(ulonglong *)(&stack0xffffe020 + param_7 * 8);
          uStack_1fb8 = *(ulonglong *)(&stack0xffffe018 + param_7 * 8);
          uVar14 = *(uint *)(&stack0xffffe010 + param_7 * 8);
          param_4[1] = uVar14;
          uVar14 = uVar14 + 8;
          param_4[3] = uVar14;
          uVar19 = *(uint *)(&stack0xffffe014 + param_7 * 8);
          uVar15 = (undefined2)uVar19;
          *(undefined2 *)(param_4 + 2) = uVar15;
          *param_4 = uVar19;
          *(undefined2 *)(param_4 + param_7 * 2) = uVar15;
          uVar14 = uVar14 + param_7 * 8;
          param_4[param_7 * 2 + 3] = uVar14;
          *(undefined2 *)(param_4 + param_7 * 2 + 2) = uVar15;
          param_4[param_7 * 2 + 1] = uVar14 - 8;
          uVar38 = 1;
          uVar14 = uVar18;
        }
        *(undefined1 *)((int)param_4 + param_7 * 8 + 3) = uVar38;
        uVar19 = *(uint *)(&uStackY_2010 + param_7);
        if ((int)uVar19 <= (int)uVar14) {
          pcVar1 = (char *)((int)&uStackY_2028 + param_7 * 4);
          *pcVar1 = *pcVar1 + '\x01';
          puVar23 = *(undefined8 **)(&uStackY_2028 + param_7);
          goto LAB_63825aae;
        }
      }
      else {
        iVar16 = *(int *)(&uStackY_2000 + param_7);
        *(undefined1 *)((int)param_4 + param_7 * 8 + 3) = 0x81;
        if (iVar16 <= (int)((uint)uStack_1fc8 + uStack_1fc8._4_4_ + (uint)uStack_1fb8 +
                           uStack_1fb8._4_4_)) {
          uStack_1fc8 = *(ulonglong *)(&stack0xffffe020 + param_7 * 8);
          uStack_1fb8 = *(ulonglong *)(&stack0xffffe018 + param_7 * 8);
          uVar14 = *(uint *)(&stack0xffffe010 + param_7 * 8);
          param_4[1] = uVar14;
          uVar14 = uVar14 + 8;
          param_4[3] = uVar14;
          *param_4 = 0;
          *(undefined2 *)(param_4 + 2) = 0;
          uVar14 = uVar14 + param_7 * 8;
          param_4[param_7 * 2 + 3] = uVar14;
          uVar14 = uVar14 - 8;
          *(undefined2 *)(param_4 + param_7 * 2) = 0;
          param_4[param_7 * 2 + 1] = uVar14;
          *(undefined2 *)(param_4 + param_7 * 2 + 2) = 0;
          *(undefined1 *)((int)param_4 + param_7 * 8 + 3) = 1;
        }
      }
LAB_6382529e:
      uVar18 = *(uint *)((int)&uStackY_2028 + param_7 * 4 + 4);
      param_4 = *(uint **)((int)&uStackY_2048 + param_7 * 4 + 4);
      uVar19 = uStack_1fc8._4_4_ + uStack_1fb8._4_4_ + (uint)uStack_1fb8 + (uint)uStack_1fc8;
      uVar17 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
      uVar7 = CONCAT31((int3)(uStack_1fc8 >> 8),*(undefined1 *)((int)param_4 + param_7 * 8 + 10)) &
              0xfffffff0;
      bVar9 = (byte)uVar7 |
              (((uVar18 < uStack_1fc8._4_4_) * '\x02' + (uVar18 < uStack_1fb8._4_4_)) * '\x02' +
              (uVar18 < (uint)uStack_1fb8)) * '\x02' + (uVar18 < (uint)uStack_1fc8);
      uVar18 = CONCAT31((int3)(uVar7 >> 8),bVar9);
      *(byte *)((int)param_4 + param_7 * 8 + 10) = bVar9;
      if ((uVar17 & 0x20000) != 0) {
        puVar23 = *(undefined8 **)(&uStackY_2028 + param_7);
        auStack_1fa0[param_7 * 2 + 3] = uVar19;
        if (*(uint *)((int)&uStackY_2010 + param_7 * 4) <= uVar19) {
LAB_63825aae:
          uVar17 = CONCAT31((int3)(uVar18 >> 8),1);
          uVar32 = *puVar23;
          iVar16 = uVar19 - *(int *)((int)&uStackY_2010 + param_7 * 4 + 4);
LAB_63825abe:
          do {
            uVar33 = *(undefined8 *)((int)puVar23 + param_7 * 2);
            uVar36 = *(undefined8 *)((int)puVar23 + param_7 * 4);
            sVar48 = (short)((ulonglong)uVar33 >> 0x10);
            sVar49 = (short)((ulonglong)uVar33 >> 0x20);
            sVar50 = (short)((ulonglong)uVar33 >> 0x30);
            uVar34 = *(undefined8 *)((int)puVar23 + param_7 * 6);
            uVar35 = CONCAT26((short)((ulonglong)uVar32 >> 0x30) + sVar50,
                              CONCAT24((short)((ulonglong)uVar32 >> 0x20) + sVar49,
                                       CONCAT22((short)((ulonglong)uVar32 >> 0x10) + sVar48,
                                                (short)uVar32 + (short)uVar33))) & 0xff00ff00ff00ff;
            uVar32 = *(undefined8 *)(param_7 * 3 + (int)puVar23);
            sVar59 = (short)((ulonglong)uVar34 >> 0x10);
            sVar60 = (short)((ulonglong)uVar34 >> 0x20);
            sVar62 = (short)((ulonglong)uVar34 >> 0x30);
            uVar55 = CONCAT26((short)((ulonglong)uVar36 >> 0x30) + sVar62,
                              CONCAT24((short)((ulonglong)uVar36 >> 0x20) + sVar60,
                                       CONCAT22((short)((ulonglong)uVar36 >> 0x10) + sVar59,
                                                (short)uVar36 + (short)uVar34))) & 0xff00ff00ff00ff;
            uVar36 = *(undefined8 *)((int)puVar23 + param_7);
            uVar46 = *(undefined8 *)((int)puVar23 + param_7 * 5);
            uVar47 = *(undefined8 *)((int)puVar23 + param_7 * 7);
            uVar51 = *(undefined8 *)((int)puVar23 + param_7 * 4);
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
                                                        ((ushort)((short)((ulonglong)uVar36 >> 0x10)
                                                                 + (short)((ulonglong)uVar32 >> 0x10
                                                                          )) >> 8) +
                                                        ((ushort)((short)((ulonglong)uVar46 >> 0x10)
                                                                 + (short)((ulonglong)uVar47 >> 0x10
                                                                          )) >> 8),
                                                        (short)uVar35 + (short)uVar55 +
                                                        ((ushort)((short)uVar36 + (short)uVar32) >>
                                                        8) + ((ushort)((short)uVar46 + (short)uVar47
                                                                      ) >> 8)))),0xffffffffffffffff)
            ;
            uVar52 = psllw(uVar32,8);
            uVar46 = psllw(0xffffffffffffffff,3);
            uVar32 = packssdw(uVar36,uVar36);
            uVar32 = pmaddwd(uVar32,uVar46);
            uVar58 = psllw(*(undefined8 *)((int)puVar23 + param_7 * 5),8);
            uVar63 = psllw(uVar47,8);
            uVar36 = psllw(*(undefined8 *)((int)puVar23 + param_7),8);
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
                              CONCAT24(sVar49 - sVar43,
                                       CONCAT22(sVar48 - sVar40,(short)uVar33 - sVar30)));
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
                              CONCAT24(sVar60 - sVar43,
                                       CONCAT22(sVar59 - sVar40,(short)uVar34 - sVar30)));
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
            bVar8 = (byte)uVar17;
            uVar33 = paddusw(uVar33,uVar36);
            uVar32 = paddusw(uVar32,uVar33);
            uVar32 = paddusw(uVar32,CONCAT44((int)uVar32,(int)uVar33));
            bVar9 = (byte)((ulonglong)uVar32 >> 0x38);
            uVar10 = (ushort)((ulonglong)uVar32 >> 0x30);
            if (2 < bVar8) {
              puVar23 = puVar23 + -param_7;
              uVar18 = (uint)uVar10;
              if (bVar8 == 3) {
                if (iVar16 - uVar18 != 0 && (int)uVar18 <= iVar16) {
                  pbVar3 = (byte *)((int)&uStackY_2028 + param_7 * 4);
                  *pbVar3 = *pbVar3 >> 1;
                  iVar6 = *(int *)((int)&uStack_1fc8 + param_7 * 8 + 4);
                  *(undefined1 *)((int)param_4 + param_7 * 8 + 3) = 0;
                  *(undefined1 *)((int)param_4 + param_7 * 8 + 10) = 0x7f;
                  *(uint *)((int)&uStack_1fc8 + param_7 * 8 + 4) = uVar14 + uVar18 + iVar6;
                  iVar6 = aiStack_ff4[0];
                  *(undefined2 *)(param_4 + 2) = 0;
                  *param_4 = 0;
                  *(undefined2 *)(param_4 + param_7 * 2) = 0;
                  uVar14 = *(uint *)((int)&uStackY_2068 + param_7 * 4);
                  *(undefined2 *)(param_4 + param_7 * 2 + 2) = 0;
                  uVar19 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
                  param_4[1] = uVar14;
                  param_4[3] = uVar14 + 8;
                  uVar14 = uVar14 + param_7 * 8;
                  param_4[param_7 * 2 + 1] = uVar14;
                  param_4[param_7 * 2 + 3] = uVar14 + 8;
                  if ((uVar19 & 1) != 0) {
                    *(uint *)((int)&uStackY_2058 + param_7 * 4) = uVar19 ^ 1;
                    aiStack_ff4[0] = 0x63825c6b;
                    FUN_638264d9(iVar6,(int)(param_4 + -4));
                    aiStack_ff4[0] = extraout_ECX_06;
                    param_4 = extraout_EDX_18;
                  }
                  if ((*(uint *)((int)&uStackY_2058 + param_7 * 4) & 0x40) == 0) {
                    auStackY_1ff8[0] = 0x63825c7d;
                    FUN_63826de0();
                    cVar28 = (char)(iVar16 - uVar18);
                    *(char *)(extraout_EDX_19 + 10 + param_7 * 8) =
                         *(char *)(extraout_EDX_19 + 10 + param_7 * 8) - cVar28;
                    auStackY_1ff8[0] = 0x63825c93;
                    FUN_63826de0();
                    *(char *)(extraout_EDX_20 + 10 + param_7 * 8) =
                         *(char *)(extraout_EDX_20 + 10 + param_7 * 8) + cVar28 * -2;
                    auStackY_1ff8[0] = 0x63825cab;
                    FUN_63826de0();
                    *(char *)(extraout_EDX_21 + 10 + param_7 * 8) =
                         *(char *)(extraout_EDX_21 + 10 + param_7 * 8) + cVar28 * -8;
                    auStackY_1ff8[0] = 0x63825cc5;
                    FUN_63826de0();
                    bVar9 = cVar28 << 6;
                    param_4 = extraout_EDX_22;
                  }
                  else {
                    bVar9 = *(byte *)((int)param_4 + param_7 * 8 + 2);
                    bVar8 = *(byte *)(iStack_1d9c + 3 + (int)param_4);
                    aiStack_ff4[param_7 * 2] =
                         -(uint)((byte)((*(byte *)((int)param_4 + param_7 * 8 + -0xd) & 1) + 1) ==
                                (bVar9 & 1));
                    auStackY_1ff8[param_7 * 2] = -(uint)((bVar8 & 1) == 0 && (bVar9 >> 1 & 2) == 2);
                    iVar16 = *(int *)(&uStack_1fc8 + param_7);
                    aiStack_1fd8[param_7 * 2] = iVar16;
                    auStackY_1ff8[0] = param_7 * 3;
                    aiStack_1fd8[param_7 * 2 + 1] = iVar16 + 0x604;
                    *(int *)(&uStack_1fd0 + param_7) = iVar16 + 0xc08;
                    uStackY_2000._4_4_ = 0x63825d38;
                    FUN_63827120();
                    auStackY_1ff8[0] = 0x63825d4d;
                    FUN_6382627c();
                    auStackY_1ff8[0] = param_7 * 3;
                    uStackY_2000._4_4_ = 0x63825d5e;
                    FUN_63827120();
                    psllw(1,10);
                    auStackY_1ff8[0] = 0x63825db3;
                    FUN_638262d5();
                    auStackY_1ff8[0] = param_7 * 3;
                    uStackY_2000._4_4_ = 0x63825dc4;
                    FUN_63827120();
                    uVar35 = psllw(1,10);
                    auStackY_1ff8[0] = 0x63825e1f;
                    FUN_638262d5();
                    auStackY_1ff8[0] = param_7 * 3;
                    uStackY_2000._4_4_ = 0x63825e31;
                    FUN_63827120();
                    auStackY_1ff8[0] = 0x63825e5d;
                    FUN_638262d5();
                    bVar9 = *(byte *)((int)&uStackY_2058 + param_7 * 4 + 3);
                    bVar8 = pbStack_1d90[-1];
                    *(undefined4 *)((int)&uStackY_2040 + param_7 * 4 + 4) =
                         *(undefined4 *)(&uStack_1fc8 + param_7);
                    *(int *)((int)&uStackY_2038 + param_7 * 4) = aiStack_1fd8[param_7 * 2 + 1];
                    uVar12 = *(undefined4 *)(&DAT_63837060 + (uint)bVar8 * 8 + (bVar9 & 4));
                    *(int *)((int)&uStackY_2038 + param_7 * 4 + 4) = (int)(&uStack_1fd0)[param_7];
                    uVar15 = (undefined2)((uint)uVar12 >> 0x10);
                    *(ulonglong *)((int)&uStackY_2070 + param_7 * 4) =
                         CONCAT44((int)(CONCAT26(uVar15,CONCAT24(uVar15,uVar12)) >> 0x20),
                                  CONCAT22((short)uVar12,(short)uVar12));
                    uStackY_2000._4_4_ = 0x63825ead;
                    auStackY_1ff8[0] = param_7 * 3;
                    FUN_63827120();
                    auStackY_1ff8[0] = 0x63825ec2;
                    FUN_6382627c();
                    auStackY_1ff8[0] = param_7 * 3;
                    uStackY_2000._4_4_ = 0x63825edc;
                    FUN_63827120();
                    auStackY_1ff8[0] = 0x63825ef4;
                    FUN_6382627c();
                    if ((*(uint *)((int)&uStackY_2058 + param_7 * 4) & 0x100000) == 0) {
                      auStackY_1ff8[0] = 0x63825f16;
                      uVar32 = FUN_63826497(extraout_ECX_07,extraout_EDX_23);
                      (&iStackY_205c)[param_7] = (int)uVar32 + -1;
                      auStackY_1ff8[0] = 0x63825f2e;
                      uVar32 = FUN_63826497(extraout_ECX_08,(int)((ulonglong)uVar32 >> 0x20));
                      uVar12 = (undefined4)((ulonglong)uVar32 >> 0x20);
                      if ((int)uVar32 < (&iStackY_205c)[param_7]) {
                        (&iStackY_205c)[param_7] = (int)uVar32;
                        auStackY_1ff8[0] = 0x6382609e;
                        uVar32 = FUN_63826497(extraout_ECX_09,uVar12);
                        param_4 = (uint *)((ulonglong)uVar32 >> 0x20);
                        iVar16 = *(int *)((int)&uStackY_2068 + param_7 * 4) + param_7 * 8;
                        if ((int)uVar32 < (&iStackY_205c)[param_7]) goto LAB_63826198;
                        puVar22 = (undefined4 *)
                                  (*(int *)((int)&uStackY_2038 + param_7 * 4) + -0x604);
                        iVar16 = iVar16 + param_7 * 4;
                        *(undefined4 **)(&uStack_1fc8 + param_7) = puVar22;
                        puVar11 = (undefined4 *)aiStack_1fd8[param_7 * 2];
                        *(ulonglong *)(iVar16 + -0x20) =
                             ~uVar35 & uStack_1d80 | uStack_1d58 & uVar35;
                        *(undefined8 *)(iVar16 + -0x18) = uStack_1d78;
                        *(ulonglong *)(iVar16 + param_7 * 4) = uStack_1d58;
                        *(undefined8 *)(iVar16 + 8 + param_7 * 4) = uStack_1d50;
                        *(ulonglong *)(iVar16 + -0x10) =
                             ~uVar35 & uStack_1d38 | uStack_1d10 & uVar35;
                        *(undefined8 *)(iVar16 + -8) = uStack_1d30;
                        *(ulonglong *)(iVar16 + param_7 * 8) = uStack_1d10;
                        *(undefined8 *)(iVar16 + 8 + param_7 * 8) = uStack_1d08;
                        uVar32 = *(undefined8 *)((int)aiStackY_2050 + param_7 * 6);
                        uVar57 = ~uVar35 & *(ulonglong *)((int)&uStackY_2058 + param_7 * 6) |
                                 *(ulonglong *)((int)&uStackY_2030 + param_7 * 6) & uVar35;
                        uVar55 = *(ulonglong *)((int)&uStack_1fc8 + param_7 * 6);
                        uVar33 = *(undefined8 *)((int)&uStack_1fc0 + param_7 * 6);
                        in_MM6 = *(ulonglong *)((int)&uStackY_2000 + param_7 * 6);
                        in_MM5 = *(ulonglong *)((int)&uStackY_2020 + param_7 * 6);
                        uVar56 = ~uVar35 & *(ulonglong *)((int)&uStackY_2028 + param_7 * 6) |
                                 uVar35 & in_MM6;
                        uVar36 = *(undefined8 *)((int)auStackY_1ff8 + param_7 * 6);
                        do {
                          *puVar11 = puVar11[0x181];
                          puVar11[1] = puVar11[0x182];
                          puVar11 = puVar11 + 2;
                        } while (puVar11 < puVar22);
                        puVar11 = *(undefined4 **)((int)&uStackY_2038 + param_7 * 4);
                        puVar22 = (undefined4 *)aiStack_1fd8[param_7 * 2 + 1];
                        bVar9 = *(byte *)((int)&uStackY_2060 + param_7 * 4 + 1);
                        uVar38 = 0x20;
                      }
                      else {
                        auStackY_1ff8[0] = 0x63825f4d;
                        uVar32 = FUN_63826497(extraout_ECX_09,uVar12);
                        param_4 = (uint *)((ulonglong)uVar32 >> 0x20);
                        iVar16 = *(int *)((int)&uStackY_2068 + param_7 * 4) + param_7 * 8;
                        if ((&iStackY_205c)[param_7] <= (int)uVar32) goto LAB_63825f64;
LAB_63826198:
                        puVar22 = (undefined4 *)
                                  (*(int *)((int)&uStackY_2038 + param_7 * 4 + 4) + -0xc08);
                        iVar16 = iVar16 + param_7 * 4;
                        *(undefined4 **)(&uStack_1fc8 + param_7) = puVar22;
                        puVar11 = (undefined4 *)aiStack_1fd8[param_7 * 2];
                        *(ulonglong *)(iVar16 + -0x20) = uStack_1d70;
                        *(undefined8 *)(iVar16 + -0x18) = uStack_1d68;
                        *(ulonglong *)(iVar16 + param_7 * 4) =
                             ~uVar35 & uStack_1d48 | uStack_1d70 & uVar35;
                        *(undefined8 *)(iVar16 + 8 + param_7 * 4) = uStack_1d40;
                        *(ulonglong *)(iVar16 + -0x10) = uStack_1d28;
                        *(undefined8 *)(iVar16 + -8) = uStack_1d20;
                        *(ulonglong *)(iVar16 + param_7 * 8) =
                             ~uVar35 & uStack_1d00 | uStack_1d28 & uVar35;
                        *(undefined8 *)(iVar16 + 8 + param_7 * 8) = uStack_1cf8;
                        uVar57 = *(ulonglong *)((int)&uStackY_2048 + param_7 * 6);
                        uVar32 = *(undefined8 *)((int)&uStackY_2040 + param_7 * 6);
                        uVar33 = *(undefined8 *)((int)&uStack_1fb0 + param_7 * 6);
                        uVar55 = ~uVar35 & *(ulonglong *)((int)&uStack_1fb8 + param_7 * 6) |
                                 *(ulonglong *)(&stack0xffffe020 + param_7 * 6) & uVar35;
                        uVar56 = *(ulonglong *)((int)&uStackY_2018 + param_7 * 6);
                        in_MM5 = *(ulonglong *)((int)&uStackY_2010 + param_7 * 6);
                        in_MM6 = ~uVar35 & *(ulonglong *)(&stack0xffffe010 + param_7 * 6) |
                                 uVar35 & uVar56;
                        uVar36 = *(undefined8 *)(&stack0xffffe018 + param_7 * 6);
                        do {
                          *puVar11 = puVar11[0x302];
                          puVar11[1] = puVar11[0x303];
                          puVar11 = puVar11 + 2;
                        } while (puVar11 < puVar22);
                        puVar11 = *(undefined4 **)((int)&uStackY_2038 + param_7 * 4 + 4);
                        puVar22 = *(undefined4 **)(&uStack_1fd0 + param_7);
                        bVar9 = *(byte *)((int)&uStackY_2060 + param_7 * 4 + 2);
                        uVar38 = 0x30;
                      }
                    }
                    else {
                      iVar16 = *(int *)((int)&uStackY_2068 + param_7 * 4) + param_7 * 8;
                      param_4 = extraout_EDX_23;
LAB_63825f64:
                      iVar16 = iVar16 + param_7 * 4;
                      bVar9 = *(byte *)(&uStackY_2060 + param_7);
                      *(ulonglong *)(iVar16 + -0x20) = ~uVar35 & uStack_1d80 | uStack_1d60 & uVar35;
                      *(undefined8 *)(iVar16 + -0x18) = uStack_1d78;
                      *(ulonglong *)(iVar16 + param_7 * 4) =
                           ~uVar35 & uStack_1d48 | uStack_1d60 & uVar35;
                      *(undefined8 *)(iVar16 + 8 + param_7 * 4) = uStack_1d40;
                      *(ulonglong *)(iVar16 + -0x10) = ~uVar35 & uStack_1d38 | uStack_1d18 & uVar35;
                      *(undefined8 *)(iVar16 + -8) = uStack_1d30;
                      *(ulonglong *)(iVar16 + param_7 * 8) =
                           ~uVar35 & uStack_1d00 | uStack_1d18 & uVar35;
                      *(undefined8 *)(iVar16 + 8 + param_7 * 8) = uStack_1cf8;
                      puVar11 = *(undefined4 **)((int)&uStackY_2040 + param_7 * 4 + 4);
                      puVar22 = *(undefined4 **)(&uStack_1fc8 + param_7);
                      *(undefined4 **)(&uStack_1fc8 + param_7) = puVar11;
                      uVar32 = *(undefined8 *)((int)aiStackY_2050 + param_7 * 6);
                      uVar57 = ~uVar35 & *(ulonglong *)((int)&uStackY_2058 + param_7 * 6) |
                               *(ulonglong *)((int)&uStackY_2038 + param_7 * 6) & uVar35;
                      uVar33 = *(undefined8 *)((int)&uStack_1fb0 + param_7 * 6);
                      uVar55 = ~uVar35 & *(ulonglong *)((int)&uStack_1fb8 + param_7 * 6) |
                               *(ulonglong *)((int)&uStack_1fd0 + param_7 * 6) & uVar35;
                      in_MM6 = *(ulonglong *)((int)&uStackY_2008 + param_7 * 6) & uVar35;
                      uVar56 = ~uVar35 & *(ulonglong *)((int)&uStackY_2028 + param_7 * 6) | in_MM6;
                      in_MM5 = *(ulonglong *)((int)&uStackY_2020 + param_7 * 6);
                      in_MM6 = in_MM6 | ~uVar35 & *(ulonglong *)(&stack0xffffe010 + param_7 * 6);
                      uVar36 = *(undefined8 *)(&stack0xffffe018 + param_7 * 6);
                      uVar38 = 0x10;
                    }
                    *(ulonglong *)(iVar16 + -0x40) = uVar57;
                    *(undefined8 *)(iVar16 + -0x38) = uVar32;
                    *(ulonglong *)(iVar16 + -0x30) = uVar56;
                    *(ulonglong *)(iVar16 + -0x28) = in_MM5;
                    *(undefined1 *)((int)param_4 + param_7 * 8 + 3) = uVar38;
                    iVar16 = iVar16 + param_7 * 8;
                    *(ulonglong *)(iVar16 + param_7 * 4) = uVar55;
                    *(undefined8 *)(iVar16 + 8 + param_7 * 4) = uVar33;
                    *(ulonglong *)(iVar16 + param_7 * 8) = in_MM6;
                    *(undefined8 *)(iVar16 + 8 + param_7 * 8) = uVar36;
                    puVar25 = *(undefined4 **)((int)&uStackY_2040 + param_7 * 4);
                    if (puVar11 != puVar22) {
                      do {
                        uVar12 = *puVar11;
                        puVar11 = puVar11 + 1;
                        *puVar25 = uVar12;
                        puVar25 = puVar25 + 1;
                      } while (puVar11 < puVar22);
                    }
                    bVar9 = bVar9 >> 2;
                    *(undefined4 **)((int)&uStackY_2040 + param_7 * 4) = puVar25;
                  }
                  *(byte *)((int)param_4 + param_7 * 8 + 10) =
                       *(char *)((int)param_4 + param_7 * 8 + 10) - bVar9;
                  goto LAB_6382459e;
                }
              }
              else {
                uVar14 = uVar14 + uVar18;
                if (iVar16 - uVar18 != 0 && (int)uVar18 <= iVar16) goto code_r0x63825bce;
              }
              break;
            }
            puVar23 = puVar23 + param_7 + 1;
            uVar17 = CONCAT31((int3)(uVar17 >> 8),4);
            uVar19 = (uint)uVar10;
            if (bVar8 == 2) {
              uVar14 = uVar14 + uVar19;
              puVar23 = puVar23 + -2;
              uVar18 = uVar19;
              if (iVar16 - uVar19 == 0 || iVar16 < (int)uVar19) break;
              uVar32 = *puVar23;
              uVar17 = CONCAT31((uint3)bVar9,3);
              iVar16 = iVar16 - uVar19;
              goto LAB_63825abe;
            }
            uVar18 = uVar17;
            if (iVar16 - uVar19 == 0 || iVar16 < (int)uVar19) break;
            uVar32 = *puVar23;
            iVar16 = iVar16 - uVar19;
            uVar14 = uVar19;
          } while( true );
        }
        pbVar3 = (byte *)((int)&uStackY_2028 + param_7 * 4);
        bVar9 = *pbVar3;
        *pbVar3 = *pbVar3 >> 1;
        uVar19 = auStack_1fa0[param_7 * 2 + 3];
        if ((bool)(bVar9 & 1)) {
          FUN_6382787f(uVar18,param_4,in_stack_ffffe010,in_stack_ffffe014,in_stack_ffffe018,
                       in_stack_ffffe020);
          return;
        }
      }
      uVar14 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
      iVar6 = *(int *)((int)&uStack_1fc8 + param_7 * 8 + 4) + uVar19;
      *(int *)((int)&uStack_1fc8 + param_7 * 8 + 4) = iVar6;
      iVar16 = aiStack_ff4[0];
      if ((uVar14 & 0x20) == 0) {
        bVar9 = *(byte *)((int)param_4 + param_7 * 8 + 10);
        if ((bVar9 & 1) != 0) {
          uVar14 = *param_4;
          auStackY_1ff8[0] = 0x63825344;
          FUN_63825724();
          bVar9 = *(char *)((int)extraout_EDX_14 + param_7 * 8 + 10) - (char)uVar14;
          *(byte *)((int)extraout_EDX_14 + param_7 * 8 + 10) = bVar9;
          param_4 = extraout_EDX_14;
        }
        if ((bVar9 & 2) != 0) {
          uVar14 = param_4[2];
          auStackY_1ff8[0] = 0x63825364;
          FUN_63825724();
          bVar9 = *(char *)((int)extraout_EDX_15 + param_7 * 8 + 10) + (char)uVar14 * -2;
          *(byte *)((int)extraout_EDX_15 + param_7 * 8 + 10) = bVar9;
          param_4 = extraout_EDX_15;
        }
        if ((bVar9 & 4) != 0) {
          uVar14 = param_4[param_7 * 2];
          auStackY_1ff8[0] = 0x63825387;
          FUN_63825724();
          bVar9 = *(char *)((int)extraout_EDX_16 + param_7 * 8 + 10) + (char)uVar14 * -4;
          *(byte *)((int)extraout_EDX_16 + param_7 * 8 + 10) = bVar9;
          param_4 = extraout_EDX_16;
        }
        if ((bVar9 & 8) != 0) {
          uVar14 = param_4[param_7 * 2 + 2];
          auStackY_1ff8[0] = 0x638253b1;
          FUN_63825724();
          *(char *)((int)extraout_EDX_17 + param_7 * 8 + 10) =
               *(char *)((int)extraout_EDX_17 + param_7 * 8 + 10) + (char)uVar14 * -8;
          param_4 = extraout_EDX_17;
        }
      }
      else {
        if ((uVar14 & 1) != 0) {
          aiStack_ff4[0] = 0x6382457b;
          FUN_638264d9(iVar6,(int)(param_4 + -4));
          uVar14 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
          aiStack_ff4[0] = iVar16;
          iVar6 = extraout_ECX;
          param_4 = extraout_EDX_03;
        }
        iVar16 = aiStack_ff4[0];
        bVar9 = *(byte *)((int)param_4 + param_7 * 8 + 2);
        *(uint *)((int)&uStackY_2058 + param_7 * 4) = uVar14 | 1;
        if ((bVar9 & 0x20) == 0) {
          *(uint *)((int)&uStackY_2058 + param_7 * 4) = (uVar14 | 1) ^ 1;
          aiStack_ff4[0] = 0x6382459d;
          FUN_638264d9(iVar6,(int)param_4);
          aiStack_ff4[0] = iVar16;
          param_4 = extraout_EDX_04;
        }
      }
    }
    else {
      auStackY_1ff8[0] = 0x6382470b;
      FUN_63827500(0,(uint)param_4);
      if (*(int *)((int)&uStackY_2008 + param_7 * 4) < 0) {
        uVar17 = -*(int *)((int)&uStackY_2008 + param_7 * 4 + 4);
        uVar19 = *(uint *)((int)&uStackY_2058 + param_7 * 4);
        *(uint *)(&uStackY_2010 + param_7) = uVar17;
        uVar14 = *(uint *)((int)&uStackY_2068 + param_7 * 4);
        if ((uVar19 & 0x100) == 0) {
          uVar17 = 0xc100c100;
          uVar12 = 0x1000100;
          param_4 = extraout_EDX_05;
          goto LAB_63824738;
        }
      }
      *(undefined1 *)((int)extraout_EDX_05 + param_7 * 8 + 3) = 0xc1;
      uVar17 = uVar17 & 0xffffff00;
      uVar14 = (uint)extraout_EDX_05 >> 3;
      puVar13 = extraout_EDX_05;
      do {
        do {
          uVar19 = puVar13[9];
          *(short *)puVar13 = (short)aiStack_1fd8[param_7 * 2 + 1];
          uVar18 = puVar13[5];
          piVar2 = (int *)((int)&uStack_1fc8 + param_7 * 8 + 4);
          *piVar2 = *piVar2 + uVar19;
          iVar16 = *(int *)((int)&uStackY_2028 + param_7 * 4 + 4);
          puVar13[1] = uVar18;
          if (iVar16 <= (int)uVar19) {
            *(char *)((int)&uStackY_2060 + param_7 * 4 + 3) = (char)uVar17;
            auStackY_1ff8[0] = 0x638278af;
            FUN_63827c6f(puVar13,uVar14);
            uVar17 = CONCAT31((int3)(uVar17 >> 8),
                              (&DAT_63837544)[uVar17] |
                              *(byte *)((int)&uStackY_2060 + param_7 * 4 + 3));
            uVar14 = extraout_EDX_24;
          }
          bVar9 = (byte)uVar17 >> 1;
          uVar17 = CONCAT31((int3)(uVar17 >> 8),bVar9);
          iVar16 = uVar14 * 8;
          puVar13 = (uint *)(iVar16 + 8);
          bVar26 = uVar14 < 0x5fffffff;
          uVar14 = uVar14 + 0xa0000001;
          bVar27 = -1 < (int)uVar14;
        } while (bVar26);
        uVar14 = param_7 + -2 + uVar14;
        param_4 = *(uint **)((int)&uStackY_2048 + param_7 * 4 + 4);
        puVar13 = (uint *)(iVar16 + -8 + param_7 * 8);
      } while (bVar27);
      *(byte *)((int)param_4 + param_7 * 8 + 10) = bVar9;
    }
LAB_6382459e:
    iVar6 = *(int *)((int)&uStackY_2058 + param_7 * 4 + 4);
    uVar14 = param_4[param_7 * 2 + 2];
    param_3 = aiStackY_2050[param_7];
    *(undefined4 *)(iVar6 + 100) = *(undefined4 *)((int)&uStackY_2040 + param_7 * 4);
    uVar32 = (&uStack_1fc8)[param_7];
    *(undefined1 *)(iVar6 + 0x60) = *(undefined1 *)((int)&uStackY_2058 + param_7 * 4);
    iVar16 = aiStackY_2050[param_7 + 1];
    *(undefined8 *)(iVar6 + 0x68) = uVar32;
    iVar6 = (int)uVar14 >> 0x18;
    if (iVar6 == 0) {
      return;
    }
    param_4 = (uint *)((int)param_4 + *(int *)(param_3 + -4 + iVar6 * 4));
    iVar16 = iVar16 + *(int *)(param_3 + 0x1c + iVar6 * 4);
  } while( true );
code_r0x63825bce:
  uVar32 = *puVar23;
  uVar17 = CONCAT31((uint3)bVar9,2);
  iVar16 = iVar16 - uVar18;
  goto LAB_63825abe;
}


