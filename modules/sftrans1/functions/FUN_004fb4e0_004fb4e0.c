/* Module: sftrans1.dll
   Function: FUN_004fb4e0
   Address: 004fb4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004fc223) */

void FUN_004fb4e0(uint param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  byte bStack_109;
  uint local_c4;
  uint local_c0;
  uint local_b8;
  byte bStack_a9;
  uint local_90;
  uint local_8c;
  int local_78;
  uint local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_30;
  uint local_2c;
  int local_28;
  char local_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  int local_1c;
  uint local_18;
  char local_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;
  char local_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  iVar19 = *(int *)(param_1 + 0x18);
  iVar30 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (iVar19 - 1U | 0x3fff) + 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar22 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar36 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (iVar1 - 1U | 0x3fff) + 1;
  iVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar9 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar10 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = iVar36 + 1;
  local_4c = iVar7 * 0x4000 - *(int *)(param_1 + 0x14);
  local_1c = (iVar30 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar28 = iVar19 + iVar22 * -0x4000 + 0x4000;
  iVar23 = iVar22 - iVar30;
  if (iVar23 < 2) {
    local_1c = iVar19 - *(int *)(param_1 + 0x10);
  }
  if (iVar8 - iVar36 < 2) {
    local_4c = iVar1 - *(int *)(param_1 + 0x14);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar19 = *(int *)(param_1 + 100);
  uVar35 = *(uint *)(param_1 + 0x44);
  iVar11 = ftol();
  uVar24 = (uint)(iVar23 != 1);
  iVar12 = (int)(uVar35 + ((int)uVar35 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar25 = *(int *)(param_1 + 0x38) * iVar12 + *(int *)(param_1 + 0x34);
  iVar29 = iVar30 * (int)param_3;
  param_3 = (uint *)(iVar36 * *(int *)(param_1 + 8) + iVar29 + *(int *)(param_1 + 4));
  local_78 = iVar25;
  if (iVar10 + -1 != iVar12) {
    local_78 = *(int *)(param_1 + 0x38) + iVar25;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar30 < iVar22) {
    uVar13 = uVar35 & 0x80003fff;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xffffc000) + 1;
    }
    iVar12 = iVar30;
    do {
      uVar18 = *param_3;
      local_c = (char)uVar18;
      bStack_b = (byte)(uVar18 >> 8);
      bStack_a = (byte)(uVar18 >> 0x10);
      bStack_9 = (byte)(uVar18 >> 0x18);
      local_2c = (uint)((longlong)iVar11 * (longlong)(int)local_4c) >> 0xe |
                 (int)((ulonglong)((longlong)iVar11 * (longlong)(int)local_4c) >> 0x20) << 0x12;
      uVar33 = 1;
      iVar26 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar12 == iVar30) {
        local_2c = (uint)((longlong)(int)local_2c * (longlong)local_1c) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_2c * (longlong)local_1c) >> 0x20) << 0x12;
        uVar33 = uVar24;
      }
      else if (iVar12 == iVar22 + -1) {
        local_2c = (uint)((longlong)(int)local_2c * (longlong)iVar28) >> 0xe |
                   (int)((ulonglong)((longlong)(int)local_2c * (longlong)iVar28) >> 0x20) << 0x12;
        uVar33 = 0;
        iVar26 = iVar9 + -1;
      }
      uVar3 = *(uint *)(iVar25 + iVar26 * 4);
      iVar14 = (iVar26 + uVar33) * 4;
      uVar31 = param_2 & 0x80003fff;
      uVar33 = *(uint *)(iVar14 + iVar25);
      uVar4 = *(uint *)(local_78 + iVar26 * 4);
      uVar38 = *(uint *)(iVar14 + local_78);
      if ((int)uVar31 < 0) {
        uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
      }
      iVar26 = (0x4000 - uVar13) * (0x4000 - uVar31);
      iVar14 = (0x4000 - uVar13) * uVar31;
      iVar15 = (0x4000 - uVar31) * uVar13;
      iVar37 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar32 = (int)(uVar13 * uVar31 + ((int)(uVar13 * uVar31) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar34 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar27 = (int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar26 = (uVar38 & 0xff) * iVar32 + (uVar4 & 0xff) * iVar37 + (uVar33 & 0xff) * iVar34 +
               (uVar3 & 0xff) * iVar27;
      iVar14 = (uVar38 >> 8 & 0xff) * iVar32 + (uVar4 >> 8 & 0xff) * iVar37 +
               (uVar33 >> 8 & 0xff) * iVar34 + (uVar3 >> 8 & 0xff) * iVar27;
      iVar15 = (uVar38 >> 0x10 & 0xff) * iVar32 + (uVar4 >> 0x10 & 0xff) * iVar37 +
               (uVar33 >> 0x10 & 0xff) * iVar34 + (uVar3 >> 0x10 & 0xff) * iVar27;
      iVar27 = (uVar38 >> 0x18) * iVar32 + (uVar4 >> 0x18) * iVar37 + (uVar33 >> 0x18) * iVar34 +
               (uVar3 >> 0x18) * iVar27;
      uVar33 = (int)(iVar27 + (iVar27 >> 0x1f & 0x3fffU)) >> 0xe;
      if (bStack_9 <= (byte)uVar33) {
        uVar33 = (uint)bStack_9;
      }
      iVar27 = (uVar33 & 0xff) * local_2c;
      iVar27 = (int)(iVar27 + (iVar27 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar27 == 0) {
        local_70 = uVar18 & 0xff;
      }
      else {
        uVar33 = (int)(((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar27;
        local_70 = uVar33 & 0xff;
        if (0xfe < (int)uVar33) {
          local_70 = 0xff;
        }
      }
      iVar32 = (int)(short)iVar27;
      iVar26 = (local_70 - (uVar18 & 0xff)) * iVar32;
      if (iVar27 == 0) {
        local_5c = (uint)bStack_b;
      }
      else {
        uVar33 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar27;
        local_5c = uVar33 & 0xff;
        if (0xfe < (int)uVar33) {
          local_5c = 0xff;
        }
      }
      iVar14 = (local_5c - (uVar18 >> 8 & 0xff)) * iVar32;
      if (iVar27 == 0) {
        local_58 = (uint)bStack_a;
      }
      else {
        uVar33 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar27;
        local_58 = uVar33 & 0xff;
        if (0xfe < (int)uVar33) {
          local_58 = 0xff;
        }
      }
      iVar32 = (local_58 - (uVar18 >> 0x10 & 0xff)) * iVar32;
      iVar27 = (uint)bStack_9 + iVar27;
      if (iVar27 < 0) {
        bStack_9 = 0;
      }
      else {
        bStack_9 = 0xff;
        if (iVar27 < 0x100) {
          bStack_9 = (byte)iVar27;
        }
      }
      *param_3 = CONCAT13(bStack_9,CONCAT12(bStack_a +
                                            (char)(iVar32 + (iVar32 >> 0x1f & 0xffU) >> 8),
                                            CONCAT11(bStack_b +
                                                     (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8),
                                                     local_c + (char)(iVar26 + (iVar26 >> 0x1f &
                                                                               0xffU) >> 8))));
      param_3 = param_3 + 1;
      uVar18 = uVar2;
      if (iVar12 == iVar30) {
        uVar18 = (uint)((longlong)(int)uVar2 * (longlong)local_1c) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_1c) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar18;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar22);
  }
  lVar5 = (longlong)iVar19 * (longlong)(int)local_4c;
  uVar35 = uVar35 + ((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12);
  do {
    if (iVar8 + -1 <= iVar7) {
      if (iVar8 - iVar36 != 1) {
        iVar19 = (iVar10 + -1) * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
        puVar20 = (uint *)((iVar8 + -1) * *(int *)(param_1 + 8) + iVar29 + *(int *)(param_1 + 4));
        param_2 = *(uint *)(param_1 + 0x40);
        for (iVar7 = iVar30; iVar7 < iVar22; iVar7 = iVar7 + 1) {
          uVar35 = *puVar20;
          local_14 = (char)uVar35;
          bStack_13 = (byte)(uVar35 >> 8);
          bStack_12 = (byte)(uVar35 >> 0x10);
          bStack_11 = (byte)(uVar35 >> 0x18);
          lVar5 = (longlong)iVar11 * (longlong)(iVar1 + iVar8 * -0x4000 + 0x4000);
          param_1 = (uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12;
          uVar13 = 1;
          iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar7 == iVar30) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)local_1c) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)local_1c) >> 0x20) <<
                      0x12;
            uVar13 = uVar24;
          }
          else if (iVar7 == iVar22 + -1) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)iVar28) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)iVar28) >> 0x20) << 0x12;
            iVar10 = iVar9 + -1;
            uVar13 = 0;
          }
          uVar18 = *(uint *)(iVar19 + iVar10 * 4);
          uVar13 = *(uint *)(iVar19 + (iVar10 + uVar13) * 4);
          uVar33 = param_2 & 0x80003fff;
          if ((int)uVar33 < 0) {
            uVar33 = (uVar33 - 1 | 0xffffc000) + 1;
          }
          iVar10 = (0x4000 - uVar33) * 0x4000;
          iVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar25 = (int)(uVar33 * 0x4000 + ((int)(uVar33 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar10 = (uVar13 & 0xff) * iVar25 + (uVar18 & 0xff) * iVar12;
          iVar23 = (uVar13 >> 8 & 0xff) * iVar25 + (uVar18 >> 8 & 0xff) * iVar12;
          iVar36 = (uVar13 >> 0x10 & 0xff) * iVar25 + (uVar18 >> 0x10 & 0xff) * iVar12;
          iVar12 = (uVar13 >> 0x18) * iVar25 + (uVar18 >> 0x18) * iVar12;
          uVar13 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
          if (bStack_11 <= (byte)uVar13) {
            uVar13 = (uint)bStack_11;
          }
          iVar12 = (uVar13 & 0xff) * param_1;
          iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar12 == 0) {
            local_18 = uVar35 & 0xff;
          }
          else {
            uVar13 = (int)(((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar12;
            local_18 = uVar13 & 0xff;
            if (0xfe < (int)uVar13) {
              local_18 = 0xff;
            }
          }
          iVar25 = (int)(short)iVar12;
          iVar10 = (local_18 - (uVar35 & 0xff)) * iVar25;
          if (iVar12 == 0) {
            local_60 = (uint)bStack_13;
          }
          else {
            uVar13 = (int)(((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar12;
            local_60 = uVar13 & 0xff;
            if (0xfe < (int)uVar13) {
              local_60 = 0xff;
            }
          }
          iVar23 = (local_60 - (uVar35 >> 8 & 0xff)) * iVar25;
          if (iVar12 == 0) {
            local_40 = (uint)bStack_12;
          }
          else {
            uVar13 = (int)(((int)(iVar36 + (iVar36 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) /
                     iVar12;
            local_40 = uVar13 & 0xff;
            if (0xfe < (int)uVar13) {
              local_40 = 0xff;
            }
          }
          iVar25 = (local_40 - (uVar35 >> 0x10 & 0xff)) * iVar25;
          iVar12 = iVar12 + (uint)bStack_11;
          if (iVar12 < 0) {
            bStack_11 = 0;
          }
          else {
            bStack_11 = 0xff;
            if (iVar12 < 0x100) {
              bStack_11 = (byte)iVar12;
            }
          }
          *puVar20 = CONCAT13(bStack_11,
                              CONCAT12(bStack_12 + (char)(iVar25 + (iVar25 >> 0x1f & 0xffU) >> 8),
                                       CONCAT11(bStack_13 +
                                                (char)(iVar23 + (iVar23 >> 0x1f & 0xffU) >> 8),
                                                local_14 +
                                                (char)(iVar10 + (iVar10 >> 0x1f & 0xffU) >> 8))));
          puVar20 = puVar20 + 1;
          uVar35 = uVar2;
          if (iVar7 == iVar30) {
            uVar35 = (uint)((longlong)(int)uVar2 * (longlong)local_1c) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_1c) >> 0x20) << 0x12;
          }
          param_2 = param_2 + uVar35;
        }
      }
      return;
    }
    iVar14 = (int)(uVar35 + ((int)uVar35 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar26 = *(int *)(param_1 + 0x38) * iVar14 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar7 * *(int *)(param_1 + 8) + iVar29 + *(int *)(param_1 + 4));
    iVar25 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    iVar12 = iVar26;
    if (((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar14) {
      iVar12 = *(int *)(param_1 + 0x38) + iVar26;
    }
    uVar13 = *param_3;
    local_24 = (char)uVar13;
    bStack_23 = (byte)(uVar13 >> 8);
    bStack_22 = (byte)(uVar13 >> 0x10);
    bStack_21 = (byte)(uVar13 >> 0x18);
    param_2 = *(uint *)(param_1 + 0x40);
    iVar25 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar18 = *(uint *)(iVar26 + iVar25 * 4);
    uVar33 = *(uint *)(iVar12 + iVar25 * 4);
    iVar25 = (uVar24 + iVar25) * 4;
    uVar38 = param_2 & 0x80003fff;
    uVar3 = *(uint *)(iVar25 + iVar26);
    uVar4 = *(uint *)(iVar25 + iVar12);
    if ((int)uVar38 < 0) {
      uVar38 = (uVar38 - 1 | 0xffffc000) + 1;
    }
    uVar31 = uVar35 & 0x80003fff;
    if ((int)uVar31 < 0) {
      uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
    }
    iVar25 = (0x4000 - uVar38) * (0x4000 - uVar31);
    iVar14 = uVar38 * (0x4000 - uVar31);
    iVar15 = uVar31 * (0x4000 - uVar38);
    iVar27 = (int)(((int)(uVar31 * uVar38) >> 0x1f & 0x3fffU) + uVar31 * uVar38) >> 0xe;
    iVar32 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar37 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar34 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar25 = (uVar4 & 0xff) * iVar27 + (uVar33 & 0xff) * iVar32 + (uVar3 & 0xff) * iVar37 +
             (uVar18 & 0xff) * iVar34;
    iVar14 = (uVar4 >> 8 & 0xff) * iVar27 + (uVar33 >> 8 & 0xff) * iVar32 +
             (uVar3 >> 8 & 0xff) * iVar37 + (uVar18 >> 8 & 0xff) * iVar34;
    iVar15 = (uVar4 >> 0x10 & 0xff) * iVar27 + (uVar33 >> 0x10 & 0xff) * iVar32 +
             (uVar3 >> 0x10 & 0xff) * iVar37 + (uVar18 >> 0x10 & 0xff) * iVar34;
    iVar27 = (uVar4 >> 0x18) * iVar27 + (uVar33 >> 0x18) * iVar32 + (uVar3 >> 0x18) * iVar37 +
             (uVar18 >> 0x18) * iVar34;
    bVar21 = (byte)((int)(iVar27 + (iVar27 >> 0x1f & 0x3fffU)) >> 0xe);
    bVar6 = bStack_21;
    if (bVar21 < bStack_21) {
      bVar6 = bVar21;
    }
    iVar27 = (uint)bVar6 *
             ((uint)((longlong)iVar11 * (longlong)local_1c) >> 0xe |
             (int)((ulonglong)((longlong)iVar11 * (longlong)local_1c) >> 0x20) << 0x12);
    iVar27 = (int)(iVar27 + (iVar27 >> 0x1f & 0x3fffU)) >> 0xe;
    if (iVar27 == 0) {
      local_58 = uVar13 & 0xff;
    }
    else {
      uVar18 = (int)(((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar27;
      local_58 = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_58 = 0xff;
      }
    }
    iVar32 = (int)(short)iVar27;
    iVar25 = (local_58 - (uVar13 & 0xff)) * iVar32;
    if (iVar27 == 0) {
      local_5c = (uint)bStack_23;
    }
    else {
      uVar18 = (int)(((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar27;
      local_5c = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_5c = 0xff;
      }
    }
    iVar14 = (local_5c - (uVar13 >> 8 & 0xff)) * iVar32;
    if (iVar27 == 0) {
      local_70 = (uint)bStack_22;
    }
    else {
      uVar18 = (int)(((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar27;
      local_70 = uVar18 & 0xff;
      if (0xfe < (int)uVar18) {
        local_70 = 0xff;
      }
    }
    iVar32 = (local_70 - (uVar13 >> 0x10 & 0xff)) * iVar32;
    iVar27 = (uint)bStack_21 + iVar27;
    if (iVar27 < 0) {
      bStack_21 = 0;
    }
    else {
      bStack_21 = 0xff;
      if (iVar27 < 0x100) {
        bStack_21 = (byte)iVar27;
      }
    }
    param_2 = param_2 + ((uint)((longlong)(int)uVar2 * (longlong)local_1c) >> 0xe |
                        (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_1c) >> 0x20) <<
                        0x12);
    *param_3 = CONCAT13(bStack_21,
                        CONCAT12(bStack_22 + (char)(iVar32 + (iVar32 >> 0x1f & 0xffU) >> 8),
                                 CONCAT11(bStack_23 + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8)
                                          ,local_24 + (char)(iVar25 + (iVar25 >> 0x1f & 0xffU) >> 8)
                                         )));
    param_3 = param_3 + 1;
    if (iVar30 + 1 < iVar22 + -1) {
      local_28 = (iVar22 + -1) - (iVar30 + 1);
      do {
        uVar13 = *param_3;
        local_c = (char)uVar13;
        bStack_b = (byte)(uVar13 >> 8);
        bStack_a = (byte)(uVar13 >> 0x10);
        bStack_9 = (byte)(uVar13 >> 0x18);
        iVar25 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar38 = param_2 & 0x80003fff;
        uVar18 = *(uint *)(iVar26 + iVar25 * 4);
        uVar33 = *(uint *)(iVar26 + 4 + iVar25 * 4);
        uVar3 = *(uint *)(iVar12 + iVar25 * 4);
        uVar4 = *(uint *)(iVar12 + 4 + iVar25 * 4);
        if ((int)uVar38 < 0) {
          uVar38 = (uVar38 - 1 | 0xffffc000) + 1;
        }
        iVar25 = (0x4000 - uVar38) * (0x4000 - uVar31);
        iVar14 = uVar38 * (0x4000 - uVar31);
        iVar15 = (0x4000 - uVar38) * uVar31;
        iVar32 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = (int)(uVar31 * uVar38 + ((int)(uVar31 * uVar38) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar27 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar14 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar25 = (uVar4 & 0xff) * iVar15 + (uVar3 & 0xff) * iVar32 + (uVar33 & 0xff) * iVar27 +
                 (uVar18 & 0xff) * iVar14;
        uVar38 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar25 = (uVar4 >> 8 & 0xff) * iVar15 + (uVar3 >> 8 & 0xff) * iVar32 +
                 (uVar33 >> 8 & 0xff) * iVar27 + (uVar18 >> 8 & 0xff) * iVar14;
        uVar16 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar25 = (uVar4 >> 0x10 & 0xff) * iVar15 + (uVar3 >> 0x10 & 0xff) * iVar32 +
                 (uVar33 >> 0x10 & 0xff) * iVar27 + (uVar18 >> 0x10 & 0xff) * iVar14;
        uVar17 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar25 = (uVar4 >> 0x18) * iVar15 + (uVar3 >> 0x18) * iVar32 + (uVar33 >> 0x18) * iVar27 +
                 (uVar18 >> 0x18) * iVar14;
        uVar18 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar11 == 0x4000) {
          if (bStack_9 <= (byte)uVar18) {
            uVar18 = (uint)bStack_9;
          }
          uVar18 = uVar18 & 0xff;
          if (uVar18 == 0) {
            local_4c = uVar13 & 0xff;
          }
          else {
            uVar33 = ((uVar38 & 0xff) * 0xff) / uVar18;
            local_4c = uVar33 & 0xff;
            if (0xfe < uVar33) {
              local_4c = 0xff;
            }
          }
          iVar14 = (int)(short)uVar18;
          iVar25 = (local_4c - (uVar13 & 0xff)) * iVar14;
          local_c = local_c + (char)(iVar25 + (iVar25 >> 0x1f & 0xffU) >> 8);
          if (uVar18 == 0) {
            local_30 = (uint)bStack_b;
          }
          else {
            uVar33 = ((uVar16 & 0xff) * 0xff) / uVar18;
            local_30 = uVar33 & 0xff;
            if (0xfe < uVar33) {
              local_30 = 0xff;
            }
          }
          iVar25 = (local_30 - (uVar13 >> 8 & 0xff)) * iVar14;
          bStack_b = bStack_b + (char)(iVar25 + (iVar25 >> 0x1f & 0xffU) >> 8);
          if (uVar18 == 0) {
            local_2c = (uint)bStack_a;
          }
          else {
            uVar33 = ((uVar17 & 0xff) * 0xff) / uVar18;
            local_2c = uVar33 & 0xff;
            if (0xfe < uVar33) {
              local_2c = 0xff;
            }
          }
          iVar14 = (local_2c - (uVar13 >> 0x10 & 0xff)) * iVar14;
          bStack_a = bStack_a + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8);
          uVar18 = bStack_9 + uVar18;
          if (uVar18 < 0x100) {
LAB_004fc3a8:
            bStack_9 = (byte)uVar18;
          }
          else {
            bStack_9 = 0xff;
          }
        }
        else {
          if (bStack_9 <= (byte)uVar18) {
            uVar18 = (uint)bStack_9;
          }
          iVar25 = (uVar18 & 0xff) * iVar11;
          iVar25 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar25 == 0) {
            local_c4 = uVar13 & 0xff;
          }
          else {
            uVar18 = (int)((uVar38 & 0xff) * 0xff) / iVar25;
            local_c4 = uVar18 & 0xff;
            if (0xfe < (int)uVar18) {
              local_c4 = 0xff;
            }
          }
          iVar15 = (int)(short)iVar25;
          iVar14 = (local_c4 - (uVar13 & 0xff)) * iVar15;
          local_c = local_c + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8);
          if (iVar25 == 0) {
            local_b8 = (uint)bStack_b;
          }
          else {
            uVar18 = (int)((uVar16 & 0xff) * 0xff) / iVar25;
            local_b8 = uVar18 & 0xff;
            if (0xfe < (int)uVar18) {
              local_b8 = 0xff;
            }
          }
          iVar14 = (local_b8 - (uVar13 >> 8 & 0xff)) * iVar15;
          bStack_b = bStack_b + (char)(iVar14 + (iVar14 >> 0x1f & 0xffU) >> 8);
          if (iVar25 == 0) {
            local_c0 = (uint)bStack_a;
          }
          else {
            uVar18 = (int)((uVar17 & 0xff) * 0xff) / iVar25;
            local_c0 = uVar18 & 0xff;
            if (0xfe < (int)uVar18) {
              local_c0 = 0xff;
            }
          }
          iVar15 = (local_c0 - (uVar13 >> 0x10 & 0xff)) * iVar15;
          bStack_a = bStack_a + (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8);
          uVar18 = (uint)bStack_9 + iVar25;
          if ((int)uVar18 < 0) {
            bStack_9 = 0;
          }
          else {
            if ((int)uVar18 < 0x100) goto LAB_004fc3a8;
            bStack_9 = 0xff;
          }
        }
        *param_3 = CONCAT13(bStack_9,CONCAT12(bStack_a,CONCAT11(bStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar2;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    if (iVar23 != 1) {
      param_2 = param_2 & 0x80003fff;
      uVar13 = *param_3;
      local_14 = (char)uVar13;
      bStack_13 = (byte)(uVar13 >> 8);
      bStack_12 = (byte)(uVar13 >> 0x10);
      bStack_11 = (byte)(uVar13 >> 0x18);
      uVar18 = *(uint *)(iVar26 + -4 + iVar9 * 4);
      bStack_a9 = (byte)(uVar18 >> 0x18);
      uVar33 = *(uint *)(iVar12 + -4 + iVar9 * 4);
      bStack_109 = (byte)(uVar33 >> 0x18);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar12 = (0x4000 - param_2) * (0x4000 - uVar31);
      iVar25 = param_2 * (0x4000 - uVar31);
      iVar26 = uVar31 * (0x4000 - param_2);
      iVar15 = (int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (int)(uVar31 * param_2 + ((int)(uVar31 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar32 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar27 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = (uVar33 & 0xff) * iVar14 + (uVar33 & 0xff) * iVar15 + (uVar18 & 0xff) * iVar32 +
               (uVar18 & 0xff) * iVar27;
      iVar25 = (uVar33 >> 8 & 0xff) * iVar14 + (uVar33 >> 8 & 0xff) * iVar15 +
               (uVar18 >> 8 & 0xff) * iVar32 + (uVar18 >> 8 & 0xff) * iVar27;
      iVar26 = (uVar33 >> 0x10 & 0xff) * iVar14 + (uVar33 >> 0x10 & 0xff) * iVar15 +
               (uVar18 >> 0x10 & 0xff) * iVar32 + (uVar18 >> 0x10 & 0xff) * iVar27;
      iVar14 = (uint)bStack_109 * iVar14 + (uint)bStack_109 * iVar15 + (uint)bStack_a9 * iVar32 +
               (uint)bStack_a9 * iVar27;
      bVar21 = (byte)((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe);
      bVar6 = bStack_11;
      if (bVar21 < bStack_11) {
        bVar6 = bVar21;
      }
      iVar14 = (uint)bVar6 *
               ((uint)((longlong)iVar11 * (longlong)iVar28) >> 0xe |
               (int)((ulonglong)((longlong)iVar11 * (longlong)iVar28) >> 0x20) << 0x12);
      iVar14 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar14 == 0) {
        local_90 = uVar13 & 0xff;
      }
      else {
        uVar18 = (int)(((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar14;
        local_90 = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_90 = 0xff;
        }
      }
      iVar15 = (int)(short)iVar14;
      iVar12 = (local_90 - (uVar13 & 0xff)) * iVar15;
      if (iVar14 == 0) {
        local_8c = (uint)bStack_13;
      }
      else {
        uVar18 = (int)(((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar14;
        local_8c = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_8c = 0xff;
        }
      }
      iVar25 = (local_8c - (uVar13 >> 8 & 0xff)) * iVar15;
      if (iVar14 == 0) {
        local_40 = (uint)bStack_12;
      }
      else {
        uVar18 = (int)(((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * 0xff) / iVar14;
        local_40 = uVar18 & 0xff;
        if (0xfe < (int)uVar18) {
          local_40 = 0xff;
        }
      }
      iVar15 = (local_40 - (uVar13 >> 0x10 & 0xff)) * iVar15;
      iVar14 = (uint)bStack_11 + iVar14;
      if (iVar14 < 0) {
        bStack_11 = 0;
      }
      else {
        bStack_11 = 0xff;
        if (iVar14 < 0x100) {
          bStack_11 = (byte)iVar14;
        }
      }
      *param_3 = CONCAT13(bStack_11,
                          CONCAT12(bStack_12 + (char)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8),
                                   CONCAT11(bStack_13 +
                                            (char)(iVar25 + (iVar25 >> 0x1f & 0xffU) >> 8),
                                            local_14 +
                                            (char)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8))));
    }
    uVar35 = uVar35 + iVar19;
    iVar7 = iVar7 + 1;
  } while( true );
}


