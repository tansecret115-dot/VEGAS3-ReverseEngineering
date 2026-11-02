/* Module: vegas30k.dll
   Function: FUN_010d0370
   Address: 010d0370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x010d0eb6) */
/* WARNING: Removing unreachable block (ram,0x010d0ee1) */
/* WARNING: Removing unreachable block (ram,0x010d0f0e) */
/* WARNING: Removing unreachable block (ram,0x010d0f39) */

void FUN_010d0370(uint param_1,undefined4 param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
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
  byte bStack_e1;
  byte bStack_9d;
  int local_7c;
  int local_6c;
  int local_40;
  int local_20;
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
  byte bStack_9;
  
  iVar20 = *(int *)(param_1 + 0x18);
  iVar30 = (int)((*(uint *)(param_1 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (iVar20 - 1U | 0x3fff) + 1;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar22 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar36 = (int)((*(uint *)(param_1 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(param_1 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (iVar2 - 1U | 0x3fff) + 1;
  iVar10 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (*(int *)(param_1 + 0x48) - 1U | 0x3fff) + 1;
  iVar11 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
  iVar12 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = iVar36 + 1;
  local_40 = iVar9 * 0x4000 - *(int *)(param_1 + 0x14);
  local_20 = (iVar30 + 1) * 0x4000 - *(int *)(param_1 + 0x10);
  iVar28 = iVar20 + iVar22 * -0x4000 + 0x4000;
  iVar23 = iVar22 - iVar30;
  if (iVar23 < 2) {
    local_20 = iVar20 - *(int *)(param_1 + 0x10);
  }
  if (iVar10 - iVar36 < 2) {
    local_40 = iVar2 - *(int *)(param_1 + 0x14);
  }
  uVar3 = *(uint *)(param_1 + 0x60);
  iVar20 = *(int *)(param_1 + 100);
  uVar35 = *(uint *)(param_1 + 0x44);
  iVar13 = ftol();
  uVar24 = (uint)(iVar23 != 1);
  iVar14 = (int)(uVar35 + ((int)uVar35 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar25 = *(int *)(param_1 + 0x38) * iVar14 + *(int *)(param_1 + 0x34);
  iVar29 = iVar30 * (int)param_3;
  param_3 = (uint *)(iVar36 * *(int *)(param_1 + 8) + iVar29 + *(int *)(param_1 + 4));
  local_6c = iVar25;
  if (iVar12 + -1 != iVar14) {
    local_6c = *(int *)(param_1 + 0x38) + iVar25;
  }
  param_2 = *(uint *)(param_1 + 0x40);
  if (iVar30 < iVar22) {
    uVar15 = uVar35 & 0x80003fff;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xffffc000) + 1;
    }
    iVar14 = iVar30;
    do {
      uVar18 = *param_3;
      lVar5 = (longlong)iVar13 * (longlong)local_40;
      uVar19 = (uint)lVar5 >> 0xe;
      iVar26 = (int)((ulonglong)lVar5 >> 0x20) << 0x12;
      bStack_a = (byte)((ulonglong)lVar5 >> 0x18) >> 6 | (byte)((uint)iVar26 >> 0x10);
      uVar33 = 1;
      local_c = (undefined1)uVar19;
      uStack_b = (undefined1)(uVar19 >> 8);
      bStack_9 = (byte)((uint)iVar26 >> 0x18);
      iVar26 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
      if (iVar14 == iVar30) {
        lVar5 = (longlong)CONCAT13(bStack_9,CONCAT12(bStack_a,(short)uVar19)) * (longlong)local_20;
        uVar19 = (uint)lVar5 >> 0xe;
        iVar16 = (int)((ulonglong)lVar5 >> 0x20) << 0x12;
        bStack_a = (byte)((ulonglong)lVar5 >> 0x18) >> 6 | (byte)((uint)iVar16 >> 0x10);
        local_c = (undefined1)uVar19;
        uStack_b = (undefined1)(uVar19 >> 8);
        bStack_9 = (byte)((uint)iVar16 >> 0x18);
        uVar33 = uVar24;
      }
      else if (iVar14 == iVar22 + -1) {
        lVar5 = (longlong)CONCAT13(bStack_9,CONCAT12(bStack_a,(short)uVar19)) * (longlong)iVar28;
        uVar19 = (uint)lVar5 >> 0xe;
        iVar26 = (int)((ulonglong)lVar5 >> 0x20) << 0x12;
        bStack_a = (byte)((ulonglong)lVar5 >> 0x18) >> 6 | (byte)((uint)iVar26 >> 0x10);
        local_c = (undefined1)uVar19;
        uStack_b = (undefined1)(uVar19 >> 8);
        bStack_9 = (byte)((uint)iVar26 >> 0x18);
        uVar33 = 0;
        iVar26 = iVar11 + -1;
      }
      uVar19 = *(uint *)(iVar25 + iVar26 * 4);
      iVar16 = (iVar26 + uVar33) * 4;
      uVar31 = param_2 & 0x80003fff;
      uVar33 = *(uint *)(iVar16 + iVar25);
      uVar4 = *(uint *)(local_6c + iVar26 * 4);
      uVar38 = *(uint *)(iVar16 + local_6c);
      if ((int)uVar31 < 0) {
        uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
      }
      iVar26 = (0x4000 - uVar15) * (0x4000 - uVar31);
      iVar16 = (0x4000 - uVar15) * uVar31;
      iVar17 = (0x4000 - uVar31) * uVar15;
      iVar37 = (int)(iVar17 + (iVar17 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar32 = (int)(uVar15 * uVar31 + ((int)(uVar15 * uVar31) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar34 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar27 = (int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar26 = (uVar38 & 0xff) * iVar32 + (uVar4 & 0xff) * iVar37 + (uVar33 & 0xff) * iVar34 +
               (uVar19 & 0xff) * iVar27;
      iVar16 = (uVar38 >> 8 & 0xff) * iVar32 + (uVar4 >> 8 & 0xff) * iVar37 +
               (uVar33 >> 8 & 0xff) * iVar34 + (uVar19 >> 8 & 0xff) * iVar27;
      iVar17 = (uVar38 >> 0x10 & 0xff) * iVar32 + (uVar4 >> 0x10 & 0xff) * iVar37 +
               (uVar33 >> 0x10 & 0xff) * iVar34 + (uVar19 >> 0x10 & 0xff) * iVar27;
      iVar27 = (uVar38 >> 0x18) * iVar32 + (uVar4 >> 0x18) * iVar37 + (uVar33 >> 0x18) * iVar34 +
               (uVar19 >> 0x18) * iVar27;
      iVar26 = ((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) *
               CONCAT13(bStack_9,CONCAT12(bStack_a,CONCAT11(uStack_b,local_c)));
      iVar26 = (uVar18 & 0xff) + ((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe);
      if (iVar26 < 0) {
        local_1c = 0;
      }
      else {
        local_1c = 0xff;
        if (iVar26 < 0x100) {
          local_1c = (undefined1)iVar26;
        }
      }
      iVar26 = CONCAT13(bStack_9,CONCAT12(bStack_a,CONCAT11(uStack_b,local_c)));
      iVar16 = ((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar26;
      iVar16 = ((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar18 >> 8 & 0xff);
      if (iVar16 < 0) {
        uStack_1b = 0;
      }
      else {
        uStack_1b = 0xff;
        if (iVar16 < 0x100) {
          uStack_1b = (undefined1)iVar16;
        }
      }
      iVar16 = ((int)(iVar17 + (iVar17 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar26;
      iVar16 = ((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar18 >> 0x10 & 0xff);
      if (iVar16 < 0) {
        uStack_1a = 0;
      }
      else {
        uStack_1a = 0xff;
        if (iVar16 < 0x100) {
          uStack_1a = (undefined1)iVar16;
        }
      }
      iVar26 = ((int)(iVar27 + (iVar27 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * iVar26;
      iVar26 = ((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar18 >> 0x18);
      if (iVar26 < 0) {
        uStack_19 = 0;
      }
      else {
        uStack_19 = 0xff;
        if (iVar26 < 0x100) {
          uStack_19 = (undefined1)iVar26;
        }
      }
      *param_3 = CONCAT13(uStack_19,CONCAT12(uStack_1a,CONCAT11(uStack_1b,local_1c)));
      param_3 = param_3 + 1;
      uVar18 = uVar3;
      if (iVar14 == iVar30) {
        uVar18 = (uint)((longlong)(int)uVar3 * (longlong)local_20) >> 0xe |
                 (int)((ulonglong)((longlong)(int)uVar3 * (longlong)local_20) >> 0x20) << 0x12;
      }
      param_2 = param_2 + uVar18;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar22);
  }
  lVar5 = (longlong)iVar20 * (longlong)local_40;
  uVar35 = uVar35 + ((uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12);
  do {
    if (iVar10 + -1 <= iVar9) {
      if (iVar10 - iVar36 != 1) {
        iVar20 = (iVar12 + -1) * *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
        puVar21 = (uint *)((iVar10 + -1) * *(int *)(param_1 + 8) + iVar29 + *(int *)(param_1 + 4));
        param_2 = *(uint *)(param_1 + 0x40);
        for (iVar9 = iVar30; iVar9 < iVar22; iVar9 = iVar9 + 1) {
          uVar35 = *puVar21;
          lVar5 = (longlong)iVar13 * (longlong)(iVar2 + iVar10 * -0x4000 + 0x4000);
          param_1 = (uint)lVar5 >> 0xe | (int)((ulonglong)lVar5 >> 0x20) << 0x12;
          uVar15 = 1;
          iVar12 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
          if (iVar9 == iVar30) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)local_20) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)local_20) >> 0x20) <<
                      0x12;
            uVar15 = uVar24;
          }
          else if (iVar9 == iVar22 + -1) {
            param_1 = (uint)((longlong)(int)param_1 * (longlong)iVar28) >> 0xe |
                      (int)((ulonglong)((longlong)(int)param_1 * (longlong)iVar28) >> 0x20) << 0x12;
            iVar12 = iVar11 + -1;
            uVar15 = 0;
          }
          uVar18 = *(uint *)(iVar20 + iVar12 * 4);
          uVar15 = *(uint *)(iVar20 + (iVar12 + uVar15) * 4);
          uVar19 = param_2 & 0x80003fff;
          if ((int)uVar19 < 0) {
            uVar19 = (uVar19 - 1 | 0xffffc000) + 1;
          }
          iVar12 = (0x4000 - uVar19) * 0x4000;
          iVar14 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar25 = (int)(uVar19 * 0x4000 + ((int)(uVar19 * 0x4000) >> 0x1f & 0x3fffU)) >> 0xe;
          iVar12 = (uVar15 & 0xff) * iVar25 + (uVar18 & 0xff) * iVar14;
          iVar23 = (uVar15 >> 8 & 0xff) * iVar25 + (uVar18 >> 8 & 0xff) * iVar14;
          iVar36 = (uVar15 >> 0x10 & 0xff) * iVar25 + (uVar18 >> 0x10 & 0xff) * iVar14;
          iVar14 = (uVar15 >> 0x18) * iVar25 + (uVar18 >> 0x18) * iVar14;
          iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * param_1;
          iVar12 = (uVar35 & 0xff) + ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe);
          if (iVar12 < 0) {
            local_14 = 0;
          }
          else {
            local_14 = 0xff;
            if (iVar12 < 0x100) {
              local_14 = (undefined1)iVar12;
            }
          }
          iVar12 = ((int)(iVar23 + (iVar23 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * param_1;
          iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar35 >> 8 & 0xff);
          if (iVar12 < 0) {
            uStack_13 = 0;
          }
          else {
            uStack_13 = 0xff;
            if (iVar12 < 0x100) {
              uStack_13 = (undefined1)iVar12;
            }
          }
          iVar12 = ((int)(iVar36 + (iVar36 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * param_1;
          iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar35 >> 0x10 & 0xff);
          if (iVar12 < 0) {
            uStack_12 = 0;
          }
          else {
            uStack_12 = 0xff;
            if (iVar12 < 0x100) {
              uStack_12 = (undefined1)iVar12;
            }
          }
          iVar12 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * param_1;
          iVar12 = ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar35 >> 0x18);
          if (iVar12 < 0) {
            uStack_11 = 0;
          }
          else {
            uStack_11 = 0xff;
            if (iVar12 < 0x100) {
              uStack_11 = (undefined1)iVar12;
            }
          }
          *puVar21 = CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,local_14)));
          puVar21 = puVar21 + 1;
          uVar35 = uVar3;
          if (iVar9 == iVar30) {
            uVar35 = (uint)((longlong)(int)uVar3 * (longlong)local_20) >> 0xe |
                     (int)((ulonglong)((longlong)(int)uVar3 * (longlong)local_20) >> 0x20) << 0x12;
          }
          param_2 = param_2 + uVar35;
        }
      }
      return;
    }
    iVar16 = (int)(uVar35 + ((int)uVar35 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar26 = *(int *)(param_1 + 0x38) * iVar16 + *(int *)(param_1 + 0x34);
    param_3 = (uint *)(iVar9 * *(int *)(param_1 + 8) + iVar29 + *(int *)(param_1 + 4));
    iVar25 = (*(int *)(param_1 + 0x4c) - 1U | 0x3fff) + 1;
    iVar14 = iVar26;
    if (((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe) + -1 != iVar16) {
      iVar14 = *(int *)(param_1 + 0x38) + iVar26;
    }
    uVar15 = *param_3;
    param_2 = *(uint *)(param_1 + 0x40);
    iVar25 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar18 = *(uint *)(iVar26 + iVar25 * 4);
    uVar19 = *(uint *)(iVar14 + iVar25 * 4);
    iVar25 = (iVar25 + uVar24) * 4;
    uVar38 = param_2 & 0x80003fff;
    uVar33 = *(uint *)(iVar25 + iVar26);
    uVar4 = *(uint *)(iVar25 + iVar14);
    if ((int)uVar38 < 0) {
      uVar38 = (uVar38 - 1 | 0xffffc000) + 1;
    }
    uVar31 = uVar35 & 0x80003fff;
    if ((int)uVar31 < 0) {
      uVar31 = (uVar31 - 1 | 0xffffc000) + 1;
    }
    iVar25 = (0x4000 - uVar38) * (0x4000 - uVar31);
    iVar16 = uVar38 * (0x4000 - uVar31);
    iVar17 = uVar31 * (0x4000 - uVar38);
    iVar27 = (int)(((int)(uVar31 * uVar38) >> 0x1f & 0x3fffU) + uVar31 * uVar38) >> 0xe;
    iVar32 = (int)(iVar17 + (iVar17 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar37 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar34 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar25 = (uVar4 & 0xff) * iVar27 + (uVar19 & 0xff) * iVar32 + (uVar33 & 0xff) * iVar37 +
             (uVar18 & 0xff) * iVar34;
    iVar16 = (uVar4 >> 8 & 0xff) * iVar27 + (uVar19 >> 8 & 0xff) * iVar32 +
             (uVar33 >> 8 & 0xff) * iVar37 + (uVar18 >> 8 & 0xff) * iVar34;
    iVar17 = (uVar4 >> 0x10 & 0xff) * iVar27 + (uVar19 >> 0x10 & 0xff) * iVar32 +
             (uVar33 >> 0x10 & 0xff) * iVar37 + (uVar18 >> 0x10 & 0xff) * iVar34;
    iVar27 = (uVar4 >> 0x18) * iVar27 + (uVar19 >> 0x18) * iVar32 + (uVar33 >> 0x18) * iVar37 +
             (uVar18 >> 0x18) * iVar34;
    uVar18 = (uint)((longlong)iVar13 * (longlong)local_20) >> 0xe |
             (int)((ulonglong)((longlong)iVar13 * (longlong)local_20) >> 0x20) << 0x12;
    iVar25 = ((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar18;
    iVar25 = (uVar15 & 0xff) + ((int)((iVar25 >> 0x1f & 0x3fffU) + iVar25) >> 0xe);
    if (iVar25 < 0) {
      local_1c = 0;
    }
    else {
      local_1c = 0xff;
      if (iVar25 < 0x100) {
        local_1c = (undefined1)iVar25;
      }
    }
    iVar25 = ((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar18;
    iVar25 = ((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar15 >> 8 & 0xff);
    if (iVar25 < 0) {
      uStack_1b = 0;
    }
    else {
      uStack_1b = 0xff;
      if (iVar25 < 0x100) {
        uStack_1b = (undefined1)iVar25;
      }
    }
    iVar25 = ((int)(iVar17 + (iVar17 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar18;
    iVar25 = ((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar15 >> 0x10 & 0xff);
    if (iVar25 < 0) {
      uStack_1a = 0;
    }
    else {
      uStack_1a = 0xff;
      if (iVar25 < 0x100) {
        uStack_1a = (undefined1)iVar25;
      }
    }
    iVar25 = ((int)(iVar27 + (iVar27 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar18;
    iVar25 = ((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar15 >> 0x18);
    if (iVar25 < 0) {
      uStack_19 = 0;
    }
    else {
      uStack_19 = 0xff;
      if (iVar25 < 0x100) {
        uStack_19 = (undefined1)iVar25;
      }
    }
    param_2 = param_2 + ((uint)((longlong)(int)uVar3 * (longlong)local_20) >> 0xe |
                        (int)((ulonglong)((longlong)(int)uVar3 * (longlong)local_20) >> 0x20) <<
                        0x12);
    *param_3 = CONCAT13(uStack_19,CONCAT12(uStack_1a,CONCAT11(uStack_1b,local_1c)));
    param_3 = param_3 + 1;
    if (iVar30 + 1 < iVar22 + -1) {
      local_7c = (iVar22 + -1) - (iVar30 + 1);
      do {
        uVar15 = *param_3;
        bStack_9 = (byte)(uVar15 >> 0x18);
        iVar25 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar38 = param_2 & 0x80003fff;
        uVar18 = *(uint *)(iVar26 + iVar25 * 4);
        uVar19 = *(uint *)(iVar26 + 4 + iVar25 * 4);
        uVar33 = *(uint *)(iVar14 + iVar25 * 4);
        uVar4 = *(uint *)(iVar14 + 4 + iVar25 * 4);
        if ((int)uVar38 < 0) {
          uVar38 = (uVar38 - 1 | 0xffffc000) + 1;
        }
        iVar25 = (0x4000 - uVar38) * (0x4000 - uVar31);
        iVar16 = uVar38 * (0x4000 - uVar31);
        iVar17 = (0x4000 - uVar38) * uVar31;
        iVar32 = (int)(iVar17 + (iVar17 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar17 = (int)(uVar31 * uVar38 + ((int)(uVar31 * uVar38) >> 0x1f & 0x3fffU)) >> 0xe;
        iVar27 = (int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar16 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
        iVar25 = (uVar4 & 0xff) * iVar17 + (uVar33 & 0xff) * iVar32 + (uVar19 & 0xff) * iVar27 +
                 (uVar18 & 0xff) * iVar16;
        uVar6 = (undefined1)((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe);
        iVar25 = (uVar4 >> 8 & 0xff) * iVar17 + (uVar33 >> 8 & 0xff) * iVar32 +
                 (uVar19 >> 8 & 0xff) * iVar27 + (uVar18 >> 8 & 0xff) * iVar16;
        uVar7 = (undefined1)((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe);
        iVar25 = (uVar4 >> 0x10 & 0xff) * iVar17 + (uVar33 >> 0x10 & 0xff) * iVar32 +
                 (uVar19 >> 0x10 & 0xff) * iVar27 + (uVar18 >> 0x10 & 0xff) * iVar16;
        uVar38 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
        bVar8 = (byte)uVar38;
        iVar25 = (uVar4 >> 0x18) * iVar17 + (uVar33 >> 0x18) * iVar32 + (uVar19 >> 0x18) * iVar27 +
                 (uVar18 >> 0x18) * iVar16;
        uVar18 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar13 == 0x4000) {
          uVar19 = (uVar15 & 0xff) + (CONCAT12(bVar8,CONCAT11(uVar7,uVar6)) & 0xff);
          local_c = 0xff;
          if (uVar19 < 0x100) {
            local_c = (undefined1)uVar19;
          }
          uVar19 = (CONCAT11(bVar8,uVar7) & 0xff) + (uVar15 >> 8 & 0xff);
          uStack_b = 0xff;
          if (uVar19 < 0x100) {
            uStack_b = (undefined1)uVar19;
          }
          uVar1 = ((ushort)(uVar15 >> 0x10) & 0xff) + (ushort)bVar8;
          bStack_a = 0xff;
          if (uVar1 < 0x100) {
            bStack_a = (byte)uVar1;
          }
          uVar15 = (uint)bStack_9 + (uVar18 & 0xff);
          if (uVar15 < 0x100) {
LAB_010d103f:
            bStack_9 = (byte)uVar15;
          }
          else {
            bStack_9 = 0xff;
          }
        }
        else {
          iVar25 = (CONCAT12(bVar8,CONCAT11(uVar7,uVar6)) & 0xff) * iVar13;
          iVar25 = (uVar15 & 0xff) + ((int)((iVar25 >> 0x1f & 0x3fffU) + iVar25) >> 0xe);
          if (iVar25 < 0) {
            local_c = 0;
          }
          else {
            local_c = 0xff;
            if (iVar25 < 0x100) {
              local_c = (undefined1)iVar25;
            }
          }
          iVar25 = (CONCAT11(bVar8,uVar7) & 0xff) * iVar13;
          iVar25 = ((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar15 >> 8 & 0xff);
          if (iVar25 < 0) {
            uStack_b = 0;
          }
          else {
            uStack_b = 0xff;
            if (iVar25 < 0x100) {
              uStack_b = (undefined1)iVar25;
            }
          }
          iVar25 = (uVar38 & 0xff) * iVar13;
          iVar25 = ((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar15 >> 0x10 & 0xff);
          if (iVar25 < 0) {
            bStack_a = 0;
          }
          else {
            bStack_a = 0xff;
            if (iVar25 < 0x100) {
              bStack_a = (byte)iVar25;
            }
          }
          iVar25 = (uVar18 & 0xff) * iVar13;
          uVar15 = ((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe) + (uint)bStack_9;
          if ((int)uVar15 < 0) {
            bStack_9 = 0;
          }
          else {
            if ((int)uVar15 < 0x100) goto LAB_010d103f;
            bStack_9 = 0xff;
          }
        }
        *param_3 = CONCAT13(bStack_9,CONCAT12(bStack_a,CONCAT11(uStack_b,local_c)));
        param_3 = param_3 + 1;
        param_2 = param_2 + uVar3;
        local_7c = local_7c + -1;
      } while (local_7c != 0);
    }
    if (iVar23 != 1) {
      param_2 = param_2 & 0x80003fff;
      uVar15 = *param_3;
      uVar18 = *(uint *)(iVar26 + -4 + iVar11 * 4);
      bStack_9d = (byte)(uVar18 >> 0x18);
      uVar19 = *(uint *)(iVar14 + -4 + iVar11 * 4);
      bStack_e1 = (byte)(uVar19 >> 0x18);
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffc000) + 1;
      }
      iVar14 = (0x4000 - param_2) * (0x4000 - uVar31);
      iVar25 = param_2 * (0x4000 - uVar31);
      iVar26 = uVar31 * (0x4000 - param_2);
      iVar17 = (int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar16 = (int)(uVar31 * param_2 + ((int)(uVar31 * param_2) >> 0x1f & 0x3fffU)) >> 0xe;
      iVar32 = (int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar27 = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar14 = (uVar19 & 0xff) * iVar16 + (uVar19 & 0xff) * iVar17 + (uVar18 & 0xff) * iVar32 +
               (uVar18 & 0xff) * iVar27;
      iVar25 = (uVar19 >> 8 & 0xff) * iVar16 + (uVar19 >> 8 & 0xff) * iVar17 +
               (uVar18 >> 8 & 0xff) * iVar32 + (uVar18 >> 8 & 0xff) * iVar27;
      iVar26 = (uVar19 >> 0x10 & 0xff) * iVar16 + (uVar19 >> 0x10 & 0xff) * iVar17 +
               (uVar18 >> 0x10 & 0xff) * iVar32 + (uVar18 >> 0x10 & 0xff) * iVar27;
      iVar16 = (uint)bStack_e1 * iVar16 + (uint)bStack_e1 * iVar17 + (uint)bStack_9d * iVar32 +
               (uint)bStack_9d * iVar27;
      uVar18 = (uint)((longlong)iVar13 * (longlong)iVar28) >> 0xe |
               (int)((ulonglong)((longlong)iVar13 * (longlong)iVar28) >> 0x20) << 0x12;
      iVar14 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar18;
      iVar14 = (uVar15 & 0xff) + ((int)((iVar14 >> 0x1f & 0x3fffU) + iVar14) >> 0xe);
      if (iVar14 < 0) {
        local_14 = 0;
      }
      else {
        local_14 = 0xff;
        if (iVar14 < 0x100) {
          local_14 = (undefined1)iVar14;
        }
      }
      iVar14 = ((int)(iVar25 + (iVar25 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar18;
      iVar14 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar15 >> 8 & 0xff);
      if (iVar14 < 0) {
        uStack_13 = 0;
      }
      else {
        uStack_13 = 0xff;
        if (iVar14 < 0x100) {
          uStack_13 = (undefined1)iVar14;
        }
      }
      iVar14 = ((int)(iVar26 + (iVar26 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar18;
      iVar14 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar15 >> 0x10 & 0xff);
      if (iVar14 < 0) {
        uStack_12 = 0;
      }
      else {
        uStack_12 = 0xff;
        if (iVar14 < 0x100) {
          uStack_12 = (undefined1)iVar14;
        }
      }
      iVar14 = ((int)(iVar16 + (iVar16 >> 0x1f & 0x3fffU)) >> 0xe & 0xffU) * uVar18;
      iVar14 = ((int)(iVar14 + (iVar14 >> 0x1f & 0x3fffU)) >> 0xe) + (uVar15 >> 0x18);
      if (iVar14 < 0) {
        uStack_11 = 0;
      }
      else {
        uStack_11 = 0xff;
        if (iVar14 < 0x100) {
          uStack_11 = (undefined1)iVar14;
        }
      }
      *param_3 = CONCAT13(uStack_11,CONCAT12(uStack_12,CONCAT11(uStack_13,local_14)));
    }
    uVar35 = uVar35 + iVar20;
    iVar9 = iVar9 + 1;
  } while( true );
}


