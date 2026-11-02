/* Module: vegas30.exe
   Function: FUN_004e0730
   Address: 004e0730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e1794) */
/* WARNING: Removing unreachable block (ram,0x004e114d) */
/* WARNING: Removing unreachable block (ram,0x004e0ec4) */
/* WARNING: Removing unreachable block (ram,0x004e0d8e) */
/* WARNING: Removing unreachable block (ram,0x004e15ee) */
/* WARNING: Removing unreachable block (ram,0x004e138f) */
/* WARNING: Removing unreachable block (ram,0x004e143b) */
/* WARNING: Removing unreachable block (ram,0x004e14c2) */
/* WARNING: Removing unreachable block (ram,0x004e0e46) */
/* WARNING: Removing unreachable block (ram,0x004e14ec) */
/* WARNING: Removing unreachable block (ram,0x004e14d8) */
/* WARNING: Removing unreachable block (ram,0x004e0f26) */
/* WARNING: Removing unreachable block (ram,0x004e155a) */
/* WARNING: Removing unreachable block (ram,0x004e0f64) */
/* WARNING: Removing unreachable block (ram,0x004e1697) */
/* WARNING: Removing unreachable block (ram,0x004e0ff7) */
/* WARNING: Removing unreachable block (ram,0x004e1080) */

undefined4 *
FUN_004e0730(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,uint *param_5)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  int local_e0;
  uint local_dc;
  int local_d8;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  int *local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x5d0) == 0) {
    local_88 = 1;
  }
  else {
    local_88 = *(int *)(*(int *)(param_1 + 0x5d0) + 0x44);
  }
  local_d8 = *(int *)(param_1 + 0xad4);
  if (param_4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if ((*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) ||
     (*(int *)(param_1 + 0xb98) == 0)) {
    param_4[6] = *(undefined4 *)(param_1 + 0xac4);
    return param_4;
  }
  iVar16 = *(int *)(param_1 + 0xd94);
  iVar12 = 0;
  local_dc = 0;
  local_e0 = 0;
  if (iVar16 < 1) {
LAB_004e07e3:
    local_e0 = 4;
  }
  else {
    piVar15 = (int *)(param_1 + 0xd88);
    do {
      if ((*piVar15 != 0) && (iVar12 = iVar12 + 1, (*(byte *)(*piVar15 + 0x10) & 4) != 0)) {
        local_e0 = local_e0 + 1;
      }
      piVar15 = piVar15 + 1;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    if (iVar12 == 0) goto LAB_004e07e3;
    if ((iVar12 == 2) && (local_e0 != 0)) {
      local_dc = local_d8 >> 2;
      local_e0 = local_d8 - local_dc;
    }
    else {
      local_e0 = local_d8 / iVar12;
      local_d8 = local_d8 % iVar12;
      if (local_d8 < 4) goto LAB_004e082a;
    }
  }
  local_d8 = 0;
LAB_004e082a:
  lVar22 = *(longlong *)(param_1 + 0xb88);
  lVar20 = ftol();
  lVar20 = lVar20 + lVar22;
  local_a8 = ftol();
  local_a8 = local_a8 + lVar22;
  local_58 = *(int *)(param_1 + 0xac0);
  iVar16 = *(int *)(param_1 + 0xac4);
  local_50 = *(int *)(param_1 + 0xac8);
  local_4c = *(undefined4 *)(param_1 + 0xacc);
  local_c8 = 0;
  local_cc = 0;
  iVar12 = iVar16;
  if (0 < *(int *)(param_1 + 0xd94)) {
    do {
      iVar18 = *(int *)(param_1 + 0xd88 + local_cc * 4);
      iVar17 = iVar12;
      if (iVar18 != 0) {
        iVar17 = *(int *)(iVar18 + 0x69c);
        *(int *)(iVar17 + 0x18) = local_58;
        *(int *)(iVar17 + 0x1c) = iVar12;
        *(int *)(iVar17 + 0x20) = local_50;
        *(int *)(iVar17 + 0x24) = iVar16;
        *(longlong *)(*(int *)(iVar18 + 0x69c) + 8) = lVar20;
        *(longlong *)(*(int *)(iVar18 + 0x69c) + 0x10) = local_a8 - lVar20;
        uVar8 = local_dc;
        if ((*(byte *)(iVar18 + 0x10) & 4) == 0) {
          uVar8 = local_e0;
        }
        iVar17 = uVar8 + iVar12 + local_d8;
        local_d8 = 0;
        *(int *)(*(int *)(iVar18 + 0x69c) + 0x24) = iVar17;
        *(int *)(*(int *)(iVar18 + 0x69c) + 0x2c) = iVar17 - iVar12;
        iVar16 = 0;
        if (*(int **)(iVar18 + 0x24) != (int *)0x0) {
          iVar16 = **(int **)(iVar18 + 0x24);
        }
        local_c8 = local_c8 + 1 + iVar16;
        iVar16 = iVar17;
      }
      local_cc = local_cc + 1;
      iVar12 = iVar17;
    } while (local_cc < *(int *)(param_1 + 0xd94));
  }
  if ((int)param_4[0x18] < local_c8) {
    return (undefined4 *)0x0;
  }
  if ((*(byte *)(param_1 + 0x654) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xcc4) = *(undefined4 *)(param_1 + 0x678);
  }
  iVar12 = 0x8000 >> ((byte)((*(int *)(param_1 + 0xcc4) + 1) / 2) & 0x1f);
  if ((*(byte *)(param_1 + 0xcc4) & 1) != 0) {
    iVar12 = iVar12 + iVar12 / 2;
  }
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  param_4[6] = iVar16;
  *param_4 = param_2;
  param_4[1] = 0;
  lVar22 = *(longlong *)(param_1 + 0xb90);
  iVar16 = *(int *)(param_1 + 0xb98);
  param_4[7] = iVar12;
  *(double *)(param_4 + 8) = (double)lVar22 / (double)iVar16;
  param_4[10] = *(uint *)(param_1 + 0x18) >> 0x14 & 1;
  param_4[0xc] = *(undefined4 *)(param_1 + 0xb88);
  param_4[0xd] = *(undefined4 *)(param_1 + 0xb8c);
  param_4[0xe] = *(undefined4 *)(param_1 + 0xb90);
  param_4[0xf] = *(undefined4 *)(param_1 + 0xb94);
  param_4[0x10] = *(undefined4 *)(param_1 + 0xb98);
  param_4[0x11] = *(undefined4 *)(param_1 + 0xac0);
  param_4[0x12] = *(undefined4 *)(param_1 + 0xac4);
  if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
    uVar7 = *(undefined4 *)(param_1 + 0xb70);
    uVar13 = *(undefined4 *)(param_1 + 0xb74);
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0xb30);
    uVar13 = *(undefined4 *)(param_1 + 0xb34);
  }
  param_4[0x14] = uVar7;
  param_4[0x15] = uVar13;
  uVar8 = *(uint *)(param_1 + 0x18) >> 0x11 & 0x80;
  param_4[0x16] = uVar8;
  param_4[0x16] = (uint)(DAT_00647630 != param_1) << 8 | uVar8;
  FUN_004582a0(param_1,param_4 + 0x1a,param_4 + 0x1c);
  lVar22 = CONCAT44(local_a0._4_4_,(uint)local_a0);
  if (0 < local_c8) {
    local_cc = 0;
    local_c4 = 0;
    if (0 < *(int *)(param_1 + 0xd94)) {
      do {
        iVar16 = *(int *)(param_1 + 0xd88 + local_cc * 4);
        if (iVar16 != 0) {
          iVar12 = *(int *)(iVar16 + 0x69c);
          local_b8 = *(uint *)(iVar12 + 0x18);
          local_b4 = *(uint *)(iVar12 + 0x1c);
          local_b0 = *(uint *)(iVar12 + 0x20);
          iVar12 = *(int *)(iVar12 + 0x24);
          if (*(int *)(param_3 + 0xc) <= (int)local_b4) break;
          local_ac = iVar12 - 1;
          if (*(int *)(param_3 + 4) < (int)local_ac) {
            param_4[local_c4 * 0x16 + 0x31] = 1;
            param_4[local_c4 * 0x16 + 0x1e] = iVar16;
            param_4[local_c4 * 0x16 + 0x26] = local_b8;
            param_4[local_c4 * 0x16 + 0x27] = local_b4;
            param_4[local_c4 * 0x16 + 0x28] = local_b0;
            param_4[local_c4 * 0x16 + 0x29] = local_ac;
            param_4[local_c4 * 0x16 + 0x32] = 0;
            param_4[local_c4 * 0x16 + 0x2c] = 0;
            if ((*(byte *)(iVar16 + 0x10) & 0x80) != 0) {
              param_4[0x16] = param_4[0x16] | 0x40;
              param_4[local_c4 * 0x16 + 0x31] = param_4[local_c4 * 0x16 + 0x31] | 0x40;
            }
            local_c4 = local_c4 + 1;
            local_b4 = local_b4 + 1;
            local_ac = iVar12 - 2;
            if (*(int *)(iVar16 + 4) == 2) {
              local_a0 = lVar22;
              uVar21 = ftol();
              local_60 = (uint)uVar21 + *(uint *)(param_1 + 0xb88);
              local_5c = (int)((ulonglong)uVar21 >> 0x20) + *(int *)(param_1 + 0xb8c) +
                         (uint)CARRY4((uint)uVar21,*(uint *)(param_1 + 0xb88));
              lVar22 = ftol();
              local_6c = lVar22 + *(longlong *)(param_1 + 0xb88);
              param_4[0x16] = param_4[0x16] | 1;
              piVar15 = *(int **)(iVar16 + 0x24);
              iVar16 = 0;
              if (piVar15 != (int *)0x0) {
                iVar16 = *piVar15;
              }
              local_d8 = 0;
              lVar22 = local_a0;
              if (0 < iVar16) {
                puVar11 = param_4 + local_c4 * 0x16 + 0x2d;
                do {
                  if (piVar15 == (int *)0x0) {
                    iVar12 = 0;
                  }
                  else {
                    iVar12 = *piVar15;
                  }
                  if ((local_d8 < 0) || (iVar12 + -1 < local_d8)) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = *(uint *)(piVar15[2] + local_d8 * 4);
                  }
                  puVar11[4] = 0;
                  puVar11[-0xf] = uVar8;
                  puVar11[2] = *(uint *)(uVar8 + 0x218);
                  iVar12 = *(int *)(uVar8 + 0x218);
                  puVar11[-7] = *(uint *)(iVar12 + 0x20);
                  puVar11[-6] = *(uint *)(iVar12 + 0x24);
                  puVar11[-5] = *(uint *)(iVar12 + 0x28);
                  puVar11[-4] = *(uint *)(iVar12 + 0x2c);
                  local_a0 = lVar22;
                  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                    uVar14 = 0xffffffff;
                  }
                  else {
                    lVar22 = ftol();
                    local_2c = (undefined4)((ulonglong)lVar22 >> 0x20);
                    uVar4 = lVar22 + *(int *)(param_1 + 0xac0);
                    uVar14 = (uint)uVar4;
                    if ((uVar4 < 0x8000000000000000) ||
                       ((-0x100000001 < (longlong)uVar4 && (0xffffbfff < uVar14)))) {
                      if (0x3fff < (longlong)uVar4) {
                        uVar14 = 0x3fff;
                      }
                    }
                    else {
                      uVar14 = 0xffffc000;
                    }
                  }
                  *puVar11 = uVar14;
                  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                    uVar14 = 0xffffffff;
                  }
                  else {
                    local_48 = param_4[0x1a] + param_4[0x1c];
                    iStack_44 = param_4[0x1b] + param_4[0x1d] +
                                (uint)CARRY4(param_4[0x1a],param_4[0x1c]);
                    lVar22 = ftol();
                    local_14 = (undefined4)((ulonglong)lVar22 >> 0x20);
                    uVar4 = lVar22 + *(int *)(param_1 + 0xac0);
                    uVar14 = (uint)uVar4;
                    if ((uVar4 < 0x8000000000000000) ||
                       ((-0x100000001 < (longlong)uVar4 && (0xffffbfff < uVar14)))) {
                      if (0x3fff < (longlong)uVar4) {
                        uVar14 = 0x3fff;
                      }
                    }
                    else {
                      uVar14 = 0xffffc000;
                    }
                  }
                  puVar11[1] = uVar14;
                  puVar11[3] = (uint)param_5;
                  param_5[4] = 0;
                  param_5[6] = 0;
                  *param_5 = uVar8;
                  param_5[1] = 0;
                  param_5[5] = 0;
                  param_5[7] = 0;
                  if (*(int *)(param_1 + 0xd70) == 0) {
                    uVar14 = 0;
                    lVar22 = local_a0;
                  }
                  else {
                    uVar14 = FUN_005f13f0(2);
                    lVar22 = local_a0;
                  }
                  param_5[8] = uVar14;
                  param_5[9] = 0;
                  param_5[0x1a] = param_5[0x1a] & 0xfffffff8;
                  if ((*param_5 != 0) || (param_5[1] != 0)) {
                    puVar2 = (uint *)(param_1 + 0xd60);
                    lVar6 = *(longlong *)puVar2;
                    local_98 = *(longlong *)puVar2;
                    lVar5 = *(longlong *)puVar2;
                    lVar23 = *(longlong *)puVar2;
                    if (local_6c < *(longlong *)puVar2) break;
                    uVar14 = *(uint *)(param_1 + 0xd68) + *puVar2;
                    iVar12 = *(int *)(param_1 + 0xd6c) + *(int *)(param_1 + 0xd64) +
                             (uint)CARRY4(*(uint *)(param_1 + 0xd68),*puVar2);
                    local_84 = CONCAT44(iVar12,uVar14);
                    local_98 = *(longlong *)puVar2;
                    if ((local_5c <= iVar12) &&
                       ((local_5c < iVar12 || (local_98 = *(longlong *)puVar2, local_60 <= uVar14)))
                       ) {
                      local_7c = 0;
                      puVar11[5] = (uint)&LAB_00472240;
                      local_98 = lVar5;
                      if (lVar6 < lVar20) {
                        local_7c = lVar20 - lVar23;
                        local_98 = lVar20;
                      }
                      lVar23 = local_84;
                      if (local_a8 < local_84) {
                        lVar23 = local_a8;
                      }
                      local_84._4_4_ = (int)((ulonglong)lVar23 >> 0x20);
                      iVar17 = local_84._4_4_;
                      iVar12 = *(int *)(param_1 + 0xb90);
                      iVar18 = *(int *)(param_1 + 0xb94);
                      local_84 = lVar23;
                      local_a0 = lVar22;
                      if (iVar12 == 0 && iVar18 == 0) {
                        local_dc = 0xffffffff;
                      }
                      else {
                        lVar22 = ftol();
                        local_4 = (undefined4)((ulonglong)lVar22 >> 0x20);
                        uVar4 = lVar22 + *(int *)(param_1 + 0xac0);
                        local_dc = (uint)uVar4;
                        if ((uVar4 < 0x8000000000000000) ||
                           ((-0x100000001 < (longlong)uVar4 && (0xffffbfff < local_dc)))) {
                          if (0x3fff < (longlong)uVar4) {
                            local_dc = 0x3fff;
                          }
                        }
                        else {
                          local_dc = 0xffffc000;
                        }
                      }
                      local_b8 = local_dc;
                      if (iVar12 == 0 && iVar18 == 0) {
                        local_b0 = 0xffffffff;
                        lVar22 = local_98;
                      }
                      else {
                        lVar22 = ftol();
                        local_1c = (undefined4)((ulonglong)lVar22 >> 0x20);
                        uVar4 = lVar22 + *(int *)(param_1 + 0xac0);
                        local_b0 = (uint)uVar4;
                        lVar22 = local_98;
                        if ((uVar4 < 0x8000000000000000) ||
                           ((-0x100000001 < (longlong)uVar4 && (0xffffbfff < local_b0)))) {
                          if (0x3fff < (longlong)uVar4) {
                            local_b0 = 0x3fff;
                          }
                        }
                        else {
                          local_b0 = 0xffffc000;
                        }
                      }
                      local_98._4_4_ = (int)((ulonglong)lVar22 >> 0x20);
                      local_98._0_4_ = (uint)lVar22;
                      if ((int)local_b0 <= (int)(local_dc + 1)) {
                        local_b0 = local_dc + 1;
                      }
                      puVar11[-7] = local_b8;
                      puVar11[-6] = local_b4;
                      puVar11[-5] = local_b0;
                      puVar11[-4] = local_ac;
                      puVar11[-1] = 0;
                      *(longlong *)(puVar11 + -0xd) = local_7c;
                      *(longlong *)(puVar11 + -0xb) = lVar22;
                      puVar11[-9] = (uint)local_84 - (uint)local_98;
                      puVar11[-8] = (iVar17 - local_98._4_4_) -
                                    (uint)((uint)local_84 < (uint)local_98);
                      puVar11[4] = puVar11[4] | 0x3000;
                      local_98 = lVar22;
                      lVar22 = local_a0;
                      if (uVar8 != 0) {
                        uVar14 = *(uint *)(uVar8 + 0x218);
                        *(uint *)(uVar14 + 0x68) = *(uint *)(uVar14 + 0x68) & 0xfffffffe;
                        puVar11[4] = puVar11[4] | 0x10000;
                        *(uint *)(uVar14 + 0x68) = *(uint *)(uVar14 + 0x68) & 0xfffffffd | 1;
                        FUN_004e1930(param_1,uVar8,lVar20,local_a8,&local_b8);
                        uVar10 = puVar11[4];
                        uVar9 = (*(uint *)(uVar8 + 0x10) & 2) << 2;
                        puVar11[4] = uVar9 | uVar10 & 0xfffffff7;
                        puVar11[4] = *(uint *)(uVar8 + 0x10) >> 1 & 4 | uVar9 | uVar10 & 0xfffffff3;
                        puVar11[2] = uVar14;
                        if (*(int *)(uVar8 + 0x4c) < 0) {
                          uVar14 = 0;
                        }
                        else {
                          uVar14 = *(int *)(uVar8 + 0x4c) % local_88;
                        }
                        puVar11[-1] = uVar14;
                        uVar14 = puVar11[4];
                        uVar10 = (*(uint *)(uVar8 + 0x10) & 0x10) << 3;
                        puVar11[4] = uVar10 | uVar14 & 0xffffff7f;
                        if ((*(uint *)(uVar8 + 0x18) == puVar11[-0xb]) &&
                           (*(uint *)(uVar8 + 0x1c) == puVar11[-10])) {
                          puVar11[4] = uVar10 | uVar14 & 0xffffef7f | 0x4000;
                        }
                        lVar22 = local_a0;
                        if ((*(uint *)(uVar8 + 0x20) + *(uint *)(uVar8 + 0x18) ==
                             puVar11[-0xb] + puVar11[-9]) &&
                           (*(int *)(uVar8 + 0x24) + *(int *)(uVar8 + 0x1c) +
                            (uint)CARRY4(*(uint *)(uVar8 + 0x20),*(uint *)(uVar8 + 0x18)) ==
                            puVar11[-10] + puVar11[-8] + (uint)CARRY4(puVar11[-0xb],puVar11[-9]))) {
                          puVar11[4] = puVar11[4] & 0xffffdfff | 0x8000;
                        }
                      }
                      local_c4 = local_c4 + 1;
                      puVar11 = puVar11 + 0x16;
                    }
                  }
                  local_d8 = local_d8 + 1;
                } while (local_d8 < iVar16);
              }
            }
            else if (*(int *)(iVar16 + 4) == 3) {
              param_4[0x16] = param_4[0x16] | 2;
              local_64 = *(int **)(iVar16 + 0x24);
              if (local_64 == (int *)0x0) {
                iVar16 = 0;
              }
              else {
                iVar16 = *local_64;
              }
              local_d8 = 0;
              if (0 < iVar16) {
                puVar11 = param_4 + local_c4 * 0x16 + 0x31;
                do {
                  if (local_64 == (int *)0x0) {
                    iVar12 = 0;
                  }
                  else {
                    iVar12 = *local_64;
                  }
                  if ((local_d8 < 0) || (iVar12 + -1 < local_d8)) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = *(uint *)(local_64[2] + local_d8 * 4);
                  }
                  if (uVar8 != 0) {
                    *puVar11 = 0;
                    puVar11[-0x13] = uVar8;
                    puVar11[-2] = *(uint *)(uVar8 + 0x218);
                    iVar12 = *(int *)(uVar8 + 0x218);
                    puVar11[-0xb] = *(uint *)(iVar12 + 0x20);
                    puVar11[-10] = *(uint *)(iVar12 + 0x24);
                    puVar11[-9] = *(uint *)(iVar12 + 0x28);
                    puVar11[-8] = *(uint *)(iVar12 + 0x2c);
                    puVar11[-1] = 0;
                    puVar11[1] = (uint)&LAB_00475420;
                    if (*(int *)(uVar8 + 0x4c) < 0) {
                      uVar14 = 0;
                    }
                    else {
                      uVar14 = *(int *)(uVar8 + 0x4c) % local_88;
                    }
                    puVar11[-5] = uVar14;
                    uVar14 = *puVar11;
                    uVar10 = (*(uint *)(uVar8 + 0x10) & 2) << 2;
                    *puVar11 = uVar10 | uVar14 & 0xfffffff7;
                    *puVar11 = (*(uint *)(uVar8 + 0x10) & 0x10) << 3 | uVar10 | uVar14 & 0xffffff77;
                    local_a0 = lVar22;
                    if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                      uVar14 = 0xffffffff;
                    }
                    else {
                      lVar22 = ftol();
                      uVar4 = lVar22 + *(int *)(param_1 + 0xac0);
                      uVar14 = (uint)uVar4;
                      if ((uVar4 < 0x8000000000000000) ||
                         ((-0x100000001 < (longlong)uVar4 && (0xffffbfff < uVar14)))) {
                        if (0x3fff < (longlong)uVar4) {
                          uVar14 = 0x3fff;
                        }
                      }
                      else {
                        uVar14 = 0xffffc000;
                      }
                    }
                    puVar11[-4] = uVar14;
                    if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                      uVar14 = 0xffffffff;
                      lVar22 = local_a0;
                    }
                    else {
                      local_40 = param_4[0x1a] + param_4[0x1c];
                      iStack_3c = param_4[0x1b] + param_4[0x1d] +
                                  (uint)CARRY4(param_4[0x1a],param_4[0x1c]);
                      lVar22 = ftol();
                      uVar4 = lVar22 + *(int *)(param_1 + 0xac0);
                      uVar14 = (uint)uVar4;
                      lVar22 = local_a0;
                      if ((uVar4 < 0x8000000000000000) ||
                         ((-0x100000001 < (longlong)uVar4 && (0xffffbfff < uVar14)))) {
                        if (0x3fff < (longlong)uVar4) {
                          uVar14 = 0x3fff;
                        }
                      }
                      else {
                        uVar14 = 0xffffc000;
                      }
                    }
                    puVar11[-3] = uVar14;
                    if ((*(byte *)(uVar8 + 0x10) & 4) == 0) {
                      local_a0._4_4_ = *(int *)(uVar8 + 0x24);
                      puVar2 = (uint *)(uVar8 + 0x20);
                      local_a0._0_4_ = *puVar2;
                      if ((-1 < local_a0._4_4_) && ((0 < local_a0._4_4_ || ((uint)local_a0 != 0))))
                      {
                        puVar1 = (uint *)(uVar8 + 0x18);
                        uVar14 = *puVar1;
                        iVar12 = *(int *)(uVar8 + 0x50);
                        local_90._0_4_ = 0;
                        local_90._4_4_ = 0;
                        if (iVar12 != 0) {
                          local_90._0_4_ = *(undefined4 *)(iVar12 + 8);
                          local_90._4_4_ = *(undefined4 *)(iVar12 + 0xc);
                        }
                        local_74 = *(longlong *)puVar1;
                        lVar22 = *(longlong *)puVar2;
                        if ((lVar20 <= CONCAT44(local_a0._4_4_ + *(int *)(uVar8 + 0x1c) +
                                                (uint)CARRY4((uint)local_a0,uVar14),
                                                (uint)local_a0 + uVar14)) &&
                           (local_74 = *(longlong *)puVar1, lVar22 = *(longlong *)puVar2,
                           *(longlong *)puVar1 <= local_a8)) {
                          lVar22 = *(longlong *)puVar1;
                          if (*(longlong *)puVar1 < lVar20) {
                            local_90 = (lVar20 - *(longlong *)puVar1) + local_90;
                            uVar10 = uVar14 - (uint)lVar20;
                            bVar19 = CARRY4((uint)local_a0,uVar10);
                            local_a0._0_4_ = (uint)local_a0 + uVar10;
                            local_a0._4_4_ =
                                 local_a0._4_4_ +
                                 ((*(int *)(uVar8 + 0x1c) - (int)((ulonglong)lVar20 >> 0x20)) -
                                 (uint)(uVar14 < (uint)lVar20)) + (uint)bVar19;
                            *puVar11 = *puVar11 | 0x1000;
                            lVar22 = lVar20;
                          }
                          local_74._4_4_ = (undefined4)((ulonglong)lVar22 >> 0x20);
                          uVar13 = local_74._4_4_;
                          local_74._0_4_ = (undefined4)lVar22;
                          uVar7 = (undefined4)local_74;
                          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0);
                          if (local_a8 - lVar22 < CONCAT44(local_a0._4_4_,(uint)local_a0)) {
                            *puVar11 = *puVar11 | 0x2000;
                            local_a0 = local_a8 - lVar22;
                          }
                          iVar12 = *(int *)(param_1 + 0xb90);
                          iVar18 = *(int *)(param_1 + 0xb94);
                          local_74 = lVar22;
                          if (iVar12 == 0 && iVar18 == 0) {
                            local_dc = 0xffffffff;
                          }
                          else {
                            lVar23 = ftol();
                            local_c = (undefined4)((ulonglong)lVar23 >> 0x20);
                            uVar4 = lVar23 + *(int *)(param_1 + 0xac0);
                            local_dc = (uint)uVar4;
                            if ((uVar4 < 0x8000000000000000) ||
                               ((-0x100000001 < (longlong)uVar4 && (0xffffbfff < local_dc)))) {
                              if (0x3fff < (longlong)uVar4) {
                                local_dc = 0x3fff;
                              }
                            }
                            else {
                              local_dc = 0xffffc000;
                            }
                          }
                          local_b8 = local_dc;
                          if (iVar12 == 0 && iVar18 == 0) {
                            local_b0 = 0xffffffff;
                            lVar22 = local_a0;
                          }
                          else {
                            local_38 = lVar22 + local_a0;
                            lVar22 = ftol();
                            local_24 = (undefined4)((ulonglong)lVar22 >> 0x20);
                            uVar4 = lVar22 + *(int *)(param_1 + 0xac0);
                            local_b0 = (uint)uVar4;
                            lVar22 = local_a0;
                            if ((uVar4 < 0x8000000000000000) ||
                               ((-0x100000001 < (longlong)uVar4 && (0xffffbfff < local_b0)))) {
                              if (0x3fff < (longlong)uVar4) {
                                local_b0 = 0x3fff;
                              }
                            }
                            else {
                              local_b0 = 0xffffc000;
                            }
                          }
                          local_a0._4_4_ = (int)((ulonglong)lVar22 >> 0x20);
                          local_a0._0_4_ = (uint)lVar22;
                          if ((int)local_b0 <= (int)(local_dc + 1)) {
                            local_b0 = local_dc + 1;
                          }
                          puVar11[-0xb] = local_b8;
                          puVar11[-10] = local_b4;
                          puVar11[-9] = local_b0;
                          puVar11[-8] = local_ac;
                          uVar14 = *(uint *)(uVar8 + 0x218);
                          *(uint *)(uVar14 + 0x20) = local_b8;
                          *(uint *)(uVar14 + 0x24) = local_b4;
                          *(uint *)(uVar14 + 0x28) = local_b0;
                          *(uint *)(uVar14 + 0x2c) = local_ac;
                          *(uint *)(uVar14 + 0x30) = local_b0 - local_b8;
                          *(undefined4 *)(uVar14 + 0x10) = uVar7;
                          *(uint *)(uVar14 + 0x34) = local_ac - local_b4;
                          *(longlong *)(uVar14 + 8) = local_90;
                          *(uint *)(uVar14 + 0x18) = (uint)local_a0;
                          *(undefined4 *)(uVar14 + 0x14) = uVar13;
                          *(int *)(uVar14 + 0x1c) = local_a0._4_4_;
                          puVar11[-2] = uVar14;
                          *(uint *)(uVar14 + 0x68) = *(uint *)(uVar14 + 0x68) & 0xfffffffe;
                          *puVar11 = *puVar11 | 0x10000;
                          uVar10 = *(uint *)(uVar14 + 0x68) & 0xfffffffd;
                          *(uint *)(uVar14 + 0x68) = uVar10 | 1;
                          if (1 < *(int *)(param_1 + 0xd94)) {
                            *(uint *)(uVar14 + 0x68) = uVar10 | 3;
                          }
                          local_a0 = lVar22;
                          FUN_004e1930(param_1,uVar8,lVar20,local_a8,&local_b8);
                          local_c4 = local_c4 + 1;
                          puVar11 = puVar11 + 0x16;
                          lVar22 = local_a0;
                        }
                      }
                    }
                  }
                  local_d8 = local_d8 + 1;
                } while (local_d8 < iVar16);
              }
            }
          }
        }
        local_cc = local_cc + 1;
      } while (local_cc < *(int *)(param_1 + 0xd94));
    }
    param_4[0x17] = local_c4;
    if (*(int *)(param_1 + 0xb84) == 0) {
      iVar16 = 0;
      if (0 < (int)param_4[0x17]) {
        puVar11 = param_4 + 0x31;
        do {
          uVar8 = *puVar11;
          if (((uVar8 & 1) == 0) && ((uVar8 & 0x80) != 0)) {
            puVar11[-4] = puVar11[-0xb];
            puVar11[-3] = puVar11[-9];
            *puVar11 = uVar8 & 0xfffff6ff;
          }
          iVar16 = iVar16 + 1;
          puVar11 = puVar11 + 0x16;
        } while (iVar16 < (int)param_4[0x17]);
      }
    }
    else {
      iVar16 = *(int *)(param_1 + 0xb80);
      iVar12 = local_58;
      if (local_58 <= iVar16) {
        iVar12 = iVar16;
      }
      iVar16 = *(int *)(param_1 + 0xb84) + iVar16;
      iVar18 = local_50;
      if (iVar16 <= local_50) {
        iVar18 = iVar16;
      }
      iVar16 = 0;
      if (0 < (int)param_4[0x17]) {
        piVar15 = param_4 + 0x26;
        do {
          if ((iVar12 < piVar15[2]) && (iVar17 = *piVar15, iVar17 < iVar18)) {
            if (iVar17 <= iVar12) {
              iVar17 = iVar12;
            }
            piVar15[7] = iVar17;
            iVar17 = piVar15[2];
            if (iVar18 <= piVar15[2]) {
              iVar17 = iVar18;
            }
            uVar8 = piVar15[0xb];
            piVar15[8] = iVar17;
            piVar15[0xb] = uVar8 | 0x900;
            if ((uVar8 & 1) == 0) {
              uVar3 = CONCAT11((char)((uVar8 | 0x900) >> 8),(char)uVar8);
              uVar14 = CONCAT22((short)(uVar8 >> 0x10),uVar3) & 0xfffffeff;
              piVar15[0xb] = (uVar3 & 0x400) << 1 |
                             CONCAT22((short)(uVar14 >> 0x10),
                                      CONCAT11((byte)(((uVar8 & 0x80) << 1) >> 8) |
                                               (byte)(uVar14 >> 8),(char)uVar14)) & 0xfffff7ff;
            }
            if ((*piVar15 < iVar12) || (iVar18 < piVar15[2])) {
              piVar15[0xb] = (uint)((piVar15[0xb] & 0x900U) != 0) << 9 | piVar15[0xb] & 0xfffffdffU;
            }
          }
          iVar16 = iVar16 + 1;
          piVar15 = piVar15 + 0x16;
        } while (iVar16 < (int)param_4[0x17]);
      }
    }
    if ((*(byte *)(param_4 + 0x16) & 2) != 0) {
      iVar16 = DAT_0064b13c;
      local_a0 = lVar22;
      if (DAT_0064b13c == 0) {
        iVar16 = DrawDibOpen();
      }
      param_4[1] = iVar16;
      if (iVar16 != 0) {
        FUN_004019f0();
        return param_4;
      }
    }
  }
  return param_4;
}


