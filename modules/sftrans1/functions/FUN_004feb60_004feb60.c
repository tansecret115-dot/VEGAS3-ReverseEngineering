/* Module: sftrans1.dll
   Function: FUN_004feb60
   Address: 004feb60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004ff12e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004feb60(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  double *pdVar23;
  int iVar24;
  int iVar25;
  float10 fVar26;
  float10 fVar27;
  longlong lVar28;
  int in_stack_00000028;
  int in_stack_00000030;
  int local_8c;
  int local_78;
  int iStack_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  float *local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_44 = *(int *)(in_stack_00000028 + 0x68);
  local_3c = *(int *)(in_stack_00000028 + 0x6c);
  iVar1 = *(int *)(in_stack_00000028 + 0x18);
  iVar18 = (int)((*(uint *)(in_stack_00000028 + 0x10) & 0xffffc000) +
                ((int)*(uint *)(in_stack_00000028 + 0x10) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (iVar1 - 1U | 0x3fff) + 1;
  iVar2 = *(int *)(in_stack_00000028 + 0x1c);
  iVar22 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
  local_2c = (int)((*(uint *)(in_stack_00000028 + 0x14) & 0xffffc000) +
                  ((int)*(uint *)(in_stack_00000028 + 0x14) >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (iVar2 - 1U | 0x3fff) + 1;
  dVar8 = _DAT_00555908 / ((double)local_44 * _DAT_00561088 * (double)local_3c * _DAT_00561088);
  local_8c = (iVar18 + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x10);
  local_c = (local_2c + 1) * 0x4000 - *(int *)(in_stack_00000028 + 0x14);
  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
  if (iVar10 - local_2c < 2) {
    local_c = iVar2 - *(int *)(in_stack_00000028 + 0x14);
  }
  if (iVar22 - iVar18 < 2) {
    local_8c = iVar1 - *(int *)(in_stack_00000028 + 0x10);
  }
  local_40 = *(uint *)(in_stack_00000028 + 0x44);
  if (local_2c < iVar10) {
    do {
      local_30 = *(uint *)(in_stack_00000028 + 0x40);
      local_48 = (float *)(*(int *)(in_stack_00000028 + 8) * local_2c + iVar18 * 0x10 +
                          *(int *)(in_stack_00000028 + 4));
      local_14 = local_8c;
      local_28 = (uint)((longlong)local_c * (longlong)local_3c) >> 0xe |
                 (int)((ulonglong)((longlong)local_c * (longlong)local_3c) >> 0x20) << 0x12;
      iVar19 = (int)((local_40 & 0xffffc000) + ((int)local_40 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar11 = ((local_28 - 1) + local_40 | 0x3fff) + 1;
      local_10 = (iVar19 + 1) * 0x4000 - local_40;
      local_34 = (int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe;
      iVar11 = local_34 - iVar19;
      if (iVar11 < 2) {
        local_10 = local_28;
      }
      local_1c = (float)(int)local_10 * _DAT_00561084;
      local_24 = (float)(int)(local_28 + local_34 * -0x4000 + 0x4000 + local_40) * _DAT_00561084;
      if (iVar18 < iVar22) {
        local_34 = local_34 + -1;
        local_78 = iVar18;
        do {
          local_38 = (uint)((longlong)local_14 * (longlong)local_44) >> 0xe |
                     (int)((ulonglong)((longlong)local_14 * (longlong)local_44) >> 0x20) << 0x12;
          iVar20 = (int)((local_30 & 0xffffc000) + ((int)local_30 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar12 = ((local_38 - 1) + local_30 | 0x3fff) + 1;
          iVar21 = iVar20 + 1;
          local_8 = iVar21 * 0x4000 - local_30;
          iVar17 = (int)((iVar12 >> 0x1f & 0x3fffU) + iVar12) >> 0xe;
          local_10 = iVar17 - iVar20;
          iVar12 = local_38 + iVar17 * -0x4000 + 0x4000 + local_30;
          if ((int)local_10 < 2) {
            local_8 = local_38;
          }
          fVar9 = (float)(int)local_8 * _DAT_00561084;
          pdVar23 = &local_68;
          for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(undefined4 *)pdVar23 = 0;
            pdVar23 = (double *)((int)pdVar23 + 4);
          }
          iStack_70 = iVar19 + 1;
          local_20 = (float)iVar12 * _DAT_00561084;
          if (iStack_70 < local_34) {
            iVar12 = *(int *)(in_stack_00000028 + 0x38) * iStack_70 +
                     *(int *)(in_stack_00000028 + 0x34);
            iStack_70 = local_34 - iStack_70;
            do {
              if (iVar21 < iVar17 + -1) {
                iVar15 = (iVar17 + -1) - iVar21;
                pfVar13 = (float *)(iVar21 * 0x10 + 8 + iVar12);
                do {
                  local_68 = local_68 + (double)pfVar13[-2];
                  local_60 = (double)pfVar13[-1] + local_60;
                  local_58 = (double)*pfVar13 + local_58;
                  pfVar16 = pfVar13 + 1;
                  pfVar13 = pfVar13 + 4;
                  iVar15 = iVar15 + -1;
                  local_50 = (double)*pfVar16 + local_50;
                } while (iVar15 != 0);
              }
              iVar12 = iVar12 + *(int *)(in_stack_00000028 + 0x38);
              iStack_70 = iStack_70 + -1;
            } while (iStack_70 != 0);
          }
          iVar12 = *(int *)(in_stack_00000028 + 0x38);
          iVar24 = iVar12 * iVar19;
          fVar3 = fVar9 * local_1c;
          iVar15 = *(int *)(in_stack_00000028 + 0x34);
          iVar20 = iVar20 * 0x10;
          pfVar13 = (float *)(iVar20 + iVar24 + iVar15);
          fVar4 = fVar3 * *pfVar13 + (float)local_68;
          fVar7 = fVar3 * pfVar13[1] + (float)local_60;
          fVar6 = fVar3 * pfVar13[2] + (float)local_58;
          fVar3 = fVar3 * pfVar13[3] + (float)local_50;
          if (1 < (int)local_10) {
            fVar5 = local_20 * local_1c;
            iVar14 = iVar17 * 0x10 + iVar24;
            iVar25 = iVar14 + -0x10 + iVar15;
            fVar4 = fVar5 * *(float *)(iVar14 + -0x10 + iVar15) + fVar4;
            fVar7 = fVar5 * *(float *)(iVar25 + 4) + fVar7;
            fVar6 = fVar5 * *(float *)(iVar25 + 8) + fVar6;
            fVar3 = fVar5 * *(float *)(iVar25 + 0xc) + fVar3;
          }
          local_50 = (double)fVar3;
          local_58 = (double)fVar6;
          local_60 = (double)fVar7;
          local_68 = (double)fVar4;
          if (1 < iVar11) {
            fVar5 = fVar9 * local_24;
            pfVar13 = (float *)(iVar12 * local_34 + iVar20 + iVar15);
            fVar4 = fVar5 * *pfVar13 + fVar4;
            local_68 = (double)fVar4;
            fVar7 = fVar5 * pfVar13[1] + fVar7;
            local_60 = (double)fVar7;
            fVar6 = fVar5 * pfVar13[2] + fVar6;
            local_58 = (double)fVar6;
            fVar3 = fVar5 * pfVar13[3] + fVar3;
            local_50 = (double)fVar3;
            if (1 < (int)local_10) {
              fVar5 = local_20 * local_24;
              iVar14 = iVar17 * 0x10 + iVar12 * local_34;
              iVar25 = iVar14 + -0x10 + iVar15;
              fVar4 = fVar5 * *(float *)(iVar14 + -0x10 + iVar15) + fVar4;
              local_68 = (double)fVar4;
              fVar7 = fVar5 * *(float *)(iVar25 + 4) + fVar7;
              local_60 = (double)fVar7;
              fVar6 = fVar5 * *(float *)(iVar25 + 8) + fVar6;
              local_58 = (double)fVar6;
              fVar3 = fVar5 * *(float *)(iVar25 + 0xc) + fVar3;
              local_50 = (double)fVar3;
            }
          }
          local_8 = iVar17 + -1;
          if (iVar21 < (int)local_8) {
            pfVar13 = (float *)(iVar12 * local_34 + iVar21 * 0x10 + iVar15);
            pfVar16 = (float *)(iVar21 * 0x10 + iVar24 + iVar15);
            iVar21 = local_8 - iVar21;
            do {
              fVar4 = local_1c * *pfVar16 + fVar4;
              fVar7 = local_1c * pfVar16[1] + fVar7;
              fVar6 = local_1c * pfVar16[2] + fVar6;
              fVar3 = local_1c * pfVar16[3] + fVar3;
              if (1 < iVar11) {
                fVar4 = local_24 * *pfVar13 + fVar4;
                fVar7 = local_24 * pfVar13[1] + fVar7;
                fVar6 = local_24 * pfVar13[2] + fVar6;
                fVar3 = local_24 * pfVar13[3] + fVar3;
              }
              pfVar16 = pfVar16 + 4;
              pfVar13 = pfVar13 + 4;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            local_50 = (double)fVar3;
            local_58 = (double)fVar6;
            local_60 = (double)fVar7;
            local_68 = (double)fVar4;
          }
          iVar21 = iVar19 + 1;
          if (iVar21 < local_34) {
            iVar24 = iVar12 * iVar21;
            pfVar13 = (float *)(iVar20 + iVar15 + iVar24);
            iVar21 = local_34 - iVar21;
            do {
              fVar4 = fVar9 * *pfVar13 + fVar4;
              fVar7 = fVar9 * pfVar13[1] + fVar7;
              fVar6 = fVar9 * pfVar13[2] + fVar6;
              fVar3 = fVar9 * pfVar13[3] + fVar3;
              if (1 < (int)local_10) {
                iVar25 = iVar17 * 0x10 + iVar24;
                iVar20 = iVar25 + -0x10 + iVar15;
                fVar4 = local_20 * *(float *)(iVar25 + -0x10 + iVar15) + fVar4;
                fVar7 = local_20 * *(float *)(iVar20 + 4) + fVar7;
                fVar6 = local_20 * *(float *)(iVar20 + 8) + fVar6;
                fVar3 = local_20 * *(float *)(iVar20 + 0xc) + fVar3;
              }
              iVar24 = iVar24 + iVar12;
              pfVar13 = (float *)((int)pfVar13 + iVar12);
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
            local_50 = (double)fVar3;
            local_68 = (double)fVar4;
            local_58 = (double)fVar6;
            local_60 = (double)fVar7;
          }
          if (((local_14 == 0x4000) && (local_c == 0x4000)) || (in_stack_00000030 != 0)) {
            *local_48 = fVar4 * (float)dVar8;
            local_48[1] = (float)((float10)local_60 * (float10)dVar8);
            local_48[2] = (float)((float10)local_58 * (float10)dVar8);
            local_48[3] = (float)((float10)local_50 * (float10)dVar8);
          }
          else {
            local_18 = fVar9;
            lVar28 = __alldiv((longlong)(int)local_38 * (longlong)(int)local_28,0x4000,0);
            if (0 < lVar28) {
              fVar26 = (float10)(int)((uint)((longlong)local_14 * (longlong)local_c) >> 0xe |
                                     (int)((ulonglong)((longlong)local_14 * (longlong)local_c) >>
                                          0x20) << 0x12) * (float10)_DAT_00561084;
              fVar27 = (float10)_DAT_00555908 / ((float10)lVar28 * (float10)_DAT_00561088);
              *local_48 = (float)(fVar26 * (fVar27 * (float10)local_68 - (float10)*local_48) +
                                 (float10)*local_48);
              local_48[1] = (float)(fVar26 * (fVar27 * (float10)local_60 - (float10)local_48[1]) +
                                   (float10)local_48[1]);
              local_48[2] = (float)(fVar26 * (fVar27 * (float10)local_58 - (float10)local_48[2]) +
                                   (float10)local_48[2]);
              local_48[3] = (float)(fVar26 * (fVar27 * (float10)local_50 - (float10)local_48[3]) +
                                   (float10)local_48[3]);
            }
          }
          local_48 = local_48 + 4;
          if (local_78 == iVar22 + -2) {
            local_38 = (uint)((longlong)local_14 * (longlong)local_44) >> 0xe |
                       (int)((ulonglong)((longlong)local_14 * (longlong)local_44) >> 0x20) << 0x12;
            local_14 = iVar1 + iVar22 * -0x4000 + 0x4000;
          }
          else {
            local_14 = 0x4000;
          }
          local_30 = local_30 + local_38;
          local_78 = local_78 + 1;
        } while (local_78 < iVar22);
      }
      if (local_2c == iVar10 + -2) {
        local_28 = (uint)((longlong)local_c * (longlong)local_3c) >> 0xe |
                   (int)((ulonglong)((longlong)local_c * (longlong)local_3c) >> 0x20) << 0x12;
        local_c = iVar2 + iVar10 * -0x4000 + 0x4000;
      }
      else {
        local_c = 0x4000;
      }
      local_40 = local_40 + local_28;
      local_2c = local_2c + 1;
    } while (local_2c < iVar10);
  }
  return;
}


