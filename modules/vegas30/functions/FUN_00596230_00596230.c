/* Module: vegas30.exe
   Function: FUN_00596230
   Address: 00596230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0059680f) */
/* WARNING: Removing unreachable block (ram,0x00596589) */
/* WARNING: Removing unreachable block (ram,0x005965b2) */
/* WARNING: Removing unreachable block (ram,0x00596698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00596230(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,int param_6,
            uint param_7,int param_8,int param_9)

{
  ushort uVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
  float10 fVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  int local_1bc;
  undefined4 *local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  int iStack_194;
  undefined4 local_190;
  uint local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  uint local_178;
  int local_174;
  undefined8 local_170;
  undefined8 local_164;
  undefined8 local_15c;
  int local_154;
  undefined8 local_150;
  int local_144;
  undefined8 local_140;
  int local_134;
  int local_130;
  int local_12c;
  int iStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined8 local_114;
  undefined8 local_10c;
  int local_104;
  uint local_100;
  int local_fc;
  undefined8 local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  int local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90;
  int iStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  int local_58;
  int iStack_54;
  uint local_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_c;
  
  FUN_005b87b0(*(undefined4 *)(param_1 + 0x68));
  local_104 = *(int *)(param_1 + 0x6c);
  if (*(int *)(param_2 + 4) != 2) {
    return 0;
  }
  local_130 = 0;
  if (*(int **)(param_2 + 0x28) != (int *)0x0) {
    local_130 = **(int **)(param_2 + 0x28);
  }
  local_154 = 0;
  do {
    uStack_84 = 0;
    uVar15 = *(uint *)(*(int *)(param_1 + 0x6c) + 4);
    local_e8 = DAT_00649468 + DAT_0065a078;
    local_170 = (double)uVar15;
    iStack_e4 = DAT_0064946c + DAT_0065a07c + (uint)CARRY4(DAT_00649468,DAT_0065a078);
    local_88 = uVar15;
    uVar18 = ftol();
    local_78 = (uint)uVar18 + *(uint *)(param_2 + 0x238);
    local_74 = (int)((ulonglong)uVar18 >> 0x20) + *(int *)(param_2 + 0x23c) +
               (uint)CARRY4((uint)uVar18,*(uint *)(param_2 + 0x238));
    if (param_9 == 0) {
      iVar3 = **(int **)(param_2 + 0x5d0) + -1;
      if (iVar3 < 0) {
        uVar6 = 0xffffffff;
        iVar3 = 0x7fffffff;
      }
      else {
        iVar3 = *(int *)((*(int **)(param_2 + 0x5d0))[2] + iVar3 * 4);
        uVar7 = *(uint *)(iVar3 + 0x28);
        uVar6 = uVar7 + *(uint *)(iVar3 + 0x18);
        iVar3 = ((int)uVar7 >> 0x1f) + *(int *)(iVar3 + 0x1c) +
                (uint)CARRY4(uVar7,*(uint *)(iVar3 + 0x18));
      }
      if ((uVar6 == 0xffffffff) && (iVar3 == 0x7fffffff)) {
        if (*(int **)(param_2 + 0x28) == (int *)0x0) {
          return 0;
        }
        uVar6 = param_7;
        iVar3 = param_8;
        if (**(int **)(param_2 + 0x28) == 0) {
          return 0;
        }
      }
      else {
        uVar15 = (param_3 - uVar6) + local_78;
      }
      if ((int)uVar15 < 0) {
        return 0;
      }
      local_1c0 = uVar6;
      local_1bc = iVar3;
      lVar20 = FUN_00598a20(param_1,uVar6,iVar3,param_5,param_6);
      if (*(int *)(param_1 + 0xd4) != 0) {
        uVar7 = *(uint *)(param_1 + 0xb8);
        if (*(longlong *)(param_1 + 0xb8) <= lVar20) {
          uVar11 = *(uint *)(param_1 + 200) + uVar7;
          iVar5 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xbc) +
                  (uint)CARRY4(*(uint *)(param_1 + 200),uVar7);
          if (lVar20 < CONCAT44(iVar5,uVar11)) {
            local_d8 = uVar11 - (uint)lVar20;
            iVar5 = (iVar5 - (int)((ulonglong)lVar20 >> 0x20)) - (uint)(uVar11 < (uint)lVar20);
            if ((iVar5 <= (int)uVar15 >> 0x1f) &&
               ((iVar5 < (int)uVar15 >> 0x1f || (local_d8 < uVar15)))) {
              uVar15 = local_d8;
            }
          }
        }
      }
LAB_005965e7:
      lVar19 = CONCAT44(iVar3,uVar6);
      local_15c = lVar20;
      lVar20 = CONCAT44(local_1bc,local_1c0);
      if ((int)uVar15 < 1) {
        return 0;
      }
    }
    else {
      local_1c4 = **(uint **)(param_2 + 0x5d0);
      if (local_1c4 != 0) {
        piVar9 = (int *)(*(uint **)(param_2 + 0x5d0))[2];
        local_178 = *(uint *)(*piVar9 + 0x18);
        local_174 = *(int *)(*piVar9 + 0x1c);
        if ((local_178 != 0xffffffff) || (local_174 != 0x7fffffff)) {
          iVar5 = 0;
          uVar15 = local_178;
          iVar3 = local_174;
          if (0 < (int)local_1c4) {
            do {
              lVar19 = CONCAT44(iVar3,uVar15);
              iVar8 = *piVar9;
              if ((*(uint *)(iVar8 + 0x18) != uVar15) || (*(int *)(iVar8 + 0x1c) != iVar3)) {
                uVar15 = *(int *)(iVar8 + 0x18) - uVar15;
                lVar20 = lVar19;
                if (0 < (int)uVar15) goto LAB_005965f6;
                break;
              }
              uVar7 = *(uint *)(iVar8 + 0x28);
              bVar16 = CARRY4(uVar15,uVar7);
              uVar15 = uVar15 + uVar7;
              iVar3 = iVar3 + ((int)uVar7 >> 0x1f) + (uint)bVar16;
              iVar5 = iVar5 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar5 < (int)local_1c4);
          }
          lVar20 = local_15c;
          if ((int)((local_178 - param_7) + local_78) < 1) {
            uVar6 = local_178;
            uVar15 = 0;
            iVar3 = local_174;
            local_1c0 = local_178;
            local_1bc = local_174;
          }
          else {
            uVar6 = local_178 - 0x4000;
            iVar3 = local_174 - (uint)(local_178 < 0x4000);
            uVar7 = local_178 - param_5;
            iVar5 = (local_174 - param_6) - (uint)(local_178 < param_5);
            local_1c0 = uVar6;
            local_1bc = iVar3;
            if (((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(param_1 + 0xbc) <= iVar5)) &&
               ((*(int *)(param_1 + 0xbc) < iVar5 || (*(uint *)(param_1 + 0xb8) <= uVar7)))) {
              uVar18 = __allrem(uVar7 - *(uint *)(param_1 + 0xb8),
                                (iVar5 - *(int *)(param_1 + 0xbc)) -
                                (uint)(uVar7 < *(uint *)(param_1 + 0xb8)),
                                *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
              uVar7 = (uint)uVar18 + *(uint *)(param_1 + 0xb8);
              local_170 = (double)CONCAT44((int)((ulonglong)uVar18 >> 0x20) +
                                           *(int *)(param_1 + 0xbc) +
                                           (uint)CARRY4((uint)uVar18,*(uint *)(param_1 + 0xb8)),
                                           (undefined4)local_170);
              lVar20 = local_15c;
            }
            uVar15 = 0x4000;
            if (*(int *)(param_1 + 0xd4) != 0) {
              uVar15 = uVar7 - *(int *)(param_1 + 0xb8);
              if (uVar15 == 0) {
                uVar15 = 1;
              }
              else if (0x4000 < (int)uVar15) {
                uVar15 = 0x4000;
              }
              uVar6 = local_178 - uVar15;
              iVar3 = (local_174 - ((int)uVar15 >> 0x1f)) - (uint)(local_178 < uVar15);
              local_1c0 = uVar6;
              local_1bc = iVar3;
            }
          }
          goto LAB_005965e7;
        }
      }
      if (*(int **)(param_2 + 0x28) == (int *)0x0) {
        return 0;
      }
      if (**(int **)(param_2 + 0x28) == 0) {
        return 0;
      }
      uVar18 = ftol();
      lVar19 = __alldiv(uVar18,2,0);
      lVar19 = lVar19 + 1;
      uVar15 = 1;
      lVar20 = lVar19;
    }
LAB_005965f6:
    local_1bc = (int)((ulonglong)lVar20 >> 0x20);
    local_1c0 = (uint)lVar20;
    iVar3 = local_154 + 1;
    if (3 < local_154) {
      return 0;
    }
    local_19c = uVar15;
    lVar20 = CONCAT44(local_1bc,(int)lVar19);
    if (param_9 != 0) {
      if (**(int **)(param_2 + 0x5d0) == 0) {
        uVar4 = 0xffffffff;
        uVar10 = 0x7fffffff;
      }
      else {
        iVar5 = *(int *)(*(int **)(param_2 + 0x5d0))[2];
        uVar4 = *(undefined4 *)(iVar5 + 0x18);
        uVar10 = *(undefined4 *)(iVar5 + 0x1c);
      }
      lVar20 = CONCAT44(local_1bc,(int)lVar19);
      if (lVar19 == CONCAT44(uVar10,uVar4)) {
        local_1c0 = (uint)(lVar19 + -0x800);
        local_19c = 0x800;
        lVar20 = lVar19 + -0x800;
      }
    }
    local_1bc = (int)((ulonglong)lVar20 >> 0x20);
    lVar19 = lVar20 - CONCAT44(param_6,param_5);
    local_154 = iVar3;
    if ((*(int *)(param_1 + 0xd4) != 0) && (*(longlong *)(param_1 + 0xb8) <= lVar19)) {
      local_164 = lVar19;
      lVar19 = __allrem(lVar19 - *(longlong *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 200),
                        *(undefined4 *)(param_1 + 0xcc));
      lVar19 = lVar19 + *(longlong *)(param_1 + 0xb8);
    }
    local_164._4_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar3 = local_164._4_4_;
    local_164._0_4_ = (uint)lVar19;
    if ((lVar19 < 0x100000000) && (lVar19 < 0)) {
      local_19c = -(uint)local_164;
    }
    local_1c4 = *(ushort *)(local_104 + 0xc) * local_19c;
    local_1b4 = 0;
    local_164 = lVar19;
    if ((local_130 == 0) || (lVar19 < 0)) {
      uVar15 = FUN_00595b30(param_1,0);
      if (uVar15 == 0) {
        return 0;
      }
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x6c) + 0xc);
      *(int *)(uVar15 + 0x18) = (int)lVar20;
      *(int *)(uVar15 + 0x1c) = local_1bc;
      *(undefined4 *)(uVar15 + 0x34) = 0;
      *(undefined4 *)(uVar15 + 0x38) = 0;
      *(int *)(uVar15 + 0xfc) = *(int *)(uVar15 + 0xf8) / (int)(uint)uVar1;
      *(uint *)(uVar15 + 0x20) = (uint)local_164;
      *(int *)(uVar15 + 0x24) = iVar3;
      puVar13 = (undefined4 *)(uVar15 + 0x58);
      for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(uVar15 + 0x3c) = 0;
      puVar13 = (undefined4 *)(uVar15 + 0xa8);
      for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(uVar15 + 0x48) = 0;
      *(undefined4 *)(uVar15 + 0x28) = 0x800;
      *(undefined4 *)(uVar15 + 0x30) = 0;
      *(undefined4 *)(uVar15 + 0x2c) = 0;
      *(int *)(uVar15 + 0xc) = param_2;
      iVar3 = local_1b4;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x6c) + 4);
      if (iVar5 == 0) {
        uVar18 = 0;
      }
      else {
        uStack_24 = 0;
        local_28 = iVar5;
        uVar18 = ftol();
      }
      local_c8 = uVar18;
      iVar5 = _SfList_FindSortedInsertIndexRange_20
                        (*(undefined4 *)(param_2 + 0x28),&local_c8,0,0xffffffff,&LAB_005c5a20);
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) goto LAB_00597a64;
      }
      puVar13 = (undefined4 *)
                (*(int *)(*(int *)(param_2 + 0x28) + 4) * iVar5 +
                *(int *)(*(int *)(param_2 + 0x28) + 8));
      if (puVar13 == (undefined4 *)0x0) goto LAB_00597a64;
      uStack_64 = 0;
      uVar15 = *(uint *)(*(int *)(param_1 + 0x6c) + 4);
      local_170 = (double)uVar15;
      local_1b8 = puVar13;
      local_68 = uVar15;
      lVar20 = ftol();
      uVar7 = (uint)local_164;
      if (CONCAT44(iVar3,(uint)local_164) < lVar20) goto LAB_00597a64;
      local_18c = (uint)local_164 - (uint)lVar20;
      local_188 = (iVar3 - (int)((ulonglong)lVar20 >> 0x20)) -
                  (uint)((uint)local_164 < (uint)lVar20);
      local_12c = puVar13[0x38];
      iStack_128 = puVar13[0x39];
      if ((iStack_128 < 0x20000000) && ((iStack_128 < 0x1fffffff || (local_12c != -1)))) {
        uVar18 = ftol();
        local_1a0 = (uint)uVar18 - uVar7;
        uVar6 = (uint)((uint)uVar18 < uVar7);
        uVar11 = (int)((ulonglong)uVar18 >> 0x20) - iVar3;
        bVar16 = -1 < (int)(uVar11 - uVar6);
        if ((uVar11 != uVar6 && bVar16) || ((bVar16 && (0x7ffffffe < local_1a0))))
        goto LAB_0059687c;
      }
      else {
LAB_0059687c:
        local_1a0 = uVar15 * 10;
      }
      puVar14 = puVar13;
      if ((int)local_1a0 < 1) {
        puVar14 = puVar13 + 0x34;
        local_1b8 = puVar14;
        uVar18 = ftol();
        local_18c = uVar7 - (uint)uVar18;
        local_188 = (iVar3 - (int)((ulonglong)uVar18 >> 0x20)) - (uint)(uVar7 < (uint)uVar18);
        local_12c = puVar13[0x6c];
        iStack_128 = puVar13[0x6d];
        if ((iStack_128 < 0x20000000) && ((iStack_128 < 0x1fffffff || (local_12c != -1)))) {
          uVar18 = ftol();
          local_1a0 = (uint)uVar18 - uVar7;
          uVar7 = (uint)((uint)uVar18 < uVar7);
          uVar6 = (int)((ulonglong)uVar18 >> 0x20) - iVar3;
          bVar16 = (int)(uVar6 - uVar7) < 0;
          if ((uVar6 == uVar7 || bVar16) && ((bVar16 || (local_1a0 < 0x3fffffff))))
          goto LAB_00596929;
        }
        local_1a0 = uVar15 * 10;
      }
LAB_00596929:
      if ((puVar14[8] == 0) && (puVar14[0x1e] == 0)) {
        local_1c4 = 0;
      }
      uVar15 = FUN_00595b30(param_1,local_1c4);
      if (uVar15 == 0) {
        *(undefined4 *)(DAT_0065a068 + 0x744) = 1;
        return 0;
      }
      uVar7 = local_19c;
      if ((-1 < (int)local_1a0) && (uVar7 = local_1a0, (int)local_19c < (int)local_1a0)) {
        uVar7 = local_19c;
      }
      *(uint *)(uVar15 + 0x28) = uVar7;
      if (*(int *)(uVar15 + 0x10) == 0) {
        *(undefined4 *)(uVar15 + 0xfc) = 0x800;
      }
      else {
        *(int *)(uVar15 + 0xfc) =
             *(int *)(uVar15 + 0xf8) / (int)(uint)*(ushort *)(*(int *)(param_1 + 0x6c) + 0xc);
      }
      *(uint *)(uVar15 + 0x18) = local_1c0;
      *(int *)(uVar15 + 0x1c) = local_1bc;
      *(uint *)(uVar15 + 0x20) = (uint)local_164;
      *(int *)(uVar15 + 0xc) = param_2;
      *(undefined4 *)(uVar15 + 0x30) = 0;
      *(undefined4 *)(uVar15 + 0x2c) = 0;
      *(int *)(uVar15 + 0x24) = iVar3;
      *(undefined4 *)(uVar15 + 0x34) = 0;
      *(undefined4 *)(uVar15 + 0x38) = 0;
      *(undefined4 *)(uVar15 + 0x3c) = 0;
      *(undefined4 *)(uVar15 + 0x48) = 0;
      if (*(int *)(uVar15 + 0xfc) < *(int *)(uVar15 + 0x28)) {
        *(int *)(uVar15 + 0x28) = *(int *)(uVar15 + 0xfc);
      }
      if (*(int *)(uVar15 + 0x28) < 1) {
        *(undefined4 *)(uVar15 + 0x28) = 1;
      }
      iVar3 = puVar14[8];
      if ((((iVar3 == 0) || ((*(byte *)(puVar14 + 0x1a) & 4) != 0)) || (*(int *)(iVar3 + 0x88) == 0)
          ) || ((*(int *)(iVar3 + 0x20) == 0 && (*(int *)(iVar3 + 0x24) == 0)))) {
        puVar13 = (undefined4 *)(uVar15 + 0x58);
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        *(undefined4 *)(uVar15 + 0x3c) = 0;
      }
      else {
        *(undefined4 *)(uVar15 + 0x5c) = puVar14[10];
        uVar7 = *(uint *)(uVar15 + 0xa4);
        uVar6 = (puVar14[0x1a] & 1) << 2;
        *(uint *)(uVar15 + 0xa4) = uVar6 | uVar7 & 0xfffffffb;
        uVar11 = (uint)puVar14[0x1a] >> 6 & 8;
        *(uint *)(uVar15 + 0xa4) = uVar11 | uVar6 | uVar7 & 0xfffffff3;
        *(uint *)(uVar15 + 0xa4) =
             (uint)((*(byte *)(puVar14 + 0x1a) & 10) != 0) << 1 |
             uVar11 | uVar6 | uVar7 & 0xfffffff1;
        *(undefined4 *)(uVar15 + 0xa0) = *puVar14;
        *(uint *)(uVar15 + 0xa4) = *(uint *)(uVar15 + 0xa4) & 0xfffffffe;
        *(undefined4 *)(uVar15 + 0x58) = puVar14[9];
        *(undefined4 *)(uVar15 + 0x60) = puVar14[0xc];
        *(undefined4 *)(uVar15 + 100) = puVar14[0xb];
        if ((*(double *)(puVar14 + 0x12) == _DAT_00610fd8) ||
           ((puVar14[8] != 0 && (*(int *)(puVar14[8] + 0x6c) != 0)))) {
          *(undefined4 *)(uVar15 + 0x88) = 0;
          *(undefined4 *)(uVar15 + 0x8c) = 0x3ff00000;
        }
        else {
          dVar2 = _DAT_006128a8;
          if ((_DAT_006128a8 <= *(double *)(puVar14 + 0x12)) &&
             (dVar2 = _DAT_006299a0, *(double *)(puVar14 + 0x12) <= _DAT_006299a0)) {
            dVar2 = *(double *)(puVar14 + 0x12);
          }
          *(double *)(uVar15 + 0x88) = dVar2;
        }
        local_198 = puVar14[4];
        iStack_194 = puVar14[5];
        uStack_b4 = 0;
        local_38 = puVar14[0xe] + local_198;
        local_b8 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
        iStack_34 = puVar14[0xf] + iStack_194 + (uint)CARRY4(puVar14[0xe],local_198);
        lVar20 = ftol();
        lVar19 = ftol();
        puVar14 = local_1b8;
        uStack_a4 = 0;
        *(longlong *)(uVar15 + 0x70) = (lVar20 - lVar19) + CONCAT44(local_188,local_18c);
        local_a8 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
        local_198 = local_1b8[4];
        iStack_194 = local_1b8[5];
        local_58 = local_1b8[0x10] + local_198;
        iStack_54 = local_1b8[0x11] + iStack_194 + (uint)CARRY4(local_1b8[0x10],local_198);
        iVar3 = ftol();
        iVar5 = ftol();
        *(int *)(uVar15 + 0x78) = iVar3 - iVar5;
        uStack_94 = 0;
        local_98 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
        uVar7 = ftol();
        *(uint *)(uVar15 + 0x90) = uVar7 + local_18c;
        *(uint *)(uVar15 + 0x94) = local_188 + (uint)CARRY4(uVar7,local_18c);
        iVar3 = puVar14[8];
        uStack_120 = *(undefined4 *)(iVar3 + 0x24);
        local_124 = *(undefined4 *)(iVar3 + 0x20);
        if (*(int *)(iVar3 + 0x6c) != 0) {
          local_124 = 0x61c46800;
          uStack_120 = 8;
        }
        uStack_14 = 0;
        local_18 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
        uVar18 = ftol();
        local_f8 = uVar18;
        uVar18 = ftol();
        *(undefined8 *)(uVar15 + 0x98) = uVar18;
        iVar3 = *(int *)(uVar15 + 0x94);
        uVar18 = __allrem(*(undefined4 *)(uVar15 + 0x90),iVar3,*(undefined4 *)(uVar15 + 0x98),
                          (int)((ulonglong)uVar18 >> 0x20));
        local_10c = uVar18;
        if (((iVar3 < *(int *)(uVar15 + 0x9c)) ||
            (((iVar3 <= *(int *)(uVar15 + 0x9c) &&
              (*(uint *)(uVar15 + 0x90) < *(uint *)(uVar15 + 0x98))) ||
             ((*(byte *)(uVar15 + 0xa4) & 4) != 0)))) && ((*(byte *)(uVar15 + 0xa4) & 2) == 0)) {
          uStack_44 = 0;
          uStack_ec = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          _DAT_0064b4c8 = 1;
          iVar3 = *(int *)(param_1 + 0x6c);
          iVar5 = puVar14[8];
          local_48 = *(uint *)(iVar3 + 4);
          local_f0 = *(uint *)(*(int *)(iVar5 + 0x2c) + 4);
          local_190 = 0;
          local_184 = 0;
          fVar17 = (float10)local_48 / (float10)local_f0;
          if ((iVar5 == 0) || (*(int *)(iVar5 + 0x6c) == 0)) {
            uVar7 = puVar14[0x1a];
            uVar6 = uVar7 & 0x30;
            if (uVar6 == 0) {
              local_150 = (double)fVar17;
              if ((*(int *)(uVar15 + 0x88) == 0) && (*(int *)(uVar15 + 0x8c) == 0x3ff00000)) {
                local_1b0 = 0.0;
              }
              else {
                local_1b0 = _DAT_006106d0 / *(double *)(uVar15 + 0x88);
              }
              if (_DAT_00610fd8 == *(double *)(&DAT_00645d28 + (uVar7 >> 6 & 7) * 8)) {
                FUN_00591240(*(undefined4 *)(iVar3 + 4),(undefined4)local_1b0,local_1b0._4_4_,
                             &local_190,&local_184);
                uVar18 = local_10c;
              }
              else {
                local_e0 = *(undefined4 *)(iVar3 + 4);
                uStack_dc = 0;
                local_190 = ftol();
                local_184 = local_190;
                uVar18 = local_10c;
              }
            }
            else {
              if (uVar6 == 0x20) {
                fVar17 = fVar17 / (float10)*(double *)(uVar15 + 0x88);
                goto LAB_00596e14;
              }
              if (uVar6 == 0x10) {
                local_1b0 = *(double *)(uVar15 + 0x88);
                local_150 = (double)(fVar17 / (float10)*(double *)(uVar15 + 0x88));
                if (_DAT_00610fd8 == *(double *)(&DAT_00645d28 + (uVar7 >> 6 & 7) * 8)) {
                  FUN_00591240(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(uVar15 + 0x88),
                               *(undefined4 *)(uVar15 + 0x8c),&local_190,&local_184);
                  uVar18 = local_10c;
                }
                else {
                  local_d0 = *(undefined4 *)(iVar3 + 4);
                  uStack_cc = 0;
                  local_190 = ftol();
                  local_184 = local_190;
                  uVar18 = local_10c;
                }
              }
            }
          }
          else {
            fVar17 = (float10)FUN_00598a10(*(undefined4 *)(param_1 + 0x68),iVar5,0,0x3ff00000);
            uVar18 = local_10c;
LAB_00596e14:
            local_150 = (double)fVar17;
            local_1b0 = 0.0;
          }
          local_10c._0_4_ = (int)uVar18;
          iVar3 = (int)local_10c;
          local_10c = uVar18;
          uVar4 = FUN_0058e380(DAT_0065a070,puVar14[8],0,uVar18,(undefined4)local_150,
                               local_150._4_4_,(undefined4)local_1b0,local_1b0._4_4_,local_190,
                               local_184,&local_134);
          *(undefined4 *)(uVar15 + 0x3c) = uVar4;
          if (local_134 < 0) {
            *(undefined4 *)(uVar15 + 0x3c) = 0;
          }
          *(undefined4 *)(param_1 + 8) = 1;
          _DAT_0064b4c8 = 0;
          iVar5 = *(int *)(uVar15 + 0x3c);
          if (iVar5 == 0) {
            *(undefined4 *)(uVar15 + 0x28) = 0;
            FUN_00595ba0(param_1,uVar15);
            if (-1 < local_134) {
              return 0;
            }
LAB_00597a64:
            *(undefined4 *)(DAT_0065a068 + 0x744) = 1;
            return 0;
          }
          uVar7 = *(int *)(iVar5 + 0x34) - (iVar3 - *(int *)(iVar5 + 0x28));
          local_1c8 = *(uint *)(uVar15 + 0x28);
          if ((int)uVar7 <= (int)*(uint *)(uVar15 + 0x28)) {
            local_1c8 = uVar7;
          }
          *(uint *)(uVar15 + 0x28) = local_1c8;
          local_c = *(int *)(uVar15 + 0x9c);
          uVar7 = *(uint *)(uVar15 + 0x98);
          uVar18 = __allrem(*(undefined4 *)(uVar15 + 0x90),*(undefined4 *)(uVar15 + 0x94),uVar7,
                            local_c);
          uVar6 = uVar7 - (uint)uVar18;
          iVar3 = (local_c - (int)((ulonglong)uVar18 >> 0x20)) - (uint)(uVar7 < (uint)uVar18);
          if ((iVar3 <= (int)local_1c8 >> 0x1f) &&
             ((iVar3 < (int)local_1c8 >> 0x1f || (uVar6 < local_1c8)))) {
            *(uint *)(uVar15 + 0x28) = uVar6;
          }
          iVar3 = *(int *)(uVar15 + 0x28);
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          *(int *)(uVar15 + 0x28) = iVar3;
          local_1b4 = 1;
        }
        else {
          *(undefined4 *)(uVar15 + 0x3c) = 0;
          *(uint *)(uVar15 + 0xa4) = *(uint *)(uVar15 + 0xa4) | 1;
        }
      }
      iVar3 = puVar14[0x1e];
      if ((((iVar3 == 0) || ((*(byte *)(puVar14 + 0x30) & 4) != 0)) || (*(int *)(iVar3 + 0x88) == 0)
          ) || ((*(int *)(iVar3 + 0x20) == 0 && (*(int *)(iVar3 + 0x24) == 0)))) {
        puVar13 = (undefined4 *)(local_1b4 * 0x50 + 0x58 + uVar15);
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        *(undefined4 *)(uVar15 + (local_1b4 * 3 + 0xf) * 4) = 0;
        iVar3 = local_1b4;
      }
      else {
        iVar3 = local_1b4 * 0x50 + uVar15;
        *(undefined4 *)(iVar3 + 0x5c) = puVar14[0x20];
        uVar7 = *(uint *)(iVar3 + 0xa4);
        uVar6 = (puVar14[0x30] & 1) << 2;
        *(uint *)(iVar3 + 0xa4) = uVar6 | uVar7 & 0xfffffffb;
        *(uint *)(iVar3 + 0xa4) = (uint)puVar14[0x30] >> 6 & 8 | uVar6 | uVar7 & 0xfffffff3;
        *(undefined4 *)((local_1b4 * 5 + 10) * 0x10 + uVar15) = puVar14[1];
        *(uint *)(iVar3 + 0xa4) =
             (uint)((*(byte *)(puVar14 + 0x30) & 10) != 0) << 1 |
             *(uint *)(iVar3 + 0xa4) & 0xfffffffc;
        *(undefined4 *)(iVar3 + 0x58) = puVar14[0x1f];
        *(undefined4 *)(iVar3 + 0x60) = puVar14[0x22];
        *(undefined4 *)(iVar3 + 100) = puVar14[0x21];
        if ((*(double *)(puVar14 + 0x28) == _DAT_00610fd8) ||
           ((puVar14[0x1e] != 0 && (*(int *)(puVar14[0x1e] + 0x6c) != 0)))) {
          *(undefined4 *)(iVar3 + 0x88) = 0;
          *(undefined4 *)(iVar3 + 0x8c) = 0x3ff00000;
        }
        else {
          dVar2 = _DAT_006128a8;
          if ((_DAT_006128a8 <= *(double *)(puVar14 + 0x28)) &&
             (dVar2 = _DAT_006299a0, *(double *)(puVar14 + 0x28) <= _DAT_006299a0)) {
            dVar2 = *(double *)(puVar14 + 0x28);
          }
          *(double *)(iVar3 + 0x88) = dVar2;
        }
        local_198 = puVar14[4];
        iStack_194 = puVar14[5];
        uStack_bc = 0;
        local_b0 = puVar14[0x24] + local_198;
        local_c0 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
        iStack_ac = puVar14[0x25] + iStack_194 + (uint)CARRY4(puVar14[0x24],local_198);
        uVar18 = ftol();
        local_1c4 = (uint)uVar18;
        uVar21 = ftol();
        uVar7 = local_1c4 - (uint)uVar21;
        uStack_9c = 0;
        *(uint *)(iVar3 + 0x70) = uVar7 + local_18c;
        *(uint *)(iVar3 + 0x74) =
             (((int)((ulonglong)uVar18 >> 0x20) - (int)((ulonglong)uVar21 >> 0x20)) -
             (uint)(local_1c4 < (uint)uVar21)) + local_188 + (uint)CARRY4(uVar7,local_18c);
        local_198 = local_1b8[4];
        iStack_194 = local_1b8[5];
        local_a0 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
        local_90 = local_1b8[0x26] + local_198;
        iStack_8c = local_1b8[0x27] + iStack_194 + (uint)CARRY4(local_1b8[0x26],local_198);
        iVar5 = ftol();
        iVar8 = ftol();
        *(int *)(iVar3 + 0x78) = iVar5 - iVar8;
        uStack_7c = 0;
        local_80 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
        uVar7 = ftol();
        *(uint *)(iVar3 + 0x90) = uVar7 + local_18c;
        *(uint *)(iVar3 + 0x94) = local_188 + (uint)CARRY4(uVar7,local_18c);
        iVar5 = local_1b8[0x1e];
        local_11c = *(undefined4 *)(iVar5 + 0x20);
        uStack_118 = *(undefined4 *)(iVar5 + 0x24);
        if (*(int *)(iVar5 + 0x6c) != 0) {
          local_11c = 0x61c46800;
          uStack_118 = 8;
        }
        uStack_6c = 0;
        local_70 = *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4);
        uVar18 = ftol();
        local_60 = uVar18;
        uVar18 = ftol();
        *(undefined8 *)(iVar3 + 0x98) = uVar18;
        uVar18 = __allrem(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),
                          *(undefined4 *)(iVar3 + 0x98),(int)((ulonglong)uVar18 >> 0x20));
        local_114 = uVar18;
        if (((*(int *)(iVar3 + 0x94) < *(int *)(iVar3 + 0x9c)) ||
            (((*(int *)(iVar3 + 0x94) <= *(int *)(iVar3 + 0x9c) &&
              (*(uint *)(iVar3 + 0x90) < *(uint *)(iVar3 + 0x98))) ||
             ((*(byte *)(iVar3 + 0xa4) & 4) != 0)))) && ((*(byte *)(iVar3 + 0xa4) & 2) == 0)) {
          *(undefined4 *)(param_1 + 8) = 0;
          _DAT_0064b4c8 = 1;
          iVar5 = *(int *)(param_1 + 0x6c);
          iVar8 = local_1b8[0x1e];
          uStack_4c = 0;
          local_50 = *(uint *)(iVar5 + 4);
          uStack_3c = 0;
          local_40 = *(uint *)(*(int *)(iVar8 + 0x2c) + 4);
          local_180 = 0;
          local_17c = 0;
          fVar17 = (float10)local_50 / (float10)local_40;
          if ((iVar8 == 0) || (*(int *)(iVar8 + 0x6c) == 0)) {
            uVar7 = local_1b8[0x30];
            uVar6 = uVar7 & 0x30;
            if (uVar6 == 0) {
              local_140 = (double)fVar17;
              if ((*(int *)(iVar3 + 0x88) == 0) && (*(int *)(iVar3 + 0x8c) == 0x3ff00000)) {
                local_1a8 = 0.0;
              }
              else {
                local_1a8 = _DAT_006106d0 / *(double *)(iVar3 + 0x88);
              }
              if (_DAT_00610fd8 == *(double *)(&DAT_00645d28 + (uVar7 >> 6 & 7) * 8)) {
                FUN_00591240(*(undefined4 *)(iVar5 + 4),(undefined4)local_1a8,local_1a8._4_4_,
                             &local_180,&local_17c);
                uVar18 = local_114;
              }
              else {
                local_30 = *(undefined4 *)(iVar5 + 4);
                uStack_2c = 0;
                local_180 = ftol();
                local_17c = local_180;
                uVar18 = local_114;
              }
            }
            else {
              if (uVar6 == 0x20) {
                fVar17 = fVar17 / (float10)*(double *)(iVar3 + 0x88);
                goto LAB_00597533;
              }
              if (uVar6 == 0x10) {
                local_1a8 = *(double *)(iVar3 + 0x88);
                local_140 = (double)(fVar17 / (float10)*(double *)(iVar3 + 0x88));
                if (_DAT_00610fd8 == *(double *)(&DAT_00645d28 + (uVar7 >> 6 & 7) * 8)) {
                  FUN_00591240(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar3 + 0x88),
                               *(undefined4 *)(iVar3 + 0x8c),&local_180,&local_17c);
                  uVar18 = local_114;
                }
                else {
                  local_20 = *(undefined4 *)(iVar5 + 4);
                  uStack_1c = 0;
                  local_180 = ftol();
                  local_17c = local_180;
                  uVar18 = local_114;
                }
              }
            }
          }
          else {
            fVar17 = (float10)FUN_00598a10(*(undefined4 *)(param_1 + 0x68),iVar8,0,0x3ff00000);
            uVar18 = local_114;
LAB_00597533:
            local_140 = (double)fVar17;
            local_1a8 = 0.0;
          }
          iVar5 = local_1b4;
          piVar9 = (int *)(uVar15 + (local_1b4 * 3 + 0xf) * 4);
          local_114 = uVar18;
          iVar8 = FUN_0058e380(DAT_0065a070,local_1b8[0x1e],0,uVar18,(undefined4)local_140,
                               local_140._4_4_,(undefined4)local_1a8,local_1a8._4_4_,local_180,
                               local_17c,&local_144);
          *piVar9 = iVar8;
          if (local_144 < 0) {
            *piVar9 = 0;
          }
          *(undefined4 *)(param_1 + 8) = 1;
          _DAT_0064b4c8 = 0;
          iVar8 = *piVar9;
          if (iVar8 == 0) {
            *(undefined4 *)(uVar15 + 0x28) = 0;
            FUN_00595ba0(param_1,uVar15);
            if (-1 < local_144) {
              return 0;
            }
            *(undefined4 *)(DAT_0065a068 + 0x744) = 1;
            return 0;
          }
          uVar7 = *(int *)(iVar8 + 0x34) - ((int)local_114 - *(int *)(iVar8 + 0x28));
          local_1c8 = *(uint *)(uVar15 + 0x28);
          if ((int)uVar7 <= (int)*(uint *)(uVar15 + 0x28)) {
            local_1c8 = uVar7;
          }
          *(uint *)(uVar15 + 0x28) = local_1c8;
          local_fc = *(int *)(iVar3 + 0x9c);
          local_100 = *(uint *)(iVar3 + 0x98);
          uVar18 = __allrem(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),local_100,
                            local_fc);
          uVar7 = local_100 - (uint)uVar18;
          iVar3 = (local_fc - (int)((ulonglong)uVar18 >> 0x20)) - (uint)(local_100 < (uint)uVar18);
          if ((iVar3 <= (int)local_1c8 >> 0x1f) &&
             ((iVar3 < (int)local_1c8 >> 0x1f || (uVar7 < local_1c8)))) {
            *(uint *)(uVar15 + 0x28) = uVar7;
          }
          iVar3 = *(int *)(uVar15 + 0x28);
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          *(int *)(uVar15 + 0x28) = iVar3;
          iVar3 = iVar5 + 1;
        }
        else {
          *(undefined4 *)(uVar15 + (local_1b4 * 3 + 0xf) * 4) = 0;
          *(uint *)(iVar3 + 0xa4) = *(uint *)(iVar3 + 0xa4) | 1;
          *(int *)(uVar15 + 0x34) = local_1b4 + -1;
          iVar3 = local_1b4;
        }
      }
    }
    *(int *)(uVar15 + 0x34) = iVar3;
    uVar7 = uVar15;
    if ((iVar3 == 0) && (*(int *)(uVar15 + 0x10) != 0)) {
      uVar7 = FUN_00595b30(param_1,0);
      *(undefined4 *)(uVar7 + 8) = *(undefined4 *)(uVar15 + 8);
      *(undefined4 *)(uVar7 + 0xc) = *(undefined4 *)(uVar15 + 0xc);
      *(undefined4 *)(uVar7 + 0x18) = *(undefined4 *)(uVar15 + 0x18);
      *(undefined4 *)(uVar7 + 0x1c) = *(undefined4 *)(uVar15 + 0x1c);
      *(undefined4 *)(uVar7 + 0x20) = *(undefined4 *)(uVar15 + 0x20);
      *(undefined4 *)(uVar7 + 0x24) = *(undefined4 *)(uVar15 + 0x24);
      *(undefined4 *)(uVar7 + 0x28) = *(undefined4 *)(uVar15 + 0x28);
      *(undefined4 *)(uVar7 + 0x2c) = *(undefined4 *)(uVar15 + 0x2c);
      *(undefined4 *)(uVar7 + 0x30) = *(undefined4 *)(uVar15 + 0x30);
      *(undefined4 *)(uVar7 + 0x34) = *(undefined4 *)(uVar15 + 0x34);
      *(undefined4 *)(uVar7 + 0x38) = *(undefined4 *)(uVar15 + 0x38);
      puVar13 = (undefined4 *)(uVar7 + 0x58);
      for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(uVar7 + 0x3c) = 0;
      puVar13 = (undefined4 *)(uVar7 + 0xa8);
      for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(uVar7 + 0x48) = 0;
      FUN_00595ba0(param_1,uVar15);
    }
    local_1c4 = uVar7;
    if (param_9 == 0) {
      iVar3 = _SfList_InsertList_16(*(undefined4 *)(param_2 + 0x5d0),0xffffffff,&local_1c4,1);
      if (iVar3 < 0) {
        return 0;
      }
    }
    else {
      iVar3 = 0;
      piVar9 = *(int **)(param_2 + 0x5d0);
      if (0 < *piVar9) {
        piVar12 = (int *)piVar9[2];
        do {
          iVar5 = *(int *)(*piVar12 + 0x1c);
          if ((*(int *)(uVar7 + 0x1c) < iVar5) ||
             ((*(int *)(uVar7 + 0x1c) <= iVar5 &&
              (*(uint *)(uVar7 + 0x18) < *(uint *)(*piVar12 + 0x18))))) break;
          iVar3 = iVar3 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar3 < *piVar9);
      }
      _SfList_InsertList_16(piVar9,iVar3,&local_1c4,1);
    }
    uVar15 = *(uint *)(uVar7 + 0x28);
    uVar6 = *(uint *)(uVar7 + 0x18);
    iVar3 = *(int *)(uVar7 + 0x1c);
    *(uint *)(param_2 + 0x5d8) = uVar15 + uVar6;
    *(uint *)(param_2 + 0x5dc) = ((int)uVar15 >> 0x1f) + iVar3 + (uint)CARRY4(uVar15,uVar6);
  } while( true );
}


