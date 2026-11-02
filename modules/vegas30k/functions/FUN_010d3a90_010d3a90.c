/* Module: vegas30k.dll
   Function: FUN_010d3a90
   Address: 010d3a90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x010d47b5) */

void FUN_010d3a90(uint param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint local_12c;
  uint local_128;
  uint local_124;
  byte bStack_105;
  uint local_cc;
  uint local_c8;
  byte bStack_b1;
  uint local_ac;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_94;
  int local_7c;
  uint local_70;
  uint local_60;
  uint local_5c;
  undefined1 uStack_51;
  int local_4c;
  int local_28;
  uint local_24;
  undefined1 uStack_1d;
  uint local_18;
  undefined1 uStack_11;
  byte local_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  iVar33 = *(int *)(param_1 + 0x18);
  iVar27 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar33 - 1U | 0x3fff) + 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar20 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar34 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar1 - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar10 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar11 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar8 = iVar34 + 1;
  local_4c = iVar8 * 0x4000 - *(int *)(param_1 + 0x14);
  local_28 = (iVar27 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar25 = iVar33 + iVar20 * -0x4000 + 0x4000;
  iVar21 = iVar20 - iVar27;
  if (iVar21 < 2) {
    local_28 = iVar33 - *(int *)(param_1 + 0x10);
  }
  if (iVar9 - iVar34 < 2) {
    local_4c = iVar1 - *(int *)(param_1 + 0x14);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar33 = *(int *)(param_1 + 100);
  uVar32 = *(uint *)(param_1 + 0x44);
  iVar12 = ftol();
  uVar22 = (uint)(iVar21 != 1);
  iVar13 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar23 = *(int *)(param_1 + 0x38) * iVar13 + *(int *)(param_1 + 0x34);
  iVar26 = iVar27 * (int)param_3;
  param_3 = (uint *)(iVar34 * *(int *)(param_1 + 8) + iVar26 + *(int *)(param_1 + 4));
  iVar11 = ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) + -1;
  local_7c = iVar23;
  if (iVar11 != iVar13) {
    local_7c = *(int *)(param_1 + 0x38) + iVar23;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar27 < iVar20) {
    uVar14 = uVar32 & 0x80003fff;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xffffc000) + 1;
    }
    iVar13 = iVar27;
    do {
      uVar17 = *param_3;
      local_24 = (uint)((longlong)iVar12 * (longlong)local_4c) >> 0xe |
                 (int)((ulonglong)((longlong)iVar12 * (longlong)local_4c) >> 0x20) << 0x12;
      uVar29 = 1;
      iVar24 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar13 == iVar27) {
        local_24 = (uint)((longlong)(int)local_24 * (longlong)local_28) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_24 * (longlong)local_28) >> 0x20) << 0x12;
        uVar29 = uVar22;
      }
      else if (iVar13 == iVar20 + -1) {
        local_24 = (uint)((longlong)(int)local_24 * (longlong)iVar25) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_24 * (longlong)iVar25) >> 0x20) << 0x12;
        uVar29 = 0;
        iVar24 = iVar10 + -1;
      }
      uVar31 = *(uint *)(iVar23 + iVar24 * 4);
      iVar15 = (iVar24 + uVar29) * 4;
      uVar28 = param_2 & 0x80003fff;
      uVar29 = *(uint *)(iVar15 + iVar23);
      uVar3 = *(uint *)(local_7c + iVar24 * 4);
      uVar36 = *(uint *)(iVar15 + local_7c);
      if ((int)uVar28 < 0) {
        uVar28 = (uVar28 - 1 | 0xffffc000) + 1;
      }
      iVar24 = (0x4000 - uVar14) * (0x4000 - uVar28);
      iVar15 = (0x4000 - uVar14) * uVar28;
      iVar16 = (0x4000 - uVar28) * uVar14;
      iVar35 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar16 = (int)(uVar14 * uVar28 + ((int)(uVar14 * uVar28) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar30 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar15 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (uVar36 & 0xff) * iVar16 + (uVar3 & 0xff) * iVar35 + (uVar29 & 0xff) * iVar30 +
               (uVar31 & 0xff) * iVar15;
      uVar28 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (uVar36 >> 8 & 0xff) * iVar16 + (uVar3 >> 8 & 0xff) * iVar35 +
               (uVar29 >> 8 & 0xff) * iVar30 + (uVar31 >> 8 & 0xff) * iVar15;
      local_ac = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (uVar36 >> 0x10 & 0xff) * iVar16 + (uVar3 >> 0x10 & 0xff) * iVar35 +
               (uVar29 >> 0x10 & 0xff) * iVar30 + (uVar31 >> 0x10 & 0xff) * iVar15;
      local_a0 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (uVar36 >> 0x18) * iVar16 + (uVar3 >> 0x18) * iVar35 + (uVar29 >> 0x18) * iVar30 +
               (uVar31 >> 0x18) * iVar15;
      uVar29 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      bVar5 = (byte)uVar29;
      iVar24 = (uVar29 & 0xff) * local_24;
      local_70 = (int)(local_24 * 0xff + ((int)(local_24 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
      uVar31 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      local_18 = uVar29;
      if ((byte)uVar28 < bVar5) {
        local_18 = uVar28;
      }
      local_18 = local_18 & 0xff;
      iVar15 = 0xff - (uVar31 & 0xff);
      iVar24 = (uVar17 & 0xff) * iVar15 + 0x7f;
      if (bVar5 <= (byte)local_ac) {
        local_ac = uVar29;
      }
      local_ac = local_ac & 0xff;
      iVar16 = (uVar17 >> 8 & 0xff) * iVar15 + 0x7f;
      if (bVar5 <= (byte)local_a0) {
        local_a0 = uVar29;
      }
      local_a0 = local_a0 & 0xff;
      iVar30 = (uVar17 >> 0x10 & 0xff) * iVar15 + 0x7f;
      iVar15 = (uVar17 >> 0x18) + uVar31;
      if (iVar15 < 0) {
        uStack_1d = 0;
      }
      else {
        uStack_1d = 0xff;
        if (iVar15 < 0x100) {
          uStack_1d = (undefined1)iVar15;
        }
      }
      *param_3 = CONCAT13(uStack_1d,
                          CONCAT12((char)(iVar30 + (iVar30 >> 0x1f & 0xffU) >> 8) +
                                   (char)(local_a0 * local_70 >> 8),
                                   CONCAT11((char)(iVar16 + (iVar16 >> 0x1f & 0xffU) >> 8) +
                                            (char)(local_ac * local_70 >> 8),
                                            (char)((iVar24 >> 0x1f & 0xffU) + iVar24 >> 8) +
                                            (char)(local_18 * local_70 >> 8))));
      param_3 = param_3 + 1;
      uVar17 = uVar2;
      if (iVar13 == iVar27) {
        uVar17 = (uint)((longlong)(int)uVar2 * (longlong)local_28) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_28) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar17;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar20);
  }
  lVar4 = (longlong)iVar33 * (longlong)local_4c;
  uVar32 = uVar32 + ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
  do {
    if (iVar9 + -1 <= iVar8) {
      if (iVar9 - iVar34 != 1) {
        puVar18 = (uint *)((iVar9 + -1) * *(int *)(param_1 + 8) + iVar26 + *(int *)(param_1 + 4));
        iVar33 = iVar11 * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
        uVar32 = *(uint *)(param_1 + 0x40);
        for (iVar8 = iVar27; iVar8 < iVar20; iVar8 = iVar8 + 1) {
          uVar14 = *puVar18;
          lVar4 = (longlong)iVar12 * (longlong)(iVar1 + iVar9 * -0x4000 + 0x4000);
          param_1 = (uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12;
          uVar17 = 1;
          iVar11 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar8 == iVar27) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)local_28) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)local_28) >> 0x20) <<
                      0x12;
            uVar17 = uVar22;
          }
          else if (iVar8 == iVar20 + -1) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)iVar25) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)iVar25) >> 0x20) << 0x12;
            iVar11 = iVar10 + -1;
            uVar17 = 0;
          }
          uVar29 = *(uint *)(iVar33 + iVar11 * 4);
          uVar17 = *(uint *)(iVar33 + (iVar11 + uVar17) * 4);
          uVar31 = uVar32 & 0x80003fff;
          if ((int)uVar31 < 0) {
            uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
          }
          iVar11 = (0x4000 - uVar31) * 0x4000;
          iVar34 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar13 = (int)(uVar31 * 0x4000 + ((int)(uVar31 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar11 = (uVar17 & 0xff) * iVar13 + (uVar29 & 0xff) * iVar34;
          iVar21 = (uVar17 >> 8 & 0xff) * iVar13 + (uVar29 >> 8 & 0xff) * iVar34;
          local_5c = (int)(iVar21 + (iVar21 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar21 = (uVar17 >> 0x10 & 0xff) * iVar13 + (uVar29 >> 0x10 & 0xff) * iVar34;
          local_94 = (int)(iVar21 + (iVar21 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar21 = (uVar17 >> 0x18) * iVar13 + (uVar29 >> 0x18) * iVar34;
          uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0x3fffU)) >> 0xe;
          bVar5 = (byte)uVar17;
          iVar21 = (uVar17 & 0xff) * param_1;
          local_60 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
          uVar29 = (int)(iVar21 + (iVar21 >> 0x1f & 0x3fffU)) >> 0xe;
          local_c8 = (int)(param_1 * 0xff + ((int)(param_1 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe & 0xff
          ;
          if (bVar5 <= (byte)local_60) {
            local_60 = uVar17;
          }
          local_60 = local_60 & 0xff;
          iVar21 = 0xff - (uVar29 & 0xff);
          iVar11 = (uVar14 & 0xff) * iVar21 + 0x7f;
          if (bVar5 <= (byte)local_5c) {
            local_5c = uVar17;
          }
          local_5c = local_5c & 0xff;
          iVar34 = (uVar14 >> 8 & 0xff) * iVar21 + 0x7f;
          if (bVar5 <= (byte)local_94) {
            local_94 = uVar17;
          }
          local_94 = local_94 & 0xff;
          iVar13 = (uVar14 >> 0x10 & 0xff) * iVar21 + 0x7f;
          iVar21 = (uVar14 >> 0x18) + uVar29;
          if (iVar21 < 0) {
            uStack_11 = 0;
          }
          else {
            uStack_11 = 0xff;
            if (iVar21 < 0x100) {
              uStack_11 = (undefined1)iVar21;
            }
          }
          *puVar18 = CONCAT13(uStack_11,
                              CONCAT12((char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8) +
                                       (char)(local_94 * local_c8 >> 8),
                                       CONCAT11((char)(iVar34 + (iVar34 >> 0x1f & 0xffU) >> 8) +
                                                (char)(local_5c * local_c8 >> 8),
                                                (char)((iVar11 >> 0x1f & 0xffU) + iVar11 >> 8) +
                                                (char)(local_60 * local_c8 >> 8))));
          puVar18 = puVar18 + 1;
          uVar14 = uVar2;
          if (iVar8 == iVar27) {
            uVar14 = (uint)((longlong)(int)uVar2 * (longlong)local_28) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_28) >> 0x20) << 0x12;
          }
          uVar32 = uVar32 + uVar14;
        }
      }
      return;
    }
    iVar15 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar24 = *(int *)(param_1 + 0x38) * iVar15 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar8 * *(int *)(param_1 + 8) + iVar26 + *(int *)(param_1 + 4));
    iVar23 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    iVar13 = iVar24;
    if (((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar15) {
      iVar13 = *(int *)(param_1 + 0x38) + iVar24;
    }
    uVar14 = *param_3;
    param_2 = *(uint *)(param_1 + 0x40);
    iVar23 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar17 = *(uint *)(iVar24 + iVar23 * 4);
    uVar29 = *(uint *)(iVar13 + iVar23 * 4);
    iVar23 = (uVar22 + iVar23) * 4;
    uVar36 = param_2 & 0x80003fff;
    uVar31 = *(uint *)(iVar23 + iVar24);
    uVar3 = *(uint *)(iVar23 + iVar13);
    if ((int)uVar36 < 0) {
      uVar36 = (uVar36 - 1 | 0xffffc000) + 1;
    }
    uVar28 = uVar32 & 0x80003fff;
    if ((int)uVar28 < 0) {
      uVar28 = (uVar28 - 1 | 0xffffc000) + 1;
    }
    iVar23 = (0x4000 - uVar36) * (0x4000 - uVar28);
    iVar15 = (0x4000 - uVar28) * uVar36;
    iVar16 = (0x4000 - uVar36) * uVar28;
    iVar30 = (int)(((int)(uVar28 * uVar36) >> 0x1f & 0x3fffU) + uVar28 * uVar36) >> 0xe;
    iVar16 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar35 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar15 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar23 = (uVar3 & 0xff) * iVar30 + (uVar29 & 0xff) * iVar16 + (uVar31 & 0xff) * iVar35 +
             (uVar17 & 0xff) * iVar15;
    local_a0 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar23 = (uVar3 >> 8 & 0xff) * iVar30 + (uVar29 >> 8 & 0xff) * iVar16 +
             (uVar31 >> 8 & 0xff) * iVar35 + (uVar17 >> 8 & 0xff) * iVar15;
    local_ac = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar23 = (uVar3 >> 0x10 & 0xff) * iVar30 + (uVar29 >> 0x10 & 0xff) * iVar16 +
             (uVar31 >> 0x10 & 0xff) * iVar35 + (uVar17 >> 0x10 & 0xff) * iVar15;
    local_a4 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar23 = (uVar3 >> 0x18) * iVar30 + (uVar29 >> 0x18) * iVar16 + (uVar31 >> 0x18) * iVar35 +
             (uVar17 >> 0x18) * iVar15;
    uVar29 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
    bVar5 = (byte)uVar29;
    uVar17 = (uint)((longlong)iVar12 * (longlong)local_28) >> 0xe |
             (int)((ulonglong)((longlong)iVar12 * (longlong)local_28) >> 0x20) << 0x12;
    iVar15 = (uVar29 & 0xff) * uVar17;
    iVar23 = uVar17 * 0xff;
    local_124 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
    uVar17 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
    if (bVar5 <= (byte)local_a0) {
      local_a0 = uVar29;
    }
    local_a0 = local_a0 & 0xff;
    iVar15 = 0xff - (uVar17 & 0xff);
    iVar23 = (uVar14 & 0xff) * iVar15 + 0x7f;
    if (bVar5 <= (byte)local_ac) {
      local_ac = uVar29;
    }
    local_ac = local_ac & 0xff;
    iVar16 = (uVar14 >> 8 & 0xff) * iVar15 + 0x7f;
    if (bVar5 <= (byte)local_a4) {
      local_a4 = uVar29;
    }
    local_a4 = local_a4 & 0xff;
    iVar30 = (uVar14 >> 0x10 & 0xff) * iVar15 + 0x7f;
    iVar15 = (uVar14 >> 0x18) + uVar17;
    if (iVar15 < 0) {
      uStack_51 = 0;
    }
    else {
      uStack_51 = 0xff;
      if (iVar15 < 0x100) {
        uStack_51 = (undefined1)iVar15;
      }
    }
    param_2 = param_2 + ((uint)((longlong)(int)uVar2 * (longlong)local_28) >> 0xe |
                        (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_28) >> 0x20) <<
                        0x12);
    *param_3 = CONCAT13(uStack_51,
                        CONCAT12((char)(iVar30 + (iVar30 >> 0x1f & 0xffU) >> 8) +
                                 (char)(local_a4 * local_124 >> 8),
                                 CONCAT11((char)(iVar16 + (iVar16 >> 0x1f & 0xffU) >> 8) +
                                          (char)(local_ac * local_124 >> 8),
                                          (char)((iVar23 >> 0x1f & 0xffU) + iVar23 >> 8) +
                                          (char)(local_a0 * local_124 >> 8))));
    param_3 = param_3 + 1;
    if (iVar27 + 1 < iVar20 + -1) {
      local_18 = (iVar20 + -1) - (iVar27 + 1);
      do {
        uVar14 = *param_3;
        local_c = (byte)uVar14;
        bStack_b = (byte)(uVar14 >> 8);
        bStack_a = (byte)(uVar14 >> 0x10);
        bStack_9 = (byte)(uVar14 >> 0x18);
        iVar23 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar36 = param_2 & 0x80003fff;
        uVar17 = *(uint *)(iVar24 + iVar23 * 4);
        uVar29 = *(uint *)(iVar24 + 4 + iVar23 * 4);
        uVar31 = *(uint *)(iVar13 + iVar23 * 4);
        uVar3 = *(uint *)(iVar13 + 4 + iVar23 * 4);
        if ((int)uVar36 < 0) {
          uVar36 = (uVar36 - 1 | 0xffffc000) + 1;
        }
        iVar23 = (0x4000 - uVar36) * (0x4000 - uVar28);
        iVar15 = uVar36 * (0x4000 - uVar28);
        iVar16 = (0x4000 - uVar36) * uVar28;
        iVar35 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar16 = (int)(uVar28 * uVar36 + ((int)(uVar28 * uVar36) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar30 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar23 = (uVar3 & 0xff) * iVar16 + (uVar31 & 0xff) * iVar35 + (uVar29 & 0xff) * iVar30 +
                 (uVar17 & 0xff) * iVar15;
        local_9c = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
        bVar5 = (byte)local_9c;
        iVar23 = (uVar3 >> 8 & 0xff) * iVar16 + (uVar31 >> 8 & 0xff) * iVar35 +
                 (uVar29 >> 8 & 0xff) * iVar30 + (uVar17 >> 8 & 0xff) * iVar15;
        local_24 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
        bVar6 = (byte)local_24;
        iVar23 = (uVar3 >> 0x10 & 0xff) * iVar16 + (uVar31 >> 0x10 & 0xff) * iVar35 +
                 (uVar29 >> 0x10 & 0xff) * iVar30 + (uVar17 >> 0x10 & 0xff) * iVar15;
        local_cc = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
        bVar7 = (byte)local_cc;
        iVar23 = (uVar3 >> 0x18) * iVar16 + (uVar31 >> 0x18) * iVar35 + (uVar29 >> 0x18) * iVar30 +
                 (uVar17 >> 0x18) * iVar15;
        uVar17 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
        bVar19 = (byte)uVar17;
        if (iVar12 == 0x4000) {
          if (bVar19 == 0xff) {
            bStack_9 = 0xff;
            local_c = bVar5;
            bStack_b = bVar6;
            bStack_a = bVar7;
          }
          else if (bVar19 != 0) {
            iVar15 = 0xff - (uVar17 & 0xff);
            iVar23 = (uVar14 & 0xff) * iVar15 + 0x7f;
            iVar23 = ((int)(iVar23 + (iVar23 >> 0x1f & 0xffU)) >> 8) +
                     (CONCAT12(bVar7,CONCAT11(bVar6,bVar5)) & 0xff);
            if (iVar23 < 0) {
              local_c = 0;
            }
            else {
              local_c = 0xff;
              if (iVar23 < 0x100) {
                local_c = (byte)iVar23;
              }
            }
            iVar23 = (uVar14 >> 8 & 0xff) * iVar15 + 0x7f;
            iVar23 = ((int)(iVar23 + (iVar23 >> 0x1f & 0xffU)) >> 8) +
                     (CONCAT12(bVar19,CONCAT11(bVar7,bVar6)) & 0xff);
            if (iVar23 < 0) {
              bStack_b = 0;
            }
            else {
              bStack_b = 0xff;
              if (iVar23 < 0x100) {
                bStack_b = (byte)iVar23;
              }
            }
            iVar23 = (uVar14 >> 0x10 & 0xff) * iVar15 + 0x7f;
            iVar23 = ((int)(iVar23 + (iVar23 >> 0x1f & 0xffU)) >> 8) +
                     (CONCAT11(bVar19,bVar7) & 0xff);
            if (iVar23 < 0) {
              bStack_a = 0;
            }
            else {
              bStack_a = 0xff;
              if (iVar23 < 0x100) {
                bStack_a = (byte)iVar23;
              }
            }
            uVar29 = (uint)bStack_9 + (uVar17 & 0xff);
            if (uVar29 < 0x100) goto LAB_010d492a;
            bStack_9 = 0xff;
          }
        }
        else {
          iVar23 = (uVar17 & 0xff) * iVar12;
          local_12c = (int)(iVar12 * 0xff + (iVar12 * 0xff >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
          uVar29 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
          if (bVar19 <= bVar5) {
            local_9c = uVar17;
          }
          local_9c = local_9c & 0xff;
          iVar15 = 0xff - (uVar29 & 0xff);
          iVar23 = (uVar14 & 0xff) * iVar15 + 0x7f;
          local_c = (char)(iVar23 + (iVar23 >> 0x1f & 0xffU) >> 8) +
                    (char)(local_9c * local_12c >> 8);
          if (bVar19 <= bVar6) {
            local_24 = uVar17;
          }
          local_24 = local_24 & 0xff;
          iVar23 = (uVar14 >> 8 & 0xff) * iVar15 + 0x7f;
          bStack_b = (char)(iVar23 + (iVar23 >> 0x1f & 0xffU) >> 8) +
                     (char)(local_24 * local_12c >> 8);
          if (bVar19 <= bVar7) {
            local_cc = uVar17;
          }
          local_cc = local_cc & 0xff;
          iVar23 = (uVar14 >> 0x10 & 0xff) * iVar15 + 0x7f;
          bStack_a = (char)(iVar23 + (iVar23 >> 0x1f & 0xffU) >> 8) +
                     (char)(local_cc * local_12c >> 8);
          uVar29 = uVar29 + bStack_9;
          if ((int)uVar29 < 0) {
            bStack_9 = 0;
          }
          else if ((int)uVar29 < 0x100) {
LAB_010d492a:
            bStack_9 = (byte)uVar29;
          }
          else {
            bStack_9 = 0xff;
          }
        }
        *param_3 = CONCAT13(bStack_9,CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar2;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    if (iVar21 != 1) {
      uVar14 = *param_3;
      param_2 = param_2 & 0x80003fff;
      uVar17 = *(uint *)(iVar24 + -4 + iVar10 * 4);
      bStack_b1 = (byte)(uVar17 >> 0x18);
      uVar29 = *(uint *)(iVar13 + -4 + iVar10 * 4);
      bStack_105 = (byte)(uVar29 >> 0x18);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar13 = (0x4000 - param_2) * (0x4000 - uVar28);
      iVar23 = (0x4000 - uVar28) * param_2;
      iVar24 = (0x4000 - param_2) * uVar28;
      iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar15 = (int)(uVar28 * param_2 + ((int)(uVar28 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar16 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar23 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (uVar29 & 0xff) * iVar15 + (uVar29 & 0xff) * iVar24 + (uVar17 & 0xff) * iVar16 +
               (uVar17 & 0xff) * iVar23;
      uVar31 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (uVar29 >> 8 & 0xff) * iVar15 + (uVar29 >> 8 & 0xff) * iVar24 +
               (uVar17 >> 8 & 0xff) * iVar16 + (uVar17 >> 8 & 0xff) * iVar23;
      local_60 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (uVar29 >> 0x10 & 0xff) * iVar15 + (uVar29 >> 0x10 & 0xff) * iVar24 +
               (uVar17 >> 0x10 & 0xff) * iVar16 + (uVar17 >> 0x10 & 0xff) * iVar23;
      local_70 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (uint)bStack_105 * iVar15 + (uint)bStack_105 * iVar24 + (uint)bStack_b1 * iVar16 +
               (uint)bStack_b1 * iVar23;
      uVar29 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      bVar5 = (byte)uVar29;
      uVar17 = (uint)((longlong)iVar12 * (longlong)iVar25) >> 0xe |
               (int)((ulonglong)((longlong)iVar12 * (longlong)iVar25) >> 0x20) << 0x12;
      iVar23 = (uVar29 & 0xff) * uVar17;
      iVar13 = uVar17 * 0xff;
      local_128 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xff;
      uVar17 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
      local_5c = uVar29;
      if ((byte)uVar31 < bVar5) {
        local_5c = uVar31;
      }
      local_5c = local_5c & 0xff;
      iVar23 = 0xff - (uVar17 & 0xff);
      iVar13 = (uVar14 & 0xff) * iVar23 + 0x7f;
      if (bVar5 <= (byte)local_60) {
        local_60 = uVar29;
      }
      local_60 = local_60 & 0xff;
      iVar24 = (uVar14 >> 8 & 0xff) * iVar23 + 0x7f;
      if (bVar5 <= (byte)local_70) {
        local_70 = uVar29;
      }
      local_70 = local_70 & 0xff;
      iVar15 = (uVar14 >> 0x10 & 0xff) * iVar23 + 0x7f;
      iVar23 = (uVar14 >> 0x18) + uVar17;
      if (iVar23 < 0) {
        uStack_11 = 0;
      }
      else {
        uStack_11 = 0xff;
        if (iVar23 < 0x100) {
          uStack_11 = (undefined1)iVar23;
        }
      }
      *param_3 = CONCAT13(uStack_11,
                          CONCAT12((char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8) +
                                   (char)(local_70 * local_128 >> 8),
                                   CONCAT11((char)(iVar24 + (iVar24 >> 0x1f & 0xffU) >> 8) +
                                            (char)(local_60 * local_128 >> 8),
                                            (char)((iVar13 >> 0x1f & 0xffU) + iVar13 >> 8) +
                                            (char)(local_5c * local_128 >> 8))));
    }
    uVar32 = uVar32 + iVar33;
    iVar8 = iVar8 + 1;
  } while( true );
}


