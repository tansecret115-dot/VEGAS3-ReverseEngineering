/* Module: vegas30.exe
   Function: FUN_00460960
   Address: 00460960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00461eb6) */
/* WARNING: Removing unreachable block (ram,0x00461f25) */
/* WARNING: Removing unreachable block (ram,0x00461b3d) */
/* WARNING: Removing unreachable block (ram,0x00461b59) */
/* WARNING: Removing unreachable block (ram,0x004624ec) */
/* WARNING: Removing unreachable block (ram,0x00461278) */
/* WARNING: Removing unreachable block (ram,0x00462973) */
/* WARNING: Removing unreachable block (ram,0x0046149d) */
/* WARNING: Removing unreachable block (ram,0x0046134d) */
/* WARNING: Removing unreachable block (ram,0x0046241c) */
/* WARNING: Removing unreachable block (ram,0x004612aa) */
/* WARNING: Removing unreachable block (ram,0x004629eb) */
/* WARNING: Removing unreachable block (ram,0x00461391) */
/* WARNING: Removing unreachable block (ram,0x00462454) */
/* WARNING: Removing unreachable block (ram,0x0046141e) */
/* WARNING: Removing unreachable block (ram,0x00462570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00460960(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  HGLOBAL pvVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  undefined4 local_160;
  uint local_15c;
  uint local_158;
  undefined8 local_154;
  undefined4 local_14c;
  uint local_148;
  int local_144;
  undefined4 local_140;
  undefined8 local_13c;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  undefined4 local_124;
  uint local_120;
  int iStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined8 local_f4;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int iStack_90;
  undefined8 local_8c;
  int local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int *local_50;
  uint local_4c;
  undefined8 local_48;
  int local_40;
  int iStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar15 = param_1;
  if (*(int *)(param_1 + 0x5d0) == 0) {
    local_a8 = 1;
  }
  else {
    local_a8 = *(int *)(*(int *)(param_1 + 0x5d0) + 0x44);
  }
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (local_f8 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), local_f8 == 0)) {
    return (undefined4 *)0x0;
  }
  local_ac = *(int *)(param_1 + 0xbc4);
  uVar21 = *(uint *)(param_1 + 0xb88);
  local_28 = ftol();
  local_28 = local_28 + CONCAT44(*(undefined4 *)(param_1 + 0xb8c),uVar21);
  uVar18 = (uint)local_28;
  local_54 = *(int *)(param_1 + 0xac8) - *(int *)(param_1 + 0xac0);
  uVar24 = ftol();
  local_48._0_4_ = (uint)uVar24 + uVar21;
  local_10 = *(uint *)(param_1 + 0xba8);
  local_48._4_4_ =
       (int)((ulonglong)uVar24 >> 0x20) + *(int *)(param_1 + 0xb8c) +
       (uint)CARRY4((uint)uVar24,uVar21);
  local_c = 0;
  local_a4 = *(int *)(param_1 + 0xac0);
  local_a0 = *(int *)(param_1 + 0xac4);
  local_9c = *(int *)(param_1 + 0xac8);
  local_70 = *(int *)(param_1 + 0xbc0);
  local_98 = local_a0;
  lVar25 = local_28;
  if (local_70 < local_ac) {
    do {
      local_28._0_4_ = uVar18;
      local_28._4_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar19 = *(int *)(*(int *)(local_f8 + 8) + local_70 * 4);
      if (iVar19 == 0) break;
      iVar10 = *(int *)(iVar19 + 0x69c);
      *(int *)(iVar10 + 0x18) = local_a4;
      *(int *)(iVar10 + 0x1c) = local_a0;
      *(int *)(iVar10 + 0x20) = local_9c;
      *(int *)(iVar10 + 0x24) = local_98;
      iVar10 = *(int *)(iVar19 + 0x69c);
      *(uint *)(iVar10 + 8) = (uint)local_28;
      *(int *)(iVar10 + 0xc) = local_28._4_4_;
      iVar10 = *(int *)(iVar19 + 0x69c);
      *(uint *)(iVar10 + 0x10) = (uint)local_48 - (uint)local_28;
      *(uint *)(iVar10 + 0x14) =
           (local_48._4_4_ - local_28._4_4_) - (uint)((uint)local_48 < (uint)local_28);
      if ((*(uint *)(iVar19 + 0x10) & 4) == 0) {
        local_28 = lVar25;
        if ((*(uint *)(param_1 + 0x18) & 0x80000) == 0) {
          if ((*(int *)(iVar19 + 4) == 3) && ((*(uint *)(iVar19 + 0x10) & 0x10000) == 0)) {
            local_b0 = *(int *)(iVar19 + 0x698);
            if (local_b0 == 0) {
              local_5c = *(uint *)(param_1 + 0xbb0);
              local_54 = *(int *)(param_1 + 0xbac);
              uVar21 = (local_5c ^ (int)local_5c >> 0x1f) - ((int)local_5c >> 0x1f) >> 1;
              lVar25 = (longlong)*(int *)(iVar19 + 0x694) * (longlong)local_54;
              if (lVar25 < 0) {
                lVar25 = CONCAT44((int)((ulonglong)lVar25 >> 0x20) - (uint)((uint)lVar25 < uVar21),
                                  (uint)lVar25 - uVar21);
                uVar21 = 0;
              }
              local_8 = (uint)((longlong)(lVar25 + (ulonglong)uVar21) / (longlong)(int)local_5c);
              FUN_004606f0(iVar19,local_8,0,&local_60,&local_6c);
              *(int *)(iVar19 + 0x698) = local_6c;
            }
            else {
              local_4c = *(uint *)(iVar19 + 0x694);
              do {
                local_5c = *(uint *)(param_1 + 0xbb0);
                local_54 = *(int *)(param_1 + 0xbac);
                uVar21 = (local_5c ^ (int)local_5c >> 0x1f) - ((int)local_5c >> 0x1f) >> 1;
                lVar25 = (longlong)(int)local_4c * (longlong)local_54;
                if (lVar25 < 0) {
                  lVar25 = CONCAT44((int)((ulonglong)lVar25 >> 0x20) - (uint)((uint)lVar25 < uVar21)
                                    ,(uint)lVar25 - uVar21);
                  uVar21 = 0;
                }
                local_8 = (uint)((longlong)(lVar25 + (ulonglong)uVar21) / (longlong)(int)local_5c);
                FUN_004606f0(iVar19,local_8,0,&local_64,&local_14);
                iVar10 = local_b0 - (int)local_14;
                if (iVar10 < -1) {
                  iVar10 = -1;
                }
                else if (1 < iVar10) {
                  iVar10 = 1;
                }
                local_4c = local_4c + iVar10;
              } while (iVar10 != 0);
              if (*(uint *)(iVar19 + 0x694) != local_4c) {
                *(uint *)(iVar19 + 0x694) = local_4c;
                *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffef;
                FUN_00456c20(param_1);
                *(uint *)**(undefined4 **)(param_1 + 0xbc8) =
                     *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 0x10;
              }
            }
          }
          iVar10 = 0x18;
          if ((*(uint *)(iVar19 + 0x10) & 0x10000) == 0) {
            iVar10 = *(int *)(iVar19 + 0x694);
          }
          local_10 = local_10 + iVar10;
          uVar21 = *(uint *)(param_1 + 0xbac);
          if (uVar21 == 0) {
            iVar10 = -1;
LAB_00460d06:
            local_98 = iVar10;
          }
          else {
            local_54 = *(int *)(param_1 + 0xbb0);
            uVar18 = (uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f) >> 1;
            lVar25 = (longlong)(int)(local_10 - *(int *)(param_1 + 0xba8)) * (longlong)local_54;
            if (lVar25 < 0) {
              lVar25 = CONCAT44((int)((ulonglong)lVar25 >> 0x20) - (uint)((uint)lVar25 < uVar18),
                                (uint)lVar25 - uVar18);
              uVar18 = 0;
            }
            local_8 = (uint)((longlong)(lVar25 + (ulonglong)uVar18) / (longlong)(int)uVar21);
            iVar10 = *(int *)(param_1 + 0xac4) + local_8;
            local_5c = uVar21;
            if (iVar10 < -0x4000) {
              local_98 = -0x4000;
            }
            else {
              local_98 = 0x3fff;
              if (iVar10 < 0x4000) goto LAB_00460d06;
            }
          }
          if ((local_a0 == *(int *)(param_1 + 0xac4)) &&
             (iVar10 = *(int *)(param_1 + 0xacc) + 1, iVar10 <= local_98)) goto LAB_00460d2d;
        }
        else {
          local_10 = local_10 + *(int *)(param_1 + 0xbac);
          iVar10 = *(int *)(param_1 + 0xacc) + 1;
LAB_00460d2d:
          local_98 = iVar10;
        }
        local_a0 = local_98;
        *(int *)(*(int *)(iVar19 + 0x69c) + 0x24) = local_98;
        iVar12 = **(int **)(iVar19 + 0x24) + 1;
        iVar10 = 0;
        if (*(int **)(iVar19 + 0x28) != (int *)0x0) {
          iVar10 = **(int **)(iVar19 + 0x28);
        }
        if (*(int *)(iVar19 + 4) == 3) {
          iVar10 = iVar10 * 3;
        }
        if (iVar12 <= iVar10) {
          iVar12 = iVar10;
        }
        local_c = local_c + iVar12;
        lVar25 = local_28;
      }
      else {
        *(undefined4 *)(*(int *)(iVar19 + 0x69c) + 0x24) =
             *(undefined4 *)(*(int *)(iVar19 + 0x69c) + 0x1c);
      }
      local_70 = local_70 + 1;
      uVar18 = (uint)local_28;
    } while (local_70 < local_ac);
  }
  local_28 = lVar25;
  if ((param_4 == (undefined4 *)0x0) || (puVar8 = param_4, (int)param_4[0x18] < (int)local_c)) {
    pvVar7 = GlobalAlloc(0x40,local_c * 0x58 + 0x5f8);
    puVar8 = GlobalLock(pvVar7);
    if (puVar8 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar8[0x18] = local_c + 0x10;
    if (param_4 != (undefined4 *)0x0) {
      pvVar7 = GlobalHandle(param_4);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(param_4);
      GlobalFree(pvVar7);
    }
  }
  param_4 = puVar8;
  if (param_4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar19 = 0x8000 >> ((byte)((*(int *)(param_1 + 0xcc4) + 1) / 2) & 0x1f);
  if ((*(byte *)(param_1 + 0xcc4) & 1) != 0) {
    iVar19 = iVar19 + iVar19 / 2;
  }
  param_4[6] = local_98;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  *param_4 = param_2;
  param_4[1] = 0;
  lVar25 = *(longlong *)(param_1 + 0xb90);
  iVar10 = *(int *)(param_1 + 0xb98);
  param_4[7] = iVar19;
  *(double *)(param_4 + 8) = (double)lVar25 / (double)iVar10;
  param_4[10] = *(uint *)(param_1 + 0x18) >> 0x14 & 1;
  param_4[0xc] = *(undefined4 *)(param_1 + 0xb88);
  param_4[0xd] = *(undefined4 *)(param_1 + 0xb8c);
  param_4[0xe] = *(undefined4 *)(param_1 + 0xb90);
  param_4[0xf] = *(undefined4 *)(param_1 + 0xb94);
  param_4[0x10] = *(undefined4 *)(param_1 + 0xb98);
  param_4[0x11] = *(undefined4 *)(param_1 + 0xac0);
  param_4[0x12] = *(undefined4 *)(param_1 + 0xac4);
  if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
    uVar9 = *(undefined4 *)(param_1 + 0xb70);
    uVar16 = *(undefined4 *)(param_1 + 0xb74);
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0xb30);
    uVar16 = *(undefined4 *)(param_1 + 0xb34);
  }
  param_4[0x14] = uVar9;
  param_4[0x15] = uVar16;
  param_4[0x16] = *(uint *)(param_1 + 0x18) >> 0x11 & 0x80 | param_4[0x16] & 0xffffff7f;
  FUN_004582a0(param_1,param_4 + 0x1a,param_4 + 0x1c);
  lVar25 = CONCAT44(local_8c._4_4_,(undefined4)local_8c);
  if ((int)local_c < 1) {
    return param_4;
  }
  local_18 = param_4[0x17];
  local_70 = *(int *)(param_1 + 0xbc0);
  if (local_70 < local_ac) {
    do {
      iVar19 = *(int *)(*(int *)(local_f8 + 8) + local_70 * 4);
      if ((*(byte *)(iVar19 + 0x10) & 4) == 0) {
        iVar10 = *(int *)(iVar19 + 0x69c);
        local_38 = *(uint *)(iVar10 + 0x18);
        local_34 = *(uint *)(iVar10 + 0x1c);
        local_30 = *(uint *)(iVar10 + 0x20);
        if (param_3[3] <= (int)local_34) break;
        local_2c = *(int *)(iVar10 + 0x24) - 1;
        if (param_3[1] <= (int)local_2c) {
          piVar20 = param_4 + local_18 * 0x16;
          piVar20[0x31] = 1;
          if (((*(uint *)(iVar19 + 0x10) & 0x40000) == 0) ||
             ((*(uint *)(iVar19 + 0x10) & 0x10000) != 0)) {
            iVar10 = 0;
          }
          else {
            iVar10 = 1;
          }
          piVar20[0x31] = iVar10 << 0x11 | 1;
          local_14 = piVar20;
          local_8c = lVar25;
          uVar11 = FUN_005be5f0(1);
          uVar17 = local_30;
          uVar18 = local_38;
          uVar21 = piVar20[0x31];
          uVar11 = (uVar11 & 1) << 0x12;
          piVar20[0x31] = uVar11 | uVar21 & 0xfffbffff;
          if (((*(uint *)(iVar19 + 0x10) & 0x80000) == 0) ||
             ((*(uint *)(iVar19 + 0x10) & 0x10000) != 0)) {
            iVar10 = 0;
          }
          else {
            iVar10 = 1;
          }
          local_14[0x31] = iVar10 << 0x13 | uVar11 | uVar21 & 0xfff3ffff;
          local_14[0x1e] = iVar19;
          local_14[0x26] = local_38;
          local_14[0x27] = local_34;
          local_14[0x28] = local_30;
          local_14[0x29] = local_2c;
          local_14[0x32] = 0;
          local_14[0x2b] = 0;
          local_8 = *(int *)(iVar19 + 0x690) % local_a8;
          param_4[local_18 * 0x16 + 0x2c] = local_8;
          if ((*(uint *)(iVar19 + 0x10) & 0x20000) != 0) {
            param_4[0x16] = param_4[0x16] | 0x20;
            local_14[0x31] = local_14[0x31] | 8;
          }
          if ((*(byte *)(iVar19 + 0x10) & 0x80) != 0) {
            param_4[0x16] = param_4[0x16] | 0x40;
            local_14[0x31] = local_14[0x31] | 0x40;
          }
          local_18 = local_18 + 1;
          local_34 = local_34 + 2;
          local_2c = local_2c - 2;
          if (*(int *)(iVar19 + 4) == 2) {
            iVar10 = *(int *)(param_1 + 0xac0);
            uVar9 = *(undefined4 *)(param_1 + 0xb88);
            local_54 = *param_3 - iVar10;
            lVar25 = ftol();
            local_154 = lVar25 + CONCAT44(*(undefined4 *)(param_1 + 0xb8c),uVar9);
            local_54 = param_3[2] - iVar10;
            lVar25 = ftol();
            local_13c = lVar25 + CONCAT44(*(undefined4 *)(param_1 + 0xb8c),uVar9);
            param_4[0x16] = param_4[0x16] | 1;
            lVar25 = *(longlong *)(param_1 + 0xb88);
            lVar26 = ftol();
            local_28 = lVar26 + lVar25;
            local_54 = (*(int *)(param_1 + 0xac8) - *(int *)(param_1 + 0xac0)) + 6;
            lVar26 = ftol();
            local_48 = lVar26 + lVar25;
            iVar10 = 0;
            if (*(int **)(iVar19 + 0x28) != (int *)0x0) {
              iVar10 = **(int **)(iVar19 + 0x28);
            }
            iVar10 = iVar10 + -1;
            local_20 = 0;
            local_68 = iVar10;
            if (0 < iVar10) {
              do {
                piVar20 = (int *)(*(int *)(*(int *)(iVar19 + 0x28) + 4) * local_20 +
                                 *(int *)(*(int *)(iVar19 + 0x28) + 8));
                if ((*piVar20 != 0) || (piVar20[1] != 0)) {
                  FUN_00462ec0(param_1,*piVar20);
                  FUN_00462ec0(param_1,piVar20[1]);
                  iVar10 = local_68;
                }
                local_20 = local_20 + 1;
              } while ((int)local_20 < iVar10);
            }
            local_20 = 0;
            lVar25 = local_8c;
            if (0 < iVar10) {
              puVar8 = param_4 + local_18 * 0x16 + 0x32;
              do {
                local_14 = (int *)(*(int *)(*(int *)(iVar19 + 0x28) + 4) * local_20 +
                                  *(int *)(*(int *)(iVar19 + 0x28) + 8));
                iVar10 = *local_14;
                if ((iVar10 != 0) || (local_14[1] != 0)) {
                  plVar1 = (longlong *)(local_14 + 4);
                  local_8c = *plVar1;
                  lVar6 = *plVar1;
                  lVar4 = *plVar1;
                  lVar26 = *plVar1;
                  lVar25 = *plVar1;
                  if (local_13c < lVar26) break;
                  plVar1 = (longlong *)(local_14 + 0x38);
                  local_78 = *plVar1;
                  lVar5 = *plVar1;
                  lVar25 = *plVar1;
                  if (local_154 <= lVar25) {
                    puVar8[-1] = 0;
                    local_108 = 0;
                    if (*local_14 == 0) {
LAB_00461327:
                      if (local_14[1] != 0) {
                        *puVar8 = &LAB_004722a0;
                        local_b4 = local_14[0x1e];
                      }
                    }
                    else if (local_14[1] == 0) {
                      if (*local_14 == 0) goto LAB_00461327;
                      *puVar8 = &LAB_00472240;
                      local_b4 = local_14[8];
                      if (local_14[9] != 0) {
                        puVar8[-1] = puVar8[-1] | 0x20;
                      }
                    }
                    else {
                      *puVar8 = &LAB_00472320;
                      uVar21 = puVar8[-1];
                      local_b4 = local_14[8];
                      puVar8[-1] = uVar21 | 0x20;
                      puVar8[-1] = (*(uint *)(local_14[1] + 0x10) & 0x10) << 6 |
                                   CONCAT22((short)(uVar21 >> 0x10),
                                            CONCAT11((char)(uVar21 >> 8),(char)(uVar21 | 0x20))) &
                                   0xfffffbff;
                    }
                    local_8c = lVar6;
                    if (lVar4 < local_28) {
                      local_108 = local_28 - lVar26;
                      local_8c = local_28;
                    }
                    local_78 = lVar5;
                    if (local_48 < lVar25) {
                      local_78 = local_48;
                    }
                    local_40 = *(int *)(param_1 + 0xb90);
                    iStack_3c = *(int *)(param_1 + 0xb94);
                    if (local_40 == 0 && iStack_3c == 0) {
                      local_c = 0xffffffff;
                    }
                    else {
                      lVar25 = ftol();
                      uVar3 = lVar25 + *(int *)(param_1 + 0xac0);
                      local_c = (uint)uVar3;
                      if ((uVar3 < 0x8000000000000000) ||
                         ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_c)))) {
                        if (0x3fff < (longlong)uVar3) {
                          local_c = 0x3fff;
                        }
                      }
                      else {
                        local_c = 0xffffc000;
                      }
                    }
                    local_38 = local_c;
                    if (local_40 == 0 && iStack_3c == 0) {
                      local_30 = 0xffffffff;
                    }
                    else {
                      lVar25 = ftol();
                      uVar3 = lVar25 + *(int *)(param_1 + 0xac0);
                      local_30 = (uint)uVar3;
                      if ((uVar3 < 0x8000000000000000) ||
                         ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_30)))) {
                        if (0x3fff < (longlong)uVar3) {
                          local_30 = 0x3fff;
                        }
                      }
                      else {
                        local_30 = 0xffffc000;
                      }
                    }
                    if ((int)local_30 <= (int)local_c) {
                      if (((local_14[1] == 0) && (iVar12 = *local_14, iVar12 != 0)) &&
                         (local_78 ==
                          CONCAT44(*(int *)(iVar12 + 0x24) + *(int *)(iVar12 + 0x1c) +
                                   (uint)CARRY4(*(uint *)(iVar12 + 0x20),*(uint *)(iVar12 + 0x18)),
                                   *(uint *)(iVar12 + 0x20) + *(uint *)(iVar12 + 0x18)))) {
                        local_38 = local_c - 1;
                        local_30 = local_c;
                      }
                      else {
                        local_30 = local_38 + 1;
                      }
                    }
                    puVar8[-0xc] = local_38;
                    puVar8[-0xb] = local_34;
                    puVar8[-10] = local_30;
                    puVar8[-9] = local_2c;
                    puVar8[-0x14] = iVar10;
                    puVar8[-7] = 0;
                    puVar8[-6] = local_8;
                    puVar8[-2] = local_14;
                    puVar8[-0x13] = local_b4;
                    *(longlong *)(puVar8 + -0x12) = local_108;
                    *(longlong *)(puVar8 + -0x10) = local_8c;
                    *(longlong *)(puVar8 + -0xe) = local_78 - local_8c;
                    uVar21 = puVar8[-1];
                    puVar8[-1] = uVar21 | 0x3000;
                    if (iVar10 != 0) {
                      local_64 = *(int **)(iVar10 + 0x218);
                      if ((*(byte *)(local_64 + 0x1a) & 1) == 0) {
                        puVar8[-1] = uVar21 | 0x13000;
                        local_64[0x1a] = local_64[0x1a] & 0xfffffffdU | 1;
                        FUN_00462c80(param_1,iVar19,iVar10,local_28,local_48,&local_38);
                      }
                      else {
                        puVar8[-1] = uVar21 & 0xfffeffff | 0x3000;
                      }
                      puVar8[-0xb] = *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x24);
                      puVar8[-9] = *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x2c);
                      if (((*(byte *)(iVar10 + 0x10) & 2) == 0) &&
                         ((*(uint *)(*(int *)(iVar10 + 8) + 0x10) & 0x20000) == 0)) {
                        iVar12 = 0;
                      }
                      else {
                        iVar12 = 1;
                      }
                      uVar21 = puVar8[-1];
                      puVar8[-1] = iVar12 << 3 | uVar21 & 0xfffffff7;
                      puVar8[-1] = *(uint *)(iVar10 + 0x10) >> 1 & 4 |
                                   iVar12 << 3 | uVar21 & 0xfffffff3;
                      puVar8[-3] = local_64;
                      puVar8[-7] = 0;
                      uVar21 = local_8;
                      if (-1 < *(int *)(iVar10 + 0x4c)) {
                        uVar21 = *(int *)(iVar10 + 0x4c) % local_a8;
                      }
                      puVar8[-6] = uVar21;
                      uVar21 = puVar8[-1];
                      uVar18 = (*(uint *)(iVar10 + 0x10) & 0x10) << 3;
                      puVar8[-1] = uVar18 | uVar21 & 0xffffff7f;
                      if (((*(uint *)(iVar10 + 0x10) & 0x10) == 0) && (*(int *)(iVar10 + 0x38) != 0)
                         ) {
                        uVar17 = *(uint *)(iVar10 + 0x10) >> 0x1f;
                      }
                      else {
                        uVar17 = 0;
                      }
                      puVar8[-1] = uVar17 << 0x14 | uVar18 | uVar21 & 0xffefff7f;
                      if ((*(int *)(iVar10 + 0x18) == puVar8[-0x10]) &&
                         (*(int *)(iVar10 + 0x1c) == puVar8[-0xf])) {
                        puVar8[-1] = uVar17 << 0x14 | uVar18 | uVar21 & 0xffefef7f | 0x4000;
                      }
                      if ((*(uint *)(iVar10 + 0x20) + *(uint *)(iVar10 + 0x18) ==
                           puVar8[-0x10] + puVar8[-0xe]) &&
                         (*(int *)(iVar10 + 0x24) + *(int *)(iVar10 + 0x1c) +
                          (uint)CARRY4(*(uint *)(iVar10 + 0x20),*(uint *)(iVar10 + 0x18)) ==
                          puVar8[-0xf] + puVar8[-0xd] + (uint)CARRY4(puVar8[-0x10],puVar8[-0xe]))) {
                        puVar8[-1] = puVar8[-1] & 0xffffdfff | 0x8000;
                      }
                    }
                    iVar10 = local_14[1];
                    if ((iVar10 != 0) && ((*(byte *)(*(int *)(iVar10 + 0x218) + 0x68) & 1) == 0)) {
                      FUN_00462c80(param_1,iVar19,iVar10,local_28,local_48,&local_38);
                    }
                    local_18 = local_18 + 1;
                    puVar8 = puVar8 + 0x16;
                  }
                }
                local_20 = local_20 + 1;
                lVar25 = local_8c;
              } while ((int)local_20 < local_68);
            }
          }
          else {
            lVar25 = local_8c;
            if (*(int *)(iVar19 + 4) == 3) {
              iVar10 = *(int *)(param_1 + 0xac0);
              local_54 = *param_3 - iVar10;
              uVar24 = ftol();
              local_12c = (uint)uVar24 + *(uint *)(param_1 + 0xb88);
              local_128 = (int)((ulonglong)uVar24 >> 0x20) + *(int *)(param_1 + 0xb8c) +
                          (uint)CARRY4((uint)uVar24,*(uint *)(param_1 + 0xb88));
              local_54 = param_3[2] - iVar10;
              uVar24 = ftol();
              local_148 = (uint)uVar24 + *(uint *)(param_1 + 0xb88);
              local_144 = (int)((ulonglong)uVar24 >> 0x20) + *(int *)(param_1 + 0xb8c) +
                          (uint)CARRY4((uint)uVar24,*(uint *)(param_1 + 0xb88));
              param_4[0x16] = param_4[0x16] | 2;
              local_100 = *(undefined4 *)(param_1 + 0xb88);
              local_fc = *(undefined4 *)(param_1 + 0xb8c);
              lVar25 = ftol();
              local_28 = lVar25 + CONCAT44(local_fc,local_100);
              local_54 = (*(int *)(param_1 + 0xac8) - *(int *)(param_1 + 0xac0)) + 6;
              lVar25 = ftol();
              local_48 = lVar25 + CONCAT44(local_fc,local_100);
              local_c4 = uVar18;
              local_d4 = uVar18;
              local_ec = uVar18;
              local_c0 = local_34;
              local_b8 = local_2c;
              local_d0 = local_34;
              local_c8 = local_2c;
              local_e8 = local_34;
              local_e0 = local_2c;
              local_bc = uVar17;
              local_cc = uVar17;
              local_e4 = uVar17;
              FUN_004606f0(iVar19,*(int *)(*(int *)(iVar19 + 0x69c) + 0x24) -
                                  *(int *)(*(int *)(iVar19 + 0x69c) + 0x1c),0,&local_7c,&local_84);
              iVar10 = *(int *)(*(int *)(iVar19 + 0x69c) + 0x1c);
              uVar21 = iVar10 + 2 + local_7c;
              local_b8 = (uVar21 - 4) + local_84;
              local_c0 = uVar21;
              FUN_004606f0(iVar19,*(int *)(*(int *)(iVar19 + 0x69c) + 0x24) - iVar10,1,&local_7c,
                           &local_84);
              iVar10 = *(int *)(*(int *)(iVar19 + 0x69c) + 0x1c);
              uVar18 = iVar10 + 2 + local_7c;
              local_c8 = (uVar18 - 4) + local_84;
              local_d0 = uVar18;
              FUN_004606f0(iVar19,*(int *)(*(int *)(iVar19 + 0x69c) + 0x24) - iVar10,2,&local_7c,
                           &local_84);
              local_e8 = *(int *)(*(int *)(iVar19 + 0x69c) + 0x1c) + 2 + local_7c;
              local_e0 = (local_e8 - 4) + local_84;
              local_170 = local_c4;
              local_168 = local_bc;
              local_164 = local_b8;
              local_180 = local_d4;
              local_178 = local_cc;
              local_174 = local_c8;
              local_17c = uVar18;
              local_16c = uVar21;
              puVar8 = (undefined4 *)_SfGetUIFontSize_4(0x6e);
              local_58 = *puVar8;
              iVar12 = (int)(local_b8 - uVar21) / 2;
              iVar10 = puVar8[1] + 3;
              if (iVar12 < puVar8[1] + 3) {
                iVar10 = iVar12;
              }
              if (((*(uint *)(iVar19 + 0x10) & 0x40000) == 0) ||
                 ((*(uint *)(iVar19 + 0x10) & 0x10000) != 0)) {
                local_e8 = local_e8 + (int)((local_e0 - iVar10) - local_e8) / 2;
                local_e0 = iVar10 + local_e8;
              }
              local_16c = (int)((local_b8 - uVar21) - iVar10) / 2 + local_c0;
              local_164 = local_16c + iVar10;
              local_17c = (int)((local_c8 - iVar10) - local_d0) / 2 + local_d0;
              local_174 = local_17c + iVar10;
              local_68 = 0;
              if (*(int **)(iVar19 + 0x28) != (int *)0x0) {
                local_68 = **(int **)(iVar19 + 0x28);
              }
              iVar10 = 0;
              local_68 = local_68 + -1;
              if (0 < local_68) {
                do {
                  iVar12 = *(int *)(*(int *)(iVar19 + 0x28) + 8);
                  iVar22 = *(int *)(*(int *)(iVar19 + 0x28) + 4) * iVar10;
                  iVar13 = *(int *)(iVar22 + iVar12);
                  iVar22 = iVar22 + iVar12;
                  if ((iVar13 != 0) || (*(int *)(iVar22 + 4) != 0)) {
                    FUN_00462ec0(param_1,iVar13);
                    FUN_00462ec0(param_1,*(undefined4 *)(iVar22 + 4));
                    FUN_00462ec0(param_1,*(undefined4 *)(iVar22 + 8));
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < local_68);
              }
              local_4c = 0;
              local_6c = 0;
              local_c = 0;
              if (0 < local_68) {
                do {
                  iVar10 = *(int *)(*(int *)(iVar19 + 0x28) + 8);
                  iVar13 = *(int *)(*(int *)(iVar19 + 0x28) + 4) * local_c;
                  iVar12 = *(int *)(iVar13 + iVar10);
                  local_50 = (int *)(iVar13 + iVar10);
                  if ((iVar12 == 0) && (local_50[1] == 0)) {
                    local_6c = 0;
                  }
                  else if ((*(byte *)(iVar12 + 0x10) & 4) == 0) {
                    if ((-1 < *(int *)(iVar12 + 0x24)) &&
                       ((0 < *(int *)(iVar12 + 0x24) || (*(int *)(iVar12 + 0x20) != 0)))) {
                      local_dc = local_50[0x38];
                      local_120 = local_50[4];
                      iStack_11c = local_50[5];
                      local_d8 = local_50[0x39];
                      if (local_28 <= *(longlong *)(local_50 + 0x38)) {
                        if (local_48 < *(longlong *)(local_50 + 4)) break;
                        if ((local_144 < iStack_11c) ||
                           ((((local_144 <= iStack_11c && (local_148 < local_120)) ||
                             (local_d8 < local_128)) ||
                            ((local_d8 <= local_128 && (local_dc < local_12c)))))) {
                          local_54 = 0;
                          local_80 = 0;
                        }
                        else {
                          local_54 = 1;
                          local_80 = 0;
                        }
                        do {
                          local_1c = *local_50;
                          uVar21 = *(uint *)(iVar19 + 0x10);
                          uVar18 = uVar21 & 0x40000;
                          if (((uVar18 == 0) || ((uVar21 & 0x10000) != 0)) ||
                             (bVar23 = false,
                             ((uint)local_50[0x32] >> 1 & 4) == (local_50[0x32] & 4U))) {
                            bVar23 = true;
                          }
                          iVar10 = 0;
                          local_5c = 0;
                          local_20 = 0;
                          local_14 = (int *)0x0;
                          local_64 = (int *)0x0;
                          switch(local_80) {
                          case 0:
                            if (bVar23) goto LAB_00461cd4;
                            iVar10 = local_50[1];
                            bVar23 = iVar10 == 0;
                            if (bVar23) {
                              iVar10 = local_50[2];
                            }
                            local_5c = (uint)bVar23;
                            local_1c = iVar10;
                            break;
                          case 1:
                            goto switchD_00461c12_caseD_1;
                          case 2:
                            if (local_50[9] != 0) {
                              if ((*(byte *)(local_50 + 0x32) & 2) == 0) {
                                local_64 = *(int **)(local_1c + 0x200);
                              }
                              else {
                                local_64 = *(int **)(local_1c + 0x204);
                              }
                              if ((((uVar18 != 0) && ((uVar21 & 0x10000) == 0)) &&
                                  (local_50[1] != 0)) ||
                                 ((local_64 != (int *)0x0 && (*local_64 != 0)))) {
                                local_20 = 1;
                              }
                              iVar12 = local_6c;
                              if (local_50[1] != 0) {
                                local_6c = 0;
                                iVar12 = local_6c;
                              }
joined_r0x00461cd2:
                              local_6c = iVar12;
                              if (local_20 != 0) break;
                            }
                            goto LAB_00461cd4;
                          case 3:
                            if (local_50[1] == 0) {
                              iVar12 = local_1c;
                              if ((((uVar18 != 0) && ((uVar21 & 0x10000) == 0)) && (local_6c != 0))
                                 && (local_6c != local_1c)) {
                                local_20 = 1;
                                local_14 = (int *)0x1;
                              }
                              goto joined_r0x00461cd2;
                            }
LAB_00461cd4:
                            local_1c = 0;
switchD_00461c12_caseD_1:
                          }
                          local_94 = local_dc;
                          iStack_90 = local_d8;
                          if (iVar10 != 0) {
                            uVar21 = *(uint *)(iVar10 + 0x20) + *(uint *)(iVar10 + 0x18);
                            iVar10 = *(int *)(iVar10 + 0x24) + *(int *)(iVar10 + 0x1c) +
                                     (uint)CARRY4(*(uint *)(iVar10 + 0x20),*(uint *)(iVar10 + 0x18))
                            ;
                            if ((iVar10 <= local_d8) && ((iVar10 < local_d8 || (uVar21 < local_dc)))
                               ) {
                              local_94 = uVar21;
                              iStack_90 = iVar10;
                            }
                          }
                          local_60 = 0;
                          if (local_1c != 0) {
                            switch(local_80) {
                            case 0:
                              local_60 = 1;
                              local_4c = (uint)local_50[0x32] >> 3 & 1;
                              break;
                            case 1:
                              local_4c = (uint)local_50[0x32] >> 2 & 1;
                              break;
                            case 2:
                            case 3:
                              local_4c = 2;
                            }
                            if (local_4c == 0) {
                              local_38 = local_c4;
                              local_34 = local_c0;
                              local_30 = local_bc;
                              local_2c = local_b8;
                            }
                            else if (local_4c == 1) {
                              local_38 = local_d4;
                              local_34 = local_d0;
                              local_30 = local_cc;
                              local_2c = local_c8;
                            }
                            else if (local_4c == 2) {
                              if ((local_14 == (int *)0x0) && (local_50[1] == 0)) {
                                puVar14 = &local_180;
                                if ((*(byte *)(local_50 + 0x32) & 4) == 0) {
                                  puVar14 = &local_170;
                                }
                                local_38 = *puVar14;
                                local_34 = puVar14[1];
                                local_30 = puVar14[2];
                                local_2c = puVar14[3];
                              }
                              else {
                                local_38 = local_ec;
                                local_34 = local_e8;
                                local_30 = local_e4;
                                local_2c = local_e0;
                              }
                            }
                            if (DAT_0064a4a0 != 0) {
                              iVar10 = *(int *)(param_1 + 0xb90);
                              iStack_3c = *(int *)(param_1 + 0xb94);
                              local_40 = iVar10;
                              if (iVar10 == 0 && iStack_3c == 0) {
                                local_10 = 0xffffffff;
                              }
                              else {
                                lVar25 = ftol();
                                uVar3 = lVar25 + *(int *)(param_1 + 0xac0);
                                local_10 = (uint)uVar3;
                                if ((uVar3 < 0x8000000000000000) ||
                                   ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_10)))) {
                                  if (0x3fff < (longlong)uVar3) {
                                    local_10 = 0x3fff;
                                  }
                                }
                                else {
                                  local_10 = 0xffffc000;
                                }
                              }
                              if (iVar10 == 0 && iStack_3c == 0) {
                                uVar21 = 0xffffffff;
                              }
                              else {
                                lVar25 = ftol();
                                uVar3 = lVar25 + *(int *)(param_1 + 0xac0);
                                uVar21 = (uint)uVar3;
                                if ((uVar3 < 0x8000000000000000) ||
                                   ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar21)))) {
                                  if (0x3fff < (longlong)uVar3) {
                                    uVar21 = 0x3fff;
                                  }
                                }
                                else {
                                  uVar21 = 0xffffc000;
                                }
                              }
                              iVar10 = local_1c;
                              if (0x1c < (int)(uVar21 - local_10)) {
                                iVar12 = uVar21 - 0xb;
                                iVar13 = local_2c - 0x11;
                                if ((local_20 == 0) || (local_14 != (int *)0x0)) {
                                  if ((local_50[9] == 0) && (0x18 < (int)(local_2c - local_34))) {
                                    iVar22 = *(int *)(local_1c + 0x218);
                                    *(int *)(iVar22 + 0x40) = iVar12;
                                    *(int *)(iVar22 + 0x44) = iVar13;
                                    if (DAT_0064b4e4 == 0) {
                                      iVar22 = FUN_00601ab0(&local_124,&local_130,1);
                                      if (iVar22 < 0) {
                                        DAT_0064b4f0 = 1;
                                      }
                                      else {
                                        uVar21 = (local_130 & 0xffff) >> 8;
                                        if ((int)DAT_0064b4e4 <= (int)uVar21) {
                                          DAT_0064b4f0 = 0;
                                          _DAT_0064b4f4 = local_124;
                                          DAT_0064b4e4 = uVar21;
                                        }
                                      }
                                    }
                                    if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
                                      iVar22 = 1;
                                    }
                                    else {
                                      iVar22 = 0;
                                    }
                                    *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) =
                                         iVar22 << 2 |
                                         *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) & 0xfffffffb;
                                    if (0x29 < (int)(local_2c - local_34)) {
                                      *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) =
                                           *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) | 8;
                                      iVar22 = *(int *)(iVar10 + 0x218);
                                      *(int *)(iVar22 + 0x48) = iVar12;
                                      *(int *)(iVar22 + 0x4c) = iVar13;
                                      iVar22 = *(int *)(iVar10 + 0x218);
                                      *(uint *)(iVar22 + 0x4c) =
                                           *(int *)(iVar22 + 0x4c) -
                                           (-(uint)((*(uint *)(iVar22 + 0x68) & 4) != 0) & 0x11);
                                      if (((0x3a < (int)(local_2c - local_34)) &&
                                          (*(int *)(iVar10 + 0x50) != 0)) &&
                                         ((*(uint *)(*(int *)(*(int *)(iVar10 + 0x50) + 0x18) +
                                                    0x134) & 0x400) != 0)) {
                                        if (DAT_0064b4e4 == 0) {
                                          iVar22 = FUN_00601ab0(&local_140,&local_15c,1);
                                          if (iVar22 < 0) {
                                            DAT_0064b4f0 = 1;
                                          }
                                          else {
                                            uVar21 = (local_15c & 0xffff) >> 8;
                                            if ((int)DAT_0064b4e4 <= (int)uVar21) {
                                              DAT_0064b4f0 = 0;
                                              _DAT_0064b4f4 = local_140;
                                              DAT_0064b4e4 = uVar21;
                                            }
                                          }
                                        }
                                        if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
                                          iVar22 = 1;
                                        }
                                        else {
                                          iVar22 = 0;
                                        }
                                        *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) =
                                             iVar22 << 4 |
                                             *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) & 0xffffffef
                                        ;
                                        iVar22 = *(int *)(iVar10 + 0x218);
                                        *(int *)(iVar22 + 0x50) = iVar12;
                                        *(int *)(iVar22 + 0x54) = iVar13;
                                        piVar20 = (int *)(*(int *)(iVar10 + 0x218) + 0x54);
                                        *piVar20 = *piVar20 + -0x22;
                                      }
                                    }
                                  }
                                }
                                else {
                                  iVar10 = local_2c - 7;
                                  if ((*(byte *)(local_50 + 0x32) & 2) == 0) {
                                    if (DAT_0064b4e4 == 0) {
                                      iVar13 = FUN_00601ab0(&local_160,&local_158,1);
                                      if (iVar13 < 0) {
                                        DAT_0064b4f0 = 1;
                                      }
                                      else {
                                        uVar21 = (local_158 & 0xffff) >> 8;
                                        if ((int)DAT_0064b4e4 <= (int)uVar21) {
                                          DAT_0064b4f0 = 0;
                                          _DAT_0064b4f4 = local_160;
                                          DAT_0064b4e4 = uVar21;
                                        }
                                      }
                                    }
                                    if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
                                      iVar13 = 1;
                                    }
                                    else {
                                      iVar13 = 0;
                                    }
                                    *(uint *)(*(int *)(local_1c + 0x218) + 0x68) =
                                         iVar13 << 5 |
                                         *(uint *)(*(int *)(local_1c + 0x218) + 0x68) & 0xffffffdf;
                                    iVar13 = *(int *)(local_1c + 0x218);
                                    *(int *)(iVar13 + 0x58) = iVar12;
                                    *(int *)(iVar13 + 0x5c) = iVar10;
                                  }
                                  else {
                                    if (DAT_0064b4e4 == 0) {
                                      iVar13 = FUN_00601ab0(&local_14c,&local_134,1);
                                      if (iVar13 < 0) {
                                        DAT_0064b4f0 = 1;
                                      }
                                      else {
                                        uVar21 = (local_134 & 0xffff) >> 8;
                                        if ((int)DAT_0064b4e4 <= (int)uVar21) {
                                          DAT_0064b4f0 = 0;
                                          _DAT_0064b4f4 = local_14c;
                                          DAT_0064b4e4 = uVar21;
                                        }
                                      }
                                    }
                                    if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
                                      iVar13 = 1;
                                    }
                                    else {
                                      iVar13 = 0;
                                    }
                                    *(uint *)(*(int *)(local_1c + 0x218) + 0x68) =
                                         iVar13 << 6 |
                                         *(uint *)(*(int *)(local_1c + 0x218) + 0x68) & 0xffffffbf;
                                    iVar13 = *(int *)(local_1c + 0x218);
                                    *(int *)(iVar13 + 0x60) = iVar12;
                                    *(int *)(iVar13 + 100) = iVar10;
                                  }
                                }
                              }
                            }
                            iVar10 = local_18;
                            local_118._0_4_ = 0;
                            local_118._4_4_ = 0;
                            param_4[local_18 * 0x16 + 0x31] = 0;
                            if (((*(uint *)(iVar19 + 0x10) & 0x40000) == 0) ||
                               ((*(uint *)(iVar19 + 0x10) & 0x10000) != 0)) {
                              iVar12 = 0;
                            }
                            else {
                              iVar12 = 1;
                            }
                            param_4[local_18 * 0x16 + 0x31] = iVar12 << 0x11;
                            uVar18 = FUN_005be5f0(1);
                            uVar21 = param_4[iVar10 * 0x16 + 0x31];
                            uVar18 = (uVar18 & 1) << 0x12;
                            param_4[iVar10 * 0x16 + 0x31] = uVar18 | uVar21 & 0xfffbffff;
                            if (((*(uint *)(iVar19 + 0x10) & 0x80000) == 0) ||
                               ((*(uint *)(iVar19 + 0x10) & 0x10000) != 0)) {
                              iVar12 = 0;
                            }
                            else {
                              iVar12 = 1;
                            }
                            param_4[iVar10 * 0x16 + 0x31] =
                                 iVar12 << 0x13 | uVar18 | uVar21 & 0xfff3ffff;
                            if (local_20 == 0) {
                              if (local_50[1] == 0) {
                                param_4[iVar10 * 0x16 + 0x32] = &LAB_00475420;
                                local_b0 = local_50[local_60 * 0x16 + 8];
                                if (local_50[local_60 * 0x16 + 9] != 0) {
                                  param_4[iVar10 * 0x16 + 0x31] =
                                       param_4[iVar10 * 0x16 + 0x31] | 0x20;
                                }
                              }
                              else {
                                param_4[iVar10 * 0x16 + 0x32] = FUN_004754d0;
                                local_b0 = local_50[local_60 * 0x16 + 8];
                                uVar21 = param_4[iVar10 * 0x16 + 0x31];
                                param_4[iVar10 * 0x16 + 0x31] = uVar21 | 0x20;
                                param_4[iVar10 * 0x16 + 0x31] =
                                     (*(uint *)(local_50[1] + 0x10) & 0x10) << 6 |
                                     uVar21 & 0xfffffbff | 0x20;
                              }
                            }
                            else {
                              param_4[iVar10 * 0x16 + 0x32] = &LAB_00475470;
                              param_4[iVar10 * 0x16 + 0x31] =
                                   param_4[iVar10 * 0x16 + 0x31] & 0xffffcfff | 0xc000;
                            }
                            local_f4 = CONCAT44(iStack_11c,local_120);
                            if (CONCAT44(iStack_11c,local_120) < local_28) {
                              local_118 = local_28 - CONCAT44(iStack_11c,local_120);
                              local_f4 = local_28;
                            }
                            local_110 = CONCAT44(iStack_90,local_94);
                            if (local_48 < CONCAT44(iStack_90,local_94)) {
                              local_110 = local_48;
                            }
                            uVar21 = (uint)local_110;
                            local_40 = *(int *)(param_1 + 0xb90);
                            iStack_3c = *(int *)(param_1 + 0xb94);
                            if (local_40 == 0 && iStack_3c == 0) {
                              local_10 = 0xffffffff;
                            }
                            else {
                              lVar25 = ftol();
                              uVar3 = lVar25 + *(int *)(param_1 + 0xac0);
                              local_10 = (uint)uVar3;
                              if ((uVar3 < 0x8000000000000000) ||
                                 ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_10)))) {
                                if (0x3fff < (longlong)uVar3) {
                                  local_10 = 0x3fff;
                                }
                              }
                              else {
                                local_10 = 0xffffc000;
                              }
                            }
                            local_38 = local_10;
                            if (local_40 == 0 && iStack_3c == 0) {
                              local_30 = 0xffffffff;
                              lVar25 = local_110;
                              lVar26 = local_f4;
                            }
                            else {
                              lVar25 = ftol();
                              uVar3 = lVar25 + *(int *)(param_1 + 0xac0);
                              local_30 = (uint)uVar3;
                              lVar25 = local_110;
                              lVar26 = local_f4;
                              if ((uVar3 < 0x8000000000000000) ||
                                 ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_30)))) {
                                if (0x3fff < (longlong)uVar3) {
                                  local_30 = 0x3fff;
                                }
                              }
                              else {
                                local_30 = 0xffffc000;
                              }
                            }
                            local_f4._4_4_ = (int)((ulonglong)lVar26 >> 0x20);
                            local_f4._0_4_ = (uint)lVar26;
                            local_110._4_4_ = (int)((ulonglong)lVar25 >> 0x20);
                            if ((int)local_30 <= (int)local_10) {
                              if ((((local_50[1] == 0) && (iVar12 = *local_50, iVar12 != 0)) &&
                                  (*(uint *)(iVar12 + 0x20) + *(uint *)(iVar12 + 0x18) == local_94))
                                 && (*(int *)(iVar12 + 0x24) + *(int *)(iVar12 + 0x1c) +
                                     (uint)CARRY4(*(uint *)(iVar12 + 0x20),*(uint *)(iVar12 + 0x18))
                                     == iStack_90)) {
                                local_38 = local_10 - 1;
                              }
                              local_30 = local_38 + 1;
                            }
                            puVar14 = param_4 + iVar10 * 0x16 + 0x26;
                            *puVar14 = local_38;
                            param_4[iVar10 * 0x16 + 0x27] = local_34;
                            param_4[iVar10 * 0x16 + 0x28] = local_30;
                            param_4[iVar10 * 0x16 + 0x29] = local_2c;
                            param_4[iVar10 * 0x16 + 0x31] =
                                 (local_20 & 1) << 1 | param_4[iVar10 * 0x16 + 0x31] & 0xfffffffd;
                            if (local_20 == 0) {
                              param_4[iVar10 * 0x16 + 0x1e] = local_1c;
                            }
                            else {
                              param_4[iVar10 * 0x16 + 0x1e] = local_64;
                              if (local_14 != (int *)0x0) {
                                param_4[iVar10 * 0x16 + 0x28] = *puVar14;
                              }
                            }
                            param_4[iVar10 * 0x16 + 0x2b] = local_4c;
                            iVar13 = local_18 * 0x16;
                            param_4[iVar13 + 0x2c] = local_8;
                            param_4[iVar10 * 0x16 + 0x30] = local_50;
                            param_4[iVar10 * 0x16 + 0x1f] = local_b0;
                            *(longlong *)(param_4 + iVar10 * 0x16 + 0x20) = local_118;
                            *(longlong *)(param_4 + iVar10 * 0x16 + 0x22) = lVar26;
                            param_4[iVar10 * 0x16 + 0x24] = uVar21 - (uint)local_f4;
                            param_4[iVar10 * 0x16 + 0x25] =
                                 (local_110._4_4_ - local_f4._4_4_) -
                                 (uint)(uVar21 < (uint)local_f4);
                            uVar21 = param_4[iVar10 * 0x16 + 0x31];
                            param_4[iVar10 * 0x16 + 0x31] = uVar21 | 0x3000;
                            iVar12 = *(int *)(local_1c + 0x218);
                            if ((*(byte *)(iVar12 + 0x68) & 1) == 0) {
                              param_4[iVar10 * 0x16 + 0x31] = uVar21 | 0x13000;
                              *(uint *)(iVar12 + 0x68) = *(uint *)(iVar12 + 0x68) & 0xfffffffd | 1;
                              local_110 = lVar25;
                              local_f4 = lVar26;
                              FUN_00462c80(param_1,iVar19,local_1c,local_28,local_48,puVar14);
                              lVar25 = local_110;
                              lVar26 = local_f4;
                            }
                            else {
                              param_4[iVar10 * 0x16 + 0x31] = uVar21 & 0xfffeffff | 0x3000;
                            }
                            if (((*(byte *)(local_1c + 0x10) & 2) == 0) &&
                               ((*(uint *)(*(int *)(local_1c + 8) + 0x10) & 0x20000) == 0)) {
                              uVar21 = 0;
                            }
                            else {
                              uVar21 = 1;
                            }
                            uVar17 = local_5c & 1;
                            uVar18 = param_4[iVar10 * 0x16 + 0x31];
                            local_5c = uVar18 & 0xffffffe7;
                            uVar21 = (uVar17 << 1 | uVar21) << 3;
                            param_4[iVar10 * 0x16 + 0x31] = uVar21 | local_5c;
                            param_4[iVar10 * 0x16 + 0x31] =
                                 *(uint *)(local_1c + 0x10) >> 1 & 4 | uVar21 | uVar18 & 0xffffffe3;
                            param_4[iVar10 * 0x16 + 0x2f] = iVar12;
                            param_4[iVar10 * 0x16 + 0x2b] = local_4c;
                            uVar21 = local_8;
                            if (-1 < *(int *)(local_1c + 0x4c)) {
                              uVar21 = *(int *)(local_1c + 0x4c) % local_a8;
                            }
                            param_4[iVar13 + 0x2c] = uVar21;
                            uVar21 = param_4[iVar10 * 0x16 + 0x31];
                            uVar18 = (*(uint *)(local_1c + 0x10) & 0x10) << 3;
                            param_4[iVar10 * 0x16 + 0x31] = uVar18 | uVar21 & 0xffffff7f;
                            if (((*(uint *)(local_1c + 0x10) & 0x10) == 0) &&
                               (*(int *)(local_1c + 0x38) != 0)) {
                              uVar17 = *(uint *)(local_1c + 0x10) >> 0x1f;
                            }
                            else {
                              uVar17 = 0;
                            }
                            param_4[iVar10 * 0x16 + 0x31] =
                                 uVar17 << 0x14 | uVar18 | uVar21 & 0xffefff7f;
                            if ((*(int *)(local_1c + 0x18) == param_4[iVar10 * 0x16 + 0x22]) &&
                               (*(int *)(local_1c + 0x1c) == param_4[iVar10 * 0x16 + 0x23])) {
                              param_4[iVar10 * 0x16 + 0x31] =
                                   uVar17 << 0x14 | uVar18 | uVar21 & 0xffefef7f | 0x4000;
                            }
                            if ((*(uint *)(local_1c + 0x20) + *(uint *)(local_1c + 0x18) ==
                                 param_4[iVar10 * 0x16 + 0x24] + param_4[iVar10 * 0x16 + 0x22]) &&
                               (*(int *)(local_1c + 0x24) + *(int *)(local_1c + 0x1c) +
                                (uint)CARRY4(*(uint *)(local_1c + 0x20),*(uint *)(local_1c + 0x18))
                                == param_4[iVar10 * 0x16 + 0x25] + param_4[iVar10 * 0x16 + 0x23] +
                                   (uint)CARRY4(param_4[iVar10 * 0x16 + 0x24],
                                                param_4[iVar10 * 0x16 + 0x22]))) {
                              param_4[iVar10 * 0x16 + 0x31] =
                                   param_4[iVar10 * 0x16 + 0x31] & 0xffffdfff | 0x8000;
                            }
                            if (local_54 != 0) {
                              local_18 = local_18 + 1;
                            }
                            iVar10 = local_50[1];
                            local_110 = lVar25;
                            local_f4 = lVar26;
                            if ((iVar10 != 0) &&
                               ((*(byte *)(*(int *)(iVar10 + 0x218) + 0x68) & 1) == 0)) {
                              FUN_00462c80(param_1,iVar19,iVar10,local_28,local_48,&local_38);
                            }
                            iVar10 = local_50[2];
                            if ((iVar10 != 0) &&
                               ((*(byte *)(*(int *)(iVar10 + 0x218) + 0x68) & 1) == 0)) {
                              FUN_00462c80(param_1,iVar19,iVar10,local_28,local_48,&local_38);
                            }
                          }
                          local_80 = local_80 + 1;
                        } while (local_80 < 4);
                      }
                    }
                  }
                  local_c = local_c + 1;
                } while ((int)local_c < local_68);
              }
              lVar25 = local_8c;
              if ((int)local_c < local_68) {
                do {
                  local_40 = *(int *)(param_1 + 0xb90);
                  piVar20 = (int *)(*(int *)(*(int *)(iVar19 + 0x28) + 4) * local_c +
                                   *(int *)(*(int *)(iVar19 + 0x28) + 8));
                  iStack_3c = *(int *)(param_1 + 0xb94);
                  if (local_40 == 0 && iStack_3c == 0) {
                    local_8 = 0xffffffff;
                  }
                  else {
                    lVar25 = ftol();
                    uVar3 = lVar25 + *(int *)(param_1 + 0xac0);
                    local_8 = (uint)uVar3;
                    if ((uVar3 < 0x8000000000000000) ||
                       ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_8)))) {
                      if (0x3fff < (longlong)uVar3) {
                        local_8 = 0x3fff;
                      }
                    }
                    else {
                      local_8 = 0xffffc000;
                    }
                  }
                  if (local_40 == 0 && iStack_3c == 0) {
                    uVar21 = 0xffffffff;
                  }
                  else {
                    lVar25 = ftol();
                    uVar3 = lVar25 + *(int *)(param_1 + 0xac0);
                    uVar21 = (uint)uVar3;
                    if ((uVar3 < 0x8000000000000000) ||
                       ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar21)))) {
                      if (0x3fff < (longlong)uVar3) {
                        uVar21 = 0x3fff;
                      }
                    }
                    else {
                      uVar21 = 0xffffc000;
                    }
                  }
                  if ((0x1c < (int)(uVar21 - local_8)) && (iVar10 = *piVar20, iVar10 != 0)) {
                    if (piVar20[9] == 0) {
                      *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) =
                           *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) & 0xfffffffb;
                      *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) =
                           *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) & 0xfffffff7;
                      *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) =
                           *(uint *)(*(int *)(iVar10 + 0x218) + 0x68) & 0xffffffef;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x44) = 0;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x40) = 0;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x4c) = 0;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x48) = 0;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x54) = 0;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x50) = 0;
                      if (piVar20[9] == 0) goto LAB_00462ac1;
                    }
                    iVar12 = *(int *)(iVar10 + 0x218);
                    if ((*(byte *)(piVar20 + 0x32) & 2) == 0) {
                      *(uint *)(iVar12 + 0x68) = *(uint *)(iVar12 + 0x68) & 0xffffffdf;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x5c) = 0;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x58) = 0;
                    }
                    else {
                      *(uint *)(iVar12 + 0x68) = *(uint *)(iVar12 + 0x68) & 0xffffffbf;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 100) = 0;
                      *(undefined4 *)(*(int *)(iVar10 + 0x218) + 0x60) = 0;
                    }
                  }
LAB_00462ac1:
                  local_c = local_c + 1;
                  lVar25 = local_8c;
                } while ((int)local_c < local_68);
              }
            }
          }
        }
      }
      local_70 = local_70 + 1;
    } while (local_70 < local_ac);
  }
  param_4[0x17] = local_18;
  piVar20 = (int *)(param_1 + 0xb84);
  if (*piVar20 == 0) {
    iVar15 = 0;
    if (0 < (int)param_4[0x17]) {
      puVar14 = param_4 + 0x31;
      do {
        uVar21 = *puVar14;
        if (((uVar21 & 1) == 0) && ((uVar21 & 0x80) != 0)) {
          puVar14[-4] = puVar14[-0xb];
          puVar14[-3] = puVar14[-9];
          *puVar14 = uVar21 & 0xfffff6ff;
        }
        iVar15 = iVar15 + 1;
        puVar14 = puVar14 + 0x16;
      } while (iVar15 < (int)param_4[0x17]);
    }
  }
  else {
    iVar19 = *(int *)(param_1 + 0xb80);
    param_1 = local_a4;
    if (local_a4 <= iVar19) {
      param_1 = iVar19;
    }
    iVar19 = iVar19 + *piVar20;
    iVar10 = local_9c;
    if (iVar19 <= local_9c) {
      iVar10 = iVar19;
    }
    if (*(int **)(iVar15 + 0xcd0) == (int *)0x0) {
      iVar15 = 0;
    }
    else {
      iVar15 = **(int **)(iVar15 + 0xcd0);
    }
    local_18 = 0;
    if (0 < (int)param_4[0x17]) {
      piVar20 = param_4 + 0x26;
      do {
        if ((param_1 < piVar20[2]) && (iVar19 = *piVar20, iVar19 < iVar10)) {
          if (iVar19 <= param_1) {
            iVar19 = param_1;
          }
          piVar20[7] = iVar19;
          iVar19 = piVar20[2];
          if (iVar10 <= piVar20[2]) {
            iVar19 = iVar10;
          }
          uVar21 = piVar20[0xb];
          piVar20[8] = iVar19;
          piVar20[0xb] = uVar21 | 0x900;
          if ((0 < iVar15) && ((uVar21 & 1) == 0)) {
            uVar2 = CONCAT11((char)((uVar21 | 0x900) >> 8),(char)uVar21);
            uVar18 = CONCAT22((short)(uVar21 >> 0x10),uVar2) & 0xfffffeff;
            piVar20[0xb] = (uVar2 & 0x400) << 1 |
                           CONCAT22((short)(uVar18 >> 0x10),
                                    CONCAT11((byte)(((uVar21 & 0x80) << 1) >> 8) |
                                             (byte)(uVar18 >> 8),(char)uVar18)) & 0xfffff7ff;
          }
          if ((*piVar20 < param_1) || (iVar10 < piVar20[2])) {
            piVar20[0xb] = (uint)((piVar20[0xb] & 0x900U) != 0) << 9 | piVar20[0xb] & 0xfffffdffU;
          }
        }
        local_18 = local_18 + 1;
        piVar20 = piVar20 + 0x16;
      } while (local_18 < (int)param_4[0x17]);
    }
  }
  if ((*(byte *)(param_4 + 0x16) & 2) != 0) {
    iVar15 = DAT_0064b13c;
    local_8c = lVar25;
    if (DAT_0064b13c == 0) {
      iVar15 = DrawDibOpen();
    }
    param_4[1] = iVar15;
    if (iVar15 != 0) {
      FUN_004019f0();
    }
  }
  return param_4;
}


