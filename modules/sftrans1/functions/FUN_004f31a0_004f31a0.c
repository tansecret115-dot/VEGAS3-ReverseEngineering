/* Module: sftrans1.dll
   Function: FUN_004f31a0
   Address: 004f31a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f31a0(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  byte bStack_109;
  uint local_c4;
  uint local_c0;
  uint local_b8;
  byte bStack_a9;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_5c;
  uint local_50;
  uint local_48;
  uint local_38;
  uint local_34;
  int local_28;
  char local_24;
  byte bStack_23;
  byte bStack_22;
  undefined1 uStack_21;
  uint local_1c;
  int local_18;
  char local_14;
  byte bStack_13;
  byte bStack_12;
  undefined1 uStack_11;
  char local_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  iVar17 = *(int *)(param_1 + 0x18);
  iVar27 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar17 - 1U | 0x3fff) + 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar19 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar34 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar1 - 1U | 0x3fff) + 1;
  iVar6 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar7 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar8 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = iVar34 + 1;
  local_50 = iVar5 * 0x4000 - *(int *)(param_1 + 0x14);
  local_18 = (iVar27 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar25 = iVar17 + iVar19 * -0x4000 + 0x4000;
  iVar20 = iVar19 - iVar27;
  if (iVar20 < 2) {
    local_18 = iVar17 - *(int *)(param_1 + 0x10);
  }
  if (iVar6 - iVar34 < 2) {
    local_50 = iVar1 - *(int *)(param_1 + 0x14);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar17 = *(int *)(param_1 + 100);
  uVar32 = *(uint *)(param_1 + 0x44);
  iVar9 = ftol();
  uVar21 = (uint)(iVar20 != 1);
  iVar10 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar22 = *(int *)(param_1 + 0x38) * iVar10 + *(int *)(param_1 + 0x34);
  iVar26 = iVar27 * (int)param_3;
  param_3 = (uint *)(iVar34 * *(int *)(param_1 + 8) + iVar26 + *(int *)(param_1 + 4));
  local_8c = iVar22;
  if (iVar8 + -1 != iVar10) {
    local_8c = *(int *)(param_1 + 0x38) + iVar22;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar27 < iVar19) {
    uVar11 = uVar32 & 0x80003fff;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffc000) + 1;
    }
    iVar10 = iVar27;
    do {
      uVar16 = *param_3;
      local_c = (char)uVar16;
      bStack_b = (byte)(uVar16 >> 8);
      bStack_a = (byte)(uVar16 >> 0x10);
      local_34 = (uint)((longlong)iVar9 * (longlong)(int)local_50) >> 0xe |
                 (int)((ulonglong)((longlong)iVar9 * (longlong)(int)local_50) >> 0x20) << 0x12;
      uVar30 = 1;
      iVar23 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar10 == iVar27) {
        local_34 = (uint)((longlong)(int)local_34 * (longlong)local_18) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_34 * (longlong)local_18) >> 0x20) << 0x12;
        uVar30 = uVar21;
      }
      else if (iVar10 == iVar19 + -1) {
        local_34 = (uint)((longlong)(int)local_34 * (longlong)iVar25) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_34 * (longlong)iVar25) >> 0x20) << 0x12;
        uVar30 = 0;
        iVar23 = iVar7 + -1;
      }
      uVar33 = *(uint *)(iVar22 + iVar23 * 4);
      iVar12 = (iVar23 + uVar30) * 4;
      uVar28 = param_2 & 0x80003fff;
      uVar30 = *(uint *)(iVar12 + iVar22);
      uVar3 = *(uint *)(local_8c + iVar23 * 4);
      uVar36 = *(uint *)(iVar12 + local_8c);
      if ((int)uVar28 < 0) {
        uVar28 = (uVar28 - 1 | 0xffffc000) + 1;
      }
      iVar23 = (0x4000 - uVar11) * (0x4000 - uVar28);
      iVar12 = (0x4000 - uVar11) * uVar28;
      iVar13 = (0x4000 - uVar28) * uVar11;
      iVar35 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar29 = (int)(uVar11 * uVar28 + ((int)(uVar11 * uVar28) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar31 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar23 = (uVar36 & 0xff) * iVar29 + (uVar3 & 0xff) * iVar35 + (uVar30 & 0xff) * iVar31 +
               (uVar33 & 0xff) * iVar24;
      iVar12 = (uVar36 >> 8 & 0xff) * iVar29 + (uVar3 >> 8 & 0xff) * iVar35 +
               (uVar30 >> 8 & 0xff) * iVar31 + (uVar33 >> 8 & 0xff) * iVar24;
      iVar13 = (uVar36 >> 0x10 & 0xff) * iVar29 + (uVar3 >> 0x10 & 0xff) * iVar35 +
               (uVar30 >> 0x10 & 0xff) * iVar31 + (uVar33 >> 0x10 & 0xff) * iVar24;
      iVar24 = (uVar36 >> 0x18) * iVar29 + (uVar3 >> 0x18) * iVar35 + (uVar30 >> 0x18) * iVar31 +
               (uVar33 >> 0x18) * iVar24;
      iVar24 = (0xff - ((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU)) * local_34;
      iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar24 == 0) {
        local_5c = uVar16 & 0xff;
      }
      else {
        uVar30 = (int)(((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
        local_5c = uVar30 & 0xff;
        if (0xfe < (int)uVar30) {
          local_5c = 0xff;
        }
      }
      iVar29 = (int)(short)iVar24;
      iVar23 = (local_5c - (uVar16 & 0xff)) * iVar29;
      if (iVar24 == 0) {
        local_64 = (uint)bStack_b;
      }
      else {
        uVar30 = (int)(((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
        local_64 = uVar30 & 0xff;
        if (0xfe < (int)uVar30) {
          local_64 = 0xff;
        }
      }
      iVar12 = (local_64 - (uVar16 >> 8 & 0xff)) * iVar29;
      if (iVar24 == 0) {
        local_6c = (uint)bStack_a;
      }
      else {
        uVar30 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
        local_6c = uVar30 & 0xff;
        if (0xfe < (int)uVar30) {
          local_6c = 0xff;
        }
      }
      iVar29 = (local_6c - (uVar16 >> 0x10 & 0xff)) * iVar29;
      iVar24 = (uVar16 >> 0x18) + iVar24;
      if (iVar24 < 0) {
        bStack_9 = 0;
      }
      else {
        bStack_9 = 0xff;
        if (iVar24 < 0x100) {
          bStack_9 = (byte)iVar24;
        }
      }
      *param_3 = CONCAT13(bStack_9,CONCAT12(bStack_a +
                                            (char)(iVar29 + (iVar29 >> 0x1f & 0xffU) >> 8),
                                            CONCAT11(bStack_b +
                                                     (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8),
                                                     local_c + (char)(iVar23 + (iVar23 >> 0x1f &
                                                                               0xffU) >> 8))));
      param_3 = param_3 + 1;
      uVar16 = uVar2;
      if (iVar10 == iVar27) {
        uVar16 = (uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar16;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar19);
  }
  lVar4 = (longlong)iVar17 * (longlong)(int)local_50;
  uVar32 = uVar32 + ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
  do {
    if (iVar6 + -1 <= iVar5) {
      if (iVar6 - iVar34 != 1) {
        iVar17 = (iVar8 + -1) * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
        puVar18 = (uint *)((iVar6 + -1) * *(int *)(param_1 + 8) + iVar26 + *(int *)(param_1 + 4));
        param_2 = *(uint *)(param_1 + 0x40);
        for (iVar5 = iVar27; iVar5 < iVar19; iVar5 = iVar5 + 1) {
          uVar32 = *puVar18;
          local_14 = (char)uVar32;
          bStack_13 = (byte)(uVar32 >> 8);
          bStack_12 = (byte)(uVar32 >> 0x10);
          lVar4 = (longlong)iVar9 * (longlong)(iVar1 + iVar6 * -0x4000 + 0x4000);
          uVar16 = (uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12;
          uVar11 = 1;
          iVar8 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar5 == iVar27) {
            uVar16 = (uint)((longlong)(int)uVar16 * (longlong)local_18) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar16 * (longlong)local_18) >> 0x20) << 0x12;
            uVar11 = uVar21;
          }
          else if (iVar5 == iVar19 + -1) {
            uVar16 = (uint)((longlong)(int)uVar16 * (longlong)iVar25) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar16 * (longlong)iVar25) >> 0x20) << 0x12;
            uVar11 = 0;
            iVar8 = iVar7 + -1;
          }
          uVar30 = *(uint *)(iVar17 + iVar8 * 4);
          uVar11 = *(uint *)(iVar17 + (iVar8 + uVar11) * 4);
          uVar33 = param_2 & 0x80003fff;
          if ((int)uVar33 < 0) {
            uVar33 = (uVar33 - 1 | 0xffffc000) + 1;
          }
          iVar8 = (0x4000 - uVar33) * 0x4000;
          iVar10 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar22 = (int)(uVar33 * 0x4000 + ((int)(uVar33 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar8 = (uVar11 & 0xff) * iVar22 + (uVar30 & 0xff) * iVar10;
          iVar20 = (uVar11 >> 8 & 0xff) * iVar22 + (uVar30 >> 8 & 0xff) * iVar10;
          iVar34 = (uVar11 >> 0x10 & 0xff) * iVar22 + (uVar30 >> 0x10 & 0xff) * iVar10;
          iVar10 = (uVar11 >> 0x18) * iVar22 + (uVar30 >> 0x18) * iVar10;
          iVar10 = (0xff - ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU)) * uVar16;
          iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar10 == 0) {
            local_1c = uVar32 & 0xff;
          }
          else {
            uVar11 = (int)(((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar10;
            local_1c = uVar11 & 0xff;
            if (0xfe < (int)uVar11) {
              local_1c = 0xff;
            }
          }
          iVar22 = (int)(short)iVar10;
          iVar8 = (local_1c - (uVar32 & 0xff)) * iVar22;
          if (iVar10 == 0) {
            local_68 = (uint)bStack_13;
          }
          else {
            uVar11 = (int)(((int)(iVar20 + (iVar20 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar10;
            local_68 = uVar11 & 0xff;
            if (0xfe < (int)uVar11) {
              local_68 = 0xff;
            }
          }
          iVar20 = (local_68 - (uVar32 >> 8 & 0xff)) * iVar22;
          if (iVar10 == 0) {
            local_48 = (uint)bStack_12;
          }
          else {
            uVar11 = (int)(((int)(iVar34 + (iVar34 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar10;
            local_48 = uVar11 & 0xff;
            if (0xfe < (int)uVar11) {
              local_48 = 0xff;
            }
          }
          iVar22 = (local_48 - (uVar32 >> 0x10 & 0xff)) * iVar22;
          iVar10 = iVar10 + (uVar32 >> 0x18);
          if (iVar10 < 0) {
            uStack_11 = 0;
          }
          else {
            uStack_11 = 0xff;
            if (iVar10 < 0x100) {
              uStack_11 = (undefined1)iVar10;
            }
          }
          *puVar18 = CONCAT13(uStack_11,
                              CONCAT12(bStack_12 + (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8),
                                       CONCAT11(bStack_13 +
                                                (char)(iVar20 + (iVar20 >> 0x1f & 0xffU) >> 8),
                                                local_14 +
                                                (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8))));
          puVar18 = puVar18 + 1;
          uVar32 = uVar2;
          if (iVar5 == iVar27) {
            uVar32 = (uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) << 0x12;
          }
          param_2 = param_2 + uVar32;
        }
      }
      return;
    }
    iVar12 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar23 = *(int *)(param_1 + 0x38) * iVar12 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar5 * *(int *)(param_1 + 8) + iVar26 + *(int *)(param_1 + 4));
    iVar22 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    iVar10 = iVar23;
    if (((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar12) {
      iVar10 = *(int *)(param_1 + 0x38) + iVar23;
    }
    uVar11 = *param_3;
    local_24 = (char)uVar11;
    bStack_23 = (byte)(uVar11 >> 8);
    bStack_22 = (byte)(uVar11 >> 0x10);
    param_2 = *(uint *)(param_1 + 0x40);
    iVar22 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar16 = *(uint *)(iVar23 + iVar22 * 4);
    uVar30 = *(uint *)(iVar10 + iVar22 * 4);
    iVar22 = (uVar21 + iVar22) * 4;
    uVar36 = param_2 & 0x80003fff;
    uVar33 = *(uint *)(iVar22 + iVar23);
    uVar3 = *(uint *)(iVar22 + iVar10);
    if ((int)uVar36 < 0) {
      uVar36 = (uVar36 - 1 | 0xffffc000) + 1;
    }
    uVar28 = uVar32 & 0x80003fff;
    if ((int)uVar28 < 0) {
      uVar28 = (uVar28 - 1 | 0xffffc000) + 1;
    }
    iVar22 = (0x4000 - uVar36) * (0x4000 - uVar28);
    iVar12 = uVar36 * (0x4000 - uVar28);
    iVar13 = uVar28 * (0x4000 - uVar36);
    iVar24 = (int)(((int)(uVar28 * uVar36) >> 0x1f & 0x3fffU) + uVar28 * uVar36) >> 0xe;
    iVar29 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar35 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar31 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar22 = (uVar3 & 0xff) * iVar24 + (uVar30 & 0xff) * iVar29 + (uVar33 & 0xff) * iVar35 +
             (uVar16 & 0xff) * iVar31;
    iVar12 = (uVar3 >> 8 & 0xff) * iVar24 + (uVar30 >> 8 & 0xff) * iVar29 +
             (uVar33 >> 8 & 0xff) * iVar35 + (uVar16 >> 8 & 0xff) * iVar31;
    iVar13 = (uVar3 >> 0x10 & 0xff) * iVar24 + (uVar30 >> 0x10 & 0xff) * iVar29 +
             (uVar33 >> 0x10 & 0xff) * iVar35 + (uVar16 >> 0x10 & 0xff) * iVar31;
    iVar24 = (uVar3 >> 0x18) * iVar24 + (uVar30 >> 0x18) * iVar29 + (uVar33 >> 0x18) * iVar35 +
             (uVar16 >> 0x18) * iVar31;
    iVar24 = (0xff - ((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU)) *
             ((uint)((longlong)iVar9 * (longlong)local_18) >> 0xe |
             (int)((ulonglong)((longlong)iVar9 * (longlong)local_18) >> 0x20) << 0x12);
    iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
    if (iVar24 == 0) {
      local_6c = uVar11 & 0xff;
    }
    else {
      uVar16 = (int)(((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
      local_6c = uVar16 & 0xff;
      if (0xfe < (int)uVar16) {
        local_6c = 0xff;
      }
    }
    iVar29 = (int)(short)iVar24;
    iVar22 = (local_6c - (uVar11 & 0xff)) * iVar29;
    if (iVar24 == 0) {
      local_64 = (uint)bStack_23;
    }
    else {
      uVar16 = (int)(((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
      local_64 = uVar16 & 0xff;
      if (0xfe < (int)uVar16) {
        local_64 = 0xff;
      }
    }
    iVar12 = (local_64 - (uVar11 >> 8 & 0xff)) * iVar29;
    if (iVar24 == 0) {
      local_5c = (uint)bStack_22;
    }
    else {
      uVar16 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
      local_5c = uVar16 & 0xff;
      if (0xfe < (int)uVar16) {
        local_5c = 0xff;
      }
    }
    iVar29 = (local_5c - (uVar11 >> 0x10 & 0xff)) * iVar29;
    iVar24 = (uVar11 >> 0x18) + iVar24;
    if (iVar24 < 0) {
      uStack_21 = 0;
    }
    else {
      uStack_21 = 0xff;
      if (iVar24 < 0x100) {
        uStack_21 = (undefined1)iVar24;
      }
    }
    param_2 = param_2 + ((uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                        (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) <<
                        0x12);
    *param_3 = CONCAT13(uStack_21,
                        CONCAT12(bStack_22 + (char)(iVar29 + (iVar29 >> 0x1f & 0xffU) >> 8),
                                 CONCAT11(bStack_23 + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8)
                                          ,local_24 + (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8)
                                         )));
    param_3 = param_3 + 1;
    if (iVar27 + 1 < iVar19 + -1) {
      local_28 = (iVar19 + -1) - (iVar27 + 1);
      do {
        uVar11 = *param_3;
        local_c = (char)uVar11;
        bStack_b = (byte)(uVar11 >> 8);
        bStack_a = (byte)(uVar11 >> 0x10);
        bStack_9 = (byte)(uVar11 >> 0x18);
        iVar22 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar36 = param_2 & 0x80003fff;
        uVar16 = *(uint *)(iVar23 + iVar22 * 4);
        uVar30 = *(uint *)(iVar23 + 4 + iVar22 * 4);
        uVar33 = *(uint *)(iVar10 + iVar22 * 4);
        uVar3 = *(uint *)(iVar10 + 4 + iVar22 * 4);
        if ((int)uVar36 < 0) {
          uVar36 = (uVar36 - 1 | 0xffffc000) + 1;
        }
        iVar22 = (0x4000 - uVar36) * (0x4000 - uVar28);
        iVar12 = uVar36 * (0x4000 - uVar28);
        iVar13 = (0x4000 - uVar36) * uVar28;
        iVar29 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar13 = (int)(uVar28 * uVar36 + ((int)(uVar28 * uVar36) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar24 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar22 = (uVar3 & 0xff) * iVar13 + (uVar33 & 0xff) * iVar29 + (uVar30 & 0xff) * iVar24 +
                 (uVar16 & 0xff) * iVar12;
        uVar36 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar22 = (uVar3 >> 8 & 0xff) * iVar13 + (uVar33 >> 8 & 0xff) * iVar29 +
                 (uVar30 >> 8 & 0xff) * iVar24 + (uVar16 >> 8 & 0xff) * iVar12;
        uVar14 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar22 = (uVar3 >> 0x10 & 0xff) * iVar13 + (uVar33 >> 0x10 & 0xff) * iVar29 +
                 (uVar30 >> 0x10 & 0xff) * iVar24 + (uVar16 >> 0x10 & 0xff) * iVar12;
        uVar15 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar22 = (uVar3 >> 0x18) * iVar13 + (uVar33 >> 0x18) * iVar29 + (uVar30 >> 0x18) * iVar24 +
                 (uVar16 >> 0x18) * iVar12;
        uVar16 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar9 == 0x4000) {
          iVar22 = 0xff - (uVar16 & 0xff);
          if (iVar22 == 0) {
            local_50 = uVar11 & 0xff;
          }
          else {
            uVar16 = (int)((uVar36 & 0xff) * 0xff) / iVar22;
            local_50 = uVar16 & 0xff;
            if (0xfe < (int)uVar16) {
              local_50 = 0xff;
            }
          }
          iVar13 = (int)(short)iVar22;
          iVar12 = (local_50 - (uVar11 & 0xff)) * iVar13;
          local_c = local_c + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          if (iVar22 == 0) {
            local_38 = (uint)bStack_b;
          }
          else {
            uVar16 = (int)((uVar14 & 0xff) * 0xff) / iVar22;
            local_38 = uVar16 & 0xff;
            if (0xfe < (int)uVar16) {
              local_38 = 0xff;
            }
          }
          iVar12 = (local_38 - (uVar11 >> 8 & 0xff)) * iVar13;
          bStack_b = bStack_b + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          if (iVar22 == 0) {
            local_34 = (uint)bStack_a;
          }
          else {
            uVar16 = (int)((uVar15 & 0xff) * 0xff) / iVar22;
            local_34 = uVar16 & 0xff;
            if (0xfe < (int)uVar16) {
              local_34 = 0xff;
            }
          }
          iVar13 = (local_34 - (uVar11 >> 0x10 & 0xff)) * iVar13;
          bStack_a = bStack_a + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          iVar22 = (uint)bStack_9 + iVar22;
          if (iVar22 < 0) {
            bStack_9 = 0;
          }
          else if (iVar22 < 0x100) {
LAB_004f406a:
            bStack_9 = (byte)iVar22;
          }
          else {
            bStack_9 = 0xff;
          }
        }
        else {
          iVar22 = (0xff - (uVar16 & 0xff)) * iVar9;
          iVar22 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar22 == 0) {
            local_b8 = uVar11 & 0xff;
          }
          else {
            uVar16 = (int)((uVar36 & 0xff) * 0xff) / iVar22;
            local_b8 = uVar16 & 0xff;
            if (0xfe < (int)uVar16) {
              local_b8 = 0xff;
            }
          }
          iVar13 = (int)(short)iVar22;
          iVar12 = (local_b8 - (uVar11 & 0xff)) * iVar13;
          local_c = local_c + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          if (iVar22 == 0) {
            local_c0 = (uint)bStack_b;
          }
          else {
            uVar16 = (int)((uVar14 & 0xff) * 0xff) / iVar22;
            local_c0 = uVar16 & 0xff;
            if (0xfe < (int)uVar16) {
              local_c0 = 0xff;
            }
          }
          iVar12 = (local_c0 - (uVar11 >> 8 & 0xff)) * iVar13;
          bStack_b = bStack_b + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          if (iVar22 == 0) {
            local_c4 = (uint)bStack_a;
          }
          else {
            uVar16 = (int)((uVar15 & 0xff) * 0xff) / iVar22;
            local_c4 = uVar16 & 0xff;
            if (0xfe < (int)uVar16) {
              local_c4 = 0xff;
            }
          }
          iVar13 = (local_c4 - (uVar11 >> 0x10 & 0xff)) * iVar13;
          bStack_a = bStack_a + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          iVar22 = (uint)bStack_9 + iVar22;
          if (iVar22 < 0) {
            bStack_9 = 0;
          }
          else {
            if (iVar22 < 0x100) goto LAB_004f406a;
            bStack_9 = 0xff;
          }
        }
        *param_3 = CONCAT13(bStack_9,CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar2;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    if (iVar20 != 1) {
      param_2 = param_2 & 0x80003fff;
      uVar11 = *param_3;
      local_14 = (char)uVar11;
      bStack_13 = (byte)(uVar11 >> 8);
      bStack_12 = (byte)(uVar11 >> 0x10);
      uVar16 = *(uint *)(iVar23 + -4 + iVar7 * 4);
      bStack_a9 = (byte)(uVar16 >> 0x18);
      uVar30 = *(uint *)(iVar10 + -4 + iVar7 * 4);
      bStack_109 = (byte)(uVar30 >> 0x18);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar10 = (0x4000 - param_2) * (0x4000 - uVar28);
      iVar22 = param_2 * (0x4000 - uVar28);
      iVar23 = uVar28 * (0x4000 - param_2);
      iVar13 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = (int)(uVar28 * param_2 + ((int)(uVar28 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar29 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar10 = (uVar30 & 0xff) * iVar12 + (uVar30 & 0xff) * iVar13 + (uVar16 & 0xff) * iVar29 +
               (uVar16 & 0xff) * iVar24;
      iVar22 = (uVar30 >> 8 & 0xff) * iVar12 + (uVar30 >> 8 & 0xff) * iVar13 +
               (uVar16 >> 8 & 0xff) * iVar29 + (uVar16 >> 8 & 0xff) * iVar24;
      iVar23 = (uVar30 >> 0x10 & 0xff) * iVar12 + (uVar30 >> 0x10 & 0xff) * iVar13 +
               (uVar16 >> 0x10 & 0xff) * iVar29 + (uVar16 >> 0x10 & 0xff) * iVar24;
      iVar12 = (uint)bStack_109 * iVar12 + (uint)bStack_109 * iVar13 + (uint)bStack_a9 * iVar29 +
               (uint)bStack_a9 * iVar24;
      iVar12 = (0xff - ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU)) *
               ((uint)((longlong)iVar9 * (longlong)iVar25) >> 0xe |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar25) >> 0x20) << 0x12);
      iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar12 == 0) {
        local_88 = uVar11 & 0xff;
      }
      else {
        uVar16 = (int)(((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar12;
        local_88 = uVar16 & 0xff;
        if (0xfe < (int)uVar16) {
          local_88 = 0xff;
        }
      }
      iVar13 = (int)(short)iVar12;
      iVar10 = (local_88 - (uVar11 & 0xff)) * iVar13;
      if (iVar12 == 0) {
        local_90 = (uint)bStack_13;
      }
      else {
        uVar16 = (int)(((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar12;
        local_90 = uVar16 & 0xff;
        if (0xfe < (int)uVar16) {
          local_90 = 0xff;
        }
      }
      iVar22 = (local_90 - (uVar11 >> 8 & 0xff)) * iVar13;
      if (iVar12 == 0) {
        local_48 = (uint)bStack_12;
      }
      else {
        uVar16 = (int)(((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar12;
        local_48 = uVar16 & 0xff;
        if (0xfe < (int)uVar16) {
          local_48 = 0xff;
        }
      }
      iVar13 = (local_48 - (uVar11 >> 0x10 & 0xff)) * iVar13;
      iVar12 = (uVar11 >> 0x18) + iVar12;
      if (iVar12 < 0) {
        uStack_11 = 0;
      }
      else {
        uStack_11 = 0xff;
        if (iVar12 < 0x100) {
          uStack_11 = (undefined1)iVar12;
        }
      }
      *param_3 = CONCAT13(uStack_11,
                          CONCAT12(bStack_12 + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8),
                                   CONCAT11(bStack_13 +
                                            (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8),
                                            local_14 +
                                            (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8))));
    }
    uVar32 = uVar32 + iVar17;
    iVar5 = iVar5 + 1;
  } while( true );
}


