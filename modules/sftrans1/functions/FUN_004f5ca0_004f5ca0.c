/* Module: sftrans1.dll
   Function: FUN_004f5ca0
   Address: 004f5ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f5ca0(uint param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  ushort uStack_fa;
  ushort uStack_e2;
  uint local_ac;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_84;
  uint local_80;
  uint local_78;
  uint local_6c;
  uint local_64;
  int local_5c;
  int local_50;
  uint local_44;
  char local_3c;
  byte bStack_3b;
  byte bStack_3a;
  undefined1 uStack_39;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  char local_14;
  byte bStack_13;
  byte bStack_12;
  undefined1 uStack_11;
  char local_c;
  byte bStack_b;
  byte bStack_a;
  undefined1 uStack_9;
  
  iVar28 = *(int *)(param_1 + 0x18);
  iVar29 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar28 - 1U | 0x3fff) + 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar21 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar34 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar1 - 1U | 0x3fff) + 1;
  iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar8 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = iVar34 + 1;
  local_44 = iVar6 * 0x4000 - *(int *)(param_1 + 0x14);
  local_18 = (iVar29 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar25 = iVar28 + iVar21 * -0x4000 + 0x4000;
  iVar22 = iVar21 - iVar29;
  if (iVar22 < 2) {
    local_18 = iVar28 - *(int *)(param_1 + 0x10);
  }
  if (iVar7 - iVar34 < 2) {
    local_44 = iVar1 - *(int *)(param_1 + 0x14);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar28 = *(int *)(param_1 + 100);
  uVar17 = *(uint *)(param_1 + 0x44);
  iVar10 = ftol();
  uVar23 = (uint)(iVar22 != 1);
  iVar11 = (int)(uVar17 + ((int)uVar17 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar26 = *(int *)(param_1 + 0x38) * iVar11 + *(int *)(param_1 + 0x34);
  iVar24 = iVar29 * (int)param_3;
  param_3 = (uint *)(iVar34 * *(int *)(param_1 + 8) + iVar24 + *(int *)(param_1 + 4));
  local_5c = iVar26;
  if (iVar9 + -1 != iVar11) {
    local_5c = *(int *)(param_1 + 0x38) + iVar26;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar29 < iVar21) {
    uVar12 = uVar17 & 0x80003fff;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffc000) + 1;
    }
    local_1c = iVar29;
    do {
      uVar19 = *param_3;
      local_c = (char)uVar19;
      bStack_b = (byte)(uVar19 >> 8);
      bStack_a = (byte)(uVar19 >> 0x10);
      local_20 = (uint)((longlong)iVar10 * (longlong)(int)local_44) >> 0xe |
                 (int)((ulonglong)((longlong)iVar10 * (longlong)(int)local_44) >> 0x20) << 0x12;
      uVar33 = 1;
      iVar11 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (local_1c == iVar29) {
        local_20 = (uint)((longlong)(int)local_20 * (longlong)local_18) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_20 * (longlong)local_18) >> 0x20) << 0x12;
        uVar33 = uVar23;
      }
      else if (local_1c == iVar21 + -1) {
        local_20 = (uint)((longlong)(int)local_20 * (longlong)iVar25) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_20 * (longlong)iVar25) >> 0x20) << 0x12;
        uVar33 = 0;
        iVar11 = iVar8 + -1;
      }
      uVar3 = *(uint *)(iVar26 + iVar11 * 4);
      iVar13 = (iVar11 + uVar33) * 4;
      uVar30 = param_2 & 0x80003fff;
      uVar33 = *(uint *)(iVar13 + iVar26);
      uVar4 = *(uint *)(local_5c + iVar11 * 4);
      uVar27 = *(uint *)(iVar13 + local_5c);
      if ((int)uVar30 < 0) {
        uVar30 = (uVar30 - 1 | 0xffffc000) + 1;
      }
      iVar11 = (0x4000 - uVar12) * (0x4000 - uVar30);
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (0x4000 - uVar12) * uVar30;
      iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (0x4000 - uVar30) * uVar12;
      iVar14 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar31 = (int)(uVar12 * uVar30 + ((int)(uVar12 * uVar30) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar15 = (uVar27 & 0xff) * iVar31 + (uVar4 & 0xff) * iVar14 + (uVar33 & 0xff) * iVar13 +
               (uVar3 & 0xff) * iVar11;
      iVar16 = (uVar27 >> 8 & 0xff) * iVar31 + (uVar4 >> 8 & 0xff) * iVar14 +
               (uVar33 >> 8 & 0xff) * iVar13 + (uVar3 >> 8 & 0xff) * iVar11;
      iVar13 = (uVar27 >> 0x10 & 0xff) * iVar31 + (uVar4 >> 0x10 & 0xff) * iVar14 +
               (uVar33 >> 0x10 & 0xff) * iVar13 + (uVar3 >> 0x10 & 0xff) * iVar11;
      iVar11 = (0xff - (uVar19 >> 0x18)) * local_20;
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar11 == 0) {
        local_80 = uVar19 & 0xff;
      }
      else {
        uVar33 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_80 = uVar33 & 0xff;
        if (0xfe < (int)uVar33) {
          local_80 = 0xff;
        }
      }
      iVar15 = (int)(short)iVar11;
      iVar14 = (local_80 - (uVar19 & 0xff)) * iVar15;
      if (iVar11 == 0) {
        local_6c = (uint)bStack_b;
      }
      else {
        uVar33 = (int)(((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_6c = uVar33 & 0xff;
        if (0xfe < (int)uVar33) {
          local_6c = 0xff;
        }
      }
      iVar16 = (local_6c - (uVar19 >> 8 & 0xff)) * iVar15;
      if (iVar11 == 0) {
        local_84 = (uint)bStack_a;
      }
      else {
        uVar33 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_84 = uVar33 & 0xff;
        if (0xfe < (int)uVar33) {
          local_84 = 0xff;
        }
      }
      iVar15 = (local_84 - (uVar19 >> 0x10 & 0xff)) * iVar15;
      iVar11 = iVar11 + (uVar19 >> 0x18);
      if (iVar11 < 0) {
        uStack_9 = 0;
      }
      else {
        uStack_9 = 0xff;
        if (iVar11 < 0x100) {
          uStack_9 = (undefined1)iVar11;
        }
      }
      *param_3 = CONCAT13(uStack_9,CONCAT12(bStack_a +
                                            (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8),
                                            CONCAT11(bStack_b +
                                                     (char)(iVar16 + (iVar16 >> 0x1f & 0xffU) >> 8),
                                                     local_c + (char)(iVar14 + (iVar14 >> 0x1f &
                                                                               0xffU) >> 8))));
      param_3 = param_3 + 1;
      uVar19 = uVar2;
      if (local_1c == iVar29) {
        uVar19 = (uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar19;
      local_1c = local_1c + 1;
    } while ((int)local_1c < iVar21);
  }
  lVar5 = (longlong)iVar28 * (longlong)(int)local_44;
  uVar17 = uVar17 + ((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12);
  do {
    if (iVar7 + -1 <= iVar6) {
      if (iVar7 - iVar34 != 1) {
        iVar28 = (iVar9 + -1) * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
        puVar20 = (uint *)((iVar7 + -1) * *(int *)(param_1 + 8) + iVar24 + *(int *)(param_1 + 4));
        param_2 = *(uint *)(param_1 + 0x40);
        for (iVar6 = iVar29; iVar6 < iVar21; iVar6 = iVar6 + 1) {
          uVar17 = *puVar20;
          local_14 = (char)uVar17;
          bStack_13 = (byte)(uVar17 >> 8);
          bStack_12 = (byte)(uVar17 >> 0x10);
          lVar5 = (longlong)iVar10 * (longlong)(iVar1 + iVar7 * -0x4000 + 0x4000);
          param_1 = (uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12;
          uVar12 = 1;
          iVar9 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar6 == iVar29) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)local_18) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)local_18) >> 0x20) <<
                      0x12;
            uVar12 = uVar23;
          }
          else if (iVar6 == iVar21 + -1) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)iVar25) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)iVar25) >> 0x20) << 0x12;
            uVar12 = 0;
            iVar9 = iVar8 + -1;
          }
          uVar19 = *(uint *)(iVar28 + iVar9 * 4);
          uVar12 = *(uint *)(iVar28 + (iVar9 + uVar12) * 4);
          uVar33 = param_2 & 0x80003fff;
          if ((int)uVar33 < 0) {
            uVar33 = (uVar33 - 1 | 0xffffc000) + 1;
          }
          iVar9 = (0x4000 - uVar33) * 0x4000;
          iVar11 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar34 = (int)(uVar33 * 0x4000 + ((int)(uVar33 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar9 = (uVar12 & 0xff) * iVar34 + (uVar19 & 0xff) * iVar11;
          iVar22 = (uVar12 >> 8 & 0xff) * iVar34 + (uVar19 >> 8 & 0xff) * iVar11;
          iVar34 = (uVar12 >> 0x10 & 0xff) * iVar34 + (uVar19 >> 0x10 & 0xff) * iVar11;
          iVar11 = (0xff - (uVar17 >> 0x18)) * param_1;
          iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar11 == 0) {
            local_28 = uVar17 & 0xff;
          }
          else {
            uVar12 = (int)(((int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar11;
            local_28 = uVar12 & 0xff;
            if (0xfe < (int)uVar12) {
              local_28 = 0xff;
            }
          }
          iVar24 = (int)(short)iVar11;
          iVar9 = (local_28 - (uVar17 & 0xff)) * iVar24;
          if (iVar11 == 0) {
            local_24 = (uint)bStack_13;
          }
          else {
            uVar12 = (int)(((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar11;
            local_24 = uVar12 & 0xff;
            if (0xfe < (int)uVar12) {
              local_24 = 0xff;
            }
          }
          iVar22 = (local_24 - (uVar17 >> 8 & 0xff)) * iVar24;
          if (iVar11 == 0) {
            local_78 = (uint)bStack_12;
          }
          else {
            uVar12 = (int)(((int)(iVar34 + (iVar34 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar11;
            local_78 = uVar12 & 0xff;
            if (0xfe < (int)uVar12) {
              local_78 = 0xff;
            }
          }
          iVar11 = iVar11 + (uVar17 >> 0x18);
          iVar24 = (local_78 - (uVar17 >> 0x10 & 0xff)) * iVar24;
          if (iVar11 < 0) {
            uStack_11 = 0;
          }
          else {
            uStack_11 = 0xff;
            if (iVar11 < 0x100) {
              uStack_11 = (undefined1)iVar11;
            }
          }
          *puVar20 = CONCAT13(uStack_11,
                              CONCAT12(bStack_12 + (char)(iVar24 + (iVar24 >> 0x1f & 0xffU) >> 8),
                                       CONCAT11(bStack_13 +
                                                (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8),
                                                local_14 +
                                                (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8))));
          puVar20 = puVar20 + 1;
          uVar17 = uVar2;
          if (iVar6 == iVar29) {
            uVar17 = (uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) << 0x12;
          }
          param_2 = param_2 + uVar17;
        }
      }
      return;
    }
    iVar13 = (int)(uVar17 + ((int)uVar17 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar26 = *(int *)(param_1 + 0x38) * iVar13 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar6 * *(int *)(param_1 + 8) + iVar24 + *(int *)(param_1 + 4));
    iVar11 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    local_5c = iVar26;
    if (((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar13) {
      local_5c = *(int *)(param_1 + 0x38) + iVar26;
    }
    uVar12 = *param_3;
    param_2 = *(uint *)(param_1 + 0x40);
    local_3c = (char)uVar12;
    bStack_3b = (byte)(uVar12 >> 8);
    bStack_3a = (byte)(uVar12 >> 0x10);
    iVar11 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar19 = *(uint *)(iVar26 + iVar11 * 4);
    uVar33 = *(uint *)(local_5c + iVar11 * 4);
    iVar11 = (uVar23 + iVar11) * 4;
    uVar3 = *(uint *)(iVar11 + iVar26);
    uVar4 = *(uint *)(iVar11 + local_5c);
    uVar27 = param_2 & 0x80003fff;
    if ((int)uVar27 < 0) {
      uVar27 = (uVar27 - 1 | 0xffffc000) + 1;
    }
    uVar30 = uVar17 & 0x80003fff;
    if ((int)uVar30 < 0) {
      uVar30 = (uVar30 - 1 | 0xffffc000) + 1;
    }
    iVar11 = (0x4000 - uVar27) * (0x4000 - uVar30);
    iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar13 = uVar27 * (0x4000 - uVar30);
    iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar14 = uVar30 * (0x4000 - uVar27);
    iVar14 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar31 = (int)(((int)(uVar30 * uVar27) >> 0x1f & 0x3fffU) + uVar30 * uVar27) >> 0xe;
    iVar15 = (uVar4 & 0xff) * iVar31 + (uVar33 & 0xff) * iVar14 + (uVar3 & 0xff) * iVar13 +
             (uVar19 & 0xff) * iVar11;
    iVar16 = (uVar4 >> 8 & 0xff) * iVar31 + (uVar33 >> 8 & 0xff) * iVar14 +
             (uVar3 >> 8 & 0xff) * iVar13 + (uVar19 >> 8 & 0xff) * iVar11;
    iVar13 = (uVar4 >> 0x10 & 0xff) * iVar31 + (uVar33 >> 0x10 & 0xff) * iVar14 +
             (uVar3 >> 0x10 & 0xff) * iVar13 + (uVar19 >> 0x10 & 0xff) * iVar11;
    iVar11 = (0xff - (uVar12 >> 0x18)) *
             ((uint)((longlong)iVar10 * (longlong)local_18) >> 0xe |
             (int)((ulonglong)((longlong)iVar10 * (longlong)local_18) >> 0x20) << 0x12);
    iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
    if (iVar11 == 0) {
      local_64 = uVar12 & 0xff;
    }
    else {
      uVar19 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
      local_64 = uVar19 & 0xff;
      if (0xfe < (int)uVar19) {
        local_64 = 0xff;
      }
    }
    iVar15 = (int)(short)iVar11;
    iVar14 = (local_64 - (uVar12 & 0xff)) * iVar15;
    if (iVar11 == 0) {
      local_84 = (uint)bStack_3b;
    }
    else {
      uVar19 = (int)(((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
      local_84 = uVar19 & 0xff;
      if (0xfe < (int)uVar19) {
        local_84 = 0xff;
      }
    }
    iVar16 = (local_84 - (uVar12 >> 8 & 0xff)) * iVar15;
    if (iVar11 == 0) {
      local_6c = (uint)bStack_3a;
    }
    else {
      uVar19 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
      local_6c = uVar19 & 0xff;
      if (0xfe < (int)uVar19) {
        local_6c = 0xff;
      }
    }
    iVar15 = (local_6c - (uVar12 >> 0x10 & 0xff)) * iVar15;
    iVar11 = iVar11 + (uVar12 >> 0x18);
    if (iVar11 < 0) {
      uStack_39 = 0;
    }
    else {
      uStack_39 = 0xff;
      if (iVar11 < 0x100) {
        uStack_39 = (undefined1)iVar11;
      }
    }
    param_2 = param_2 + ((uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                        (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) <<
                        0x12);
    *param_3 = CONCAT13(uStack_39,
                        CONCAT12(bStack_3a + (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8),
                                 CONCAT11(bStack_3b + (char)(iVar16 + (iVar16 >> 0x1f & 0xffU) >> 8)
                                          ,local_3c + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8)
                                         )));
    param_3 = param_3 + 1;
    if (iVar29 + 1 < iVar21 + -1) {
      local_50 = (iVar21 + -1) - (iVar29 + 1);
      do {
        uVar12 = *param_3;
        local_c = (char)uVar12;
        bStack_b = (byte)(uVar12 >> 8);
        bStack_a = (byte)(uVar12 >> 0x10);
        uVar27 = uVar12 >> 0x18;
        iVar11 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar32 = param_2 & 0x80003fff;
        uVar19 = *(uint *)(iVar26 + iVar11 * 4);
        uVar33 = *(uint *)(iVar26 + 4 + iVar11 * 4);
        uVar3 = *(uint *)(local_5c + iVar11 * 4);
        uVar4 = *(uint *)(local_5c + 4 + iVar11 * 4);
        if ((int)uVar32 < 0) {
          uVar32 = (uVar32 - 1 | 0xffffc000) + 1;
        }
        iVar11 = (0x4000 - uVar32) * (0x4000 - uVar30);
        iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar13 = uVar32 * (0x4000 - uVar30);
        iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar14 = (0x4000 - uVar32) * uVar30;
        iVar14 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar16 = (int)(uVar30 * uVar32 + ((int)(uVar30 * uVar32) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = (uVar4 & 0xff) * iVar16 + (uVar3 & 0xff) * iVar14 + (uVar33 & 0xff) * iVar13 +
                 (uVar19 & 0xff) * iVar11;
        uVar32 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = (uVar4 >> 8 & 0xff) * iVar16 + (uVar3 >> 8 & 0xff) * iVar14 +
                 (uVar33 >> 8 & 0xff) * iVar13 + (uVar19 >> 8 & 0xff) * iVar11;
        uVar18 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar11 = (uVar4 >> 0x10 & 0xff) * iVar16 + (uVar3 >> 0x10 & 0xff) * iVar14 +
                 (uVar33 >> 0x10 & 0xff) * iVar13 + (uVar19 >> 0x10 & 0xff) * iVar11;
        uVar19 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar10 == 0x4000) {
          iVar11 = 0xff - uVar27;
          if (iVar11 == 0) {
            local_80 = uVar12 & 0xff;
          }
          else {
            uVar33 = (int)((uVar32 & 0xff) * 0xff) / iVar11;
            local_80 = uVar33 & 0xff;
            if (0xfe < (int)uVar33) {
              local_80 = 0xff;
            }
          }
          iVar14 = (int)(short)iVar11;
          iVar13 = (local_80 - (uVar12 & 0xff)) * iVar14;
          local_c = local_c + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          if (iVar11 == 0) {
            local_44 = (uint)bStack_b;
          }
          else {
            uVar33 = (int)((uVar18 & 0xff) * 0xff) / iVar11;
            local_44 = uVar33 & 0xff;
            if (0xfe < (int)uVar33) {
              local_44 = 0xff;
            }
          }
          iVar13 = (local_44 - (uVar12 >> 8 & 0xff)) * iVar14;
          bStack_b = bStack_b + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          if (iVar11 == 0) {
            local_1c = (uint)bStack_a;
          }
          else {
            uVar19 = (int)((uVar19 & 0xff) * 0xff) / iVar11;
            local_1c = uVar19 & 0xff;
            if (0xfe < (int)uVar19) {
              local_1c = 0xff;
            }
          }
          iVar14 = (local_1c - (uVar12 >> 0x10 & 0xff)) * iVar14;
          bStack_a = bStack_a + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8);
          iVar11 = iVar11 + uVar27;
          if (iVar11 < 0) {
            uStack_9 = 0;
          }
          else if (iVar11 < 0x100) {
LAB_004f6ad7:
            uStack_9 = (undefined1)iVar11;
          }
          else {
            uStack_9 = 0xff;
          }
        }
        else {
          iVar11 = (0xff - uVar27) * iVar10;
          iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar11 == 0) {
            local_20 = uVar12 & 0xff;
          }
          else {
            uVar33 = (int)((uVar32 & 0xff) * 0xff) / iVar11;
            local_20 = uVar33 & 0xff;
            if (0xfe < (int)uVar33) {
              local_20 = 0xff;
            }
          }
          iVar14 = (int)(short)iVar11;
          iVar13 = (local_20 - (uVar12 & 0xff)) * iVar14;
          local_c = local_c + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          if (iVar11 == 0) {
            local_a0 = (uint)bStack_b;
          }
          else {
            uVar33 = (int)((uVar18 & 0xff) * 0xff) / iVar11;
            local_a0 = uVar33 & 0xff;
            if (0xfe < (int)uVar33) {
              local_a0 = 0xff;
            }
          }
          iVar13 = (local_a0 - (uVar12 >> 8 & 0xff)) * iVar14;
          bStack_b = bStack_b + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          if (iVar11 == 0) {
            local_9c = (uint)bStack_a;
          }
          else {
            uVar19 = (int)((uVar19 & 0xff) * 0xff) / iVar11;
            local_9c = uVar19 & 0xff;
            if (0xfe < (int)uVar19) {
              local_9c = 0xff;
            }
          }
          iVar14 = (local_9c - (uVar12 >> 0x10 & 0xff)) * iVar14;
          bStack_a = bStack_a + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8);
          iVar11 = iVar11 + uVar27;
          if (iVar11 < 0) {
            uStack_9 = 0;
          }
          else {
            if (iVar11 < 0x100) goto LAB_004f6ad7;
            uStack_9 = 0xff;
          }
        }
        *param_3 = CONCAT13(uStack_9,CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar2;
        local_50 = local_50 + -1;
      } while (local_50 != 0);
    }
    if (iVar22 != 1) {
      uVar12 = *param_3;
      local_14 = (char)uVar12;
      bStack_13 = (byte)(uVar12 >> 8);
      bStack_12 = (byte)(uVar12 >> 0x10);
      uVar19 = *(uint *)(iVar26 + -4 + iVar8 * 4);
      uStack_e2 = (ushort)(uVar19 >> 0x10);
      uVar33 = *(uint *)(local_5c + -4 + iVar8 * 4);
      param_2 = param_2 & 0x80003fff;
      uStack_fa = (ushort)(uVar33 >> 0x10);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar11 = (0x4000 - param_2) * (0x4000 - uVar30);
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar26 = param_2 * (0x4000 - uVar30);
      iVar26 = (int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = uVar30 * (0x4000 - param_2);
      iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar16 = (int)(uVar30 * param_2 + ((int)(uVar30 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (uVar33 & 0xff) * iVar16 + (uVar33 & 0xff) * iVar13 + (uVar19 & 0xff) * iVar26 +
               (uVar19 & 0xff) * iVar11;
      iVar15 = (uVar33 >> 8 & 0xff) * iVar16 + (uVar33 >> 8 & 0xff) * iVar13 +
               (uVar19 >> 8 & 0xff) * iVar26 + (uVar19 >> 8 & 0xff) * iVar11;
      iVar26 = (uStack_fa & 0xff) * iVar16 + (uStack_fa & 0xff) * iVar13 +
               (uStack_e2 & 0xff) * iVar26 + (uStack_e2 & 0xff) * iVar11;
      iVar11 = (0xff - (uVar12 >> 0x18)) *
               ((uint)((longlong)iVar10 * (longlong)iVar25) >> 0xe |
               (int)((ulonglong)((longlong)iVar10 * (longlong)iVar25) >> 0x20) << 0x12);
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar11 == 0) {
        local_ac = uVar12 & 0xff;
      }
      else {
        uVar19 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_ac = uVar19 & 0xff;
        if (0xfe < (int)uVar19) {
          local_ac = 0xff;
        }
      }
      iVar14 = (int)(short)iVar11;
      iVar13 = (local_ac - (uVar12 & 0xff)) * iVar14;
      if (iVar11 == 0) {
        local_98 = (uint)bStack_13;
      }
      else {
        uVar19 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_98 = uVar19 & 0xff;
        if (0xfe < (int)uVar19) {
          local_98 = 0xff;
        }
      }
      iVar15 = (local_98 - (uVar12 >> 8 & 0xff)) * iVar14;
      if (iVar11 == 0) {
        local_94 = (uint)bStack_12;
      }
      else {
        uVar19 = (int)(((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_94 = uVar19 & 0xff;
        if (0xfe < (int)uVar19) {
          local_94 = 0xff;
        }
      }
      iVar14 = (local_94 - (uVar12 >> 0x10 & 0xff)) * iVar14;
      iVar11 = iVar11 + (uVar12 >> 0x18);
      if (iVar11 < 0) {
        uStack_11 = 0;
      }
      else {
        uStack_11 = 0xff;
        if (iVar11 < 0x100) {
          uStack_11 = (undefined1)iVar11;
        }
      }
      *param_3 = CONCAT13(uStack_11,
                          CONCAT12(bStack_12 + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8),
                                   CONCAT11(bStack_13 +
                                            (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8),
                                            local_14 +
                                            (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8))));
    }
    uVar17 = uVar17 + iVar28;
    iVar6 = iVar6 + 1;
  } while( true );
}


