/* Module: vegas30k.dll
   Function: FUN_010cee20
   Address: 010cee20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010cee20(int param_1,undefined4 param_2,uint *param_3)

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
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
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
  byte bStack_101;
  byte bStack_a9;
  uint local_8c;
  int local_88;
  uint local_7c;
  uint local_70;
  uint local_68;
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_48;
  char local_40;
  byte bStack_3f;
  byte bStack_3e;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  char local_14;
  byte bStack_13;
  byte bStack_12;
  char local_c;
  byte bStack_b;
  byte bStack_a;
  
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
  iVar8 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar5 = iVar34 + 1;
  local_54 = iVar5 * 0x4000 - *(int *)(param_1 + 0x14);
  local_1c = (iVar27 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar25 = iVar17 + iVar19 * -0x4000 + 0x4000;
  iVar20 = iVar19 - iVar27;
  if (iVar20 < 2) {
    local_1c = iVar17 - *(int *)(param_1 + 0x10);
  }
  if (iVar6 - iVar34 < 2) {
    local_54 = iVar1 - *(int *)(param_1 + 0x14);
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
  iVar8 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe) + -1;
  local_88 = iVar22;
  if (iVar8 != iVar10) {
    local_88 = *(int *)(param_1 + 0x38) + iVar22;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar27 < iVar19) {
    uVar11 = uVar32 & 0x80003fff;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffc000) + 1;
    }
    iVar10 = iVar27;
    do {
      uVar24 = *param_3;
      local_c = (char)uVar24;
      bStack_b = (byte)(uVar24 >> 8);
      bStack_a = (byte)(uVar24 >> 0x10);
      local_28 = (uint)((longlong)iVar9 * (longlong)(int)local_54) >> 0xe |
                 (int)((ulonglong)((longlong)iVar9 * (longlong)(int)local_54) >> 0x20) << 0x12;
      uVar30 = 1;
      iVar23 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar10 == iVar27) {
        local_28 = (uint)((longlong)(int)local_28 * (longlong)local_1c) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_28 * (longlong)local_1c) >> 0x20) << 0x12;
        uVar30 = uVar21;
      }
      else if (iVar10 == iVar19 + -1) {
        local_28 = (uint)((longlong)(int)local_28 * (longlong)iVar25) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_28 * (longlong)iVar25) >> 0x20) << 0x12;
        uVar30 = 0;
        iVar23 = iVar7 + -1;
      }
      uVar33 = *(uint *)(iVar22 + iVar23 * 4);
      iVar12 = (iVar23 + uVar30) * 4;
      uVar28 = param_2 & 0x80003fff;
      uVar30 = *(uint *)(iVar12 + iVar22);
      uVar3 = *(uint *)(local_88 + iVar23 * 4);
      uVar36 = *(uint *)(iVar12 + local_88);
      if ((int)uVar28 < 0) {
        uVar28 = (uVar28 - 1 | 0xffffc000) + 1;
      }
      iVar23 = (0x4000 - uVar11) * (0x4000 - uVar28);
      iVar12 = (0x4000 - uVar11) * uVar28;
      iVar13 = (0x4000 - uVar28) * uVar11;
      iVar35 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar29 = (int)(uVar11 * uVar28 + ((int)(uVar11 * uVar28) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar31 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar23 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = (uVar36 & 0xff) * iVar29 + (uVar3 & 0xff) * iVar35 + (uVar30 & 0xff) * iVar31 +
               (uVar33 & 0xff) * iVar23;
      iVar13 = (uVar36 >> 8 & 0xff) * iVar29 + (uVar3 >> 8 & 0xff) * iVar35 +
               (uVar30 >> 8 & 0xff) * iVar31 + (uVar33 >> 8 & 0xff) * iVar23;
      iVar14 = (uVar36 >> 0x10 & 0xff) * iVar29 + (uVar3 >> 0x10 & 0xff) * iVar35 +
               (uVar30 >> 0x10 & 0xff) * iVar31 + (uVar33 >> 0x10 & 0xff) * iVar23;
      iVar23 = (uVar36 >> 0x18) * iVar29 + (uVar3 >> 0x18) * iVar35 + (uVar30 >> 0x18) * iVar31 +
               (uVar33 >> 0x18) * iVar23;
      iVar23 = (int)(((int)(local_28 * 0xff + ((int)(local_28 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe) *
                    ((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU)) / 0xff;
      if (iVar23 == 0) {
        local_70 = uVar24 & 0xff;
      }
      else {
        uVar30 = (int)(((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar23;
        local_70 = uVar30 & 0xff;
        if (0xfe < (int)uVar30) {
          local_70 = 0xff;
        }
      }
      iVar29 = (int)(short)iVar23;
      iVar12 = (local_70 - (uVar24 & 0xff)) * iVar29;
      if (iVar23 == 0) {
        local_68 = (uint)bStack_b;
      }
      else {
        uVar30 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar23;
        local_68 = uVar30 & 0xff;
        if (0xfe < (int)uVar30) {
          local_68 = 0xff;
        }
      }
      iVar13 = (local_68 - (uVar24 >> 8 & 0xff)) * iVar29;
      if (iVar23 == 0) {
        local_60 = (uint)bStack_a;
      }
      else {
        uVar24 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar23;
        local_60 = uVar24 & 0xff;
        if (0xfe < (int)uVar24) {
          local_60 = 0xff;
        }
      }
      iVar29 = (local_60 - bStack_a) * iVar29;
      *param_3 = CONCAT13((char)iVar23,
                          CONCAT12(bStack_a + (char)(iVar29 + (iVar29 >> 0x1f & 0xffU) >> 8),
                                   CONCAT11(bStack_b +
                                            (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8),
                                            local_c + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8)
                                           )));
      param_3 = param_3 + 1;
      uVar24 = uVar2;
      if (iVar10 == iVar27) {
        uVar24 = (uint)((longlong)(int)uVar2 * (longlong)local_1c) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_1c) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar24;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar19);
  }
  lVar4 = (longlong)iVar17 * (longlong)(int)local_54;
  uVar32 = uVar32 + ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
  for (; iVar5 < iVar6 + -1; iVar5 = iVar5 + 1) {
    iVar12 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar23 = *(int *)(param_1 + 0x38) * iVar12 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar5 * *(int *)(param_1 + 8) + iVar26 + *(int *)(param_1 + 4));
    iVar22 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    iVar10 = iVar23;
    if (((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar12) {
      iVar10 = *(int *)(param_1 + 0x38) + iVar23;
    }
    uVar11 = *param_3;
    local_40 = (char)uVar11;
    bStack_3f = (byte)(uVar11 >> 8);
    bStack_3e = (byte)(uVar11 >> 0x10);
    param_2 = *(uint *)(param_1 + 0x40);
    iVar22 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar24 = *(uint *)(iVar23 + iVar22 * 4);
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
    iVar12 = (0x4000 - uVar28) * uVar36;
    iVar13 = (0x4000 - uVar36) * uVar28;
    iVar29 = (int)(((int)(uVar28 * uVar36) >> 0x1f & 0x3fffU) + uVar28 * uVar36) >> 0xe;
    iVar31 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar35 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar22 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar12 = (uVar3 & 0xff) * iVar29 + (uVar30 & 0xff) * iVar31 + (uVar33 & 0xff) * iVar35 +
             (uVar24 & 0xff) * iVar22;
    iVar13 = (uVar3 >> 8 & 0xff) * iVar29 + (uVar30 >> 8 & 0xff) * iVar31 +
             (uVar33 >> 8 & 0xff) * iVar35 + (uVar24 >> 8 & 0xff) * iVar22;
    iVar14 = (uVar3 >> 0x10 & 0xff) * iVar29 + (uVar30 >> 0x10 & 0xff) * iVar31 +
             (uVar33 >> 0x10 & 0xff) * iVar35 + (uVar24 >> 0x10 & 0xff) * iVar22;
    iVar29 = (uVar3 >> 0x18) * iVar29 + (uVar30 >> 0x18) * iVar31 + (uVar33 >> 0x18) * iVar35 +
             (uVar24 >> 0x18) * iVar22;
    iVar22 = ((uint)((longlong)iVar9 * (longlong)local_1c) >> 0xe |
             (int)((ulonglong)((longlong)iVar9 * (longlong)local_1c) >> 0x20) << 0x12) * 0xff;
    iVar22 = (int)(((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe) *
                  ((int)(iVar29 + (iVar29 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU)) / 0xff;
    if (iVar22 == 0) {
      local_60 = uVar11 & 0xff;
    }
    else {
      uVar24 = (int)(((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar22;
      local_60 = uVar24 & 0xff;
      if (0xfe < (int)uVar24) {
        local_60 = 0xff;
      }
    }
    iVar29 = (int)(short)iVar22;
    iVar12 = (local_60 - (uVar11 & 0xff)) * iVar29;
    if (iVar22 == 0) {
      local_68 = (uint)bStack_3f;
    }
    else {
      uVar24 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar22;
      local_68 = uVar24 & 0xff;
      if (0xfe < (int)uVar24) {
        local_68 = 0xff;
      }
    }
    iVar13 = (local_68 - (uVar11 >> 8 & 0xff)) * iVar29;
    if (iVar22 == 0) {
      local_70 = (uint)bStack_3e;
    }
    else {
      uVar11 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar22;
      local_70 = uVar11 & 0xff;
      if (0xfe < (int)uVar11) {
        local_70 = 0xff;
      }
    }
    iVar29 = (local_70 - bStack_3e) * iVar29;
    param_2 = param_2 + ((uint)((longlong)(int)uVar2 * (longlong)local_1c) >> 0xe |
                        (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_1c) >> 0x20) <<
                        0x12);
    *param_3 = CONCAT13((char)iVar22,
                        CONCAT12(bStack_3e + (char)(iVar29 + (iVar29 >> 0x1f & 0xffU) >> 8),
                                 CONCAT11(bStack_3f + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8)
                                          ,local_40 + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8)
                                         )));
    param_3 = param_3 + 1;
    if (iVar27 + 1 < iVar19 + -1) {
      local_20 = (iVar19 + -1) - (iVar27 + 1);
      do {
        uVar11 = *param_3;
        local_c = (char)uVar11;
        bStack_b = (byte)(uVar11 >> 8);
        bStack_a = (byte)(uVar11 >> 0x10);
        iVar22 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar36 = param_2 & 0x80003fff;
        uVar24 = *(uint *)(iVar23 + iVar22 * 4);
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
        iVar14 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar22 = (uVar3 & 0xff) * iVar13 + (uVar33 & 0xff) * iVar29 + (uVar30 & 0xff) * iVar14 +
                 (uVar24 & 0xff) * iVar12;
        uVar36 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar22 = (uVar3 >> 8 & 0xff) * iVar13 + (uVar33 >> 8 & 0xff) * iVar29 +
                 (uVar30 >> 8 & 0xff) * iVar14 + (uVar24 >> 8 & 0xff) * iVar12;
        uVar15 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar22 = (uVar3 >> 0x10 & 0xff) * iVar13 + (uVar33 >> 0x10 & 0xff) * iVar29 +
                 (uVar30 >> 0x10 & 0xff) * iVar14 + (uVar24 >> 0x10 & 0xff) * iVar12;
        uVar16 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar22 = (uVar3 >> 0x18) * iVar13 + (uVar33 >> 0x18) * iVar29 + (uVar30 >> 0x18) * iVar14 +
                 (uVar24 >> 0x18) * iVar12;
        uVar24 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar9 == 0x4000) {
          iVar12 = 0xff - (uVar24 & 0xff);
          iVar22 = (uVar11 & 0xff) * iVar12 + 0x7f;
          iVar22 = ((int)(iVar22 + (iVar22 >> 0x1f & 0xffU)) >> 8) + (uVar36 & 0xff);
          if (iVar22 < 0) {
            local_c = '\0';
          }
          else {
            local_c = -1;
            if (iVar22 < 0x100) {
              local_c = (char)iVar22;
            }
          }
          iVar22 = (uVar11 >> 8 & 0xff) * iVar12 + 0x7f;
          iVar22 = ((int)(iVar22 + (iVar22 >> 0x1f & 0xffU)) >> 8) + (uVar15 & 0xff);
          if (iVar22 < 0) {
            bStack_b = '\0';
          }
          else {
            bStack_b = -1;
            if (iVar22 < 0x100) {
              bStack_b = (byte)iVar22;
            }
          }
          iVar22 = (uint)bStack_a * iVar12 + 0x7f;
          iVar22 = ((int)(iVar22 + (iVar22 >> 0x1f & 0xffU)) >> 8) + (uVar16 & 0xff);
          if (iVar22 < 0) {
            bStack_a = '\0';
          }
          else {
            bStack_a = -1;
            if (iVar22 < 0x100) {
              bStack_a = (byte)iVar22;
            }
          }
        }
        else {
          uVar24 = (int)(((int)(iVar9 * 0xff + (iVar9 * 0xff >> 0x1f & 0x3fffU)) >> 0xe) *
                        (uVar24 & 0xff)) / 0xff;
          if (uVar24 == 0) {
            local_54 = uVar11 & 0xff;
          }
          else {
            uVar30 = (int)((uVar36 & 0xff) * 0xff) / (int)uVar24;
            local_54 = uVar30 & 0xff;
            if (0xfe < (int)uVar30) {
              local_54 = 0xff;
            }
          }
          iVar12 = (int)(short)uVar24;
          iVar22 = (local_54 - (uVar11 & 0xff)) * iVar12;
          local_c = local_c + (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8);
          if (uVar24 == 0) {
            local_24 = (uint)bStack_b;
          }
          else {
            uVar30 = (int)((uVar15 & 0xff) * 0xff) / (int)uVar24;
            local_24 = uVar30 & 0xff;
            if (0xfe < (int)uVar30) {
              local_24 = 0xff;
            }
          }
          iVar22 = (local_24 - (uVar11 >> 8 & 0xff)) * iVar12;
          bStack_b = bStack_b + (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8);
          if (uVar24 == 0) {
            local_28 = (uint)bStack_a;
          }
          else {
            uVar11 = (int)((uVar16 & 0xff) * 0xff) / (int)uVar24;
            local_28 = uVar11 & 0xff;
            if (0xfe < (int)uVar11) {
              local_28 = 0xff;
            }
          }
          iVar12 = (local_28 - bStack_a) * iVar12;
          bStack_a = bStack_a + (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
        }
        *param_3 = CONCAT13((char)uVar24,CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar2;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    if (iVar20 != 1) {
      uVar11 = *param_3;
      param_2 = param_2 & 0x80003fff;
      local_14 = (char)uVar11;
      bStack_13 = (byte)(uVar11 >> 8);
      bStack_12 = (byte)(uVar11 >> 0x10);
      uVar24 = *(uint *)(iVar23 + -4 + iVar7 * 4);
      bStack_a9 = (byte)(uVar24 >> 0x18);
      uVar30 = *(uint *)(iVar10 + -4 + iVar7 * 4);
      bStack_101 = (byte)(uVar30 >> 0x18);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar10 = (0x4000 - param_2) * (0x4000 - uVar28);
      iVar22 = (0x4000 - uVar28) * param_2;
      iVar23 = (0x4000 - param_2) * uVar28;
      iVar13 = (int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (int)(uVar28 * param_2 + ((int)(uVar28 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar29 = (int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar22 = (uVar30 & 0xff) * iVar14 + (uVar30 & 0xff) * iVar13 + (uVar24 & 0xff) * iVar29 +
               (uVar24 & 0xff) * iVar10;
      iVar23 = (uVar30 >> 8 & 0xff) * iVar14 + (uVar30 >> 8 & 0xff) * iVar13 +
               (uVar24 >> 8 & 0xff) * iVar29 + (uVar24 >> 8 & 0xff) * iVar10;
      iVar12 = (uVar30 >> 0x10 & 0xff) * iVar14 + (uVar30 >> 0x10 & 0xff) * iVar13 +
               (uVar24 >> 0x10 & 0xff) * iVar29 + (uVar24 >> 0x10 & 0xff) * iVar10;
      iVar13 = (uint)bStack_101 * iVar14 + (uint)bStack_101 * iVar13 + (uint)bStack_a9 * iVar29 +
               (uint)bStack_a9 * iVar10;
      iVar10 = ((uint)((longlong)iVar9 * (longlong)iVar25) >> 0xe |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar25) >> 0x20) << 0x12) * 0xff;
      iVar10 = (int)(((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) *
                    ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU)) / 0xff;
      if (iVar10 == 0) {
        local_8c = uVar11 & 0xff;
      }
      else {
        uVar24 = (int)(((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_8c = uVar24 & 0xff;
        if (0xfe < (int)uVar24) {
          local_8c = 0xff;
        }
      }
      iVar13 = (int)(short)iVar10;
      iVar22 = (local_8c - (uVar11 & 0xff)) * iVar13;
      if (iVar10 == 0) {
        local_7c = (uint)bStack_13;
      }
      else {
        uVar24 = (int)(((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_7c = uVar24 & 0xff;
        if (0xfe < (int)uVar24) {
          local_7c = 0xff;
        }
      }
      iVar23 = (local_7c - (uVar11 >> 8 & 0xff)) * iVar13;
      if (iVar10 == 0) {
        local_48 = (uint)bStack_12;
      }
      else {
        uVar11 = (int)(((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar10;
        local_48 = uVar11 & 0xff;
        if (0xfe < (int)uVar11) {
          local_48 = 0xff;
        }
      }
      iVar13 = (local_48 - bStack_12) * iVar13;
      *param_3 = CONCAT13((char)iVar10,
                          CONCAT12(bStack_12 + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8),
                                   CONCAT11(bStack_13 +
                                            (char)(iVar23 + (iVar23 >> 0x1f & 0xffU) >> 8),
                                            local_14 +
                                            (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8))));
    }
    uVar32 = uVar32 + iVar17;
  }
  if (iVar6 - iVar34 != 1) {
    iVar17 = iVar8 * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
    puVar18 = (uint *)((iVar6 + -1) * *(int *)(param_1 + 8) + iVar26 + *(int *)(param_1 + 4));
    param_2 = *(uint *)(param_1 + 0x40);
    for (iVar5 = iVar27; iVar5 < iVar19; iVar5 = iVar5 + 1) {
      uVar32 = *puVar18;
      local_14 = (char)uVar32;
      bStack_13 = (byte)(uVar32 >> 8);
      bStack_12 = (byte)(uVar32 >> 0x10);
      lVar4 = (longlong)iVar9 * (longlong)(iVar1 + iVar6 * -0x4000 + 0x4000);
      uVar24 = (uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12;
      uVar11 = 1;
      iVar8 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar5 == iVar27) {
        uVar24 = (uint)((longlong)(int)uVar24 * (longlong)local_1c) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar24 * (longlong)local_1c) >> 0x20) << 0x12;
        uVar11 = uVar21;
      }
      else if (iVar5 == iVar19 + -1) {
        uVar24 = (uint)((longlong)(int)uVar24 * (longlong)iVar25) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar24 * (longlong)iVar25) >> 0x20) << 0x12;
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
      iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar22 = (int)(uVar33 * 0x4000 + ((int)(uVar33 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar20 = (uVar11 & 0xff) * iVar22 + (uVar30 & 0xff) * iVar8;
      iVar34 = (uVar11 >> 8 & 0xff) * iVar22 + (uVar30 >> 8 & 0xff) * iVar8;
      iVar10 = (uVar11 >> 0x10 & 0xff) * iVar22 + (uVar30 >> 0x10 & 0xff) * iVar8;
      iVar8 = (uVar11 >> 0x18) * iVar22 + (uVar30 >> 0x18) * iVar8;
      iVar8 = (int)(((int)(uVar24 * 0xff + ((int)(uVar24 * 0xff) >> 0x1f & 0x3fffU)) >> 0xe) *
                   ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU)) / 0xff;
      if (iVar8 == 0) {
        local_18 = uVar32 & 0xff;
      }
      else {
        uVar11 = (int)(((int)(iVar20 + (iVar20 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar8;
        local_18 = uVar11 & 0xff;
        if (0xfe < (int)uVar11) {
          local_18 = 0xff;
        }
      }
      iVar22 = (int)(short)iVar8;
      iVar20 = (local_18 - (uVar32 & 0xff)) * iVar22;
      if (iVar8 == 0) {
        local_5c = (uint)bStack_13;
      }
      else {
        uVar11 = (int)(((int)(iVar34 + (iVar34 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar8;
        local_5c = uVar11 & 0xff;
        if (0xfe < (int)uVar11) {
          local_5c = 0xff;
        }
      }
      iVar34 = (local_5c - (uVar32 >> 8 & 0xff)) * iVar22;
      if (iVar8 == 0) {
        local_48 = (uint)bStack_12;
      }
      else {
        uVar32 = (int)(((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar8;
        local_48 = uVar32 & 0xff;
        if (0xfe < (int)uVar32) {
          local_48 = 0xff;
        }
      }
      iVar22 = (local_48 - bStack_12) * iVar22;
      *puVar18 = CONCAT13((char)iVar8,
                          CONCAT12(bStack_12 + (char)(iVar22 + (iVar22 >> 0x1f & 0xffU) >> 8),
                                   CONCAT11(bStack_13 +
                                            (char)(iVar34 + (iVar34 >> 0x1f & 0xffU) >> 8),
                                            local_14 +
                                            (char)(iVar20 + (iVar20 >> 0x1f & 0xffU) >> 8))));
      puVar18 = puVar18 + 1;
      uVar32 = uVar2;
      if (iVar5 == iVar27) {
        uVar32 = (uint)((longlong)(int)uVar2 * (longlong)local_1c) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_1c) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar32;
    }
  }
  return;
}


