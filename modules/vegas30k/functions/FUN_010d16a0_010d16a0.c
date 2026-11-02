/* Module: vegas30k.dll
   Function: FUN_010d16a0
   Address: 010d16a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010d16a0(uint param_1,undefined4 param_2,uint *param_3)

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
  uint *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  ushort uStack_ea;
  ushort uStack_b6;
  int local_88;
  int local_50;
  int local_4c;
  int local_2c;
  int local_28;
  undefined1 local_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 local_c;
  undefined1 uStack_b;
  byte bStack_a;
  undefined1 uStack_9;
  
  iVar33 = *(int *)(param_1 + 0x18);
  iVar27 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar33 - 1U | 0x3fff) + 1;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar19 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar32 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar1 - 1U | 0x3fff) + 1;
  iVar6 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar7 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar5 = iVar32 + 1;
  local_4c = iVar5 * 0x4000 - *(int *)(param_1 + 0x14);
  local_28 = (iVar27 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar23 = iVar33 + iVar19 * -0x4000 + 0x4000;
  iVar20 = iVar19 - iVar27;
  if (iVar20 < 2) {
    local_28 = iVar33 - *(int *)(param_1 + 0x10);
  }
  if (iVar6 - iVar32 < 2) {
    local_4c = iVar1 - *(int *)(param_1 + 0x14);
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar33 = *(int *)(param_1 + 100);
  uVar25 = *(uint *)(param_1 + 0x44);
  iVar9 = ftol();
  uVar21 = (uint)(iVar20 != 1);
  iVar10 = (int)(uVar25 + ((int)uVar25 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar24 = *(int *)(param_1 + 0x38) * iVar10 + *(int *)(param_1 + 0x34);
  iVar22 = iVar27 * (int)param_3;
  param_3 = (uint *)(iVar32 * *(int *)(param_1 + 8) + iVar22 + *(int *)(param_1 + 4));
  iVar8 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe) + -1;
  local_50 = iVar24;
  if (iVar8 != iVar10) {
    local_50 = *(int *)(param_1 + 0x38) + iVar24;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar27 < iVar19) {
    uVar11 = uVar25 & 0x80003fff;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffc000) + 1;
    }
    local_2c = iVar27;
    do {
      uVar16 = *param_3;
      uStack_19 = (undefined1)(uVar16 >> 0x18);
      lVar4 = (longlong)iVar9 * (longlong)local_4c;
      uVar31 = (uint)lVar4 >> 0xe;
      iVar10 = (int)((ulonglong)lVar4 >> 0x20) << 0x12;
      bStack_a = (byte)((ulonglong)lVar4 >> 0x18) >> 6 | (byte)((uint)iVar10 >> 0x10);
      uVar30 = 1;
      local_c = (undefined1)uVar31;
      uStack_b = (undefined1)(uVar31 >> 8);
      uStack_9 = (undefined1)((uint)iVar10 >> 0x18);
      iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (local_2c == iVar27) {
        lVar4 = (longlong)CONCAT13(uStack_9,CONCAT12(bStack_a,(short)uVar31)) * (longlong)local_28;
        uVar31 = (uint)lVar4 >> 0xe;
        iVar12 = (int)((ulonglong)lVar4 >> 0x20) << 0x12;
        bStack_a = (byte)((ulonglong)lVar4 >> 0x18) >> 6 | (byte)((uint)iVar12 >> 0x10);
        local_c = (undefined1)uVar31;
        uStack_b = (undefined1)(uVar31 >> 8);
        uStack_9 = (undefined1)((uint)iVar12 >> 0x18);
        uVar30 = uVar21;
      }
      else if (local_2c == iVar19 + -1) {
        lVar4 = (longlong)CONCAT13(uStack_9,CONCAT12(bStack_a,(short)uVar31)) * (longlong)iVar23;
        uVar31 = (uint)lVar4 >> 0xe;
        iVar10 = (int)((ulonglong)lVar4 >> 0x20) << 0x12;
        bStack_a = (byte)((ulonglong)lVar4 >> 0x18) >> 6 | (byte)((uint)iVar10 >> 0x10);
        local_c = (undefined1)uVar31;
        uStack_b = (undefined1)(uVar31 >> 8);
        uStack_9 = (undefined1)((uint)iVar10 >> 0x18);
        uVar30 = 0;
        iVar10 = iVar7 + -1;
      }
      uVar31 = *(uint *)(iVar24 + iVar10 * 4);
      iVar12 = (iVar10 + uVar30) * 4;
      uVar28 = param_2 & 0x80003fff;
      uVar30 = *(uint *)(iVar12 + iVar24);
      uVar3 = *(uint *)(local_50 + iVar10 * 4);
      uVar26 = *(uint *)(iVar12 + local_50);
      if ((int)uVar28 < 0) {
        uVar28 = (uVar28 - 1 | 0xffffc000) + 1;
      }
      iVar10 = (0x4000 - uVar11) * (0x4000 - uVar28);
      iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = (0x4000 - uVar11) * uVar28;
      iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (0x4000 - uVar28) * uVar11;
      iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar29 = (int)(uVar11 * uVar28 + ((int)(uVar11 * uVar28) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (uVar26 & 0xff) * iVar29 + (uVar3 & 0xff) * iVar13 + (uVar30 & 0xff) * iVar12 +
               (uVar31 & 0xff) * iVar10;
      iVar15 = (uVar26 >> 8 & 0xff) * iVar29 + (uVar3 >> 8 & 0xff) * iVar13 +
               (uVar30 >> 8 & 0xff) * iVar12 + (uVar31 >> 8 & 0xff) * iVar10;
      iVar10 = (uVar26 >> 0x10 & 0xff) * iVar29 + (uVar3 >> 0x10 & 0xff) * iVar13 +
               (uVar30 >> 0x10 & 0xff) * iVar12 + (uVar31 >> 0x10 & 0xff) * iVar10;
      iVar12 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) *
               CONCAT13(uStack_9,CONCAT12(bStack_a,CONCAT11(uStack_b,local_c)));
      iVar12 = (uVar16 & 0xff) - ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      if (iVar12 < 0) {
        local_1c = 0;
      }
      else {
        local_1c = 0xff;
        if (iVar12 < 0x100) {
          local_1c = (undefined1)iVar12;
        }
      }
      iVar12 = CONCAT13(uStack_9,CONCAT12(bStack_a,CONCAT11(uStack_b,local_c)));
      iVar13 = ((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar12;
      iVar13 = (uVar16 >> 8 & 0xff) - ((int)((iVar13 >> 0x1f & 0x3fffU) + iVar13) >> 0xe);
      if (iVar13 < 0) {
        uStack_1b = 0;
      }
      else {
        uStack_1b = 0xff;
        if (iVar13 < 0x100) {
          uStack_1b = (undefined1)iVar13;
        }
      }
      iVar12 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar12;
      iVar10 = (uVar16 >> 0x10 & 0xff) - ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
      if (iVar10 < 0) {
        uStack_1a = 0;
      }
      else {
        uStack_1a = 0xff;
        if (iVar10 < 0x100) {
          uStack_1a = (undefined1)iVar10;
        }
      }
      *param_3 = CONCAT13(uStack_19,CONCAT12(uStack_1a,CONCAT11(uStack_1b,local_1c)));
      param_3 = param_3 + 1;
      uVar16 = uVar2;
      if (local_2c == iVar27) {
        uVar16 = (uint)((longlong)(int)uVar2 * (longlong)local_28) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_28) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar16;
      local_2c = local_2c + 1;
    } while (local_2c < iVar19);
  }
  lVar4 = (longlong)iVar33 * (longlong)local_4c;
  uVar25 = uVar25 + ((uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12);
  do {
    if (iVar6 + -1 <= iVar5) {
      if (iVar6 - iVar32 != 1) {
        iVar33 = iVar8 * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
        param_2 = *(uint *)(param_1 + 0x40);
        puVar18 = (uint *)((iVar6 + -1) * *(int *)(param_1 + 8) + iVar22 + *(int *)(param_1 + 4));
        for (iVar5 = iVar27; iVar5 < iVar19; iVar5 = iVar5 + 1) {
          uVar25 = *puVar18;
          uStack_11 = (undefined1)(uVar25 >> 0x18);
          lVar4 = (longlong)iVar9 * (longlong)(iVar1 + iVar6 * -0x4000 + 0x4000);
          param_1 = (uint)lVar4 >> 0xe | (int)((ulonglong)lVar4 >> 0x20) << 0x12;
          uVar11 = 1;
          iVar8 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar5 == iVar27) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)local_28) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)local_28) >> 0x20) <<
                      0x12;
            uVar11 = uVar21;
          }
          else if (iVar5 == iVar19 + -1) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)iVar23) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)iVar23) >> 0x20) << 0x12;
            uVar11 = 0;
            iVar8 = iVar7 + -1;
          }
          uVar16 = *(uint *)(iVar33 + iVar8 * 4);
          uVar11 = *(uint *)(iVar33 + (iVar8 + uVar11) * 4);
          uVar31 = param_2 & 0x80003fff;
          if ((int)uVar31 < 0) {
            uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
          }
          iVar8 = (0x4000 - uVar31) * 0x4000;
          iVar10 = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar32 = (int)(uVar31 * 0x4000 + ((int)(uVar31 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar8 = (uVar11 & 0xff) * iVar32 + (uVar16 & 0xff) * iVar10;
          iVar20 = (uVar11 >> 8 & 0xff) * iVar32 + (uVar16 >> 8 & 0xff) * iVar10;
          iVar32 = (uVar11 >> 0x10 & 0xff) * iVar32 + (uVar16 >> 0x10 & 0xff) * iVar10;
          iVar8 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * param_1;
          iVar8 = (uVar25 & 0xff) - ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe);
          if (iVar8 < 0) {
            local_14 = 0;
          }
          else {
            local_14 = 0xff;
            if (iVar8 < 0x100) {
              local_14 = (undefined1)iVar8;
            }
          }
          iVar8 = ((int)(iVar20 + (iVar20 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * param_1;
          iVar8 = (uVar25 >> 8 & 0xff) - ((int)((iVar8 >> 0x1f & 0x3fffU) + iVar8) >> 0xe);
          if (iVar8 < 0) {
            uStack_13 = 0;
          }
          else {
            uStack_13 = 0xff;
            if (iVar8 < 0x100) {
              uStack_13 = (undefined1)iVar8;
            }
          }
          iVar8 = ((int)(iVar32 + (iVar32 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * param_1;
          iVar8 = (uVar25 >> 0x10 & 0xff) - ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe);
          if (iVar8 < 0) {
            uStack_12 = 0;
          }
          else {
            uStack_12 = 0xff;
            if (iVar8 < 0x100) {
              uStack_12 = (undefined1)iVar8;
            }
          }
          *puVar18 = CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,local_14)));
          puVar18 = puVar18 + 1;
          uVar25 = uVar2;
          if (iVar5 == iVar27) {
            uVar25 = (uint)((longlong)(int)uVar2 * (longlong)local_28) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_28) >> 0x20) << 0x12;
          }
          param_2 = param_2 + uVar25;
        }
      }
      return;
    }
    iVar12 = (int)(uVar25 + ((int)uVar25 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar24 = *(int *)(param_1 + 0x38) * iVar12 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar5 * *(int *)(param_1 + 8) + iVar22 + *(int *)(param_1 + 4));
    iVar10 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    local_50 = iVar24;
    if (((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar12) {
      local_50 = *(int *)(param_1 + 0x38) + iVar24;
    }
    uVar11 = *param_3;
    param_2 = *(uint *)(param_1 + 0x40);
    uStack_19 = (undefined1)(uVar11 >> 0x18);
    iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar16 = *(uint *)(iVar24 + iVar10 * 4);
    uVar31 = *(uint *)(local_50 + iVar10 * 4);
    iVar10 = (uVar21 + iVar10) * 4;
    uVar30 = *(uint *)(iVar10 + iVar24);
    uVar3 = *(uint *)(iVar10 + local_50);
    uVar26 = param_2 & 0x80003fff;
    if ((int)uVar26 < 0) {
      uVar26 = (uVar26 - 1 | 0xffffc000) + 1;
    }
    uVar28 = uVar25 & 0x80003fff;
    if ((int)uVar28 < 0) {
      uVar28 = (uVar28 - 1 | 0xffffc000) + 1;
    }
    iVar10 = (0x4000 - uVar26) * (0x4000 - uVar28);
    iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar12 = (0x4000 - uVar28) * uVar26;
    iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar13 = (0x4000 - uVar26) * uVar28;
    iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar29 = (int)(((int)(uVar28 * uVar26) >> 0x1f & 0x3fffU) + uVar28 * uVar26) >> 0xe;
    iVar14 = (uVar3 & 0xff) * iVar29 + (uVar31 & 0xff) * iVar13 + (uVar30 & 0xff) * iVar12 +
             (uVar16 & 0xff) * iVar10;
    iVar15 = (uVar3 >> 8 & 0xff) * iVar29 + (uVar31 >> 8 & 0xff) * iVar13 +
             (uVar30 >> 8 & 0xff) * iVar12 + (uVar16 >> 8 & 0xff) * iVar10;
    iVar10 = (uVar3 >> 0x10 & 0xff) * iVar29 + (uVar31 >> 0x10 & 0xff) * iVar13 +
             (uVar30 >> 0x10 & 0xff) * iVar12 + (uVar16 >> 0x10 & 0xff) * iVar10;
    uVar16 = (uint)((longlong)iVar9 * (longlong)local_28) >> 0xe |
             (int)((ulonglong)((longlong)iVar9 * (longlong)local_28) >> 0x20) << 0x12;
    iVar12 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar16;
    iVar12 = (uVar11 & 0xff) - ((int)((iVar12 >> 0x1f & 0x3fffU) + iVar12) >> 0xe);
    if (iVar12 < 0) {
      local_1c = 0;
    }
    else {
      local_1c = 0xff;
      if (iVar12 < 0x100) {
        local_1c = (undefined1)iVar12;
      }
    }
    iVar12 = ((int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar16;
    iVar12 = (uVar11 >> 8 & 0xff) - ((int)((iVar12 >> 0x1f & 0x3fffU) + iVar12) >> 0xe);
    if (iVar12 < 0) {
      uStack_1b = 0;
    }
    else {
      uStack_1b = 0xff;
      if (iVar12 < 0x100) {
        uStack_1b = (undefined1)iVar12;
      }
    }
    iVar10 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar16;
    iVar10 = (uVar11 >> 0x10 & 0xff) - ((int)((iVar10 >> 0x1f & 0x3fffU) + iVar10) >> 0xe);
    if (iVar10 < 0) {
      uStack_1a = 0;
    }
    else {
      uStack_1a = 0xff;
      if (iVar10 < 0x100) {
        uStack_1a = (undefined1)iVar10;
      }
    }
    param_2 = param_2 + ((uint)((longlong)(int)uVar2 * (longlong)local_28) >> 0xe |
                        (int)((ulonglong)((longlong)(int)uVar2 * (longlong)local_28) >> 0x20) <<
                        0x12);
    *param_3 = CONCAT13(uStack_19,CONCAT12(uStack_1a,CONCAT11(uStack_1b,local_1c)));
    param_3 = param_3 + 1;
    if (iVar27 + 1 < iVar19 + -1) {
      local_88 = (iVar19 + -1) - (iVar27 + 1);
      do {
        uVar11 = *param_3;
        uStack_9 = (undefined1)(uVar11 >> 0x18);
        iVar10 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar26 = param_2 & 0x80003fff;
        uVar16 = *(uint *)(iVar24 + iVar10 * 4);
        uVar31 = *(uint *)(iVar24 + 4 + iVar10 * 4);
        uVar30 = *(uint *)(local_50 + iVar10 * 4);
        uVar3 = *(uint *)(local_50 + 4 + iVar10 * 4);
        if ((int)uVar26 < 0) {
          uVar26 = (uVar26 - 1 | 0xffffc000) + 1;
        }
        iVar10 = (0x4000 - uVar26) * (0x4000 - uVar28);
        iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar12 = uVar26 * (0x4000 - uVar28);
        iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar13 = (0x4000 - uVar26) * uVar28;
        iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar15 = (int)(uVar28 * uVar26 + ((int)(uVar28 * uVar26) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar14 = (uVar31 & 0xff) * iVar12 + (uVar16 & 0xff) * iVar10 + (uVar3 & 0xff) * iVar15 +
                 (uVar30 & 0xff) * iVar13;
        uVar26 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar14 = (uVar3 >> 8 & 0xff) * iVar15 + (uVar30 >> 8 & 0xff) * iVar13 +
                 (uVar31 >> 8 & 0xff) * iVar12 + (uVar16 >> 8 & 0xff) * iVar10;
        uVar17 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar10 = (uVar3 >> 0x10 & 0xff) * iVar15 + (uVar30 >> 0x10 & 0xff) * iVar13 +
                 (uVar31 >> 0x10 & 0xff) * iVar12 + (uVar16 >> 0x10 & 0xff) * iVar10;
        uVar16 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar9 == 0x4000) {
          iVar10 = (uVar11 & 0xff) - (uVar26 & 0xff);
          if (iVar10 < 0) {
            local_c = 0;
          }
          else {
            local_c = 0xff;
            if (iVar10 < 0x100) {
              local_c = (undefined1)iVar10;
            }
          }
          iVar10 = (uVar11 >> 8 & 0xff) - (uVar17 & 0xff);
          if (iVar10 < 0) {
            uStack_b = 0;
          }
          else {
            uStack_b = 0xff;
            if (iVar10 < 0x100) {
              uStack_b = (undefined1)iVar10;
            }
          }
          iVar10 = (uVar11 >> 0x10 & 0xff) - (uVar16 & 0xff);
          if (iVar10 < 0) {
            bStack_a = 0;
          }
          else if (iVar10 < 0x100) {
LAB_010d21f8:
            bStack_a = (byte)iVar10;
          }
          else {
            bStack_a = 0xff;
          }
        }
        else {
          iVar10 = (uVar26 & 0xff) * iVar9;
          iVar10 = (uVar11 & 0xff) - ((int)((iVar10 >> 0x1f & 0x3fffU) + iVar10) >> 0xe);
          if (iVar10 < 0) {
            local_c = 0;
          }
          else {
            local_c = 0xff;
            if (iVar10 < 0x100) {
              local_c = (undefined1)iVar10;
            }
          }
          iVar10 = (uVar17 & 0xff) * iVar9;
          iVar10 = (uVar11 >> 8 & 0xff) - ((int)((iVar10 >> 0x1f & 0x3fffU) + iVar10) >> 0xe);
          if (iVar10 < 0) {
            uStack_b = 0;
          }
          else {
            uStack_b = 0xff;
            if (iVar10 < 0x100) {
              uStack_b = (undefined1)iVar10;
            }
          }
          iVar10 = (uVar16 & 0xff) * iVar9;
          iVar10 = (uVar11 >> 0x10 & 0xff) - ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe);
          if (iVar10 < 0) {
            bStack_a = 0;
          }
          else {
            if (iVar10 < 0x100) goto LAB_010d21f8;
            bStack_a = 0xff;
          }
        }
        *param_3 = CONCAT13(uStack_9,CONCAT12(bStack_a,CONCAT11(uStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar2;
        local_88 = local_88 + -1;
      } while (local_88 != 0);
    }
    if (iVar20 != 1) {
      uVar11 = *param_3;
      uStack_11 = (undefined1)(uVar11 >> 0x18);
      uVar16 = *(uint *)(iVar24 + -4 + iVar7 * 4);
      uStack_b6 = (ushort)(uVar16 >> 0x10);
      uVar31 = *(uint *)(local_50 + -4 + iVar7 * 4);
      param_2 = param_2 & 0x80003fff;
      uStack_ea = (ushort)(uVar31 >> 0x10);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar10 = (0x4000 - param_2) * (0x4000 - uVar28);
      iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar24 = (0x4000 - uVar28) * param_2;
      iVar24 = (int)(iVar24 + (iVar24 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar12 = (0x4000 - param_2) * uVar28;
      iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar15 = (int)(uVar28 * param_2 + ((int)(uVar28 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = (uVar31 & 0xff) * iVar15 + (uVar31 & 0xff) * iVar12 + (uVar16 & 0xff) * iVar24 +
               (uVar16 & 0xff) * iVar10;
      iVar14 = (uVar31 >> 8 & 0xff) * iVar15 + (uVar31 >> 8 & 0xff) * iVar12 +
               (uVar16 >> 8 & 0xff) * iVar24 + (uVar16 >> 8 & 0xff) * iVar10;
      iVar10 = (uStack_ea & 0xff) * iVar15 + (uStack_ea & 0xff) * iVar12 +
               (uStack_b6 & 0xff) * iVar24 + (uStack_b6 & 0xff) * iVar10;
      uVar16 = (uint)((longlong)iVar9 * (longlong)iVar23) >> 0xe |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar23) >> 0x20) << 0x12;
      iVar24 = ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar16;
      iVar24 = (uVar11 & 0xff) - ((int)((iVar24 >> 0x1f & 0x3fffU) + iVar24) >> 0xe);
      if (iVar24 < 0) {
        local_14 = 0;
      }
      else {
        local_14 = 0xff;
        if (iVar24 < 0x100) {
          local_14 = (undefined1)iVar24;
        }
      }
      iVar24 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar16;
      iVar24 = (uVar11 >> 8 & 0xff) - ((int)((iVar24 >> 0x1f & 0x3fffU) + iVar24) >> 0xe);
      if (iVar24 < 0) {
        uStack_13 = 0;
      }
      else {
        uStack_13 = 0xff;
        if (iVar24 < 0x100) {
          uStack_13 = (undefined1)iVar24;
        }
      }
      iVar10 = ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar16;
      iVar10 = (uVar11 >> 0x10 & 0xff) - ((int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe);
      if (iVar10 < 0) {
        uStack_12 = 0;
      }
      else {
        uStack_12 = 0xff;
        if (iVar10 < 0x100) {
          uStack_12 = (undefined1)iVar10;
        }
      }
      *param_3 = CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,local_14)));
    }
    uVar25 = uVar25 + iVar33;
    iVar5 = iVar5 + 1;
  } while( true );
}


