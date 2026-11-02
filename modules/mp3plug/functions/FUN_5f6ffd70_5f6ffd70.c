/* Module: mp3plug.dll
   Function: FUN_5f6ffd70
   Address: 5f6ffd70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_5f6ffd70(uint param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  double dVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  float10 fVar18;
  undefined1 *local_424;
  int local_420 [81];
  int local_2dc [7];
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8 [196];
  int local_1f4;
  int local_130;
  uint local_12c [39];
  uint local_90;
  undefined8 local_78;
  int local_6c;
  int local_68;
  double local_60;
  int local_58;
  uint local_50;
  int local_48;
  uint local_40;
  uint local_3c;
  
  puVar3 = &stack0xfffffbd0;
  puVar4 = &stack0xfffffbd0;
  puVar5 = &stack0xfffffbd0;
  puVar9 = &stack0xfffffbd0;
  puVar13 = &stack0xfffffbd0;
  puVar8 = &stack0xfffffbd0;
  piVar15 = param_5;
  piVar16 = local_420;
  for (iVar11 = 0xbd; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar16 = *piVar15;
    piVar15 = piVar15 + 1;
    piVar16 = piVar16 + 1;
  }
  if (param_6 == 0) {
    local_60 = (double)_DAT_5f75f404;
  }
  else if (param_6 == 1) {
    local_60 = (double)*(float *)(param_3 + 0x138);
  }
  else {
    local_60 = 0.0;
    if (param_6 == 2) {
      if (*(int *)(param_3 + 0x140) == *(int *)(param_3 + 0x144)) {
        local_60 = (double)*(float *)(param_3 + 0x14c);
      }
      else {
        local_60 = (double)_DAT_5f75f410;
      }
    }
  }
  iVar11 = 0;
  local_6c = local_420[2];
  if (0 < (int)param_1) {
    do {
      fVar18 = (float10)*(float *)(param_3 + 0x9c + iVar11 * 4);
      if ((float10)local_60 <= fVar18) {
        fVar18 = (float10)log2(fVar18);
        local_68 = iVar11 * 2;
        dVar2 = (double)((((float10)0.6931471805599453 * fVar18) / (float10)(local_6c + 1)) *
                        (float10)_DAT_5f75f400);
        local_78 = dVar2;
        dVar2 = local_78;
        local_78._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
        local_78._0_4_ = SUB84(dVar2,0);
        uVar6 = local_78._4_4_ >> 0x14 & 0x7ff;
        if (uVar6 < 0x3ff) {
          uVar6 = 0;
        }
        else {
          local_40 = param_1;
          uVar6 = (local_78._4_4_ << 0xb | (uint)local_78 >> 0x15 | 0x80000000) >>
                  (0x1eU - (char)uVar6 & 0x1f);
          if ((longlong)dVar2 < 0) {
            uVar6 = -uVar6;
          }
        }
        local_90 = uVar6;
        local_78 = dVar2;
        local_12c[iVar11] = uVar6;
        if ((int)uVar6 < 1) {
          *(undefined4 *)((int)local_12c + local_68 * 2) = 1;
        }
      }
      else {
        local_12c[iVar11] = 0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)param_1);
  }
  if (0 < (int)param_1) {
    do {
      iVar11 = *(int *)(puVar3 + 0x304);
      if (param_4 <= *(int *)(puVar3 + 0x304)) {
        iVar11 = param_4;
      }
      *(int *)(puVar3 + 0x1c) = *(int *)(puVar3 + 0x1c) + iVar11;
      puVar3 = puVar3 + 4;
    } while ((int)puVar3 < (int)(local_420 + (param_1 - 4)));
  }
  if ((((local_420[1] != 2) && (local_420[1] != 5)) && (local_1f4 == 0)) && (local_2c0 == 0)) {
    puVar7 = FUN_5f6eb690();
    iVar11 = 0;
    if (0x13 < (int)param_1) {
      if ((((local_420[3] == 0) && (local_420[4] == 0)) &&
          ((local_420[5] == 0 && ((local_420[6] == 0 && (local_420[param_1 + 1] != 0)))))) &&
         (local_420[param_1 + 2] != 0)) {
        iVar14 = 0;
        iVar11 = 1;
        if (0 < (int)param_1) {
          do {
            iVar10 = iVar14 + 1;
            if (puVar7[iVar14] != 0) {
              local_420[iVar14 + 3] = 0;
            }
            iVar14 = iVar10;
          } while (iVar10 < (int)param_1);
        }
      }
      else {
        iVar14 = 0;
        if (0 < (int)param_1) {
          do {
            if (local_420[iVar14 + 3] - puVar7[iVar14] < 0) goto LAB_5f7001b0;
            if ((int)param_1 <= iVar14 + 1) break;
            if (local_420[iVar14 + 4] - puVar7[iVar14 + 1] < 0) goto LAB_5f7001b0;
            iVar14 = iVar14 + 2;
          } while (iVar14 < (int)param_1);
        }
        iVar14 = 0;
        iVar11 = 1;
        if (0 < (int)param_1) {
          local_50 = param_1 & 0xfffffffe;
          if (0 < (int)(param_1 & 0xfffffffe)) {
            do {
              local_420[iVar14 + 3] = local_420[iVar14 + 3] - puVar7[iVar14];
              local_420[iVar14 + 4] = local_420[iVar14 + 4] - puVar7[iVar14 + 1];
              iVar14 = iVar14 + 2;
            } while (iVar14 < (int)local_50);
          }
          for (; iVar14 < (int)param_1; iVar14 = iVar14 + 1) {
            local_420[iVar14 + 3] = local_420[iVar14 + 3] - puVar7[iVar14];
          }
        }
      }
    }
LAB_5f7001b0:
    local_2c0 = iVar11;
  }
  iVar11 = 0x7fffffff;
  if (0 < (int)param_1) {
    do {
      if (*(int *)(puVar4 + 0x1c) < iVar11) {
        iVar11 = *(int *)(puVar4 + 0x1c);
      }
      puVar4 = puVar4 + 4;
    } while ((int)puVar4 < (int)(local_420 + (param_1 - 4)));
    if (iVar11 < 1) goto LAB_5f700021;
  }
  local_2bc = local_2bc - (local_420[2] * 2 + 2) * iVar11;
  if (0 < (int)param_1) {
    local_58 = (int)local_420 +
               (((int)(local_420 + (param_1 - 4)) - (int)&stack0xfffffbd0 & 0xfffffff8U) - 0x10);
    puVar3 = &stack0xfffffbd0;
    if ((int)&stack0xfffffbd0 < local_58) {
      do {
        *(int *)(puVar5 + 0x20) = *(int *)(puVar5 + 0x20) - iVar11;
        *(int *)(puVar5 + 0x1c) = *(int *)(puVar5 + 0x1c) - iVar11;
        puVar5 = puVar5 + 8;
        puVar3 = puVar5;
      } while ((int)puVar5 < local_58);
    }
    for (; (int)puVar3 < (int)(local_420 + (param_1 - 4)); puVar3 = puVar3 + 4) {
      *(int *)(puVar3 + 0x1c) = *(int *)(puVar3 + 0x1c) - iVar11;
    }
  }
LAB_5f700021:
  if ((local_420[1] == 2) || (local_420[1] == 5)) {
    iVar11 = 0x7fffffff;
    iVar14 = 0;
    local_60 = (double)CONCAT44(local_60._4_4_,local_420[1]);
    do {
      iVar10 = *(int *)(puVar9 + 0x154);
      iVar12 = iVar10;
      if (iVar11 < iVar10) {
        iVar12 = iVar11;
      }
      iVar11 = iVar12;
      if (iVar10 < iVar14) {
        iVar10 = iVar14;
      }
      iVar14 = iVar10;
      puVar9 = puVar9 + 4;
    } while ((int)puVar9 < (int)&local_424);
    if ((iVar11 == 0) && (iVar14 < 7)) {
      if (local_420[1] == 2) {
        local_68 = 0;
      }
      else {
        local_68 = local_130;
      }
      iVar11 = 0;
      local_60 = (double)CONCAT44(local_60._4_4_,param_1 - local_68);
      do {
        iVar14 = 0;
        if (local_68 < (int)param_1) {
          iVar10 = local_68 * 4;
          iVar14 = 0;
          local_40 = param_1;
          do {
            iVar12 = iVar10 + iVar11 * 4;
            iVar10 = iVar10 + 0xc;
            iVar14 = iVar14 + *(int *)((int)local_420 + iVar12 + 0xc);
          } while (iVar10 < (int)(param_1 * 4));
        }
        iVar10 = local_2dc[iVar11];
        local_40 = local_60._0_4_;
        local_3c = param_1;
        iVar14 = (((iVar14 * 3) / (int)local_60._0_4_) * (local_420[2] * 2 + 2) >> 3) + iVar10;
        if (7 < iVar14) {
          iVar14 = 7;
        }
        local_2dc[iVar11] = iVar10 + (iVar14 - iVar10);
        if (local_68 < (int)param_1) {
          iVar12 = local_68 << 2;
          local_40 = param_1 << 2;
          do {
            iVar1 = iVar12 + iVar11 * 4;
            iVar17 = *(int *)((int)local_420 + iVar1 + 0xc) -
                     ((iVar14 - iVar10) * 4) / (local_420[2] + 1);
            *(int *)((int)local_420 + iVar1 + 0xc) = iVar17;
            if (iVar17 < 0) {
              *(undefined4 *)((int)local_420 + iVar1 + 0xc) = 0;
            }
            iVar12 = iVar12 + 0xc;
          } while (iVar12 < (int)local_40);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 3);
    }
  }
  iVar11 = FUN_5f6eb6a0(param_1,local_420);
  if (iVar11 == 0) {
    if ((local_420[2] == 0) && (local_420[2] = 1, 0 < (int)param_1)) {
      local_48 = (int)local_420 +
                 (((int)(local_420 + (param_1 - 4)) - (int)&stack0xfffffbd0 & 0xfffffff8U) - 0x10);
      puVar3 = &stack0xfffffbd0;
      if ((int)&stack0xfffffbd0 < local_48) {
        do {
          *(int *)(puVar8 + 0x20) = *(int *)(puVar8 + 0x20) >> 1;
          *(int *)(puVar8 + 0x1c) = *(int *)(puVar8 + 0x1c) >> 1;
          puVar8 = puVar8 + 8;
          puVar3 = puVar8;
        } while ((int)puVar8 < local_48);
      }
      for (; (int)puVar3 < (int)(local_420 + (param_1 - 4)); puVar3 = puVar3 + 4) {
        *(int *)(puVar3 + 0x1c) = *(int *)(puVar3 + 0x1c) >> 1;
      }
    }
    iVar11 = FUN_5f6eb870(param_1,local_420);
    if (0 < (int)param_1) {
      do {
        iVar14 = *(int *)(puVar13 + 0x1c);
        *(int *)(puVar13 + 0x1c) = iVar14 - iVar11;
        if (iVar14 - iVar11 < 0) {
          *(undefined4 *)(puVar13 + 0x1c) = 0;
        }
        puVar13 = puVar13 + 4;
      } while ((int)puVar13 < (int)(local_420 + (param_1 - 4)));
    }
    local_2bc = local_2bc - iVar11 * (1 << ((char)local_420[2] + 1U & 0x1f));
  }
  if (local_2bc < -0x96) {
    return 0;
  }
  FUN_5f6ea320(param_1,(int)local_420);
  iVar11 = 0;
  if (0 < (int)param_1) {
    do {
      local_424 = local_2b8;
      uVar6 = FUN_5f6e9a60(iVar11,param_2);
      if (0x1fff < uVar6) {
        return 0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)param_1);
  }
  piVar15 = local_420;
  for (iVar11 = 0xbd; iVar11 != 0; iVar11 = iVar11 + -1) {
    *param_5 = *piVar15;
    piVar15 = piVar15 + 1;
    param_5 = param_5 + 1;
  }
  return 1;
}


