/* Module: mp3rw.dll
   Function: FUN_00460280
   Address: 00460280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460280(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  byte *pbVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  ushort uVar40;
  ushort uVar42;
  ushort uVar43;
  undefined8 uVar41;
  ushort uVar44;
  undefined2 uVar45;
  undefined8 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  undefined4 uVar50;
  undefined8 uVar51;
  undefined4 uVar52;
  uint in_stack_0000001c;
  uint in_stack_00000028;
  int in_stack_00000030;
  uint local_c8;
  uint local_c4;
  uint local_b8;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  byte bStack_95;
  int local_88;
  uint local_80;
  int local_7c;
  int local_68;
  int local_4c;
  int local_48;
  byte *local_44;
  int local_30;
  uint local_28;
  byte *local_24;
  uint local_1c;
  int local_10;
  byte *local_8;
  undefined4 uVar46;
  
  uVar38 = *(uint *)(in_stack_00000028 + 0x60);
  iVar31 = *(int *)(in_stack_00000028 + 100);
  iVar17 = *(int *)(in_stack_00000028 + 0x18);
  iVar33 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar11 = (iVar17 - 1U | 0x3fff) + 1;
  iVar36 = *(int *)(in_stack_00000028 + 0x1c);
  iVar28 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar35 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar11 = (iVar36 - 1U | 0x3fff) + 1;
  iVar12 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar11 = (*(int *)(in_stack_00000028 + 0x48) - 1U | 0x3fff) + 1;
  iVar13 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar14 = (*(int *)(in_stack_00000028 + 0x4c) - 1U | 0x3fff) + 1;
  local_88 = iVar35 + 1;
  local_30 = local_88 * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  iVar15 = iVar36 + iVar12 * -0x4000 + 0x4000;
  iVar11 = iVar33 + 1;
  local_48 = iVar11 * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  iVar29 = iVar28 - iVar33;
  iVar16 = iVar17 + iVar28 * -0x4000 + 0x4000;
  if (iVar29 < 2) {
    local_48 = iVar17 - *(int *)(in_stack_00000028 + 0x10);
  }
  iVar17 = iVar12 - iVar35;
  if (iVar17 < 2) {
    local_30 = iVar36 - *(int *)(in_stack_00000028 + 0x14);
  }
  uVar32 = *(uint *)(in_stack_00000028 + 0x44);
  uVar18 = FUN_00423420(0);
  iVar36 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar19 = uVar32 & 0x80003fff;
  if ((int)uVar19 < 0) {
    uVar19 = (uVar19 - 1 | 0xffffc000) + 1;
  }
  iVar30 = *(int *)(in_stack_00000028 + 0x38) * iVar36 + *(int *)(in_stack_00000028 + 0x34);
  iVar20 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) + -1;
  local_8 = *(byte **)(in_stack_00000028 + 0x40);
  iVar37 = *(int *)(in_stack_00000028 + 0x34) +
           ((uint)(iVar36 != iVar20) + iVar36) * *(int *)(in_stack_00000028 + 0x38);
  iVar36 = iVar33 * 4;
  local_24 = (byte *)(*(int *)(in_stack_00000028 + 8) * iVar35 + *(int *)(in_stack_00000028 + 4) +
                     iVar36);
  iVar14 = ((uint)((longlong)local_48 * (longlong)local_30) >> 0xe |
           (int)((ulonglong)((longlong)local_48 * (longlong)local_30) >> 0x20) << 0x12) * 0xff;
  local_1c = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar28 = iVar28 + -1;
  if (iVar33 < iVar28) {
    local_4c = iVar33;
    do {
      iVar14 = (int)((int)local_8 + ((int)local_8 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar21 = (uint)local_8 & 0x80003fff;
      if ((int)uVar21 < 0) {
        uVar21 = (uVar21 - 1 | 0xffffc000) + 1;
      }
      iVar35 = (0x4000 - uVar19) * (0x4000 - uVar21);
      iVar35 = (int)(iVar35 + (iVar35 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar22 = uVar21 * (0x4000 - uVar19);
      iVar22 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar23 = (0x4000 - uVar21) * uVar19;
      iVar23 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (int)(uVar21 * uVar19 + ((int)(uVar21 * uVar19) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar25 = ((uint)(iVar14 != iVar13 + -1) + iVar14) * 4;
      uVar7 = (undefined1)
              ((uint)*(byte *)(iVar30 + 2 + iVar14 * 4) * iVar35 +
               (uint)*(byte *)(iVar37 + 2 + iVar14 * 4) * iVar23 +
               (uint)*(byte *)(iVar25 + 2 + iVar30) * iVar22 +
               (uint)*(byte *)(iVar25 + 2 + iVar37) * iVar24 >> 0xe);
      uVar8 = (undefined1)
              ((uint)*(byte *)(iVar30 + 1 + iVar14 * 4) * iVar35 +
               (uint)*(byte *)(iVar37 + 1 + iVar14 * 4) * iVar23 +
               (uint)*(byte *)(iVar25 + 1 + iVar30) * iVar22 +
               (uint)*(byte *)(iVar25 + 1 + iVar37) * iVar24 >> 0xe);
      uVar9 = (undefined1)
              ((uint)*(byte *)(iVar25 + iVar37) * iVar24 +
               (uint)*(byte *)(iVar37 + iVar14 * 4) * iVar23 +
               (uint)*(byte *)(iVar30 + iVar14 * 4) * iVar35 +
               (uint)*(byte *)(iVar25 + iVar30) * iVar22 >> 0xe);
      uVar21 = (uint)*(byte *)(iVar30 + 3 + iVar14 * 4) * iVar35 +
               (uint)*(byte *)(iVar37 + 3 + iVar14 * 4) * iVar23 +
               (uint)*(byte *)(iVar25 + 3 + iVar30) * iVar22 +
               (uint)*(byte *)(iVar25 + 3 + iVar37) * iVar24 >> 0xe;
      uVar10 = (undefined1)uVar21;
      if (in_stack_00000030 == 0) {
        uVar39 = local_1c & 0xff;
        iVar14 = ((CONCAT12(uVar7,CONCAT11(uVar8,uVar9)) & 0xff) - (uint)*local_24) * uVar39;
        *local_24 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + *local_24;
        iVar14 = ((CONCAT12(uVar10,CONCAT11(uVar7,uVar8)) & 0xff) - (uint)local_24[1]) * uVar39;
        local_24[1] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + local_24[1];
        iVar14 = ((CONCAT11(uVar10,uVar7) & 0xff) - (uint)local_24[2]) * uVar39;
        local_24[2] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + local_24[2];
        iVar14 = ((uVar21 & 0xff) - (uint)local_24[3]) * uVar39;
        local_24[3] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + local_24[3];
      }
      else {
        *(uint *)local_24 = CONCAT13(uVar10,CONCAT12(uVar7,CONCAT11(uVar8,uVar9)));
      }
      uVar21 = uVar38;
      if (local_4c == iVar33) {
        local_1c = (int)(local_30 * 0xff + (local_30 * 0xff >> 0x1f & 0x3fffU)) >> 0xe;
        uVar21 = (uint)((longlong)local_48 * (longlong)(int)uVar38) >> 0xe |
                 (int)((ulonglong)((longlong)local_48 * (longlong)(int)uVar38) >> 0x20) << 0x12;
      }
      local_8 = (byte *)((int)local_8 + uVar21);
      local_24 = local_24 + 4;
      local_4c = local_4c + 1;
    } while (local_4c < iVar28);
  }
  if (1 < iVar29) {
    if (2 < iVar29) {
      local_8 = (byte *)((int)local_8 +
                        (((uint)((longlong)(int)uVar38 * (longlong)iVar16) >> 0xe |
                         (int)((ulonglong)((longlong)(int)uVar38 * (longlong)iVar16) >> 0x20) <<
                         0x12) - uVar38));
    }
    iVar14 = (int)((int)local_8 + ((int)local_8 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar21 = (uint)local_8 & 0x80003fff;
    if ((int)uVar21 < 0) {
      uVar21 = (uVar21 - 1 | 0xffffc000) + 1;
    }
    iVar35 = (0x4000 - uVar19) * (0x4000 - uVar21);
    iVar35 = (int)(iVar35 + (iVar35 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar22 = uVar21 * (0x4000 - uVar19);
    iVar22 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar23 = (0x4000 - uVar21) * uVar19;
    iVar23 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar24 = (int)(uVar21 * uVar19 + ((int)(uVar21 * uVar19) >> 0x1f & 0x3fffU)) >> 0xe;
    iVar25 = ((uint)(iVar14 != iVar13 + -1) + iVar14) * 4;
    uVar7 = (undefined1)
            ((uint)*(byte *)(iVar30 + 2 + iVar14 * 4) * iVar35 +
             (uint)*(byte *)(iVar37 + 2 + iVar14 * 4) * iVar23 +
             (uint)*(byte *)(iVar25 + 2 + iVar30) * iVar22 +
             (uint)*(byte *)(iVar25 + 2 + iVar37) * iVar24 >> 0xe);
    uVar8 = (undefined1)
            ((uint)*(byte *)(iVar30 + 1 + iVar14 * 4) * iVar35 +
             (uint)*(byte *)(iVar37 + 1 + iVar14 * 4) * iVar23 +
             (uint)*(byte *)(iVar25 + 1 + iVar30) * iVar22 +
             (uint)*(byte *)(iVar25 + 1 + iVar37) * iVar24 >> 0xe);
    uVar9 = (undefined1)
            ((uint)*(byte *)(iVar25 + iVar37) * iVar24 +
             (uint)*(byte *)(iVar37 + iVar14 * 4) * iVar23 +
             (uint)*(byte *)(iVar30 + iVar14 * 4) * iVar35 +
             (uint)*(byte *)(iVar25 + iVar30) * iVar22 >> 0xe);
    uVar19 = (uint)*(byte *)(iVar30 + 3 + iVar14 * 4) * iVar35 +
             (uint)*(byte *)(iVar37 + 3 + iVar14 * 4) * iVar23 +
             (uint)*(byte *)(iVar25 + 3 + iVar30) * iVar22 +
             (uint)*(byte *)(iVar25 + 3 + iVar37) * iVar24 >> 0xe;
    uVar10 = (undefined1)uVar19;
    iVar14 = ((uint)((longlong)iVar16 * (longlong)local_30) >> 0xe |
             (int)((ulonglong)((longlong)iVar16 * (longlong)local_30) >> 0x20) << 0x12) * 0xff;
    if (in_stack_00000030 == 0) {
      uVar21 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
      local_28 = (uint)*local_24;
      iVar14 = ((CONCAT12(uVar7,CONCAT11(uVar8,uVar9)) & 0xff) - local_28) * uVar21;
      *local_24 = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + *local_24;
      local_28 = (uint)local_24[1];
      iVar14 = ((CONCAT12(uVar10,CONCAT11(uVar7,uVar8)) & 0xff) - local_28) * uVar21;
      local_24[1] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + local_24[1];
      local_28 = (uint)local_24[2];
      iVar14 = ((CONCAT11(uVar10,uVar7) & 0xff) - local_28) * uVar21;
      local_24[2] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + local_24[2];
      local_28 = (uint)local_24[3];
      iVar14 = ((uVar19 & 0xff) - local_28) * uVar21;
      local_24[3] = (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8) + local_24[3];
    }
    else {
      *(uint *)local_24 = CONCAT13(uVar10,CONCAT12(uVar7,CONCAT11(uVar8,uVar9)));
    }
  }
  local_44 = (byte *)(uVar32 + ((uint)((longlong)iVar31 * (longlong)local_30) >> 0xe |
                               (int)((ulonglong)((longlong)iVar31 * (longlong)local_30) >> 0x20) <<
                               0x12));
  iVar12 = iVar12 + -1;
  if (local_88 < iVar12) {
    iVar14 = iVar13 + -1;
    do {
      pbVar34 = (byte *)(*(int *)(in_stack_00000028 + 8) * local_88 +
                         *(int *)(in_stack_00000028 + 4) + iVar36);
      uVar32 = (uint)local_44 & 0x80003fff;
      if ((int)uVar32 < 0) {
        uVar32 = (uVar32 - 1 | 0xffffc000) + 1;
      }
      iVar30 = *(int *)(in_stack_00000028 + 0x38) *
               ((int)((int)local_44 + ((int)local_44 >> 0x1f & 0x3fffU)) >> 0xe);
      uVar19 = *(uint *)(in_stack_00000028 + 0x40);
      iVar35 = iVar30 + *(int *)(in_stack_00000028 + 0x34);
      iVar30 = (-(uint)(local_88 != iVar12) & in_stack_0000001c) + iVar30 +
               *(int *)(in_stack_00000028 + 0x34);
      iVar37 = (int)(uVar19 + ((int)uVar19 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar21 = uVar19 & 0x80003fff;
      if ((int)uVar21 < 0) {
        uVar21 = (uVar21 - 1 | 0xffffc000) + 1;
      }
      iVar22 = -uVar32 + 0x4000;
      iVar23 = iVar22 * (0x4000 - uVar21);
      iVar23 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (int)(iVar22 * uVar21 + ((int)(iVar22 * uVar21) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar25 = (0x4000 - uVar21) * uVar32;
      iVar25 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar26 = (int)(uVar21 * uVar32 + ((int)(uVar21 * uVar32) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar27 = ((uint)(iVar37 != iVar14) + iVar37) * 4;
      uVar7 = (undefined1)
              ((uint)*(byte *)(iVar35 + 2 + iVar37 * 4) * iVar23 +
               (uint)*(byte *)(iVar30 + 2 + iVar37 * 4) * iVar25 +
               (uint)*(byte *)(iVar27 + 2 + iVar35) * iVar24 +
               (uint)*(byte *)(iVar27 + 2 + iVar30) * iVar26 >> 0xe);
      uVar8 = (undefined1)
              ((uint)*(byte *)(iVar35 + 1 + iVar37 * 4) * iVar23 +
               (uint)*(byte *)(iVar30 + 1 + iVar37 * 4) * iVar25 +
               (uint)*(byte *)(iVar27 + 1 + iVar35) * iVar24 +
               (uint)*(byte *)(iVar27 + 1 + iVar30) * iVar26 >> 0xe);
      uVar9 = (undefined1)
              ((uint)*(byte *)(iVar27 + iVar30) * iVar26 +
               (uint)*(byte *)(iVar30 + iVar37 * 4) * iVar25 +
               (uint)*(byte *)(iVar35 + iVar37 * 4) * iVar23 +
               (uint)*(byte *)(iVar27 + iVar35) * iVar24 >> 0xe);
      uVar21 = (uint)*(byte *)(iVar35 + 3 + iVar37 * 4) * iVar23 +
               (uint)*(byte *)(iVar30 + 3 + iVar37 * 4) * iVar25 +
               (uint)*(byte *)(iVar27 + 3 + iVar35) * iVar24 +
               (uint)*(byte *)(iVar27 + 3 + iVar30) * iVar26 >> 0xe;
      uVar10 = (undefined1)uVar21;
      if (in_stack_00000030 == 0) {
        uVar39 = (int)(local_48 * 0xff + (local_48 * 0xff >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
        iVar37 = ((CONCAT12(uVar7,CONCAT11(uVar8,uVar9)) & 0xff) - (uint)*pbVar34) * uVar39;
        *pbVar34 = (char)(iVar37 + (iVar37 >> 0x1f & 0xffU) >> 8) + *pbVar34;
        iVar37 = ((CONCAT12(uVar10,CONCAT11(uVar7,uVar8)) & 0xff) - (uint)pbVar34[1]) * uVar39;
        pbVar34[1] = (char)(iVar37 + (iVar37 >> 0x1f & 0xffU) >> 8) + pbVar34[1];
        iVar37 = ((CONCAT11(uVar10,uVar7) & 0xff) - (uint)pbVar34[2]) * uVar39;
        pbVar34[2] = (char)(iVar37 + (iVar37 >> 0x1f & 0xffU) >> 8) + pbVar34[2];
        iVar37 = ((uVar21 & 0xff) - (uint)pbVar34[3]) * uVar39;
        pbVar34[3] = (char)(iVar37 + (iVar37 >> 0x1f & 0xffU) >> 8) + pbVar34[3];
      }
      else {
        *(uint *)pbVar34 = CONCAT13(uVar10,CONCAT12(uVar7,CONCAT11(uVar8,uVar9)));
      }
      pbVar34 = pbVar34 + 4;
      local_24 = (byte *)(uVar19 + ((uint)((longlong)local_48 * (longlong)(int)uVar38) >> 0xe |
                                   (int)((ulonglong)((longlong)local_48 * (longlong)(int)uVar38) >>
                                        0x20) << 0x12));
      local_8 = pbVar34;
      if ((uVar18 & 0x10) == 0) {
        if (iVar11 < iVar28) {
          local_68 = iVar28 - iVar11;
          do {
            iVar37 = (int)((int)local_24 + ((int)local_24 >> 0x1f & 0x3fffU)) >> 0xe;
            uVar19 = (uint)local_24 & 0x80003fff;
            if ((int)uVar19 < 0) {
              uVar19 = (uVar19 - 1 | 0xffffc000) + 1;
            }
            iVar23 = iVar22 * (0x4000 - uVar19);
            iVar23 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
            iVar24 = (int)(iVar22 * uVar19 + ((int)(iVar22 * uVar19) >> 0x1f & 0x3fffU)) >> 0xe;
            iVar25 = (0x4000 - uVar19) * uVar32;
            iVar25 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
            iVar26 = (int)(uVar19 * uVar32 + ((int)(uVar19 * uVar32) >> 0x1f & 0x3fffU)) >> 0xe;
            iVar27 = ((uint)(iVar37 != iVar14) + iVar37) * 4;
            local_8[2] = (byte)((uint)*(byte *)(iVar35 + 2 + iVar37 * 4) * iVar23 +
                                (uint)*(byte *)(iVar30 + 2 + iVar37 * 4) * iVar25 +
                                (uint)*(byte *)(iVar35 + 2 + iVar27) * iVar24 +
                                (uint)*(byte *)(iVar30 + 2 + iVar27) * iVar26 >> 0xe);
            local_8[1] = (byte)((uint)*(byte *)(iVar35 + 1 + iVar37 * 4) * iVar23 +
                                (uint)*(byte *)(iVar30 + 1 + iVar37 * 4) * iVar25 +
                                (uint)*(byte *)(iVar35 + 1 + iVar27) * iVar24 +
                                (uint)*(byte *)(iVar30 + 1 + iVar27) * iVar26 >> 0xe);
            *local_8 = (byte)((uint)*(byte *)(iVar30 + iVar27) * iVar26 +
                              (uint)*(byte *)(iVar30 + iVar37 * 4) * iVar25 +
                              (uint)*(byte *)(iVar35 + iVar37 * 4) * iVar23 +
                              (uint)*(byte *)(iVar35 + iVar27) * iVar24 >> 0xe);
            pbVar34 = local_8 + 4;
            local_8[3] = (byte)((uint)*(byte *)(iVar35 + 3 + iVar37 * 4) * iVar23 +
                                (uint)*(byte *)(iVar30 + 3 + iVar37 * 4) * iVar25 +
                                (uint)*(byte *)(iVar35 + 3 + iVar27) * iVar24 +
                                (uint)*(byte *)(iVar30 + 3 + iVar27) * iVar26 >> 0xe);
            local_24 = (byte *)((int)local_24 + uVar38);
            local_68 = local_68 + -1;
            local_8 = pbVar34;
          } while (local_68 != 0);
        }
      }
      else if (iVar11 < iVar28) {
        local_10 = iVar28 - iVar11;
        iVar37 = -uVar32 + 0x3fff;
        do {
          iVar23 = (int)((int)local_24 + ((int)local_24 >> 0x1f & 0x3fffU)) >> 0xe;
          uVar19 = (uint)local_24 & 0x80003fff;
          if ((int)uVar19 < 0) {
            uVar19 = (uVar19 - 1 | 0xffffc000) + 1;
          }
          iVar24 = (0x3fff - uVar19) * iVar37;
          iVar25 = uVar19 * iVar37;
          iVar26 = (0x3fff - uVar19) * uVar32;
          puVar1 = (undefined4 *)(iVar35 + iVar23 * 4);
          puVar2 = (undefined4 *)(iVar30 + iVar23 * 4);
          uVar45 = (undefined2)((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe);
          uVar46 = CONCAT22(uVar45,uVar45);
          uVar45 = (undefined2)((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe);
          uVar48 = CONCAT22(uVar45,uVar45);
          uVar45 = (undefined2)((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe);
          uVar50 = CONCAT22(uVar45,uVar45);
          uVar45 = (undefined2)
                   ((int)(uVar19 * uVar32 + ((int)(uVar19 * uVar32) >> 0x1f & 0x3fffU)) >> 0xe);
          uVar52 = CONCAT22(uVar45,uVar45);
          uVar3 = *puVar1;
          uVar40 = (ushort)(((ulonglong)(byte)((uint)uVar3 >> 0x18) << 0x38) >> 0x30);
          uVar4 = puVar1[iVar23 != iVar14];
          uVar42 = (ushort)(((ulonglong)(byte)((uint)uVar4 >> 0x18) << 0x38) >> 0x30);
          uVar5 = *puVar2;
          uVar43 = (ushort)(((ulonglong)(byte)((uint)uVar5 >> 0x18) << 0x38) >> 0x30);
          uVar6 = puVar2[iVar23 != iVar14];
          uVar44 = (ushort)(((ulonglong)(byte)((uint)uVar6 >> 0x18) << 0x38) >> 0x30);
          uVar41 = pmulhw(CONCAT26(uVar40 >> 3,
                                   CONCAT24((ushort)(((ulonglong)
                                                      CONCAT21(uVar40,(char)((uint)uVar3 >> 0x10))
                                                     << 0x28) >> 0x20) >> 3,
                                            CONCAT22((ushort)(((ulonglong)(byte)((uint)uVar3 >> 8)
                                                              << 0x18) >> 0x10) >> 3,
                                                     (ushort)(byte)uVar3 << 5))),
                          CONCAT44(uVar46,uVar46));
          uVar47 = pmulhw(CONCAT26(uVar42 >> 3,
                                   CONCAT24((ushort)(((ulonglong)
                                                      CONCAT21(uVar42,(char)((uint)uVar4 >> 0x10))
                                                     << 0x28) >> 0x20) >> 3,
                                            CONCAT22((ushort)(((ulonglong)(byte)((uint)uVar4 >> 8)
                                                              << 0x18) >> 0x10) >> 3,
                                                     (ushort)(byte)uVar4 << 5))),
                          CONCAT44(uVar48,uVar48));
          uVar49 = pmulhw(CONCAT26(uVar43 >> 3,
                                   CONCAT24((ushort)(((ulonglong)
                                                      CONCAT21(uVar43,(char)((uint)uVar5 >> 0x10))
                                                     << 0x28) >> 0x20) >> 3,
                                            CONCAT22((ushort)(((ulonglong)(byte)((uint)uVar5 >> 8)
                                                              << 0x18) >> 0x10) >> 3,
                                                     (ushort)(byte)uVar5 << 5))),
                          CONCAT44(uVar50,uVar50));
          uVar51 = pmulhw(CONCAT26(uVar44 >> 3,
                                   CONCAT24((ushort)(((ulonglong)
                                                      CONCAT21(uVar44,(char)((uint)uVar6 >> 0x10))
                                                     << 0x28) >> 0x20) >> 3,
                                            CONCAT22((ushort)(((ulonglong)(byte)((uint)uVar6 >> 8)
                                                              << 0x18) >> 0x10) >> 3,
                                                     (ushort)(byte)uVar6 << 5))),
                          CONCAT44(uVar52,uVar52));
          uVar41 = paddusw(uVar41,uVar47);
          uVar47 = paddusw(uVar49,uVar51);
          uVar41 = paddusw(uVar41,uVar47);
          uVar40 = (ushort)uVar41 >> 3;
          uVar42 = (ushort)((ulonglong)uVar41 >> 0x10) >> 3;
          uVar43 = (ushort)((ulonglong)uVar41 >> 0x20) >> 3;
          uVar44 = (ushort)((ulonglong)uVar41 >> 0x33);
          *(uint *)local_8 =
               CONCAT13((uVar44 != 0) * (uVar44 < 0x100) * (char)uVar44 - (0xff < uVar44),
                        CONCAT12((uVar43 != 0) * (uVar43 < 0x100) * (char)uVar43 - (0xff < uVar43),
                                 CONCAT11((uVar42 != 0) * (uVar42 < 0x100) * (char)uVar42 -
                                          (0xff < uVar42),
                                          (uVar40 != 0) * (uVar40 < 0x100) * (char)uVar40 -
                                          (0xff < uVar40))));
          local_24 = (byte *)((int)local_24 + uVar38);
          pbVar34 = local_8 + 4;
          local_10 = local_10 + -1;
          local_8 = pbVar34;
        } while (local_10 != 0);
      }
      if (1 < iVar29) {
        if (2 < iVar29) {
          local_24 = (byte *)((int)local_24 +
                             (((uint)((longlong)(int)uVar38 * (longlong)iVar16) >> 0xe |
                              (int)((ulonglong)((longlong)(int)uVar38 * (longlong)iVar16) >> 0x20)
                              << 0x12) - uVar38));
        }
        iVar37 = (int)((int)local_24 + ((int)local_24 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar37 == iVar14) {
          iVar37 = *(byte *)(iVar30 + 2 + iVar14 * 4) * uVar32 +
                   (uint)*(byte *)(iVar35 + 2 + iVar14 * 4) * iVar22;
          uStack_96 = (undefined1)((int)(iVar37 + (iVar37 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar37 = *(byte *)(iVar30 + 1 + iVar14 * 4) * uVar32 +
                   (uint)*(byte *)(iVar35 + 1 + iVar14 * 4) * iVar22;
          uStack_97 = (undefined1)((int)(iVar37 + (iVar37 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar37 = *(byte *)(iVar30 + iVar14 * 4) * uVar32 +
                   (uint)*(byte *)(iVar35 + iVar14 * 4) * iVar22;
          local_98 = (undefined1)((int)(iVar37 + (iVar37 >> 0x1f & 0x3fffU)) >> 0xe);
          iVar35 = *(byte *)(iVar30 + 3 + iVar14 * 4) * uVar32 +
                   (uint)*(byte *)(iVar35 + 3 + iVar14 * 4) * iVar22;
          bStack_95 = (byte)((int)(iVar35 + (iVar35 >> 0x1f & 0x3fffU)) >> 0xe);
        }
        else {
          uVar19 = (uint)local_24 & 0x80003fff;
          if ((int)uVar19 < 0) {
            uVar19 = (uVar19 - 1 | 0xffffc000) + 1;
          }
          iVar23 = (0x4000 - uVar19) * iVar22;
          iVar23 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar22 = (int)(uVar19 * iVar22 + ((int)(uVar19 * iVar22) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar24 = (0x4000 - uVar19) * uVar32;
          iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar25 = (int)(uVar19 * uVar32 + ((int)(uVar19 * uVar32) >> 0x1f & 0x3fffU)) >> 0xe;
          uStack_96 = (undefined1)
                      ((uint)*(byte *)(iVar30 + 6 + iVar37 * 4) * iVar25 +
                       (uint)*(byte *)(iVar30 + 2 + iVar37 * 4) * iVar24 +
                       (uint)*(byte *)(iVar35 + 6 + iVar37 * 4) * iVar22 +
                       (uint)*(byte *)(iVar35 + 2 + iVar37 * 4) * iVar23 >> 0xe);
          uStack_97 = (undefined1)
                      ((uint)*(byte *)(iVar30 + 5 + iVar37 * 4) * iVar25 +
                       (uint)*(byte *)(iVar30 + 1 + iVar37 * 4) * iVar24 +
                       (uint)*(byte *)(iVar35 + 5 + iVar37 * 4) * iVar22 +
                       (uint)*(byte *)(iVar35 + 1 + iVar37 * 4) * iVar23 >> 0xe);
          local_98 = (undefined1)
                     ((uint)*(byte *)(iVar30 + 4 + iVar37 * 4) * iVar25 +
                      (uint)*(byte *)(iVar35 + 4 + iVar37 * 4) * iVar22 +
                      (uint)*(byte *)(iVar30 + iVar37 * 4) * iVar24 +
                      (uint)*(byte *)(iVar35 + iVar37 * 4) * iVar23 >> 0xe);
          bStack_95 = (byte)((uint)*(byte *)(iVar30 + 7 + iVar37 * 4) * iVar25 +
                             (uint)*(byte *)(iVar30 + 3 + iVar37 * 4) * iVar24 +
                             (uint)*(byte *)(iVar35 + 7 + iVar37 * 4) * iVar22 +
                             (uint)*(byte *)(iVar35 + 3 + iVar37 * 4) * iVar23 >> 0xe);
        }
        if (in_stack_00000030 == 0) {
          local_c8 = (uint)*pbVar34;
          uVar32 = (int)(iVar16 * 0xff + (iVar16 * 0xff >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
          iVar35 = ((CONCAT12(uStack_96,CONCAT11(uStack_97,local_98)) & 0xff) - local_c8) * uVar32;
          local_c4 = (uint)pbVar34[1];
          *pbVar34 = (char)(iVar35 + (iVar35 >> 0x1f & 0xffU) >> 8) + *pbVar34;
          iVar35 = ((CONCAT12(bStack_95,CONCAT11(uStack_96,uStack_97)) & 0xff) - local_c4) * uVar32;
          local_b8 = (uint)pbVar34[2];
          pbVar34[1] = (char)(iVar35 + (iVar35 >> 0x1f & 0xffU) >> 8) + pbVar34[1];
          iVar35 = ((CONCAT11(bStack_95,uStack_96) & 0xff) - local_b8) * uVar32;
          pbVar34[2] = (char)(iVar35 + (iVar35 >> 0x1f & 0xffU) >> 8) + pbVar34[2];
          iVar35 = ((uint)bStack_95 - (uint)pbVar34[3]) * uVar32;
          pbVar34[3] = (char)(iVar35 + (iVar35 >> 0x1f & 0xffU) >> 8) + pbVar34[3];
        }
        else {
          *(uint *)pbVar34 = CONCAT13(bStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98)));
        }
      }
      local_44 = (byte *)((int)local_44 + iVar31);
      local_88 = local_88 + 1;
    } while (local_88 < iVar12);
  }
  if (1 < iVar17) {
    if (2 < iVar17) {
      local_44 = (byte *)((int)local_44 +
                         (((uint)((longlong)iVar31 * (longlong)iVar15) >> 0xe |
                          (int)((ulonglong)((longlong)iVar31 * (longlong)iVar15) >> 0x20) << 0x12) -
                         iVar31));
    }
    iVar11 = (int)((int)local_44 + ((int)local_44 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar32 = (uint)local_44 & 0x80003fff;
    if ((int)uVar32 < 0) {
      uVar32 = (uVar32 - 1 | 0xffffc000) + 1;
    }
    iVar31 = iVar11 * *(int *)(in_stack_00000028 + 0x38) + *(int *)(in_stack_00000028 + 0x34);
    iVar17 = ((uint)(iVar11 != iVar20) + iVar11) * *(int *)(in_stack_00000028 + 0x38) +
             *(int *)(in_stack_00000028 + 0x34);
    in_stack_0000001c = *(uint *)(in_stack_00000028 + 0x40);
    local_44 = (byte *)(iVar12 * *(int *)(in_stack_00000028 + 8) + *(int *)(in_stack_00000028 + 4) +
                       iVar36);
    iVar11 = ((uint)((longlong)local_48 * (longlong)iVar15) >> 0xe |
             (int)((ulonglong)((longlong)local_48 * (longlong)iVar15) >> 0x20) << 0x12) * 0xff;
    local_80 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
    if (iVar33 < iVar28) {
      local_7c = iVar33;
      do {
        iVar11 = (int)(in_stack_0000001c + ((int)in_stack_0000001c >> 0x1f & 0x3fffU)) >> 0xe;
        uVar18 = in_stack_0000001c & 0x80003fff;
        if ((int)uVar18 < 0) {
          uVar18 = (uVar18 - 1 | 0xffffc000) + 1;
        }
        iVar12 = (0x4000 - uVar32) * (0x4000 - uVar18);
        iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar36 = (0x4000 - uVar32) * uVar18;
        iVar36 = (int)(iVar36 + (iVar36 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar14 = uVar32 * (0x4000 - uVar18);
        iVar14 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar35 = (int)(uVar32 * uVar18 + ((int)(uVar32 * uVar18) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar20 = ((uint)(iVar11 != iVar13 + -1) + iVar11) * 4;
        uVar7 = (undefined1)
                ((uint)*(byte *)(iVar31 + 2 + iVar11 * 4) * iVar12 +
                 (uint)*(byte *)(iVar17 + 2 + iVar11 * 4) * iVar14 +
                 (uint)*(byte *)(iVar20 + 2 + iVar31) * iVar36 +
                 (uint)*(byte *)(iVar20 + 2 + iVar17) * iVar35 >> 0xe);
        uVar8 = (undefined1)
                ((uint)*(byte *)(iVar31 + 1 + iVar11 * 4) * iVar12 +
                 (uint)*(byte *)(iVar17 + 1 + iVar11 * 4) * iVar14 +
                 (uint)*(byte *)(iVar20 + 1 + iVar31) * iVar36 +
                 (uint)*(byte *)(iVar20 + 1 + iVar17) * iVar35 >> 0xe);
        uVar9 = (undefined1)
                ((uint)*(byte *)(iVar20 + iVar17) * iVar35 +
                 (uint)*(byte *)(iVar17 + iVar11 * 4) * iVar14 +
                 (uint)*(byte *)(iVar31 + iVar11 * 4) * iVar12 +
                 (uint)*(byte *)(iVar20 + iVar31) * iVar36 >> 0xe);
        uVar18 = (uint)*(byte *)(iVar31 + 3 + iVar11 * 4) * iVar12 +
                 (uint)*(byte *)(iVar17 + 3 + iVar11 * 4) * iVar14 +
                 (uint)*(byte *)(iVar20 + 3 + iVar31) * iVar36 +
                 (uint)*(byte *)(iVar20 + 3 + iVar17) * iVar35 >> 0xe;
        uVar10 = (undefined1)uVar18;
        if (in_stack_00000030 == 0) {
          uVar19 = local_80 & 0xff;
          iVar11 = ((CONCAT12(uVar7,CONCAT11(uVar8,uVar9)) & 0xff) - (uint)*local_44) * uVar19;
          *local_44 = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + *local_44;
          iVar11 = ((CONCAT12(uVar10,CONCAT11(uVar7,uVar8)) & 0xff) - (uint)local_44[1]) * uVar19;
          local_44[1] = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + local_44[1];
          iVar11 = ((CONCAT11(uVar10,uVar7) & 0xff) - (uint)local_44[2]) * uVar19;
          local_44[2] = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + local_44[2];
          iVar11 = ((uVar18 & 0xff) - (uint)local_44[3]) * uVar19;
          local_44[3] = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + local_44[3];
        }
        else {
          *(uint *)local_44 = CONCAT13(uVar10,CONCAT12(uVar7,CONCAT11(uVar8,uVar9)));
        }
        uVar18 = uVar38;
        if (local_7c == iVar33) {
          local_80 = (int)(iVar15 * 0xff + (iVar15 * 0xff >> 0x1f & 0x3fffU)) >> 0xe;
          uVar18 = (uint)((longlong)local_48 * (longlong)(int)uVar38) >> 0xe |
                   (int)((ulonglong)((longlong)local_48 * (longlong)(int)uVar38) >> 0x20) << 0x12;
        }
        in_stack_0000001c = in_stack_0000001c + uVar18;
        local_44 = local_44 + 4;
        local_7c = local_7c + 1;
      } while (local_7c < iVar28);
    }
    if (1 < iVar29) {
      if (2 < iVar29) {
        in_stack_0000001c =
             in_stack_0000001c +
             (((uint)((longlong)(int)uVar38 * (longlong)iVar16) >> 0xe |
              (int)((ulonglong)((longlong)(int)uVar38 * (longlong)iVar16) >> 0x20) << 0x12) - uVar38
             );
      }
      iVar11 = (int)(in_stack_0000001c + ((int)in_stack_0000001c >> 0x1f & 0x3fffU)) >> 0xe;
      uVar38 = in_stack_0000001c & 0x80003fff;
      if ((int)uVar38 < 0) {
        uVar38 = (uVar38 - 1 | 0xffffc000) + 1;
      }
      iVar12 = (0x4000 - uVar32) * (0x4000 - uVar38);
      iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar36 = (0x4000 - uVar32) * uVar38;
      iVar36 = (int)(iVar36 + (iVar36 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (0x4000 - uVar38) * uVar32;
      iVar14 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar28 = (int)(uVar32 * uVar38 + ((int)(uVar32 * uVar38) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = ((uint)(iVar11 != iVar13 + -1) + iVar11) * 4;
      uVar7 = (undefined1)
              ((uint)*(byte *)(iVar31 + 2 + iVar11 * 4) * iVar12 +
               (uint)*(byte *)(iVar17 + 2 + iVar11 * 4) * iVar14 +
               (uint)*(byte *)(iVar13 + 2 + iVar31) * iVar36 +
               (uint)*(byte *)(iVar13 + 2 + iVar17) * iVar28 >> 0xe);
      uVar8 = (undefined1)
              ((uint)*(byte *)(iVar31 + 1 + iVar11 * 4) * iVar12 +
               (uint)*(byte *)(iVar17 + 1 + iVar11 * 4) * iVar14 +
               (uint)*(byte *)(iVar13 + 1 + iVar31) * iVar36 +
               (uint)*(byte *)(iVar13 + 1 + iVar17) * iVar28 >> 0xe);
      uVar9 = (undefined1)
              ((uint)*(byte *)(iVar13 + iVar17) * iVar28 +
               (uint)*(byte *)(iVar17 + iVar11 * 4) * iVar14 +
               (uint)*(byte *)(iVar31 + iVar11 * 4) * iVar12 +
               (uint)*(byte *)(iVar13 + iVar31) * iVar36 >> 0xe);
      uVar38 = (uint)*(byte *)(iVar31 + 3 + iVar11 * 4) * iVar12 +
               (uint)*(byte *)(iVar17 + 3 + iVar11 * 4) * iVar14 +
               (uint)*(byte *)(iVar13 + 3 + iVar31) * iVar36 +
               (uint)*(byte *)(iVar13 + 3 + iVar17) * iVar28 >> 0xe;
      uVar10 = (undefined1)uVar38;
      iVar11 = ((uint)((longlong)iVar16 * (longlong)iVar15) >> 0xe |
               (int)((ulonglong)((longlong)iVar16 * (longlong)iVar15) >> 0x20) << 0x12) * 0xff;
      if (in_stack_00000030 != 0) {
        *(uint *)local_44 = CONCAT13(uVar10,CONCAT12(uVar7,CONCAT11(uVar8,uVar9)));
        return;
      }
      uVar32 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
      in_stack_00000028 = (uint)*local_44;
      iVar11 = ((CONCAT12(uVar7,CONCAT11(uVar8,uVar9)) & 0xff) - in_stack_00000028) * uVar32;
      *local_44 = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + *local_44;
      in_stack_00000028 = (uint)local_44[1];
      iVar11 = ((CONCAT12(uVar10,CONCAT11(uVar7,uVar8)) & 0xff) - in_stack_00000028) * uVar32;
      local_44[1] = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + local_44[1];
      in_stack_00000028 = (uint)local_44[2];
      iVar11 = ((CONCAT11(uVar10,uVar7) & 0xff) - in_stack_00000028) * uVar32;
      local_44[2] = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + local_44[2];
      in_stack_00000028 = (uint)local_44[3];
      iVar11 = ((uVar38 & 0xff) - in_stack_00000028) * uVar32;
      local_44[3] = (char)(iVar11 + (iVar11 >> 0x1f & 0xffU) >> 8) + local_44[3];
    }
  }
  return;
}


