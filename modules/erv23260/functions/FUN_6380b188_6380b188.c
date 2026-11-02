/* Module: erv23260.dll
   Function: FUN_6380b188
   Address: 6380b188
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6380b188(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
            int param_13,int param_14,int param_15)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  code *in_EAX;
  uint uVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  code *pcVar9;
  code *extraout_EDX;
  code *extraout_EDX_00;
  code *extraout_EDX_01;
  int extraout_EDX_02;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  undefined8 in_MM7;
  undefined8 uVar19;
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  uint uStack_f0;
  int iStack_ec;
  undefined1 *puStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c4;
  undefined1 *puStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  code *pcStack_b4;
  int iStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *pcStack_90;
  
  puStack_a8 = &stack0xfffffff0;
  uVar7 = (uint)auStack_110 & 0xfe0;
  iVar8 = (param_5 + 0x10) * 0xc;
  do {
    iVar10 = iVar8 - uVar7;
    bVar2 = (int)uVar7 <= iVar8;
    uVar7 = 0x1000;
    iVar8 = iVar10;
  } while (iVar10 != 0 && bVar2);
  iStack_dc = param_11;
  iStack_ec = param_7;
  iStack_cc = param_15;
  uVar7 = param_6 - 1;
  iStack_b0 = param_15 * 2;
  puStack_e8 = (undefined1 *)(((param_11 * param_6 + param_5) - param_11) + param_8);
  iVar8 = (int)uVar7 >> 1;
  iStack_d8 = iStack_b0 * uVar7 + param_5 * 2 + param_15 + param_12;
  iStack_100 = param_7 * uVar7 + param_2 + param_5;
  iVar10 = param_5 >> 1;
  iStack_f8 = param_7 * iVar8 + iVar10;
  iStack_fc = param_3 + iStack_f8;
  iStack_e0 = param_11 * iVar8 + iVar10;
  iStack_d0 = iStack_b0 * iVar8 + iVar10 * 2 + param_15;
  iStack_f8 = iStack_f8 + param_4;
  iStack_e4 = param_9 + iStack_e0;
  iStack_e0 = iStack_e0 + param_10;
  iStack_d4 = param_13 + iStack_d0;
  puStack_ac = &stack0x00000060 + param_5 * 4;
  puStack_c0 = &stack0x00000060 + param_5 * 8;
  puStack_b8 = puStack_ac + param_5 * 8;
  iStack_d0 = iStack_d0 + param_14;
  puStack_bc = puStack_c0 + param_5 * 2;
  iStack_f4 = -param_5;
  iStack_c4 = iStack_f4 >> 1;
  pcStack_b4 = in_EAX;
  if (param_12 != 0) {
    iVar8 = (int)puStack_ac - (int)puStack_b8;
    do {
      *(undefined8 *)(puStack_b8 + iVar8) = 0;
      *(undefined8 *)(puStack_b8 + iVar8 + 8) = 0;
      *(undefined8 *)(puStack_b8 + iVar8 + 0x10) = 0;
      *(undefined8 *)(puStack_b8 + iVar8 + 0x18) = 0;
      bVar2 = iVar8 < -0x20;
      iVar8 = iVar8 + 0x20;
      pcStack_b4 = this;
    } while (bVar2);
  }
  uStack_a0 = 0x40004;
  uStack_9c = 0x40004;
  pcVar9 = pcStack_b4;
  pcStack_90 = this;
  do {
    do {
      uStack_f0 = uVar7;
      iVar4 = iStack_e4;
      iVar8 = iStack_fc;
      uStack_104 = 0x6380b2fd;
      (*pcVar9)();
      iVar5 = iStack_e0;
      iVar10 = iStack_f8;
      iStack_e4 = iVar4 - iStack_dc;
      iStack_fc = iVar8 - iStack_ec;
      iStack_d4 = extraout_ECX - iStack_b0;
      uStack_104 = 0x6380b32e;
      (*extraout_EDX)();
      puVar6 = puStack_c0;
      puVar3 = puStack_e8;
      iVar8 = iStack_100;
      iStack_e0 = iVar5 - iStack_dc;
      iStack_f8 = iVar10 - iStack_ec;
      iStack_d0 = extraout_ECX_00 - iStack_b0;
      uStack_104 = 0x6380b35e;
      uVar19 = (*extraout_EDX_00)();
      uStack_a0 = (undefined4)uVar19;
      *(undefined8 *)((int)puVar3 + 8) = in_MM7;
      iVar10 = (int)puVar3 - iStack_dc;
      iVar8 = iVar8 - iStack_ec;
      uStack_104 = 0x6380b37f;
      uStack_9c = uStack_a0;
      (*(code *)((ulonglong)uVar19 >> 0x20))();
      *(undefined8 *)(iVar10 + 8) = in_MM7;
      iStack_100 = iVar8 - iStack_ec;
      puStack_e8 = (undefined1 *)(iVar10 - iStack_dc);
      iStack_d8 = extraout_ECX_01 - iStack_b0;
      uVar7 = uStack_f0 + 0x7ffffffe;
      pcVar9 = extraout_EDX_01;
    } while ((int)uVar7 < 0);
    uStack_f0 = uStack_f0 + 0x7fffffff;
    if ((uStack_f0 & 1) == 0) {
      uStack_104 = 0x6380b3d1;
      FUN_6380ba3d();
      uStack_104 = 0x6380b3e9;
      FUN_6380ba3d();
      uStack_104 = 0x6380b401;
      FUN_6380ba3d();
      uStack_104 = 0x6380b414;
      FUN_6380ba3d();
      uVar7 = uStack_f0;
    }
    uStack_f0 = uVar7;
    pcVar9 = pcStack_b4;
    uVar7 = uStack_f0;
  } while (uStack_f0 != 0);
  if (pcStack_b4 == pcStack_90) {
    iVar8 = iStack_c4;
    do {
      uVar19 = *(undefined8 *)(puStack_bc + iVar8 * 4);
      uVar1 = *(undefined8 *)(puStack_bc + iVar8 * 4 + 8);
      uVar11 = (ushort)uVar19 >> 3;
      uVar12 = (ushort)((ulonglong)uVar19 >> 0x10) >> 3;
      uVar13 = (ushort)((ulonglong)uVar19 >> 0x20) >> 3;
      uVar14 = (ushort)((ulonglong)uVar19 >> 0x33);
      uVar15 = (ushort)uVar1 >> 3;
      uVar16 = (ushort)((ulonglong)uVar1 >> 0x10) >> 3;
      uVar17 = (ushort)((ulonglong)uVar1 >> 0x20) >> 3;
      uVar18 = (ushort)((ulonglong)uVar1 >> 0x33);
      iVar8 = iVar8 + 4;
      *(ulonglong *)(iStack_d4 + iStack_cc + -8 + iVar8 * 2) =
           CONCAT17((uVar18 != 0) * (uVar18 < 0x100) * (char)uVar18 - (0xff < uVar18),
                    CONCAT16((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                             CONCAT15((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 -
                                      (0xff < uVar16),
                                      CONCAT14((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                               (0xff < uVar15),
                                               CONCAT13((uVar14 != 0) * (uVar14 < 0x100) *
                                                        (char)uVar14 - (0xff < uVar14),
                                                        CONCAT12((uVar13 != 0) * (uVar13 < 0x100) *
                                                                 (char)uVar13 - (0xff < uVar13),
                                                                 CONCAT11((uVar12 != 0) *
                                                                          (uVar12 < 0x100) *
                                                                          (char)uVar12 -
                                                                          (0xff < uVar12),
                                                                          (uVar11 != 0) *
                                                                          (uVar11 < 0x100) *
                                                                          (char)uVar11 -
                                                                          (0xff < uVar11))))))));
    } while (iVar8 != 0);
    iVar8 = iStack_c4;
    do {
      uVar19 = *(undefined8 *)(puStack_b8 + iVar8 * 4);
      uVar1 = *(undefined8 *)(puStack_b8 + iVar8 * 4 + 8);
      uVar11 = (ushort)uVar19 >> 3;
      uVar12 = (ushort)((ulonglong)uVar19 >> 0x10) >> 3;
      uVar13 = (ushort)((ulonglong)uVar19 >> 0x20) >> 3;
      uVar14 = (ushort)((ulonglong)uVar19 >> 0x33);
      uVar15 = (ushort)uVar1 >> 3;
      uVar16 = (ushort)((ulonglong)uVar1 >> 0x10) >> 3;
      uVar17 = (ushort)((ulonglong)uVar1 >> 0x20) >> 3;
      uVar18 = (ushort)((ulonglong)uVar1 >> 0x33);
      iVar8 = iVar8 + 4;
      *(ulonglong *)(iStack_d0 + iStack_cc + -8 + iVar8 * 2) =
           CONCAT17((uVar18 != 0) * (uVar18 < 0x100) * (char)uVar18 - (0xff < uVar18),
                    CONCAT16((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                             CONCAT15((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 -
                                      (0xff < uVar16),
                                      CONCAT14((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                               (0xff < uVar15),
                                               CONCAT13((uVar14 != 0) * (uVar14 < 0x100) *
                                                        (char)uVar14 - (0xff < uVar14),
                                                        CONCAT12((uVar13 != 0) * (uVar13 < 0x100) *
                                                                 (char)uVar13 - (0xff < uVar13),
                                                                 CONCAT11((uVar12 != 0) *
                                                                          (uVar12 < 0x100) *
                                                                          (char)uVar12 -
                                                                          (0xff < uVar12),
                                                                          (uVar11 != 0) *
                                                                          (uVar11 < 0x100) *
                                                                          (char)uVar11 -
                                                                          (0xff < uVar11))))))));
    } while (iVar8 != 0);
    iVar8 = iStack_f4;
    do {
      uVar19 = *(undefined8 *)(puStack_c0 + iVar8 * 4);
      uVar1 = *(undefined8 *)(puStack_c0 + iVar8 * 4 + 8);
      uVar11 = (ushort)uVar19 >> 3;
      uVar12 = (ushort)((ulonglong)uVar19 >> 0x10) >> 3;
      uVar13 = (ushort)((ulonglong)uVar19 >> 0x20) >> 3;
      uVar14 = (ushort)((ulonglong)uVar19 >> 0x33);
      uVar15 = (ushort)uVar1 >> 3;
      uVar16 = (ushort)((ulonglong)uVar1 >> 0x10) >> 3;
      uVar17 = (ushort)((ulonglong)uVar1 >> 0x20) >> 3;
      uVar18 = (ushort)((ulonglong)uVar1 >> 0x33);
      iVar8 = iVar8 + 4;
      *(ulonglong *)(iStack_d8 + iStack_cc + -8 + iVar8 * 2) =
           CONCAT17((uVar18 != 0) * (uVar18 < 0x100) * (char)uVar18 - (0xff < uVar18),
                    CONCAT16((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                             CONCAT15((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 -
                                      (0xff < uVar16),
                                      CONCAT14((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                               (0xff < uVar15),
                                               CONCAT13((uVar14 != 0) * (uVar14 < 0x100) *
                                                        (char)uVar14 - (0xff < uVar14),
                                                        CONCAT12((uVar13 != 0) * (uVar13 < 0x100) *
                                                                 (char)uVar13 - (0xff < uVar13),
                                                                 CONCAT11((uVar12 != 0) *
                                                                          (uVar12 < 0x100) *
                                                                          (char)uVar12 -
                                                                          (0xff < uVar12),
                                                                          (uVar11 != 0) *
                                                                          (uVar11 < 0x100) *
                                                                          (char)uVar11 -
                                                                          (0xff < uVar11))))))));
    } while (iVar8 != 0);
  }
  uStack_104 = 0x6380b4d2;
  FUN_6380ba3d();
  uStack_104 = 0x6380b4ec;
  FUN_6380ba3d();
  uStack_104 = 0x6380b506;
  FUN_6380ba3d();
  puStack_e8 = puVar6 + extraout_EDX_02 + -0x10;
  uStack_104 = 0x6380b523;
  FUN_6380ba3d();
  return;
}


