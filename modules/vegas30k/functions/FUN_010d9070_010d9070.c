/* Module: vegas30k.dll
   Function: FUN_010d9070
   Address: 010d9070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010d9070(uint param_1,undefined4 param_2,uint *param_3)

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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
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
  undefined1 uStack_9;
  
  iVar19 = *(int *)(param_1 + 0x18);
  iVar28 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar19 - 1U | 0x3fff) + 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar21 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar35 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (iVar1 - 1U | 0x3fff) + 1;
  iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar8 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = iVar35 + 1;
  local_50 = iVar6 * 0x4000 - *(int *)(param_1 + 0x14);
  local_18 = (iVar28 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar26 = iVar19 + iVar21 * -0x4000 + 0x4000;
  iVar22 = iVar21 - iVar28;
  if (iVar22 < 2) {
    local_18 = iVar19 - *(int *)(param_1 + 0x10);
  }
  if (iVar7 - iVar35 < 2) {
    local_50 = iVar1 - *(int *)(param_1 + 0x14);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar19 = *(int *)(param_1 + 100);
  uVar34 = *(uint *)(param_1 + 0x44);
  iVar10 = ftol();
  uVar23 = (uint)(iVar22 != 1);
  iVar11 = (int)(uVar34 + ((int)uVar34 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar24 = *(int *)(param_1 + 0x38) * iVar11 + *(int *)(param_1 + 0x34);
  iVar27 = iVar28 * (int)param_3;
  param_3 = (uint *)(iVar35 * *(int *)(param_1 + 8) + iVar27 + *(int *)(param_1 + 4));
  local_8c = iVar24;
  if (iVar9 + -1 != iVar11) {
    local_8c = *(int *)(param_1 + 0x38) + iVar24;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar28 < iVar21) {
    uVar12 = uVar34 & 0x80003fff;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffc000) + 1;
    }
    iVar11 = iVar28;
    do {
      uVar18 = *param_3;
      local_c = (char)uVar18;
      bStack_b = (byte)(uVar18 >> 8);
      bStack_a = (byte)(uVar18 >> 0x10);
      local_34 = (uint)((longlong)iVar10 * (longlong)(int)local_50) >> 0xe |
                 (int)((ulonglong)((longlong)iVar10 * (longlong)(int)local_50) >> 0x20) << 0x12;
      uVar32 = 1;
      iVar25 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar11 == iVar28) {
        local_34 = (uint)((longlong)(int)local_34 * (longlong)local_18) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_34 * (longlong)local_18) >> 0x20) << 0x12;
        uVar32 = uVar23;
      }
      else if (iVar11 == iVar21 + -1) {
        local_34 = (uint)((longlong)(int)local_34 * (longlong)iVar26) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_34 * (longlong)iVar26) >> 0x20) << 0x12;
        uVar32 = 0;
        iVar25 = iVar8 + -1;
      }
      uVar3 = *(uint *)(iVar24 + iVar25 * 4);
      iVar13 = (iVar25 + uVar32) * 4;
      uVar29 = param_2 & 0x80003fff;
      uVar32 = *(uint *)(iVar13 + iVar24);
      uVar4 = *(uint *)(local_8c + iVar25 * 4);
      uVar37 = *(uint *)(iVar13 + local_8c);
      if ((int)uVar29 < 0) {
        uVar29 = (uVar29 - 1 | 0xffffc000) + 1;
      }
      iVar25 = (0x4000 - uVar12) * (0x4000 - uVar29);
      iVar13 = (0x4000 - uVar12) * uVar29;
      iVar14 = (0x4000 - uVar29) * uVar12;
      iVar36 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar30 = (int)(uVar12 * uVar29 + ((int)(uVar12 * uVar29) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar33 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar25 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (uVar37 & 0xff) * iVar30 + (uVar4 & 0xff) * iVar36 + (uVar32 & 0xff) * iVar33 +
               (uVar3 & 0xff) * iVar25;
      iVar14 = (uVar37 >> 8 & 0xff) * iVar30 + (uVar4 >> 8 & 0xff) * iVar36 +
               (uVar32 >> 8 & 0xff) * iVar33 + (uVar3 >> 8 & 0xff) * iVar25;
      iVar15 = (uVar37 >> 0x10 & 0xff) * iVar30 + (uVar4 >> 0x10 & 0xff) * iVar36 +
               (uVar32 >> 0x10 & 0xff) * iVar33 + (uVar3 >> 0x10 & 0xff) * iVar25;
      iVar25 = (uVar37 >> 0x18) * iVar30 + (uVar4 >> 0x18) * iVar36 + (uVar32 >> 0x18) * iVar33 +
               (uVar3 >> 0x18) * iVar25;
      iVar25 = ((((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * (uVar18 >> 0x18)) /
               0xff) * local_34;
      iVar25 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar25 == 0) {
        local_5c = uVar18 & 0xff;
      }
      else {
        uVar32 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar25;
        local_5c = uVar32 & 0xff;
        if (0xfe < (int)uVar32) {
          local_5c = 0xff;
        }
      }
      iVar30 = (int)(short)iVar25;
      iVar13 = (local_5c - (uVar18 & 0xff)) * iVar30;
      if (iVar25 == 0) {
        local_64 = (uint)bStack_b;
      }
      else {
        uVar32 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar25;
        local_64 = uVar32 & 0xff;
        if (0xfe < (int)uVar32) {
          local_64 = 0xff;
        }
      }
      iVar14 = (local_64 - (uVar18 >> 8 & 0xff)) * iVar30;
      if (iVar25 == 0) {
        local_6c = (uint)bStack_a;
      }
      else {
        uVar32 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar25;
        local_6c = uVar32 & 0xff;
        if (0xfe < (int)uVar32) {
          local_6c = 0xff;
        }
      }
      iVar30 = (local_6c - (uVar18 >> 0x10 & 0xff)) * iVar30;
      iVar25 = iVar25 + (uVar18 >> 0x18);
      if (iVar25 < 0) {
        uStack_9 = 0;
      }
      else {
        uStack_9 = 0xff;
        if (iVar25 < 0x100) {
          uStack_9 = (undefined1)iVar25;
        }
      }
      *param_3 = CONCAT13(uStack_9,CONCAT12(bStack_a +
                                            (char)(iVar30 + (iVar30 >> 0x1f & 0xffU) >> 8),
                                            CONCAT11(bStack_b +
                                                     (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8),
                                                     local_c + (char)(iVar13 + (iVar13 >> 0x1f &
                                                                               0xffU) >> 8))));
      param_3 = param_3 + 1;
      uVar18 = uVar2;
      if (iVar11 == iVar28) {
        uVar18 = (uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar18;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar21);
  }
  lVar5 = (longlong)iVar19 * (longlong)(int)local_50;
  uVar34 = uVar34 + ((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12);
  do {
    if (iVar7 + -1 <= iVar6) {
      if (iVar7 - iVar35 != 1) {
        iVar19 = (iVar9 + -1) * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
        param_2 = *(uint *)(param_1 + 0x40);
        puVar20 = (uint *)((iVar7 + -1) * *(int *)(param_1 + 8) + iVar27 + *(int *)(param_1 + 4));
        for (iVar6 = iVar28; iVar6 < iVar21; iVar6 = iVar6 + 1) {
          uVar34 = *puVar20;
          local_14 = (char)uVar34;
          bStack_13 = (byte)(uVar34 >> 8);
          bStack_12 = (byte)(uVar34 >> 0x10);
          lVar5 = (longlong)iVar10 * (longlong)(iVar1 + iVar7 * -0x4000 + 0x4000);
          param_1 = (uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12;
          uVar12 = 1;
          iVar9 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar6 == iVar28) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)local_18) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)local_18) >> 0x20) <<
                      0x12;
            uVar12 = uVar23;
          }
          else if (iVar6 == iVar21 + -1) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)iVar26) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)iVar26) >> 0x20) << 0x12;
            uVar12 = 0;
            iVar9 = iVar8 + -1;
          }
          uVar18 = *(uint *)(iVar19 + iVar9 * 4);
          uVar12 = *(uint *)(iVar19 + (iVar9 + uVar12) * 4);
          uVar32 = param_2 & 0x80003fff;
          if ((int)uVar32 < 0) {
            uVar32 = (uVar32 - 1 | 0xffffc000) + 1;
          }
          iVar9 = (0x4000 - uVar32) * 0x4000;
          iVar11 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar24 = (int)(uVar32 * 0x4000 + ((int)(uVar32 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar9 = (uVar12 & 0xff) * iVar24 + (uVar18 & 0xff) * iVar11;
          iVar22 = (uVar12 >> 8 & 0xff) * iVar24 + (uVar18 >> 8 & 0xff) * iVar11;
          iVar35 = (uVar12 >> 0x10 & 0xff) * iVar24 + (uVar18 >> 0x10 & 0xff) * iVar11;
          iVar11 = (uVar12 >> 0x18) * iVar24 + (uVar18 >> 0x18) * iVar11;
          iVar11 = ((((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * (uVar34 >> 0x18))
                   / 0xff) * param_1;
          iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar11 == 0) {
            local_1c = uVar34 & 0xff;
          }
          else {
            uVar12 = (int)(((int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar11;
            local_1c = uVar12 & 0xff;
            if (0xfe < (int)uVar12) {
              local_1c = 0xff;
            }
          }
          iVar24 = (int)(short)iVar11;
          iVar9 = (local_1c - (uVar34 & 0xff)) * iVar24;
          if (iVar11 == 0) {
            local_68 = (uint)bStack_13;
          }
          else {
            uVar12 = (int)(((int)(iVar22 + (iVar22 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar11;
            local_68 = uVar12 & 0xff;
            if (0xfe < (int)uVar12) {
              local_68 = 0xff;
            }
          }
          iVar22 = (local_68 - (uVar34 >> 8 & 0xff)) * iVar24;
          if (iVar11 == 0) {
            local_48 = (uint)bStack_12;
          }
          else {
            uVar12 = (int)(((int)(iVar35 + (iVar35 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar11;
            local_48 = uVar12 & 0xff;
            if (0xfe < (int)uVar12) {
              local_48 = 0xff;
            }
          }
          iVar11 = iVar11 + (uVar34 >> 0x18);
          iVar24 = (local_48 - (uVar34 >> 0x10 & 0xff)) * iVar24;
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
          uVar34 = uVar2;
          if (iVar6 == iVar28) {
            uVar34 = (uint)((longlong)(int)uVar2 * (longlong)local_18) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_18) >> 0x20) << 0x12;
          }
          param_2 = param_2 + uVar34;
        }
      }
      return;
    }
    iVar13 = (int)(uVar34 + ((int)uVar34 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar25 = *(int *)(param_1 + 0x38) * iVar13 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar6 * *(int *)(param_1 + 8) + iVar27 + *(int *)(param_1 + 4));
    iVar24 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    iVar11 = iVar25;
    if (((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar13) {
      iVar11 = *(int *)(param_1 + 0x38) + iVar25;
    }
    uVar12 = *param_3;
    local_24 = (char)uVar12;
    bStack_23 = (byte)(uVar12 >> 8);
    bStack_22 = (byte)(uVar12 >> 0x10);
    param_2 = *(uint *)(param_1 + 0x40);
    iVar24 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar18 = *(uint *)(iVar25 + iVar24 * 4);
    uVar32 = *(uint *)(iVar11 + iVar24 * 4);
    iVar24 = (uVar23 + iVar24) * 4;
    uVar37 = param_2 & 0x80003fff;
    uVar3 = *(uint *)(iVar24 + iVar25);
    uVar4 = *(uint *)(iVar24 + iVar11);
    if ((int)uVar37 < 0) {
      uVar37 = (uVar37 - 1 | 0xffffc000) + 1;
    }
    uVar29 = uVar34 & 0x80003fff;
    if ((int)uVar29 < 0) {
      uVar29 = (uVar29 - 1 | 0xffffc000) + 1;
    }
    iVar24 = (0x4000 - uVar37) * (0x4000 - uVar29);
    iVar13 = uVar37 * (0x4000 - uVar29);
    iVar14 = uVar29 * (0x4000 - uVar37);
    iVar30 = (int)(((int)(uVar29 * uVar37) >> 0x1f & 0x3fffU) + uVar29 * uVar37) >> 0xe;
    iVar33 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar36 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar13 = (uVar4 & 0xff) * iVar30 + (uVar32 & 0xff) * iVar33 + (uVar3 & 0xff) * iVar36 +
             (uVar18 & 0xff) * iVar24;
    iVar14 = (uVar4 >> 8 & 0xff) * iVar30 + (uVar32 >> 8 & 0xff) * iVar33 +
             (uVar3 >> 8 & 0xff) * iVar36 + (uVar18 >> 8 & 0xff) * iVar24;
    iVar15 = (uVar4 >> 0x10 & 0xff) * iVar30 + (uVar32 >> 0x10 & 0xff) * iVar33 +
             (uVar3 >> 0x10 & 0xff) * iVar36 + (uVar18 >> 0x10 & 0xff) * iVar24;
    iVar24 = (uVar4 >> 0x18) * iVar30 + (uVar32 >> 0x18) * iVar33 + (uVar3 >> 0x18) * iVar36 +
             (uVar18 >> 0x18) * iVar24;
    iVar24 = ((((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * (uVar12 >> 0x18)) /
             0xff) * ((uint)((longlong)iVar10 * (longlong)local_18) >> 0xe |
                     (int)((ulonglong)((longlong)iVar10 * (longlong)local_18) >> 0x20) << 0x12);
    iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
    if (iVar24 == 0) {
      local_6c = uVar12 & 0xff;
    }
    else {
      uVar18 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
      local_6c = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_6c = 0xff;
      }
    }
    iVar30 = (int)(short)iVar24;
    iVar13 = (local_6c - (uVar12 & 0xff)) * iVar30;
    if (iVar24 == 0) {
      local_64 = (uint)bStack_23;
    }
    else {
      uVar18 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
      local_64 = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_64 = 0xff;
      }
    }
    iVar14 = (local_64 - (uVar12 >> 8 & 0xff)) * iVar30;
    if (iVar24 == 0) {
      local_5c = (uint)bStack_22;
    }
    else {
      uVar18 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar24;
      local_5c = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_5c = 0xff;
      }
    }
    iVar30 = (local_5c - (uVar12 >> 0x10 & 0xff)) * iVar30;
    iVar24 = iVar24 + (uVar12 >> 0x18);
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
                        CONCAT12(bStack_22 + (char)(iVar30 + (iVar30 >> 0x1f & 0xffU) >> 8),
                                 CONCAT11(bStack_23 + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8)
                                          ,local_24 + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8)
                                         )));
    param_3 = param_3 + 1;
    if (iVar28 + 1 < iVar21 + -1) {
      local_28 = (iVar21 + -1) - (iVar28 + 1);
      do {
        uVar12 = *param_3;
        local_c = (char)uVar12;
        bStack_b = (byte)(uVar12 >> 8);
        bStack_a = (byte)(uVar12 >> 0x10);
        uVar37 = uVar12 >> 0x18;
        iVar24 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar31 = param_2 & 0x80003fff;
        uVar18 = *(uint *)(iVar25 + iVar24 * 4);
        uVar32 = *(uint *)(iVar25 + 4 + iVar24 * 4);
        uVar3 = *(uint *)(iVar11 + iVar24 * 4);
        uVar4 = *(uint *)(iVar11 + 4 + iVar24 * 4);
        if ((int)uVar31 < 0) {
          uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
        }
        iVar24 = (0x4000 - uVar31) * (0x4000 - uVar29);
        iVar13 = uVar31 * (0x4000 - uVar29);
        iVar14 = (0x4000 - uVar31) * uVar29;
        iVar30 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar14 = (int)(uVar29 * uVar31 + ((int)(uVar29 * uVar31) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar13 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar24 = (uVar4 & 0xff) * iVar14 + (uVar3 & 0xff) * iVar30 + (uVar32 & 0xff) * iVar15 +
                 (uVar18 & 0xff) * iVar13;
        uVar31 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar24 = (uVar4 >> 8 & 0xff) * iVar14 + (uVar3 >> 8 & 0xff) * iVar30 +
                 (uVar32 >> 8 & 0xff) * iVar15 + (uVar18 >> 8 & 0xff) * iVar13;
        uVar16 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar24 = (uVar4 >> 0x10 & 0xff) * iVar14 + (uVar3 >> 0x10 & 0xff) * iVar30 +
                 (uVar32 >> 0x10 & 0xff) * iVar15 + (uVar18 >> 0x10 & 0xff) * iVar13;
        uVar17 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar24 = (uVar4 >> 0x18) * iVar14 + (uVar3 >> 0x18) * iVar30 + (uVar32 >> 0x18) * iVar15 +
                 (uVar18 >> 0x18) * iVar13;
        uVar18 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar10 == 0x4000) {
          uVar18 = ((uVar18 & 0xff) * uVar37) / 0xff;
          if (uVar18 == 0) {
            local_50 = uVar12 & 0xff;
          }
          else {
            uVar32 = ((uVar31 & 0xff) * 0xff) / uVar18;
            local_50 = uVar32 & 0xff;
            if (0xfe < uVar32) {
              local_50 = 0xff;
            }
          }
          iVar13 = (int)(short)uVar18;
          iVar24 = (local_50 - (uVar12 & 0xff)) * iVar13;
          local_c = local_c + (char)(iVar24 + (iVar24 >> 0x1f & 0xffU) >> 8);
          if (uVar18 == 0) {
            local_38 = (uint)bStack_b;
          }
          else {
            uVar32 = ((uVar16 & 0xff) * 0xff) / uVar18;
            local_38 = uVar32 & 0xff;
            if (0xfe < uVar32) {
              local_38 = 0xff;
            }
          }
          iVar24 = (local_38 - (uVar12 >> 8 & 0xff)) * iVar13;
          bStack_b = bStack_b + (char)(iVar24 + (iVar24 >> 0x1f & 0xffU) >> 8);
          if (uVar18 == 0) {
            local_34 = (uint)bStack_a;
          }
          else {
            uVar32 = ((uVar17 & 0xff) * 0xff) / uVar18;
            local_34 = uVar32 & 0xff;
            if (0xfe < uVar32) {
              local_34 = 0xff;
            }
          }
          iVar13 = (local_34 - (uVar12 >> 0x10 & 0xff)) * iVar13;
          bStack_a = bStack_a + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          uVar18 = uVar18 + uVar37;
          if ((int)uVar18 < 0) {
            uStack_9 = 0;
          }
          else if (uVar18 < 0x100) {
LAB_010d9f84:
            uStack_9 = (undefined1)uVar18;
          }
          else {
            uStack_9 = 0xff;
          }
        }
        else {
          iVar24 = (((uVar18 & 0xff) * uVar37) / 0xff) * iVar10;
          iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar24 == 0) {
            local_b8 = uVar12 & 0xff;
          }
          else {
            uVar18 = (int)((uVar31 & 0xff) * 0xff) / iVar24;
            local_b8 = uVar18 & 0xff;
            if (0xfe < (int)uVar18) {
              local_b8 = 0xff;
            }
          }
          iVar14 = (int)(short)iVar24;
          iVar13 = (local_b8 - (uVar12 & 0xff)) * iVar14;
          local_c = local_c + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          if (iVar24 == 0) {
            local_c0 = (uint)bStack_b;
          }
          else {
            uVar18 = (int)((uVar16 & 0xff) * 0xff) / iVar24;
            local_c0 = uVar18 & 0xff;
            if (0xfe < (int)uVar18) {
              local_c0 = 0xff;
            }
          }
          iVar13 = (local_c0 - (uVar12 >> 8 & 0xff)) * iVar14;
          bStack_b = bStack_b + (char)(iVar13 + (iVar13 >> 0x1f & 0xffU) >> 8);
          if (iVar24 == 0) {
            local_c4 = (uint)bStack_a;
          }
          else {
            uVar18 = (int)((uVar17 & 0xff) * 0xff) / iVar24;
            local_c4 = uVar18 & 0xff;
            if (0xfe < (int)uVar18) {
              local_c4 = 0xff;
            }
          }
          iVar14 = (local_c4 - (uVar12 >> 0x10 & 0xff)) * iVar14;
          bStack_a = bStack_a + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8);
          uVar18 = iVar24 + uVar37;
          if ((int)uVar18 < 0) {
            uStack_9 = 0;
          }
          else {
            if ((int)uVar18 < 0x100) goto LAB_010d9f84;
            uStack_9 = 0xff;
          }
        }
        *param_3 = CONCAT13(uStack_9,CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar2;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    if (iVar22 != 1) {
      param_2 = param_2 & 0x80003fff;
      uVar12 = *param_3;
      local_14 = (char)uVar12;
      bStack_13 = (byte)(uVar12 >> 8);
      bStack_12 = (byte)(uVar12 >> 0x10);
      uVar18 = *(uint *)(iVar25 + -4 + iVar8 * 4);
      bStack_a9 = (byte)(uVar18 >> 0x18);
      uVar32 = *(uint *)(iVar11 + -4 + iVar8 * 4);
      bStack_109 = (byte)(uVar32 >> 0x18);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar11 = (0x4000 - param_2) * (0x4000 - uVar29);
      iVar24 = param_2 * (0x4000 - uVar29);
      iVar25 = uVar29 * (0x4000 - param_2);
      iVar15 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (int)(uVar29 * param_2 + ((int)(uVar29 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar30 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (uVar32 & 0xff) * iVar14 + (uVar32 & 0xff) * iVar15 + (uVar18 & 0xff) * iVar30 +
               (uVar18 & 0xff) * iVar11;
      iVar25 = (uVar32 >> 8 & 0xff) * iVar14 + (uVar32 >> 8 & 0xff) * iVar15 +
               (uVar18 >> 8 & 0xff) * iVar30 + (uVar18 >> 8 & 0xff) * iVar11;
      iVar13 = (uVar32 >> 0x10 & 0xff) * iVar14 + (uVar32 >> 0x10 & 0xff) * iVar15 +
               (uVar18 >> 0x10 & 0xff) * iVar30 + (uVar18 >> 0x10 & 0xff) * iVar11;
      iVar11 = (uint)bStack_109 * iVar14 + (uint)bStack_109 * iVar15 + (uint)bStack_a9 * iVar30 +
               (uint)bStack_a9 * iVar11;
      iVar11 = ((((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * (uVar12 >> 0x18)) /
               0xff) * ((uint)((longlong)iVar10 * (longlong)iVar26) >> 0xe |
                       (int)((ulonglong)((longlong)iVar10 * (longlong)iVar26) >> 0x20) << 0x12);
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar11 == 0) {
        local_88 = uVar12 & 0xff;
      }
      else {
        uVar18 = (int)(((int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_88 = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_88 = 0xff;
        }
      }
      iVar14 = (int)(short)iVar11;
      iVar24 = (local_88 - (uVar12 & 0xff)) * iVar14;
      if (iVar11 == 0) {
        local_90 = (uint)bStack_13;
      }
      else {
        uVar18 = (int)(((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_90 = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_90 = 0xff;
        }
      }
      iVar25 = (local_90 - (uVar12 >> 8 & 0xff)) * iVar14;
      if (iVar11 == 0) {
        local_48 = (uint)bStack_12;
      }
      else {
        uVar18 = (int)(((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar11;
        local_48 = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_48 = 0xff;
        }
      }
      iVar14 = (local_48 - (uVar12 >> 0x10 & 0xff)) * iVar14;
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
                                            (char)(iVar25 + (iVar25 >> 0x1f & 0xffU) >> 8),
                                            local_14 +
                                            (char)(iVar24 + (iVar24 >> 0x1f & 0xffU) >> 8))));
    }
    uVar34 = uVar34 + iVar19;
    iVar6 = iVar6 + 1;
  } while( true );
}


