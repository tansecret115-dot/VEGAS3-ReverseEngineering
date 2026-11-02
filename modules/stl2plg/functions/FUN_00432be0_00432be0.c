/* Module: stl2plg.dll
   Function: FUN_00432be0
   Address: 00432be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432be0(void)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int in_stack_00000018;
  int in_stack_00000028;
  int in_stack_00000030;
  double local_120;
  double local_118 [7];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  int local_78;
  uint local_74;
  float *local_70;
  int local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [4];
  int local_34;
  int local_30;
  int local_2c;
  float *local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_48 = *(int *)(in_stack_00000028 + 0x68);
  local_4c = *(int *)(in_stack_00000028 + 0x6c);
  local_34 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = *(int *)(in_stack_00000028 + 0x18);
  iVar5 = (iVar6 - 1U | 0x3fff) + 1;
  iVar13 = *(int *)(in_stack_00000028 + 0x1c);
  local_50 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  local_1c = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar13 - 1U | 0x3fff) + 1;
  local_6c = (local_34 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_90 = iVar6 + local_50 * -0x4000 + 0x4000;
  local_8 = (int *)((local_1c + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14));
  local_88 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  local_7c = iVar13 + local_88 * -0x4000 + 0x4000;
  if (local_88 - local_1c < 2) {
    local_8 = (int *)(iVar13 - *(int *)(in_stack_00000028 + 0x14));
  }
  if (local_50 - local_34 < 2) {
    local_6c = iVar6 - *(int *)(in_stack_00000028 + 0x10);
  }
  dVar1 = _DAT_00464ad8 / ((double)*(int *)(in_stack_00000028 + 0x68) * _DAT_0046cb98);
  local_24 = *(int *)(in_stack_00000028 + 0x6c) / 2 + 0x2000 + *(int *)(in_stack_00000028 + 0x44);
  local_10 = (int)local_8;
  if (local_1c < local_88) {
    local_78 = local_34 << 4;
    do {
      local_20 = *(uint *)(in_stack_00000028 + 0x40);
      local_18 = local_6c;
      local_c = (int)(local_24 + ((int)local_24 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar10 = local_24 & 0x80003fff;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffc000) + 1;
      }
      iVar13 = *(int *)(in_stack_00000018 + 4);
      local_28 = (float *)(*(int *)(in_stack_00000028 + 8) * local_1c + local_78 +
                          *(int *)(in_stack_00000028 + 4));
      iVar6 = local_c + -2;
      pfVar11 = (float *)(&DAT_00478b0c + ((int)uVar10 >> 2) * 0x10);
      local_70 = pfVar11;
      if (iVar6 < 0) {
        local_44[0] = 0;
      }
      else {
        local_44[0] = iVar13 + -1;
        if (iVar6 <= iVar13 + -1) {
          local_44[0] = iVar6;
        }
      }
      iVar6 = local_c + -1;
      if (iVar6 < 0) {
        local_44[1] = 0;
      }
      else {
        local_44[1] = iVar13 + -1;
        if (iVar6 <= iVar13 + -1) {
          local_44[1] = iVar6;
        }
      }
      if (local_c < 0) {
        local_44[2] = 0;
      }
      else {
        local_44[2] = iVar13 + -1;
        if (local_c <= iVar13 + -1) {
          local_44[2] = local_c;
        }
      }
      iVar6 = local_c + 1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (iVar13 + -1 < iVar6) {
        iVar6 = iVar13 + -1;
      }
      if (local_c < 0) {
        local_c = 0;
      }
      else if (iVar13 + -1 < local_c) {
        local_c = iVar13 + -1;
      }
      local_44[3] = iVar6 - local_c;
      local_44[0] = local_44[0] - local_c;
      local_44[1] = local_44[1] - local_c;
      local_44[2] = local_44[2] - local_c;
      local_2c = local_34;
      if (local_34 < local_50) {
        do {
          local_14 = (uint)((longlong)local_18 * (longlong)local_48) >> 0xe |
                     (int)((ulonglong)((longlong)local_18 * (longlong)local_48) >> 0x20) << 0x12;
          iVar13 = (int)((local_20 & 0xffffc000) + ((int)local_20 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar6 = ((local_14 - 1) + local_20 | 0x3fff) + 1;
          local_8c = iVar13 + 1;
          iVar6 = (int)((iVar6 >> 0x1f & 0x3fffU) + iVar6) >> 0xe;
          local_64 = iVar6 - iVar13;
          local_8 = (int *)((iVar13 + 1) * 0x4000 - local_20);
          if (iVar6 - iVar13 < 2) {
            local_8 = (int *)local_14;
          }
          fVar2 = (float)(int)local_8 * _DAT_0046a068;
          fVar3 = (float)(int)(local_14 + iVar6 * -0x4000 + 0x4000 + local_20) * _DAT_0046a068;
          if (0 < (int)local_14) {
            local_120 = _DAT_00464ad8 / ((double)(int)local_14 * _DAT_0046cb98);
          }
          local_30 = 4;
          pdVar7 = local_118;
          for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pdVar7 = 0;
            pdVar7 = (double *)((int)pdVar7 + 4);
          }
          iVar13 = iVar13 * 0x10;
          local_94 = *(int *)(in_stack_00000028 + 0x38);
          local_98 = *(int *)(in_stack_00000028 + 0x34);
          local_68 = iVar6 + -1;
          pdVar7 = local_118 + 1;
          local_8 = local_44;
          do {
            iVar5 = local_68;
            iVar6 = local_8c;
            iVar8 = (local_c + *local_8) * local_94 + local_98;
            pdVar7[-1] = (double)(fVar2 * *(float *)(iVar8 + iVar13) + (float)pdVar7[-1]);
            *pdVar7 = (double)(fVar2 * *(float *)(iVar13 + 4 + iVar8) + (float)*pdVar7);
            pdVar7[1] = (double)(fVar2 * *(float *)(iVar13 + 8 + iVar8) + (float)pdVar7[1]);
            pdVar7[2] = (double)(fVar2 * *(float *)(iVar13 + 0xc + iVar8) + (float)pdVar7[2]);
            if (iVar6 < iVar5) {
              iVar5 = iVar6 * 0x10;
              iVar12 = local_68 - iVar6;
              iVar6 = iVar6 + iVar12;
              pfVar9 = (float *)(iVar5 + 8 + iVar8);
              do {
                iVar12 = iVar12 + -1;
                pdVar7[-1] = (double)(pfVar9[-2] + (float)pdVar7[-1]);
                *pdVar7 = (double)(pfVar9[-1] + (float)*pdVar7);
                pdVar7[1] = (double)(*pfVar9 + (float)pdVar7[1]);
                pdVar7[2] = (double)(pfVar9[1] + (float)pdVar7[2]);
                pfVar9 = pfVar9 + 4;
                pfVar11 = local_70;
              } while (iVar12 != 0);
            }
            if (1 < local_64) {
              pfVar9 = (float *)(iVar8 + iVar6 * 0x10);
              pdVar7[-1] = (double)(fVar3 * *pfVar9 + (float)pdVar7[-1]);
              *pdVar7 = (double)(fVar3 * pfVar9[1] + (float)*pdVar7);
              pdVar7[1] = (double)(fVar3 * pfVar9[2] + (float)pdVar7[1]);
              pdVar7[2] = (double)(fVar3 * pfVar9[3] + (float)pdVar7[2]);
            }
            pdVar7 = pdVar7 + 4;
            local_30 = local_30 + -1;
            local_8 = local_8 + 1;
          } while (local_30 != 0);
          if (((local_18 == 0x4000) && (local_10 == 0x4000)) || (in_stack_00000030 != 0)) {
            fVar4 = (float)dVar1;
            fVar2 = (pfVar11[1] * (float)local_118[4] +
                    pfVar11[2] * (float)local_d8 +
                    *pfVar11 * (float)local_118[0] + pfVar11[3] * (float)local_b8) * fVar4;
            fVar3 = _DAT_0046a064;
            if ((_DAT_0046a064 <= fVar2) && (fVar3 = fVar2, _DAT_00464af0 < fVar2)) {
              fVar3 = _DAT_00464af0;
            }
            *local_28 = fVar3;
            fVar2 = (pfVar11[1] * (float)local_118[5] +
                    pfVar11[2] * (float)local_d0 +
                    *pfVar11 * (float)local_118[1] + pfVar11[3] * (float)local_b0) * fVar4;
            fVar3 = _DAT_0046a064;
            if ((_DAT_0046a064 <= fVar2) && (fVar3 = fVar2, _DAT_00464af0 < fVar2)) {
              fVar3 = _DAT_00464af0;
            }
            local_28[1] = fVar3;
            fVar2 = (pfVar11[1] * (float)local_118[6] +
                    pfVar11[2] * (float)local_c8 +
                    *pfVar11 * (float)local_118[2] + pfVar11[3] * (float)local_a8) * fVar4;
            fVar3 = _DAT_0046a064;
            if ((_DAT_0046a064 <= fVar2) && (fVar3 = fVar2, _DAT_00464af0 < fVar2)) {
              fVar3 = _DAT_00464af0;
            }
            local_28[2] = fVar3;
            fVar4 = (pfVar11[1] * (float)local_e0 +
                    pfVar11[2] * (float)local_c0 +
                    *pfVar11 * (float)local_118[3] + pfVar11[3] * (float)local_a0) * fVar4;
            fVar2 = _DAT_0046a064;
            if ((_DAT_0046a064 <= fVar4) && (fVar2 = fVar4, _DAT_00464af0 < fVar4)) {
              fVar2 = _DAT_00464af0;
            }
            local_28[3] = fVar2;
          }
          else if (0 < (int)local_14) {
            local_80 = (uint)((longlong)local_18 * (longlong)local_10) >> 0xe |
                       (int)((ulonglong)((longlong)local_18 * (longlong)local_10) >> 0x20) << 0x12;
            fVar2 = (float)(int)local_80 * _DAT_0046a068;
            fVar3 = (float)local_120;
            local_60 = (pfVar11[1] * (float)local_118[4] +
                       pfVar11[2] * (float)local_d8 +
                       *pfVar11 * (float)local_118[0] + pfVar11[3] * (float)local_b8) * fVar3;
            if (_DAT_0046a064 <= local_60) {
              if (local_60 <= _DAT_00464af0) {
              }
              else {
                local_60 = 1.0;
              }
            }
            else {
              local_60 = 0.0;
            }
            local_5c = (pfVar11[1] * (float)local_118[5] +
                       pfVar11[2] * (float)local_d0 +
                       *pfVar11 * (float)local_118[1] + pfVar11[3] * (float)local_b0) * fVar3;
            if (_DAT_0046a064 <= local_5c) {
              if (local_5c <= _DAT_00464af0) {
              }
              else {
                local_5c = 1.0;
              }
            }
            else {
              local_5c = 0.0;
            }
            local_58 = (pfVar11[1] * (float)local_118[6] +
                       pfVar11[2] * (float)local_c8 +
                       *pfVar11 * (float)local_118[2] + pfVar11[3] * (float)local_a8) * fVar3;
            if (_DAT_0046a064 <= local_58) {
              if (local_58 <= _DAT_00464af0) {
              }
              else {
                local_58 = 1.0;
              }
            }
            else {
              local_58 = 0.0;
            }
            fVar3 = (pfVar11[1] * (float)local_e0 +
                    pfVar11[2] * (float)local_c0 +
                    *pfVar11 * (float)local_118[3] + pfVar11[3] * (float)local_a0) * fVar3;
            fVar4 = _DAT_0046a064;
            if ((_DAT_0046a064 <= fVar3) && (fVar4 = fVar3, _DAT_00464af0 < fVar3)) {
              fVar4 = _DAT_00464af0;
            }
            *local_28 = fVar2 * (local_60 - *local_28) + *local_28;
            local_28[1] = fVar2 * (local_5c - local_28[1]) + local_28[1];
            local_28[2] = fVar2 * (local_58 - local_28[2]) + local_28[2];
            local_28[3] = fVar2 * (fVar4 - local_28[3]) + local_28[3];
          }
          local_28 = local_28 + 4;
          if (local_2c == local_50 + -2) {
            local_84 = (uint)((longlong)local_18 * (longlong)local_48) >> 0xe |
                       (int)((ulonglong)((longlong)local_18 * (longlong)local_48) >> 0x20) << 0x12;
            local_20 = local_20 + local_84;
            local_18 = local_90;
          }
          else {
            local_18 = 0x4000;
            local_20 = local_14 + local_20;
          }
          local_2c = local_2c + 1;
        } while (local_2c < local_50);
      }
      if (local_1c == local_88 + -2) {
        local_74 = (uint)((longlong)local_10 * (longlong)local_4c) >> 0xe |
                   (int)((ulonglong)((longlong)local_10 * (longlong)local_4c) >> 0x20) << 0x12;
        local_24 = local_24 + local_74;
        local_10 = local_7c;
      }
      else {
        local_10 = 0x4000;
        local_24 = local_24 + local_4c;
      }
      local_1c = local_1c + 1;
    } while (local_1c < local_88);
  }
  return;
}


