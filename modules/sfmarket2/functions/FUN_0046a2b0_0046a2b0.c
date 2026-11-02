/* Module: sfmarket2.dll
   Function: FUN_0046a2b0
   Address: 0046a2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a2b0(void)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  double *pdVar21;
  int iVar22;
  uint in_stack_00000028;
  int in_stack_00000030;
  double local_6c;
  double local_64;
  double local_5c;
  double local_54;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  float *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar9 = in_stack_00000028;
  local_48 = *(uint *)(in_stack_00000028 + 0x60);
  local_1c = *(int *)(in_stack_00000028 + 0x6c);
  iVar2 = *(int *)(in_stack_00000028 + 0x18);
  local_4c = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (iVar2 - 1U | 0x3fff) + 1;
  local_28 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = *(int *)(in_stack_00000028 + 0x1c);
  local_14 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar11 = (iVar10 - 1U | 0x3fff) + 1;
  iVar20 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar12 = (*(int *)(in_stack_00000028 + 0x48) - 1U | 0x3fff) + 1;
  local_40 = (local_4c + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  iVar11 = local_28 * -0x4000;
  local_8 = (local_14 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  if (iVar20 - local_14 < 2) {
    local_8 = iVar10 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (local_28 - local_4c < 2) {
    local_40 = iVar2 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_2c = *(uint *)(in_stack_00000028 + 0x44);
  local_30 = _DAT_0049e758 / ((float)local_1c * _DAT_0049edb8);
  if (local_14 < iVar20) {
    iVar18 = local_4c * 0x10;
    do {
      local_c = *(uint *)(iVar9 + 0x40);
      local_20 = local_40;
      local_18 = (float *)(*(int *)(iVar9 + 8) * local_14 + *(int *)(iVar9 + 4) + iVar18);
      local_10 = (uint)((longlong)local_8 * (longlong)local_1c) >> 0xe |
                 (int)((ulonglong)((longlong)local_8 * (longlong)local_1c) >> 0x20) << 0x12;
      iVar14 = (int)((local_2c & 0xffffc000) + ((int)local_2c >> 0x1f & 0x3fffU)) >> 0xe;
      iVar13 = ((local_10 - 1) + local_2c | 0x3fff) + 1;
      iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
      in_stack_00000028 = (iVar14 + 1) * 0x4000 - local_2c;
      if (iVar13 - iVar14 < 2) {
        in_stack_00000028 = local_10;
      }
      local_34 = (float)(int)in_stack_00000028 * _DAT_0049edb8;
      local_24 = (float)(int)(local_10 + iVar13 * -0x4000 + 0x4000 + local_2c) * _DAT_0049edb8;
      if (0 < (int)local_10) {
        local_38 = _DAT_0049e758 / ((float)(int)local_10 * _DAT_0049edb8);
      }
      local_44 = local_4c;
      if (local_4c < local_28) {
        do {
          bVar3 = (int)(((int)local_c >> 0x1f & 0x3fffU) + local_c) >> 0xe <
                  ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe) + -1;
          if (!bVar3) {
            local_c = (*(int *)(iVar9 + 0x48) - 1U | 0x3fff) - 0x3fff;
          }
          pdVar21 = &local_6c;
          for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(undefined4 *)pdVar21 = 0;
            pdVar21 = (double *)((int)pdVar21 + 4);
          }
          iVar15 = (int)(local_c + ((int)local_c >> 0x1f & 0x3fffU)) >> 0xe;
          uVar16 = local_c & 0x80003fff;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xffffc000) + 1;
          }
          fVar8 = (float)(int)uVar16 * _DAT_0049edb8;
          iVar17 = *(int *)(iVar9 + 0x38) * iVar14 + *(int *)(iVar9 + 0x34);
          iVar19 = ((uint)bVar3 + iVar15) * 0x10;
          iVar15 = iVar15 * 0x10;
          fVar4 = ((*(float *)(iVar19 + iVar17) - *(float *)(iVar15 + iVar17)) * fVar8 +
                  *(float *)(iVar15 + iVar17)) * local_34 + (float)local_6c;
          fVar5 = ((*(float *)(iVar19 + 4 + iVar17) - *(float *)(iVar15 + 4 + iVar17)) * fVar8 +
                  *(float *)(iVar15 + 4 + iVar17)) * local_34 + (float)local_64;
          fVar6 = ((*(float *)(iVar19 + 8 + iVar17) - *(float *)(iVar15 + 8 + iVar17)) * fVar8 +
                  *(float *)(iVar15 + 8 + iVar17)) * local_34 + (float)local_5c;
          fVar7 = ((*(float *)(iVar19 + 0xc + iVar17) - *(float *)(iVar15 + 0xc + iVar17)) * fVar8 +
                  *(float *)(iVar15 + 0xc + iVar17)) * local_34 + (float)local_54;
          if (iVar14 + 1 < iVar13 + -1) {
            iVar22 = (iVar13 + -1) - (iVar14 + 1);
            do {
              iVar17 = iVar17 + *(int *)(iVar9 + 0x38);
              iVar22 = iVar22 + -1;
              fVar4 = (*(float *)(iVar19 + iVar17) - *(float *)(iVar15 + iVar17)) * fVar8 +
                      *(float *)(iVar15 + iVar17) + fVar4;
              fVar5 = (*(float *)(iVar19 + 4 + iVar17) - *(float *)(iVar15 + 4 + iVar17)) * fVar8 +
                      *(float *)(iVar15 + 4 + iVar17) + fVar5;
              fVar6 = (*(float *)(iVar19 + 8 + iVar17) - *(float *)(iVar15 + 8 + iVar17)) * fVar8 +
                      *(float *)(iVar15 + 8 + iVar17) + fVar6;
              fVar7 = (*(float *)(iVar19 + 0xc + iVar17) - *(float *)(iVar15 + 0xc + iVar17)) *
                      fVar8 + *(float *)(iVar15 + 0xc + iVar17) + fVar7;
            } while (iVar22 != 0);
          }
          if (1 < iVar13 - iVar14) {
            iVar17 = iVar17 + *(int *)(iVar9 + 0x38);
            fVar4 = ((*(float *)(iVar19 + iVar17) - *(float *)(iVar15 + iVar17)) * fVar8 +
                    *(float *)(iVar15 + iVar17)) * local_24 + fVar4;
            fVar5 = ((*(float *)(iVar19 + 4 + iVar17) - *(float *)(iVar15 + 4 + iVar17)) * fVar8 +
                    *(float *)(iVar15 + 4 + iVar17)) * local_24 + fVar5;
            pfVar1 = (float *)(iVar15 + 0xc + iVar17);
            fVar6 = ((*(float *)(iVar19 + 8 + iVar17) - *(float *)(iVar15 + 8 + iVar17)) * fVar8 +
                    *(float *)(iVar15 + 8 + iVar17)) * local_24 + fVar6;
            fVar7 = ((*(float *)(iVar19 + 0xc + iVar17) - *pfVar1) * fVar8 + *pfVar1) * local_24 +
                    fVar7;
          }
          local_54 = (double)fVar7;
          local_5c = (double)fVar6;
          local_64 = (double)fVar5;
          local_6c = (double)fVar4;
          if (((local_8 == 0x4000) && (local_20 == 0x4000)) || (in_stack_00000030 != 0)) {
            *local_18 = local_30 * fVar4;
            local_18[1] = local_30 * fVar5;
            local_18[2] = local_30 * fVar6;
            local_18[3] = local_30 * fVar7;
          }
          else if (local_10 != 0) {
            fVar8 = (float)(int)((uint)((longlong)local_20 * (longlong)local_8) >> 0xe |
                                (int)((ulonglong)((longlong)local_20 * (longlong)local_8) >> 0x20)
                                << 0x12) * _DAT_0049edb8;
            *local_18 = fVar8 * (local_38 * fVar4 - *local_18) + *local_18;
            local_18[1] = fVar8 * (local_38 * fVar5 - local_18[1]) + local_18[1];
            local_18[2] = fVar8 * (local_38 * fVar6 - local_18[2]) + local_18[2];
            local_18[3] = fVar8 * (local_38 * fVar7 - local_18[3]) + local_18[3];
          }
          local_18 = local_18 + 4;
          if (local_44 == local_4c) {
            local_20 = iVar2 + iVar11 + 0x4000;
            uVar16 = (uint)((longlong)local_40 * (longlong)(int)local_48) >> 0xe |
                     (int)((ulonglong)((longlong)local_40 * (longlong)(int)local_48) >> 0x20) <<
                     0x12;
          }
          else {
            local_20 = 0x4000;
            uVar16 = local_48;
          }
          local_c = local_c + uVar16;
          local_44 = local_44 + 1;
        } while (local_44 < local_28);
      }
      if (local_14 == iVar20 + -2) {
        local_10 = (uint)((longlong)local_8 * (longlong)local_1c) >> 0xe |
                   (int)((ulonglong)((longlong)local_8 * (longlong)local_1c) >> 0x20) << 0x12;
        local_8 = iVar10 + iVar20 * -0x4000 + 0x4000;
      }
      else {
        local_8 = 0x4000;
      }
      local_2c = local_2c + local_10;
      local_14 = local_14 + 1;
    } while (local_14 < iVar20);
  }
  return;
}


