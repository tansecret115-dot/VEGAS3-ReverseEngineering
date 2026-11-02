/* Module: sfmarket2.dll
   Function: FUN_00467b60
   Address: 00467b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467b60(void)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  float *pfVar35;
  float *pfVar36;
  float in_stack_0000001c;
  int in_stack_00000028;
  int in_stack_00000030;
  float local_88;
  int local_70;
  int local_6c;
  int local_58;
  int local_4c;
  int local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float *local_20;
  uint local_14;
  
  uVar1 = *(uint *)(in_stack_00000028 + 0x60);
  iVar26 = *(int *)(in_stack_00000028 + 100);
  iVar21 = *(int *)(in_stack_00000028 + 0x18);
  iVar23 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar15 = (iVar21 - 1U | 0x3fff) + 1;
  iVar34 = *(int *)(in_stack_00000028 + 0x1c);
  iVar30 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar33 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar15 = (iVar34 - 1U | 0x3fff) + 1;
  iVar16 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar15 = (*(int *)(in_stack_00000028 + 0x48) - 1U | 0x3fff) + 1;
  iVar17 = (int)(iVar15 + (iVar15 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar18 = (*(int *)(in_stack_00000028 + 0x4c) - 1U | 0x3fff) + 1;
  iVar15 = iVar33 + 1;
  local_70 = iVar15 * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  iVar19 = iVar34 + iVar16 * -0x4000 + 0x4000;
  local_40 = (iVar23 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  iVar31 = iVar30 - iVar23;
  iVar20 = iVar21 + iVar30 * -0x4000 + 0x4000;
  if (iVar31 < 2) {
    local_40 = iVar21 - *(int *)(in_stack_00000028 + 0x10);
  }
  iVar21 = iVar16 - iVar33;
  if (iVar21 < 2) {
    local_70 = iVar34 - *(int *)(in_stack_00000028 + 0x14);
  }
  uVar32 = *(uint *)(in_stack_00000028 + 0x44);
  fVar4 = (float)local_40 * _DAT_0049edb8;
  fVar5 = (float)iVar20 * _DAT_0049edb8;
  FUN_00426ea0(0);
  iVar34 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar24 = uVar32 & 0x80003fff;
  if ((int)uVar24 < 0) {
    uVar24 = (uVar24 - 1 | 0xffffc000) + 1;
  }
  fVar6 = (float)(int)uVar24 * _DAT_0049edb8;
  iVar25 = *(int *)(in_stack_00000028 + 0x38) * iVar34 + *(int *)(in_stack_00000028 + 0x34);
  iVar18 = ((int)(iVar18 + (iVar18 >> 0x1f & 0x3fffU)) >> 0xe) + -1;
  local_14 = *(uint *)(in_stack_00000028 + 0x40);
  iVar22 = iVar23 * 0x10;
  iVar34 = *(int *)(in_stack_00000028 + 0x34) +
           ((uint)(iVar34 != iVar18) + iVar34) * *(int *)(in_stack_00000028 + 0x38);
  fVar3 = (float)local_70 * _DAT_0049edb8;
  local_20 = (float *)(*(int *)(in_stack_00000028 + 8) * iVar33 + iVar22 +
                      *(int *)(in_stack_00000028 + 4));
  local_88 = fVar3 * fVar4;
  iVar30 = iVar30 + -1;
  if (iVar23 < iVar30) {
    fVar7 = _DAT_0049e758 - fVar6;
    local_6c = iVar23;
    do {
      iVar33 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar24 = local_14 & 0x80003fff;
      if ((int)uVar24 < 0) {
        uVar24 = (uVar24 - 1 | 0xffffc000) + 1;
      }
      iVar27 = ((uint)(iVar33 != iVar17 + -1) + iVar33) * 0x10;
      iVar33 = iVar33 * 0x10;
      fVar8 = (float)(int)uVar24 * _DAT_0049edb8;
      fVar13 = fVar7 * (_DAT_0049e758 - fVar8);
      fVar9 = fVar8 * fVar7;
      fVar14 = fVar6 * (_DAT_0049e758 - fVar8);
      fVar8 = fVar8 * fVar6;
      fVar12 = *(float *)(iVar27 + 8 + iVar34) * fVar8 +
               *(float *)(iVar27 + 8 + iVar25) * fVar9 +
               *(float *)(iVar33 + 8 + iVar34) * fVar14 + *(float *)(iVar33 + 8 + iVar25) * fVar13;
      fVar11 = *(float *)(iVar27 + 4 + iVar34) * fVar8 +
               *(float *)(iVar27 + 4 + iVar25) * fVar9 +
               *(float *)(iVar33 + 4 + iVar34) * fVar14 + *(float *)(iVar33 + 4 + iVar25) * fVar13;
      fVar10 = *(float *)(iVar27 + iVar34) * fVar8 +
               *(float *)(iVar33 + iVar25) * fVar13 +
               *(float *)(iVar27 + iVar25) * fVar9 + *(float *)(iVar33 + iVar34) * fVar14;
      fVar8 = *(float *)(iVar27 + 0xc + iVar34) * fVar8 +
              *(float *)(iVar27 + 0xc + iVar25) * fVar9 +
              *(float *)(iVar33 + 0xc + iVar34) * fVar14 +
              *(float *)(iVar33 + 0xc + iVar25) * fVar13;
      if (in_stack_00000030 == 0) {
        *local_20 = (fVar10 - *local_20) * local_88 + *local_20;
        local_20[1] = (fVar11 - local_20[1]) * local_88 + local_20[1];
        local_20[2] = (fVar12 - local_20[2]) * local_88 + local_20[2];
        local_20[3] = (fVar8 - local_20[3]) * local_88 + local_20[3];
      }
      else {
        *local_20 = fVar10;
        local_20[1] = fVar11;
        local_20[2] = fVar12;
        local_20[3] = fVar8;
      }
      uVar24 = uVar1;
      if (local_6c == iVar23) {
        local_88 = fVar3;
        uVar24 = (uint)((longlong)local_40 * (longlong)(int)uVar1) >> 0xe |
                 (int)((ulonglong)((longlong)local_40 * (longlong)(int)uVar1) >> 0x20) << 0x12;
      }
      local_14 = local_14 + uVar24;
      local_20 = local_20 + 4;
      local_6c = local_6c + 1;
    } while (local_6c < iVar30);
  }
  if (1 < iVar31) {
    if (2 < iVar31) {
      local_14 = local_14 +
                 (((uint)((longlong)(int)uVar1 * (longlong)iVar20) >> 0xe |
                  (int)((ulonglong)((longlong)(int)uVar1 * (longlong)iVar20) >> 0x20) << 0x12) -
                 uVar1);
    }
    iVar33 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x3fffU)) >> 0xe;
    local_14 = local_14 & 0x80003fff;
    if ((int)local_14 < 0) {
      local_14 = (local_14 - 1 | 0xffffc000) + 1;
    }
    iVar27 = ((uint)(iVar33 != iVar17 + -1) + iVar33) * 0x10;
    iVar33 = iVar33 * 0x10;
    fVar7 = (float)(int)local_14 * _DAT_0049edb8;
    fVar12 = (_DAT_0049e758 - fVar6) * (_DAT_0049e758 - fVar7);
    fVar8 = fVar7 * (_DAT_0049e758 - fVar6);
    fVar13 = fVar6 * (_DAT_0049e758 - fVar7);
    fVar7 = fVar7 * fVar6;
    fVar11 = *(float *)(iVar27 + 8 + iVar34) * fVar7 +
             *(float *)(iVar27 + 8 + iVar25) * fVar8 +
             *(float *)(iVar33 + 8 + iVar34) * fVar13 + *(float *)(iVar33 + 8 + iVar25) * fVar12;
    fVar10 = *(float *)(iVar27 + 4 + iVar34) * fVar7 +
             *(float *)(iVar27 + 4 + iVar25) * fVar8 +
             *(float *)(iVar33 + 4 + iVar34) * fVar13 + *(float *)(iVar33 + 4 + iVar25) * fVar12;
    fVar9 = *(float *)(iVar27 + iVar34) * fVar7 +
            *(float *)(iVar33 + iVar25) * fVar12 +
            *(float *)(iVar27 + iVar25) * fVar8 + *(float *)(iVar33 + iVar34) * fVar13;
    fVar6 = *(float *)(iVar27 + 0xc + iVar34) * fVar7 +
            *(float *)(iVar27 + 0xc + iVar25) * fVar8 +
            *(float *)(iVar33 + 0xc + iVar34) * fVar13 + *(float *)(iVar33 + 0xc + iVar25) * fVar12;
    fVar3 = fVar3 * fVar5;
    if (in_stack_00000030 == 0) {
      *local_20 = fVar3 * (fVar9 - *local_20) + *local_20;
      local_20[1] = fVar3 * (fVar10 - local_20[1]) + local_20[1];
      local_20[2] = fVar3 * (fVar11 - local_20[2]) + local_20[2];
      local_20[3] = fVar3 * (fVar6 - local_20[3]) + local_20[3];
    }
    else {
      *local_20 = fVar9;
      local_20[1] = fVar10;
      local_20[2] = fVar11;
      local_20[3] = fVar6;
    }
  }
  uVar32 = uVar32 + ((uint)((longlong)iVar26 * (longlong)local_70) >> 0xe |
                    (int)((ulonglong)((longlong)iVar26 * (longlong)local_70) >> 0x20) << 0x12);
  iVar16 = iVar16 + -1;
  if (iVar15 < iVar16) {
    iVar34 = iVar17 + -1;
    do {
      pfVar35 = (float *)(*(int *)(in_stack_00000028 + 8) * iVar15 + iVar22 +
                         *(int *)(in_stack_00000028 + 4));
      uVar24 = uVar32 & 0x80003fff;
      if ((int)uVar24 < 0) {
        uVar24 = (uVar24 - 1 | 0xffffc000) + 1;
      }
      iVar25 = *(int *)(in_stack_00000028 + 0x38) *
               ((int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe);
      uVar29 = *(uint *)(in_stack_00000028 + 0x40);
      iVar33 = iVar25 + *(int *)(in_stack_00000028 + 0x34);
      iVar27 = (-(uint)(iVar15 != iVar16) & (uint)in_stack_0000001c) + iVar25 +
               *(int *)(in_stack_00000028 + 0x34);
      fVar3 = (float)(int)uVar24 * _DAT_0049edb8;
      iVar25 = (int)(uVar29 + ((int)uVar29 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar24 = uVar29 & 0x80003fff;
      if ((int)uVar24 < 0) {
        uVar24 = (uVar24 - 1 | 0xffffc000) + 1;
      }
      fVar6 = (float)(int)uVar24 * _DAT_0049edb8;
      fVar13 = _DAT_0049e758 - fVar3;
      iVar28 = ((uint)(iVar25 != iVar34) + iVar25) * 0x10;
      iVar25 = iVar25 * 0x10;
      fVar11 = fVar13 * (_DAT_0049e758 - fVar6);
      fVar7 = fVar13 * fVar6;
      fVar12 = (_DAT_0049e758 - fVar6) * fVar3;
      fVar6 = fVar6 * fVar3;
      fVar10 = *(float *)(iVar28 + 8 + iVar27) * fVar6 +
               *(float *)(iVar28 + 8 + iVar33) * fVar7 +
               *(float *)(iVar25 + 8 + iVar27) * fVar12 + *(float *)(iVar25 + 8 + iVar33) * fVar11;
      fVar9 = *(float *)(iVar28 + 4 + iVar27) * fVar6 +
              *(float *)(iVar28 + 4 + iVar33) * fVar7 +
              *(float *)(iVar25 + 4 + iVar27) * fVar12 + *(float *)(iVar25 + 4 + iVar33) * fVar11;
      fVar8 = *(float *)(iVar28 + iVar27) * fVar6 +
              *(float *)(iVar25 + iVar33) * fVar11 +
              *(float *)(iVar28 + iVar33) * fVar7 + *(float *)(iVar25 + iVar27) * fVar12;
      fVar6 = *(float *)(iVar28 + 0xc + iVar27) * fVar6 +
              *(float *)(iVar28 + 0xc + iVar33) * fVar7 +
              *(float *)(iVar25 + 0xc + iVar27) * fVar12 +
              *(float *)(iVar25 + 0xc + iVar33) * fVar11;
      if (in_stack_00000030 == 0) {
        *pfVar35 = (fVar8 - *pfVar35) * fVar4 + *pfVar35;
        pfVar35[1] = (fVar9 - pfVar35[1]) * fVar4 + pfVar35[1];
        pfVar35[2] = (fVar10 - pfVar35[2]) * fVar4 + pfVar35[2];
        pfVar35[3] = (fVar6 - pfVar35[3]) * fVar4 + pfVar35[3];
      }
      else {
        *pfVar35 = fVar8;
        pfVar35[1] = fVar9;
        pfVar35[2] = fVar10;
        pfVar35[3] = fVar6;
      }
      pfVar35 = pfVar35 + 4;
      uVar29 = uVar29 + ((uint)((longlong)local_40 * (longlong)(int)uVar1) >> 0xe |
                        (int)((ulonglong)((longlong)local_40 * (longlong)(int)uVar1) >> 0x20) <<
                        0x12);
      if (iVar23 + 1 < iVar30) {
        local_58 = iVar30 - (iVar23 + 1);
        pfVar36 = pfVar35;
        do {
          iVar25 = (int)(uVar29 + ((int)uVar29 >> 0x1f & 0x3fffU)) >> 0xe;
          uVar24 = uVar29 & 0x80003fff;
          if ((int)uVar24 < 0) {
            uVar24 = (uVar24 - 1 | 0xffffc000) + 1;
          }
          iVar28 = ((uint)(iVar25 != iVar34) + iVar25) * 0x10;
          fVar6 = (float)(int)uVar24 * _DAT_0049edb8;
          iVar25 = iVar25 * 0x10;
          fVar8 = fVar13 * (_DAT_0049e758 - fVar6);
          fVar7 = fVar13 * fVar6;
          fVar9 = (_DAT_0049e758 - fVar6) * fVar3;
          fVar6 = fVar6 * fVar3;
          pfVar36[2] = *(float *)(iVar28 + 8 + iVar27) * fVar6 +
                       *(float *)(iVar28 + 8 + iVar33) * fVar7 +
                       *(float *)(iVar25 + 8 + iVar27) * fVar9 +
                       *(float *)(iVar25 + 8 + iVar33) * fVar8;
          pfVar36[1] = *(float *)(iVar28 + 4 + iVar27) * fVar6 +
                       *(float *)(iVar28 + 4 + iVar33) * fVar7 +
                       *(float *)(iVar25 + 4 + iVar27) * fVar9 +
                       *(float *)(iVar25 + 4 + iVar33) * fVar8;
          *pfVar36 = *(float *)(iVar28 + iVar33) * fVar7 +
                     *(float *)(iVar25 + iVar27) * fVar9 +
                     *(float *)(iVar28 + iVar27) * fVar6 + *(float *)(iVar25 + iVar33) * fVar8;
          pfVar35 = pfVar36 + 4;
          uVar29 = uVar29 + uVar1;
          local_58 = local_58 + -1;
          pfVar36[3] = *(float *)(iVar28 + 0xc + iVar27) * fVar6 +
                       *(float *)(iVar28 + 0xc + iVar33) * fVar7 +
                       *(float *)(iVar25 + 0xc + iVar27) * fVar9 +
                       *(float *)(iVar25 + 0xc + iVar33) * fVar8;
          pfVar36 = pfVar35;
        } while (local_58 != 0);
      }
      if (1 < iVar31) {
        if (2 < iVar31) {
          uVar29 = uVar29 + (((uint)((longlong)(int)uVar1 * (longlong)iVar20) >> 0xe |
                             (int)((ulonglong)((longlong)(int)uVar1 * (longlong)iVar20) >> 0x20) <<
                             0x12) - uVar1);
        }
        iVar25 = (int)(uVar29 + ((int)uVar29 >> 0x1f & 0x3fffU)) >> 0xe;
        if (iVar25 == iVar34) {
          iVar25 = iVar34 * 0x10;
          local_28 = *(float *)(iVar25 + 8 + iVar33) * fVar13 +
                     *(float *)(iVar25 + 8 + iVar27) * fVar3;
          local_2c = *(float *)(iVar25 + 4 + iVar33) * fVar13 +
                     *(float *)(iVar25 + 4 + iVar27) * fVar3;
          local_30 = *(float *)(iVar25 + iVar27) * fVar3 + *(float *)(iVar25 + iVar33) * fVar13;
          local_24 = *(float *)(iVar25 + 0xc + iVar33) * fVar13 +
                     *(float *)(iVar25 + 0xc + iVar27) * fVar3;
        }
        else {
          uVar29 = uVar29 & 0x80003fff;
          if ((int)uVar29 < 0) {
            uVar29 = (uVar29 - 1 | 0xffffc000) + 1;
          }
          iVar28 = iVar25 * 0x10;
          fVar6 = (float)(int)uVar29 * _DAT_0049edb8;
          iVar25 = (iVar25 + 1) * 0x10;
          fVar7 = fVar13 * (_DAT_0049e758 - fVar6);
          fVar13 = fVar13 * fVar6;
          fVar8 = (_DAT_0049e758 - fVar6) * fVar3;
          fVar6 = fVar6 * fVar3;
          local_28 = *(float *)(iVar28 + 8 + iVar33) * fVar7 +
                     *(float *)(iVar28 + 0x18 + iVar33) * fVar13 +
                     *(float *)(iVar28 + 8 + iVar27) * fVar8 +
                     *(float *)(iVar28 + 0x18 + iVar27) * fVar6;
          local_2c = *(float *)(iVar28 + 4 + iVar33) * fVar7 +
                     *(float *)(iVar28 + 0x14 + iVar33) * fVar13 +
                     *(float *)(iVar28 + 4 + iVar27) * fVar8 +
                     *(float *)(iVar28 + 0x14 + iVar27) * fVar6;
          local_30 = *(float *)(iVar28 + iVar27) * fVar8 +
                     *(float *)(iVar28 + iVar33) * fVar7 +
                     *(float *)(iVar25 + iVar33) * fVar13 + *(float *)(iVar25 + iVar27) * fVar6;
          local_24 = *(float *)(iVar28 + 0xc + iVar33) * fVar7 +
                     *(float *)(iVar28 + 0x1c + iVar33) * fVar13 +
                     *(float *)(iVar28 + 0xc + iVar27) * fVar8 +
                     *(float *)(iVar28 + 0x1c + iVar27) * fVar6;
        }
        if (in_stack_00000030 == 0) {
          *pfVar35 = (local_30 - *pfVar35) * fVar5 + *pfVar35;
          pfVar35[1] = (local_2c - pfVar35[1]) * fVar5 + pfVar35[1];
          pfVar35[2] = (local_28 - pfVar35[2]) * fVar5 + pfVar35[2];
          pfVar35[3] = (local_24 - pfVar35[3]) * fVar5 + pfVar35[3];
        }
        else {
          *pfVar35 = local_30;
          pfVar35[1] = local_2c;
          pfVar35[2] = local_28;
          pfVar35[3] = local_24;
        }
      }
      uVar32 = uVar32 + iVar26;
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar16);
  }
  if (1 < iVar21) {
    if (2 < iVar21) {
      lVar2 = (longlong)iVar26 * (longlong)iVar19;
      uVar32 = uVar32 + (((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar26);
    }
    iVar15 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
    uVar32 = uVar32 & 0x80003fff;
    if ((int)uVar32 < 0) {
      uVar32 = (uVar32 - 1 | 0xffffc000) + 1;
    }
    fVar6 = (float)(int)uVar32 * _DAT_0049edb8;
    iVar26 = iVar15 * *(int *)(in_stack_00000028 + 0x38) + *(int *)(in_stack_00000028 + 0x34);
    fVar3 = (float)iVar19 * _DAT_0049edb8;
    iVar15 = ((uint)(iVar15 != iVar18) + iVar15) * *(int *)(in_stack_00000028 + 0x38) +
             *(int *)(in_stack_00000028 + 0x34);
    in_stack_0000001c = fVar4 * fVar3;
    uVar32 = *(uint *)(in_stack_00000028 + 0x40);
    local_20 = (float *)(iVar16 * *(int *)(in_stack_00000028 + 8) + iVar22 +
                        *(int *)(in_stack_00000028 + 4));
    if (iVar23 < iVar30) {
      fVar4 = _DAT_0049e758 - fVar6;
      local_4c = iVar23;
      do {
        iVar21 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
        uVar24 = uVar32 & 0x80003fff;
        if ((int)uVar24 < 0) {
          uVar24 = (uVar24 - 1 | 0xffffc000) + 1;
        }
        iVar34 = ((uint)(iVar21 != iVar17 + -1) + iVar21) * 0x10;
        iVar21 = iVar21 * 0x10;
        fVar7 = (float)(int)uVar24 * _DAT_0049edb8;
        fVar12 = fVar4 * (_DAT_0049e758 - fVar7);
        fVar8 = fVar4 * fVar7;
        fVar13 = (_DAT_0049e758 - fVar7) * fVar6;
        fVar7 = fVar7 * fVar6;
        fVar11 = *(float *)(iVar34 + 8 + iVar15) * fVar7 +
                 *(float *)(iVar34 + 8 + iVar26) * fVar8 +
                 *(float *)(iVar21 + 8 + iVar15) * fVar13 + *(float *)(iVar21 + 8 + iVar26) * fVar12
        ;
        fVar10 = *(float *)(iVar34 + 4 + iVar15) * fVar7 +
                 *(float *)(iVar34 + 4 + iVar26) * fVar8 +
                 *(float *)(iVar21 + 4 + iVar15) * fVar13 + *(float *)(iVar21 + 4 + iVar26) * fVar12
        ;
        fVar9 = *(float *)(iVar34 + iVar26) * fVar8 +
                *(float *)(iVar21 + iVar15) * fVar13 +
                *(float *)(iVar34 + iVar15) * fVar7 + *(float *)(iVar21 + iVar26) * fVar12;
        fVar7 = *(float *)(iVar34 + 0xc + iVar15) * fVar7 +
                *(float *)(iVar34 + 0xc + iVar26) * fVar8 +
                *(float *)(iVar21 + 0xc + iVar15) * fVar13 +
                *(float *)(iVar21 + 0xc + iVar26) * fVar12;
        if (in_stack_00000030 == 0) {
          *local_20 = (fVar9 - *local_20) * in_stack_0000001c + *local_20;
          local_20[1] = (fVar10 - local_20[1]) * in_stack_0000001c + local_20[1];
          local_20[2] = (fVar11 - local_20[2]) * in_stack_0000001c + local_20[2];
          local_20[3] = (fVar7 - local_20[3]) * in_stack_0000001c + local_20[3];
        }
        else {
          *local_20 = fVar9;
          local_20[1] = fVar10;
          local_20[2] = fVar11;
          local_20[3] = fVar7;
        }
        uVar24 = uVar1;
        if (local_4c == iVar23) {
          uVar24 = (uint)((longlong)local_40 * (longlong)(int)uVar1) >> 0xe |
                   (int)((ulonglong)((longlong)local_40 * (longlong)(int)uVar1) >> 0x20) << 0x12;
          in_stack_0000001c = fVar3;
        }
        uVar32 = uVar32 + uVar24;
        local_20 = local_20 + 4;
        local_4c = local_4c + 1;
      } while (local_4c < iVar30);
    }
    if (1 < iVar31) {
      if (2 < iVar31) {
        uVar32 = uVar32 + (((uint)((longlong)(int)uVar1 * (longlong)iVar20) >> 0xe |
                           (int)((ulonglong)((longlong)(int)uVar1 * (longlong)iVar20) >> 0x20) <<
                           0x12) - uVar1);
      }
      iVar21 = (int)(uVar32 + ((int)uVar32 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar32 = uVar32 & 0x80003fff;
      if ((int)uVar32 < 0) {
        uVar32 = (uVar32 - 1 | 0xffffc000) + 1;
      }
      iVar34 = ((uint)(iVar21 != iVar17 + -1) + iVar21) * 0x10;
      iVar21 = iVar21 * 0x10;
      fVar4 = (float)(int)uVar32 * _DAT_0049edb8;
      fVar8 = (_DAT_0049e758 - fVar6) * (_DAT_0049e758 - fVar4);
      fVar7 = (_DAT_0049e758 - fVar6) * fVar4;
      fVar11 = (_DAT_0049e758 - fVar4) * fVar6;
      fVar4 = fVar4 * fVar6;
      fVar10 = *(float *)(iVar34 + 8 + iVar15) * fVar4 +
               *(float *)(iVar34 + 8 + iVar26) * fVar7 +
               *(float *)(iVar21 + 8 + iVar15) * fVar11 + *(float *)(iVar21 + 8 + iVar26) * fVar8;
      fVar9 = *(float *)(iVar34 + 4 + iVar15) * fVar4 +
              *(float *)(iVar34 + 4 + iVar26) * fVar7 +
              *(float *)(iVar21 + 4 + iVar15) * fVar11 + *(float *)(iVar21 + 4 + iVar26) * fVar8;
      fVar6 = *(float *)(iVar34 + iVar15) * fVar4 +
              *(float *)(iVar21 + iVar26) * fVar8 +
              *(float *)(iVar34 + iVar26) * fVar7 + *(float *)(iVar21 + iVar15) * fVar11;
      fVar4 = *(float *)(iVar34 + 0xc + iVar15) * fVar4 +
              *(float *)(iVar34 + 0xc + iVar26) * fVar7 +
              *(float *)(iVar21 + 0xc + iVar15) * fVar11 + *(float *)(iVar21 + 0xc + iVar26) * fVar8
      ;
      fVar3 = fVar3 * fVar5;
      if (in_stack_00000030 != 0) {
        *local_20 = fVar6;
        local_20[1] = fVar9;
        local_20[2] = fVar10;
        local_20[3] = fVar4;
        return;
      }
      *local_20 = fVar3 * (fVar6 - *local_20) + *local_20;
      local_20[1] = fVar3 * (fVar9 - local_20[1]) + local_20[1];
      local_20[2] = fVar3 * (fVar10 - local_20[2]) + local_20[2];
      local_20[3] = fVar3 * (fVar4 - local_20[3]) + local_20[3];
    }
  }
  return;
}


