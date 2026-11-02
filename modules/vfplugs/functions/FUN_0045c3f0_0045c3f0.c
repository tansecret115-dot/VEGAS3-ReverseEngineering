/* Module: vfplugs.dll
   Function: FUN_0045c3f0
   Address: 0045c3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045c3f0(void)

{
  double dVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  int in_stack_00000028;
  int in_stack_00000030;
  int local_b8 [2];
  double local_b0 [7];
  double local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  float *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  float local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_28 = *(int *)(in_stack_00000028 + 0x68);
  local_40 = *(int *)(in_stack_00000028 + 100);
  iVar6 = *(int *)(in_stack_00000028 + 0x18);
  iVar9 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
               ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  local_5c = iVar9;
  iVar4 = (iVar6 - 1U | 0x3fff) + 1;
  local_34 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = *(int *)(in_stack_00000028 + 0x1c);
  local_1c = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (iVar4 - 1U | 0x3fff) + 1;
  local_48 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (*(int *)(in_stack_00000028 + 0x4c) - 1U | 0x3fff) + 1;
  local_3c = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  local_4c = (iVar9 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_58 = iVar6 + local_34 * -0x4000 + 0x4000;
  local_14 = (local_1c + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  dVar1 = _DAT_00487590 / ((double)*(int *)(in_stack_00000028 + 0x68) * _DAT_0048ca38);
  local_64 = iVar4 + local_48 * -0x4000 + 0x4000;
  if (local_48 - local_1c < 2) {
    local_14 = iVar4 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (local_34 - iVar9 < 2) {
    local_4c = iVar6 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_20 = *(uint *)(in_stack_00000028 + 0x44);
  local_c = local_14;
  if (local_1c < local_48) {
    local_70 = iVar9 << 4;
    local_6c = local_3c + -1;
    do {
      local_2c = (float *)(*(int *)(in_stack_00000028 + 8) * local_1c +
                           *(int *)(in_stack_00000028 + 4) + local_70);
      local_14 = *(uint *)(in_stack_00000028 + 0x40);
      local_10 = local_4c;
      if (local_6c <= (int)(local_20 + ((int)local_20 >> 0x1f & 0x3fffU)) >> 0xe) {
        local_20 = (*(int *)(in_stack_00000028 + 0x4c) - 1U | 0x3fff) - 0x3fff;
      }
      local_8 = (int *)(uint)(local_1c != local_48 + -1);
      iVar6 = (int)(local_20 + ((int)local_20 >> 0x1f & 0x3fffU)) >> 0xe;
      uVar10 = local_20 & 0x80003fff;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffc000) + 1;
      }
      local_24 = iVar9;
      local_b8[0] = *(int *)(in_stack_00000028 + 0x38) * iVar6 + *(int *)(in_stack_00000028 + 0x34);
      local_b8[1] = (iVar6 + (int)local_8) * *(int *)(in_stack_00000028 + 0x38) +
                    *(int *)(in_stack_00000028 + 0x34);
      local_18 = (float)(int)uVar10 * _DAT_0048ca0c;
      if (iVar9 < local_34) {
        do {
          local_30 = (uint)((longlong)local_10 * (longlong)local_28) >> 0xe |
                     (int)((ulonglong)((longlong)local_10 * (longlong)local_28) >> 0x20) << 0x12;
          iVar9 = (int)((local_14 & 0xffffc000) + ((int)local_14 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar6 = ((local_30 - 1) + local_14 | 0x3fff) + 1;
          local_60 = iVar9 + 1;
          iVar6 = (int)((iVar6 >> 0x1f & 0x3fffU) + iVar6) >> 0xe;
          iVar4 = local_30 + iVar6 * -0x4000 + 0x4000 + local_14;
          local_68 = iVar6 - iVar9;
          local_8 = (int *)((iVar9 + 1) * 0x4000 - local_14);
          if (iVar6 - iVar9 < 2) {
            local_8 = (int *)local_30;
          }
          fVar2 = (float)(int)local_8 * _DAT_0048ca0c;
          pdVar7 = local_b0;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pdVar7 = 0;
            pdVar7 = (double *)((int)pdVar7 + 4);
          }
          fVar3 = (float)iVar4 * _DAT_0048ca0c;
          iVar9 = iVar9 * 0x10;
          iVar6 = iVar6 + -1;
          local_54 = iVar6;
          local_8 = local_b8;
          pdVar7 = local_b0 + 1;
          local_38 = 2;
          do {
            iVar5 = local_60;
            iVar4 = *local_8;
            pdVar7[-1] = (double)(fVar2 * *(float *)(iVar4 + iVar9) + (float)pdVar7[-1]);
            *pdVar7 = (double)(fVar2 * *(float *)(iVar4 + 4 + iVar9) + (float)*pdVar7);
            pdVar7[1] = (double)(fVar2 * *(float *)(iVar4 + 8 + iVar9) + (float)pdVar7[1]);
            pdVar7[2] = (double)(fVar2 * *(float *)(iVar4 + 0xc + iVar9) + (float)pdVar7[2]);
            if (iVar5 < iVar6) {
              iVar11 = iVar6 - iVar5;
              iVar6 = iVar5 * 0x10;
              iVar5 = iVar5 + iVar11;
              pfVar8 = (float *)(iVar6 + iVar4);
              do {
                iVar11 = iVar11 + -1;
                pdVar7[-1] = (double)(*pfVar8 + (float)pdVar7[-1]);
                *pdVar7 = (double)(pfVar8[1] + (float)*pdVar7);
                pdVar7[1] = (double)(pfVar8[2] + (float)pdVar7[1]);
                pdVar7[2] = (double)(pfVar8[3] + (float)pdVar7[2]);
                pfVar8 = pfVar8 + 4;
                iVar6 = local_54;
              } while (iVar11 != 0);
            }
            if (1 < local_68) {
              pfVar8 = (float *)(iVar4 + iVar5 * 0x10);
              pdVar7[-1] = (double)(fVar3 * *pfVar8 + (float)pdVar7[-1]);
              *pdVar7 = (double)(fVar3 * pfVar8[1] + (float)*pdVar7);
              pdVar7[1] = (double)(fVar3 * pfVar8[2] + (float)pdVar7[1]);
              pdVar7[2] = (double)(fVar3 * pfVar8[3] + (float)pdVar7[2]);
            }
            pdVar7 = pdVar7 + 4;
            local_38 = local_38 + -1;
            local_8 = local_8 + 1;
          } while (local_38 != 0);
          if (((local_10 == 0x4000) && (local_c == 0x4000)) || (in_stack_00000030 != 0)) {
            fVar12 = (float10)dVar1;
            *local_2c = (float)((((float10)local_b0[4] - (float10)local_b0[0]) * (float10)local_18 +
                                (float10)local_b0[0]) * fVar12);
            local_2c[1] = (float)((((float10)local_b0[5] - (float10)local_b0[1]) * (float10)local_18
                                  + (float10)local_b0[1]) * fVar12);
            local_2c[2] = (float)((((float10)local_b0[6] - (float10)local_b0[2]) * (float10)local_18
                                  + (float10)local_b0[2]) * fVar12);
            local_2c[3] = (float)((((float10)local_78 - (float10)local_b0[3]) * (float10)local_18 +
                                  (float10)local_b0[3]) * fVar12);
          }
          else if (0 < (int)local_30) {
            local_44 = (uint)((longlong)local_10 * (longlong)local_c) >> 0xe |
                       (int)((ulonglong)((longlong)local_10 * (longlong)local_c) >> 0x20) << 0x12;
            fVar12 = (float10)(int)local_44 * (float10)_DAT_0048ca0c;
            fVar13 = (float10)_DAT_00487590 / ((float10)(int)local_30 * (float10)_DAT_0048ca38);
            *local_2c = (float)(fVar12 * ((((float10)local_b0[4] - (float10)local_b0[0]) *
                                           (float10)local_18 + (float10)local_b0[0]) * fVar13 -
                                         (float10)*local_2c) + (float10)*local_2c);
            local_2c[1] = (float)(fVar12 * ((((float10)local_b0[5] - (float10)local_b0[1]) *
                                             (float10)local_18 + (float10)local_b0[1]) * fVar13 -
                                           (float10)local_2c[1]) + (float10)local_2c[1]);
            local_2c[2] = (float)(fVar12 * ((((float10)local_b0[6] - (float10)local_b0[2]) *
                                             (float10)local_18 + (float10)local_b0[2]) * fVar13 -
                                           (float10)local_2c[2]) + (float10)local_2c[2]);
            local_2c[3] = (float)(fVar12 * ((((float10)local_78 - (float10)local_b0[3]) *
                                             (float10)local_18 + (float10)local_b0[3]) * fVar13 -
                                           (float10)local_2c[3]) + (float10)local_2c[3]);
          }
          local_2c = local_2c + 4;
          if (local_24 == local_34 + -2) {
            local_50 = (uint)((longlong)local_10 * (longlong)local_28) >> 0xe |
                       (int)((ulonglong)((longlong)local_10 * (longlong)local_28) >> 0x20) << 0x12;
            local_14 = local_14 + local_50;
            local_10 = local_58;
          }
          else {
            local_10 = 0x4000;
            local_14 = local_30 + local_14;
          }
          local_24 = local_24 + 1;
          iVar9 = local_5c;
        } while (local_24 < local_34);
      }
      if (local_1c == local_48 + -2) {
        local_3c = (uint)((longlong)local_c * (longlong)local_40) >> 0xe |
                   (int)((ulonglong)((longlong)local_c * (longlong)local_40) >> 0x20) << 0x12;
        local_20 = local_20 + local_3c;
        local_c = local_64;
      }
      else {
        local_c = 0x4000;
        local_20 = local_20 + local_40;
      }
      local_1c = local_1c + 1;
    } while (local_1c < local_48);
  }
  return;
}


