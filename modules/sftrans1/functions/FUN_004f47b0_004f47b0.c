/* Module: sftrans1.dll
   Function: FUN_004f47b0
   Address: 004f47b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004f545a) */

void FUN_004f47b0(uint param_1,undefined4 param_2,uint *param_3)

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
  int iVar14;
  int iVar15;
  uint uVar16;
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
  int iVar33;
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
  byte bStack_9;
  
  iVar28 = *(int *)(param_1 + 0x18);
  iVar29 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar28 - 1U | 0x3fff) + 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar21 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar33 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar1 - 1U | 0x3fff) + 1;
  iVar6 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar7 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar8 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = iVar33 + 1;
  local_44 = iVar5 * 0x4000 - *(int *)(param_1 + 0x14);
  local_18 = (iVar29 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar25 = iVar28 + iVar21 * -0x4000 + 0x4000;
  iVar22 = iVar21 - iVar29;
  if (iVar22 < 2) {
    local_18 = iVar28 - *(int *)(param_1 + 0x10);
  }
  if (iVar6 - iVar33 < 2) {
    local_44 = iVar1 - *(int *)(param_1 + 0x14);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar28 = *(int *)(param_1 + 100);
  uVar16 = *(uint *)(param_1 + 0x44);
  iVar9 = ftol();
  uVar23 = (uint)(iVar22 != 1);
  iVar10 = (int)(uVar16 + ((int)uVar16 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar26 = *(int *)(param_1 + 0x38) * iVar10 + *(int *)(param_1 + 0x34);
  iVar24 = iVar29 * (int)param_3;
  param_3 = (uint *)(iVar33 * *(int *)(param_1 + 8) + iVar24 + *(int *)(param_1 + 4));
  local_5c = iVar26;
  if (iVar8 + -1 != iVar10) {
    local_5c = *(int *)(param_1 + 0x38) + iVar26;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar29 < iVar21) {
    uVar11 = uVar16 & 0x80003fff;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffc000) + 1;
    }
    local_1c = iVar29;
    do {
      uVar18 = *param_3;
      local_c = (char)uVar18;
      bStack_b = (byte)(uVar18 >> 8);
      bStack_a = (byte)(uVar18 >> 0x10);
      local_20 = (uint)((longlong)iVar9 * (longlong)(int)local_44) >> 0xe |
                 (int)((ulonglong)((longlong)iVar9 * (longlong)(int)local_44) >> 0x20) << 0x12;
      uVar32 = 1;
      iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (local_1c == iVar29) {
        local_20 = (uint)((longlong)(int)local_20 * (longlong)local_18) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_20 * (longlong)local_18) >> 0x20) << 0x12;
        uVar32 = uVar23;
      }
      else if (local_1c == iVar21 + -1) {
        local_20 = (uint)((longlong)(int)local_20 * (longlong)iVar25) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_20 * (longlong)iVar25) >> 0x20) << 0x12;
        uVar32 = 0;
        iVar10 = iVar7 + -1;
      }
      uVar19 = *(uint *)(iVar26 + iVar10 * 4);
      iVar12 = (iVar10 + uVar32) * 4;
      uVar30 = param_2 & 0x80003fff;
      uVar32 = *(uint *)(iVar12 + iVar26);
      uVar3 = *(uint *)(local_5c + iVar10 * 4);
      uVar27 = *(uint *)(iVar12 + local_5c);
      if ((int)uVar30 < 0) {
        uVar30 = (uVar30 - 1 | 0xffffc000) + 1;
      }
      iVar10 = (0x4000 - uVar11) * (0x4000 - uVar30);
      iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = (0x4000 - uVar11) * uVar30;
      iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (0x4000 - uVar30) * uVar11;
      iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar31 = (int)(uVar11 * uVar30 + ((int)(uVar11 * uVar30) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (uVar27 & 0xff) * iVar31 + (uVar3 & 0xff) * iVar13 + (uVar32 & 0xff) * iVar12 +
               (uVar19 & 0xff) * iVar10;
      iVar15 = (uVar27 >> 8 & 0xff) * iVar31 + (uVar3 >> 8 & 0xff) * iVar13 +
               (uVar32 >> 8 & 0xff) * iVar12 + (uVar19 >> 8 & 0xff) * iVar10;
      iVar12 = (uVar27 >> 0x10 & 0xff) * iVar31 + (uVar3 >> 0x10 & 0xff) * iVar13 +
               (uVar32 >> 0x10 & 0xff) * iVar12 + (uVar19 >> 0x10 & 0xff) * iVar10;
      iVar10 = (uVar18 >> 0x18) * local_20;
      iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar10 == 0) {
        local_80 = uVar18 & 0xff;
      }
      else {
        uVar32 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_80 = uVar32 & 0xff;
        if (0xfe < (int)uVar32) {
          local_80 = 0xff;
        }
      }
      iVar14 = (int)(short)iVar10;
      iVar13 = (local_80 - (uVar18 & 0xff)) * iVar14;
      if (iVar10 == 0) {
        local_6c = (uint)bStack_b;
      }
      else {
        uVar32 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_6c = uVar32 & 0xff;
        if (0xfe < (int)uVar32) {
          local_6c = 0xff;
        }
      }
      iVar15 = (local_6c - (uVar18 >> 8 & 0xff)) * iVar14;
      if (iVar10 == 0) {
        local_84 = (uint)bStack_a;
      }
      else {
        uVar32 = (int)(((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_84 = uVar32 & 0xff;
        if (0xfe < (int)uVar32) {
          local_84 = 0xff;
        }
      }
      iVar14 = (local_84 - (uVar18 >> 0x10 & 0xff)) * iVar14;
      iVar10 = (uVar18 >> 0x18) + iVar10;
      if (iVar10 < 0) {
        bStack_9 = 0;
      }
      else {
        bStack_9 = 0xff;
        if (iVar10 < 0x100) {
          bStack_9 = (byte)iVar10;
        }
      }
      *param_3 = CONCAT13(bStack_9,CONCAT12(bStack_a +
                                            (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8),
                                            CONCAT11(bStack_b +
                                                     (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8),
                                                     local_c + (char)(iVar13 + (iVar13 >> 0x1f &
                                                                               0xffU) >> 8))));
      param_3 = param_3 + 1;
      uVar18 = uVar2;
      if (local_1c == iVar29) {
        uVar18 = (uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar18;
      local_1c = local_1c + 1;
    } while ((int)local_1c < iVar21);
  }
  lVar4 = (longlong)iVar28 * (longlong)(int)local_44;
  uVar16 = uVar16 + ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
  do {
    if (iVar6 + -1 <= iVar5) {
      if (iVar6 - iVar33 != 1) {
        iVar28 = (iVar8 + -1) * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
        puVar20 = (uint *)((iVar6 + -1) * *(int *)(param_1 + 8) + iVar24 + *(int *)(param_1 + 4));
        param_2 = *(uint *)(param_1 + 0x40);
        for (iVar5 = iVar29; iVar5 < iVar21; iVar5 = iVar5 + 1) {
          uVar16 = *puVar20;
          local_14 = (char)uVar16;
          bStack_13 = (byte)(uVar16 >> 8);
          bStack_12 = (byte)(uVar16 >> 0x10);
          lVar4 = (longlong)iVar9 * (longlong)(iVar1 + iVar6 * -0x4000 + 0x4000);
          param_1 = (uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12;
          uVar11 = 1;
          iVar8 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar5 == iVar29) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)local_18) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)local_18) >> 0x20) <<
                      0x12;
            uVar11 = uVar23;
          }
          else if (iVar5 == iVar21 + -1) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)iVar25) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)iVar25) >> 0x20) << 0x12;
            uVar11 = 0;
            iVar8 = iVar7 + -1;
          }
          uVar18 = *(uint *)(iVar28 + iVar8 * 4);
          uVar11 = *(uint *)(iVar28 + (iVar8 + uVar11) * 4);
          uVar32 = param_2 & 0x80003fff;
          if ((int)uVar32 < 0) {
            uVar32 = (uVar32 - 1 | 0xffffc000) + 1;
          }
          iVar8 = (0x4000 - uVar32) * 0x4000;
          iVar10 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar33 = (int)(uVar32 * 0x4000 + ((int)(uVar32 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar8 = (uVar11 & 0xff) * iVar33 + (uVar18 & 0xff) * iVar10;
          iVar22 = (uVar11 >> 8 & 0xff) * iVar33 + (uVar18 >> 8 & 0xff) * iVar10;
          iVar33 = (uVar11 >> 0x10 & 0xff) * iVar33 + (uVar18 >> 0x10 & 0xff) * iVar10;
          iVar10 = param_1 * (uVar16 >> 0x18);
          iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar10 == 0) {
            local_28 = uVar16 & 0xff;
          }
          else {
            uVar11 = (int)(((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar10;
            local_28 = uVar11 & 0xff;
            if (0xfe < (int)uVar11) {
              local_28 = 0xff;
            }
          }
          iVar24 = (int)(short)iVar10;
          iVar8 = (local_28 - (uVar16 & 0xff)) * iVar24;
          if (iVar10 == 0) {
            local_24 = (uint)bStack_13;
          }
          else {
            uVar11 = (int)(((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar10;
            local_24 = uVar11 & 0xff;
            if (0xfe < (int)uVar11) {
              local_24 = 0xff;
            }
          }
          iVar22 = (local_24 - (uVar16 >> 8 & 0xff)) * iVar24;
          if (iVar10 == 0) {
            local_78 = (uint)bStack_12;
          }
          else {
            uVar11 = (int)(((int)(iVar33 + (iVar33 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar10;
            local_78 = uVar11 & 0xff;
            if (0xfe < (int)uVar11) {
              local_78 = 0xff;
            }
          }
          iVar10 = iVar10 + (uVar16 >> 0x18);
          iVar24 = (local_78 - (uVar16 >> 0x10 & 0xff)) * iVar24;
          if (iVar10 < 0) {
            uStack_11 = 0;
          }
          else {
            uStack_11 = 0xff;
            if (iVar10 < 0x100) {
              uStack_11 = (undefined1)iVar10;
            }
          }
          *puVar20 = CONCAT13(uStack_11,
                              CONCAT12(bStack_12 + (char)(iVar24 + (iVar24 >> 0x1f & 0xffU) >> 8),
                                       CONCAT11(bStack_13 +
                                                (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8),
                                                local_14 +
                                                (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8))));
          puVar20 = puVar20 + 1;
          uVar16 = uVar2;
          if (iVar5 == iVar29) {
            uVar16 = (uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) << 0x12;
          }
          param_2 = param_2 + uVar16;
        }
      }
      return;
    }
    iVar12 = (int)(uVar16 + ((int)uVar16 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar26 = *(int *)(param_1 + 0x38) * iVar12 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar5 * *(int *)(param_1 + 8) + iVar24 + *(int *)(param_1 + 4));
    iVar10 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    local_5c = iVar26;
    if (((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar12) {
      local_5c = *(int *)(param_1 + 0x38) + iVar26;
    }
    uVar11 = *param_3;
    param_2 = *(uint *)(param_1 + 0x40);
    local_3c = (char)uVar11;
    bStack_3b = (byte)(uVar11 >> 8);
    bStack_3a = (byte)(uVar11 >> 0x10);
    iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar18 = *(uint *)(iVar26 + iVar10 * 4);
    uVar32 = *(uint *)(local_5c + iVar10 * 4);
    iVar10 = (uVar23 + iVar10) * 4;
    uVar19 = *(uint *)(iVar10 + iVar26);
    uVar3 = *(uint *)(iVar10 + local_5c);
    uVar27 = param_2 & 0x80003fff;
    if ((int)uVar27 < 0) {
      uVar27 = (uVar27 - 1 | 0xffffc000) + 1;
    }
    uVar30 = uVar16 & 0x80003fff;
    if ((int)uVar30 < 0) {
      uVar30 = (uVar30 - 1 | 0xffffc000) + 1;
    }
    iVar10 = (0x4000 - uVar27) * (0x4000 - uVar30);
    iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar12 = uVar27 * (0x4000 - uVar30);
    iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar13 = uVar30 * (0x4000 - uVar27);
    iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar31 = (int)(((int)(uVar30 * uVar27) >> 0x1f & 0x3fffU) + uVar30 * uVar27) >> 0xe;
    iVar14 = (uVar3 & 0xff) * iVar31 + (uVar32 & 0xff) * iVar13 + (uVar19 & 0xff) * iVar12 +
             (uVar18 & 0xff) * iVar10;
    iVar15 = (uVar3 >> 8 & 0xff) * iVar31 + (uVar32 >> 8 & 0xff) * iVar13 +
             (uVar19 >> 8 & 0xff) * iVar12 + (uVar18 >> 8 & 0xff) * iVar10;
    iVar12 = (uVar3 >> 0x10 & 0xff) * iVar31 + (uVar32 >> 0x10 & 0xff) * iVar13 +
             (uVar19 >> 0x10 & 0xff) * iVar12 + (uVar18 >> 0x10 & 0xff) * iVar10;
    iVar10 = ((uint)((longlong)iVar9 * (longlong)local_18) >> 0xe |
             (int)((ulonglong)((longlong)iVar9 * (longlong)local_18) >> 0x20) << 0x12) *
             (uVar11 >> 0x18);
    iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
    if (iVar10 == 0) {
      local_64 = uVar11 & 0xff;
    }
    else {
      uVar18 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
      local_64 = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_64 = 0xff;
      }
    }
    iVar14 = (int)(short)iVar10;
    iVar13 = (local_64 - (uVar11 & 0xff)) * iVar14;
    if (iVar10 == 0) {
      local_84 = (uint)bStack_3b;
    }
    else {
      uVar18 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
      local_84 = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_84 = 0xff;
      }
    }
    iVar15 = (local_84 - (uVar11 >> 8 & 0xff)) * iVar14;
    if (iVar10 == 0) {
      local_6c = (uint)bStack_3a;
    }
    else {
      uVar18 = (int)(((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
      local_6c = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_6c = 0xff;
      }
    }
    iVar14 = (local_6c - (uVar11 >> 0x10 & 0xff)) * iVar14;
    iVar10 = iVar10 + (uVar11 >> 0x18);
    if (iVar10 < 0) {
      uStack_39 = 0;
    }
    else {
      uStack_39 = 0xff;
      if (iVar10 < 0x100) {
        uStack_39 = (undefined1)iVar10;
      }
    }
    param_2 = param_2 + ((uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                        (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) <<
                        0x12);
    *param_3 = CONCAT13(uStack_39,
                        CONCAT12(bStack_3a + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8),
                                 CONCAT11(bStack_3b + (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8)
                                          ,local_3c + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8)
                                         )));
    param_3 = param_3 + 1;
    if (iVar29 + 1 < iVar21 + -1) {
      local_50 = (iVar21 + -1) - (iVar29 + 1);
      do {
        uVar11 = *param_3;
        local_c = (char)uVar11;
        bStack_b = (byte)(uVar11 >> 8);
        bStack_a = (byte)(uVar11 >> 0x10);
        bStack_9 = (byte)(uVar11 >> 0x18);
        iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar27 = param_2 & 0x80003fff;
        uVar18 = *(uint *)(iVar26 + iVar10 * 4);
        uVar32 = *(uint *)(iVar26 + 4 + iVar10 * 4);
        uVar19 = *(uint *)(local_5c + iVar10 * 4);
        uVar3 = *(uint *)(local_5c + 4 + iVar10 * 4);
        if ((int)uVar27 < 0) {
          uVar27 = (uVar27 - 1 | 0xffffc000) + 1;
        }
        iVar10 = (0x4000 - uVar27) * (0x4000 - uVar30);
        iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = uVar27 * (0x4000 - uVar30);
        iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar13 = (0x4000 - uVar27) * uVar30;
        iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = (int)(uVar30 * uVar27 + ((int)(uVar30 * uVar27) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar14 = (uVar3 & 0xff) * iVar15 + (uVar19 & 0xff) * iVar13 + (uVar32 & 0xff) * iVar12 +
                 (uVar18 & 0xff) * iVar10;
        uVar27 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar14 = (uVar3 >> 8 & 0xff) * iVar15 + (uVar19 >> 8 & 0xff) * iVar13 +
                 (uVar32 >> 8 & 0xff) * iVar12 + (uVar18 >> 8 & 0xff) * iVar10;
        uVar17 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar10 = (uVar3 >> 0x10 & 0xff) * iVar15 + (uVar19 >> 0x10 & 0xff) * iVar13 +
                 (uVar32 >> 0x10 & 0xff) * iVar12 + (uVar18 >> 0x10 & 0xff) * iVar10;
        uVar18 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar9 == 0x4000) {
          uVar32 = (uint)bStack_9;
          if (uVar32 == 0) {
            local_80 = uVar11 & 0xff;
          }
          else {
            uVar19 = ((uVar27 & 0xff) * 0xff) / uVar32;
            local_80 = uVar19 & 0xff;
            if (0xfe < uVar19) {
              local_80 = 0xff;
            }
          }
          iVar12 = (int)(short)(ushort)bStack_9;
          iVar10 = (local_80 - (uVar11 & 0xff)) * iVar12;
          local_c = local_c + (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8);
          if (uVar32 == 0) {
            local_44 = (uint)bStack_b;
          }
          else {
            uVar19 = ((uVar17 & 0xff) * 0xff) / uVar32;
            local_44 = uVar19 & 0xff;
            if (0xfe < uVar19) {
              local_44 = 0xff;
            }
          }
          iVar10 = (local_44 - (uVar11 >> 8 & 0xff)) * iVar12;
          bStack_b = bStack_b + (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8);
          if (uVar32 == 0) {
            local_1c = (uint)bStack_a;
          }
          else {
            uVar18 = ((uVar18 & 0xff) * 0xff) / uVar32;
            local_1c = uVar18 & 0xff;
            if (0xfe < uVar18) {
              local_1c = 0xff;
            }
          }
          iVar12 = (local_1c - (uVar11 >> 0x10 & 0xff)) * iVar12;
          bStack_a = bStack_a + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          uVar32 = uVar32 * 2;
          if (uVar32 < 0x100) {
LAB_004f55cc:
            bStack_9 = (byte)uVar32;
          }
          else {
            bStack_9 = 0xff;
          }
        }
        else {
          iVar10 = (uint)bStack_9 * iVar9;
          iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar10 == 0) {
            local_20 = uVar11 & 0xff;
          }
          else {
            uVar32 = (int)((uVar27 & 0xff) * 0xff) / iVar10;
            local_20 = uVar32 & 0xff;
            if (0xfe < (int)uVar32) {
              local_20 = 0xff;
            }
          }
          iVar13 = (int)(short)iVar10;
          iVar12 = (local_20 - (uVar11 & 0xff)) * iVar13;
          local_c = local_c + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          if (iVar10 == 0) {
            local_a0 = (uint)bStack_b;
          }
          else {
            uVar32 = (int)((uVar17 & 0xff) * 0xff) / iVar10;
            local_a0 = uVar32 & 0xff;
            if (0xfe < (int)uVar32) {
              local_a0 = 0xff;
            }
          }
          iVar12 = (local_a0 - (uVar11 >> 8 & 0xff)) * iVar13;
          bStack_b = bStack_b + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          if (iVar10 == 0) {
            local_9c = (uint)bStack_a;
          }
          else {
            uVar18 = (int)((uVar18 & 0xff) * 0xff) / iVar10;
            local_9c = uVar18 & 0xff;
            if (0xfe < (int)uVar18) {
              local_9c = 0xff;
            }
          }
          iVar13 = (local_9c - (uVar11 >> 0x10 & 0xff)) * iVar13;
          bStack_a = bStack_a + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          uVar32 = iVar10 + (uint)bStack_9;
          if ((int)uVar32 < 0) {
            bStack_9 = 0;
          }
          else {
            if ((int)uVar32 < 0x100) goto LAB_004f55cc;
            bStack_9 = 0xff;
          }
        }
        *param_3 = CONCAT13(bStack_9,CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar2;
        local_50 = local_50 + -1;
      } while (local_50 != 0);
    }
    if (iVar22 != 1) {
      uVar11 = *param_3;
      local_14 = (char)uVar11;
      bStack_13 = (byte)(uVar11 >> 8);
      bStack_12 = (byte)(uVar11 >> 0x10);
      uVar18 = *(uint *)(iVar26 + -4 + iVar7 * 4);
      uStack_e2 = (ushort)(uVar18 >> 0x10);
      uVar32 = *(uint *)(local_5c + -4 + iVar7 * 4);
      param_2 = param_2 & 0x80003fff;
      uStack_fa = (ushort)(uVar32 >> 0x10);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar10 = (0x4000 - param_2) * (0x4000 - uVar30);
      iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar26 = param_2 * (0x4000 - uVar30);
      iVar26 = (int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = uVar30 * (0x4000 - param_2);
      iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar15 = (int)(uVar30 * param_2 + ((int)(uVar30 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (uVar32 & 0xff) * iVar15 + (uVar32 & 0xff) * iVar12 + (uVar18 & 0xff) * iVar26 +
               (uVar18 & 0xff) * iVar10;
      iVar14 = (uVar32 >> 8 & 0xff) * iVar15 + (uVar32 >> 8 & 0xff) * iVar12 +
               (uVar18 >> 8 & 0xff) * iVar26 + (uVar18 >> 8 & 0xff) * iVar10;
      iVar26 = (uStack_fa & 0xff) * iVar15 + (uStack_fa & 0xff) * iVar12 +
               (uStack_e2 & 0xff) * iVar26 + (uStack_e2 & 0xff) * iVar10;
      iVar10 = ((uint)((longlong)iVar9 * (longlong)iVar25) >> 0xe |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar25) >> 0x20) << 0x12) *
               (uVar11 >> 0x18);
      iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar10 == 0) {
        local_ac = uVar11 & 0xff;
      }
      else {
        uVar18 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_ac = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_ac = 0xff;
        }
      }
      iVar13 = (int)(short)iVar10;
      iVar12 = (local_ac - (uVar11 & 0xff)) * iVar13;
      if (iVar10 == 0) {
        local_98 = (uint)bStack_13;
      }
      else {
        uVar18 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_98 = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_98 = 0xff;
        }
      }
      iVar14 = (local_98 - (uVar11 >> 8 & 0xff)) * iVar13;
      if (iVar10 == 0) {
        local_94 = (uint)bStack_12;
      }
      else {
        uVar18 = (int)(((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_94 = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_94 = 0xff;
        }
      }
      iVar13 = (local_94 - (uVar11 >> 0x10 & 0xff)) * iVar13;
      iVar10 = iVar10 + (uVar11 >> 0x18);
      if (iVar10 < 0) {
        uStack_11 = 0;
      }
      else {
        uStack_11 = 0xff;
        if (iVar10 < 0x100) {
          uStack_11 = (undefined1)iVar10;
        }
      }
      *param_3 = CONCAT13(uStack_11,
                          CONCAT12(bStack_12 + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8),
                                   CONCAT11(bStack_13 +
                                            (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8),
                                            local_14 +
                                            (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8))));
    }
    uVar16 = uVar16 + iVar28;
    iVar5 = iVar5 + 1;
  } while( true );
}


