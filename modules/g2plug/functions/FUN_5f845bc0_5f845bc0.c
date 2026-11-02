/* Module: g2plug.dll
   Function: FUN_5f845bc0
   Address: 5f845bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f845bc0(void)

{
  float *pfVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  int *in_stack_00000018;
  int in_stack_00000028;
  int in_stack_00000030;
  double local_130;
  double local_128 [7];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [4];
  float local_30;
  float *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  float local_10;
  int *local_c;
  int local_8;
  
  local_48 = *(int *)(in_stack_00000028 + 0x68);
  local_50 = *(int *)(in_stack_00000028 + 0x6c);
  iVar9 = *(int *)(in_stack_00000028 + 0x18);
  local_44 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar9 - 1U | 0x3fff) + 1;
  iVar11 = *(int *)(in_stack_00000028 + 0x1c);
  local_5c = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  local_20 = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (iVar11 - 1U | 0x3fff) + 1;
  local_58 = (local_44 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_78 = iVar9 + local_5c * -0x4000 + 0x4000;
  local_1c = (local_20 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  local_4c = (int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe;
  local_8c = iVar11 + local_4c * -0x4000 + 0x4000;
  if (local_4c - local_20 < 2) {
    local_1c = iVar11 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (local_5c - local_44 < 2) {
    local_58 = iVar9 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_24 = *(uint *)(in_stack_00000028 + 0x44);
  dVar3 = _DAT_5f870e28 / ((double)*(int *)(in_stack_00000028 + 0x6c) * _DAT_5f870e88);
  if (local_20 < local_4c) {
    local_a4 = *(int *)(in_stack_00000028 + 0x68) / 2;
    local_a8 = local_44 << 4;
    do {
      local_28 = *(int *)(in_stack_00000028 + 0x40) + 0x2000 + local_a4;
      local_14 = local_58;
      lVar2 = (longlong)local_1c * (longlong)*(int *)(in_stack_00000028 + 0x6c);
      local_18 = (uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12;
      local_9c = (int)((local_24 & 0xffffc000) + ((int)local_24 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar9 = ((local_18 - 1) + local_24 | 0x3fff) + 1;
      local_98 = local_9c + 1;
      iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
      local_74 = iVar9 - local_9c;
      local_10 = (float)((local_9c + 1) * 0x4000 - local_24);
      if (iVar9 - local_9c < 2) {
        local_10 = (float)local_18;
      }
      local_30 = (float)(int)local_10 * _DAT_5f86fd74;
      local_2c = (float *)(*(int *)(in_stack_00000028 + 8) * local_20 +
                           *(int *)(in_stack_00000028 + 4) + local_a8);
      local_10 = (float)(int)(local_18 + iVar9 * -0x4000 + 0x4000 + local_24) * _DAT_5f86fd74;
      if (0 < (int)local_18) {
        local_130 = _DAT_5f870e28 / ((double)(int)local_18 * _DAT_5f870e88);
      }
      local_8 = local_44;
      if (local_44 < local_5c) {
        local_88 = iVar9 + -1;
        do {
          local_7c = (uint)((longlong)local_14 * (longlong)local_48) >> 0xe |
                     (int)((ulonglong)((longlong)local_14 * (longlong)local_48) >> 0x20) << 0x12;
          iVar9 = (int)(local_28 + ((int)local_28 >> 0x1f & 0x3fffU)) >> 0xe;
          uVar13 = local_28 & 0x80003fff;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffc000) + 1;
          }
          iVar14 = (int)uVar13 >> 2;
          iVar8 = *in_stack_00000018;
          iVar11 = iVar9 + -2;
          pfVar15 = (float *)(&DAT_5f878114 + iVar14 * 4);
          if (iVar11 < 0) {
            local_40[0] = 0;
          }
          else {
            local_40[0] = iVar8 + -1;
            if (iVar11 <= iVar8 + -1) {
              local_40[0] = iVar11;
            }
          }
          iVar11 = iVar9 + -1;
          if (iVar11 < 0) {
            local_40[1] = 0;
          }
          else {
            local_40[1] = iVar8 + -1;
            if (iVar11 <= iVar8 + -1) {
              local_40[1] = iVar11;
            }
          }
          if (iVar9 < 0) {
            local_40[2] = 0;
          }
          else {
            local_40[2] = iVar8 + -1;
            if (iVar9 <= iVar8 + -1) {
              local_40[2] = iVar9;
            }
          }
          iVar11 = iVar9 + 1;
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          else if (iVar8 + -1 < iVar11) {
            iVar11 = iVar8 + -1;
          }
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          else if (iVar8 + -1 < iVar9) {
            iVar9 = iVar8 + -1;
          }
          local_40[0] = local_40[0] - iVar9;
          local_40[1] = local_40[1] - iVar9;
          local_40[2] = local_40[2] - iVar9;
          local_40[3] = iVar11 - iVar9;
          pdVar10 = local_128;
          for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
            *(undefined4 *)pdVar10 = 0;
            pdVar10 = (double *)((int)pdVar10 + 4);
          }
          local_54 = *(int *)(in_stack_00000028 + 0x38);
          local_80 = *(int *)(in_stack_00000028 + 0x34);
          local_a0 = *(int *)(in_stack_00000028 + 0x38) * local_9c;
          pdVar10 = local_128 + 1;
          local_c = local_40;
          local_70 = 4;
          do {
            iVar8 = local_88;
            iVar11 = local_98;
            pfVar12 = (float *)((iVar9 + *local_c) * 0x10 + local_80 + local_a0);
            pdVar10[-1] = (double)(local_30 * *pfVar12 + (float)pdVar10[-1]);
            *pdVar10 = (double)(local_30 * pfVar12[1] + (float)*pdVar10);
            pdVar10[1] = (double)(local_30 * pfVar12[2] + (float)pdVar10[1]);
            pdVar10[2] = (double)(local_30 * pfVar12[3] + (float)pdVar10[2]);
            iVar7 = local_54;
            if (iVar11 < iVar8) {
              iVar8 = iVar8 - iVar11;
              do {
                pfVar1 = (float *)((int)pfVar12 + iVar7);
                pfVar12 = (float *)((int)pfVar12 + iVar7);
                iVar8 = iVar8 + -1;
                pdVar10[-1] = (double)(*pfVar1 + (float)pdVar10[-1]);
                *pdVar10 = (double)(pfVar12[1] + (float)*pdVar10);
                pdVar10[1] = (double)(pfVar12[2] + (float)pdVar10[1]);
                pdVar10[2] = (double)(pfVar12[3] + (float)pdVar10[2]);
              } while (iVar8 != 0);
            }
            if (1 < local_74) {
              pdVar10[-1] = (double)(local_10 * *(float *)((int)pfVar12 + iVar7) +
                                    (float)pdVar10[-1]);
              *pdVar10 = (double)(local_10 * *(float *)((int)pfVar12 + iVar7 + 4) + (float)*pdVar10)
              ;
              pdVar10[1] = (double)(local_10 * *(float *)((int)pfVar12 + iVar7 + 8) +
                                   (float)pdVar10[1]);
              pdVar10[2] = (double)(local_10 * *(float *)((int)pfVar12 + iVar7 + 0xc) +
                                   (float)pdVar10[2]);
            }
            pdVar10 = pdVar10 + 4;
            local_70 = local_70 + -1;
            local_c = local_c + 1;
          } while (local_70 != 0);
          if (((local_14 == 0x4000) && (local_1c == 0x4000)) || (in_stack_00000030 != 0)) {
            fVar5 = (float)dVar3;
            fVar4 = ((float)(&DAT_5f878118)[iVar14 * 4] * (float)local_128[4] +
                    *pfVar15 * (float)local_128[0] +
                    (float)(&DAT_5f87811c)[iVar14 * 4] * (float)local_e8 +
                    (float)(&DAT_5f878120)[iVar14 * 4] * (float)local_c8) * fVar5;
            fVar6 = _DAT_5f86fd70;
            if ((_DAT_5f86fd70 <= fVar4) && (fVar6 = fVar4, _DAT_5f86fd6c < fVar4)) {
              fVar6 = _DAT_5f86fd6c;
            }
            *local_2c = fVar6;
            fVar4 = ((float)(&DAT_5f878118)[iVar14 * 4] * (float)local_128[5] +
                    *pfVar15 * (float)local_128[1] +
                    (float)(&DAT_5f87811c)[iVar14 * 4] * (float)local_e0 +
                    (float)(&DAT_5f878120)[iVar14 * 4] * (float)local_c0) * fVar5;
            fVar6 = _DAT_5f86fd70;
            if ((_DAT_5f86fd70 <= fVar4) && (fVar6 = fVar4, _DAT_5f86fd6c < fVar4)) {
              fVar6 = _DAT_5f86fd6c;
            }
            local_2c[1] = fVar6;
            fVar4 = ((float)(&DAT_5f878118)[iVar14 * 4] * (float)local_128[6] +
                    *pfVar15 * (float)local_128[2] +
                    (float)(&DAT_5f87811c)[iVar14 * 4] * (float)local_d8 +
                    (float)(&DAT_5f878120)[iVar14 * 4] * (float)local_b8) * fVar5;
            fVar6 = _DAT_5f86fd70;
            if ((_DAT_5f86fd70 <= fVar4) && (fVar6 = fVar4, _DAT_5f86fd6c < fVar4)) {
              fVar6 = _DAT_5f86fd6c;
            }
            local_2c[2] = fVar6;
            fVar5 = ((float)(&DAT_5f878118)[iVar14 * 4] * (float)local_f0 +
                    *pfVar15 * (float)local_128[3] +
                    (float)(&DAT_5f87811c)[iVar14 * 4] * (float)local_d0 +
                    (float)(&DAT_5f878120)[iVar14 * 4] * (float)local_b0) * fVar5;
            if (_DAT_5f86fd70 <= fVar5) {
              if (_DAT_5f86fd6c < fVar5) {
                fVar5 = _DAT_5f86fd6c;
              }
              local_2c[3] = fVar5;
            }
            else {
              local_2c[3] = _DAT_5f86fd70;
            }
          }
          else if (0 < (int)local_18) {
            local_90 = (uint)((longlong)local_14 * (longlong)local_1c) >> 0xe |
                       (int)((ulonglong)((longlong)local_14 * (longlong)local_1c) >> 0x20) << 0x12;
            fVar4 = (float)(int)local_90 * _DAT_5f86fd74;
            fVar6 = (float)local_130;
            local_6c = ((float)(&DAT_5f878118)[iVar14 * 4] * (float)local_128[4] +
                       *pfVar15 * (float)local_128[0] +
                       (float)(&DAT_5f87811c)[iVar14 * 4] * (float)local_e8 +
                       (float)(&DAT_5f878120)[iVar14 * 4] * (float)local_c8) * fVar6;
            if (_DAT_5f86fd70 <= local_6c) {
              if (local_6c <= _DAT_5f86fd6c) {
              }
              else {
                local_6c = 1.0;
              }
            }
            else {
              local_6c = 0.0;
            }
            local_68 = ((float)(&DAT_5f878118)[iVar14 * 4] * (float)local_128[5] +
                       *pfVar15 * (float)local_128[1] +
                       (float)(&DAT_5f87811c)[iVar14 * 4] * (float)local_e0 +
                       (float)(&DAT_5f878120)[iVar14 * 4] * (float)local_c0) * fVar6;
            if (_DAT_5f86fd70 <= local_68) {
              if (local_68 <= _DAT_5f86fd6c) {
              }
              else {
                local_68 = 1.0;
              }
            }
            else {
              local_68 = 0.0;
            }
            local_64 = ((float)(&DAT_5f878118)[iVar14 * 4] * (float)local_128[6] +
                       *pfVar15 * (float)local_128[2] +
                       (float)(&DAT_5f87811c)[iVar14 * 4] * (float)local_d8 +
                       (float)(&DAT_5f878120)[iVar14 * 4] * (float)local_b8) * fVar6;
            if (_DAT_5f86fd70 <= local_64) {
              if (local_64 <= _DAT_5f86fd6c) {
              }
              else {
                local_64 = 1.0;
              }
            }
            else {
              local_64 = 0.0;
            }
            fVar6 = ((float)(&DAT_5f878118)[iVar14 * 4] * (float)local_f0 +
                    *pfVar15 * (float)local_128[3] +
                    (float)(&DAT_5f87811c)[iVar14 * 4] * (float)local_d0 +
                    (float)(&DAT_5f878120)[iVar14 * 4] * (float)local_b0) * fVar6;
            fVar5 = _DAT_5f86fd70;
            if ((_DAT_5f86fd70 <= fVar6) && (fVar5 = fVar6, _DAT_5f86fd6c < fVar6)) {
              fVar5 = _DAT_5f86fd6c;
            }
            *local_2c = fVar4 * (local_6c - *local_2c) + *local_2c;
            local_2c[1] = fVar4 * (local_68 - local_2c[1]) + local_2c[1];
            local_2c[2] = fVar4 * (local_64 - local_2c[2]) + local_2c[2];
            local_2c[3] = fVar4 * (fVar5 - local_2c[3]) + local_2c[3];
          }
          local_2c = local_2c + 4;
          if (local_8 == local_5c + -2) {
            local_94 = (uint)((longlong)local_14 * (longlong)local_48) >> 0xe |
                       (int)((ulonglong)((longlong)local_14 * (longlong)local_48) >> 0x20) << 0x12;
            local_28 = local_28 + local_94;
            local_14 = local_78;
          }
          else {
            local_28 = local_28 + local_7c;
            local_14 = 0x4000;
          }
          local_8 = local_8 + 1;
        } while (local_8 < local_5c);
      }
      if (local_20 == local_4c + -2) {
        local_84 = (uint)((longlong)local_1c * (longlong)local_50) >> 0xe |
                   (int)((ulonglong)((longlong)local_1c * (longlong)local_50) >> 0x20) << 0x12;
        local_24 = local_24 + local_84;
        local_1c = local_8c;
      }
      else {
        local_1c = 0x4000;
        local_24 = local_24 + local_18;
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_4c);
  }
  return;
}


