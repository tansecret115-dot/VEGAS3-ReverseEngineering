/* Module: sfmarket2.dll
   Function: FUN_0044aa40
   Address: 0044aa40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044aa40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint unaff_EBX;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint local_1f8;
  uint local_1f4;
  int local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1bc;
  undefined1 local_1a0 [4];
  int local_19c;
  int local_198;
  uint local_194 [3];
  code *local_188;
  code *local_180;
  code *local_170;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_138;
  uint local_134;
  int local_130;
  int local_12c;
  int local_120;
  uint local_11c;
  uint local_118;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  short sStack_f4;
  undefined1 uStack_ea;
  undefined1 auStack_dc [4];
  uint local_d8 [2];
  code *pcStack_d0;
  code *pcStack_b8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_80;
  int iStack_7c;
  int local_64;
  int local_4c;
  int local_48;
  int local_44;
  uint local_1c [7];
  
  iVar1 = param_1[0x1b];
  local_1e0 = param_1[0x13];
  local_1e8 = param_1[7];
  iVar2 = param_1[0xf];
  uVar7 = FUN_00447e70(param_1[0x11]);
  uVar8 = FUN_00447e70(param_1[5]);
  uVar6 = FUN_00448100(uVar7,local_1a0);
  FUN_00448100(uVar8,local_1a0);
  FUN_0047caa0(uVar8,uVar7,param_1[0x22],local_194,(uint *)0x0);
  local_108 = param_1[0x1c];
  local_104 = param_1[0x10];
  local_100 = param_1[0x1d];
  local_1c[0] = 3;
  FUN_0047caa0(uVar7,uVar8,param_1[0x22],local_d8,local_1c);
  local_4c = param_1[0x10];
  local_48 = param_1[0x1c];
  local_44 = param_1[0x1d];
  local_1f4 = local_194[0];
  local_64 = iVar2;
  if (*param_1 == 0) {
    iVar3 = param_1[0x19];
    iVar4 = param_1[0x1a];
    local_1e4 = 0;
    if (0 < iVar4) {
      do {
        local_138 = local_1e0;
        local_134 = param_1[0x14];
        local_130 = local_1e8;
        local_12c = param_1[8];
        iVar15 = 0;
        if (local_10c != 0) {
          local_1f8 = 0;
          if (((param_1[0x1f] + local_1e4 < local_10c) && ((local_194[0] & 0x2000) != 0)) &&
             (uVar7 = (local_10c - param_1[0x1f]) - local_1e4, -1 < (int)uVar7)) {
            local_1f8 = uVar7;
          }
          if (((iVar4 - local_10c <= local_1e4 - param_1[0x21]) && ((local_194[0] & 0x1000) != 0))
             && (uVar7 = ((local_1e4 - param_1[0x21]) - iVar4) + 1 + local_10c,
                (int)local_1f8 < (int)uVar7)) {
            local_1f8 = uVar7;
          }
        }
        if (0 < iVar3) {
          do {
            (*local_188)(local_194);
            if (local_10c != 0) {
              uVar7 = unaff_EBX;
              if (((param_1[0x1e] + iVar15 < local_10c) && ((local_1f8 & 0x4000) != 0)) &&
                 (uVar8 = (local_10c - param_1[0x1e]) - iVar15, (int)unaff_EBX < (int)uVar8)) {
                uVar7 = uVar8;
              }
              if ((((int)(local_194[0] - local_10c) <= iVar15 - param_1[0x20]) &&
                  ((local_1f8 & 0x8000) != 0)) &&
                 (uVar8 = ((iVar15 - param_1[0x20]) - local_194[0]) + 1 + local_10c,
                 (int)uVar7 < (int)uVar8)) {
                uVar7 = uVar8;
              }
              if (uVar7 != 0) {
                uStack_80 = local_134;
                iStack_7c = local_130;
                (*pcStack_d0)(auStack_dc);
                uStack_154 = uStack_a0;
                uStack_158 = uStack_a4;
                sStack_f4 = (short)local_1e4 * (short)uVar7;
                uStack_ea = (undefined1)
                            (uVar7 * local_1e4 + ((int)(uVar7 * local_1e4) >> 0x1f & 0xffU) >> 8);
                (*pcStack_b8)(&local_19c);
              }
            }
            (*local_188)(&local_198);
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar3);
        }
        local_1e0 = local_1e0 + iVar1;
        local_1e8 = local_1e8 + iVar2;
        local_1e4 = local_1e4 + 1;
      } while (local_1e4 < iVar4);
      return 0;
    }
  }
  else {
    iVar3 = param_1[0xe];
    local_19c = param_1[3];
    iVar4 = param_1[0x1a];
    iVar15 = param_1[0xd];
    uVar7 = param_1[1];
    local_198 = param_1[4];
    iVar9 = param_1[0x21] * local_198;
    iVar16 = (int)(param_1[0x1f] * local_198 + (param_1[0x1f] * local_198 >> 0x1f & 0x3fffU)) >> 0xe
    ;
    iVar14 = local_198;
    if (local_198 <= local_19c) {
      iVar14 = local_19c;
    }
    iVar14 = (int)(iVar14 * local_10c + (iVar14 * local_10c >> 0x1f & 0x3fffU)) >> 0xe;
    if (param_1[0x19] == 1) {
      local_180 = local_170;
    }
    local_120 = iVar1;
    if (iVar4 == 1) {
      local_120 = 0;
    }
    uVar8 = param_1[2];
    local_1e4 = 1;
    if (0 < iVar3) {
      do {
        uVar10 = uVar8 >> 0xe;
        iVar13 = uVar10 * iVar1 + local_1e0;
        local_130 = local_1e8;
        local_12c = param_1[8];
        if (iVar3 <= local_1e4) {
          local_120 = 0;
        }
        if (iVar14 != 0) {
          local_1f8 = 0;
          if ((((int)(uVar10 + iVar16) < iVar14) && ((local_1f4 & 0x2000) != 0)) &&
             (uVar12 = (iVar14 - uVar10) - iVar16, -1 < (int)uVar12)) {
            local_1f8 = uVar12;
          }
          iVar11 = uVar10 - ((int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe);
          if (((iVar4 - iVar14 <= iVar11) && ((local_1f4 & 0x1000) != 0)) &&
             (uVar10 = (iVar11 - iVar4) + iVar14, (int)local_1f8 < (int)uVar10)) {
            local_1f8 = uVar10;
          }
        }
        local_118 = uVar8 & 0x3fff;
        uVar10 = uVar7;
        if (1 < iVar15) {
          local_1bc = iVar15 + -1;
          do {
            uVar17 = uVar10 >> 0xe;
            uVar12 = uVar17 * CONCAT31(extraout_var,uVar6);
            local_134 = uVar12 & 7;
            local_138 = (uVar12 >> 3) + iVar13;
            local_11c = uVar10 & 0x3fff;
            (*local_180)(local_194);
            if (iVar14 != 0) {
              local_1f4 = unaff_EBX;
              if ((((int)(uVar17 + local_1bc) < iVar14) &&
                  (local_1f4 = unaff_EBX, (local_1f8 & 0x4000) != 0)) &&
                 (uVar12 = (iVar14 - uVar17) - local_1bc, local_1f4 = unaff_EBX,
                 (int)unaff_EBX < (int)uVar12)) {
                local_1f4 = uVar12;
              }
              if (((local_1f0 - iVar14 <= (int)(uVar17 - iVar16)) && ((local_1f8 & 0x8000) != 0)) &&
                 (uVar12 = ((uVar17 - iVar16) - local_1f0) + 1 + iVar14,
                 (int)local_1f4 < (int)uVar12)) {
                local_1f4 = uVar12;
              }
              if (local_1f4 != 0) {
                uStack_80 = local_134;
                iStack_7c = local_130;
                (*pcStack_d0)(auStack_dc);
                uStack_158 = uStack_a4;
                uStack_154 = uStack_a0;
                sStack_f4 = (short)local_1e4 * (short)local_1f8;
                uStack_ea = (undefined1)
                            (local_1f8 * local_1e4 + ((int)(local_1f8 * local_1e4) >> 0x1f & 0xffU)
                            >> 8);
                (*pcStack_b8)(&local_19c);
              }
            }
            (*local_188)(&local_198);
            uVar10 = uVar10 + local_19c;
            local_1bc = local_1bc + -1;
          } while (local_1bc != 0);
          local_1bc = 0;
        }
        local_11c = uVar10 & 0x3fff;
        uVar10 = uVar10 >> 0xe;
        local_134 = uVar10 * CONCAT31(extraout_var,uVar6);
        local_138 = (local_134 >> 3) + iVar13;
        local_134 = local_134 & 7;
        (*local_170)(local_194);
        if (iVar14 != 0) {
          uVar12 = unaff_EBX;
          if ((((int)(uVar10 + local_1bc) < iVar14) && ((local_1f8 & 0x4000) != 0)) &&
             (uVar17 = (iVar14 - uVar10) - local_1bc, (int)unaff_EBX < (int)uVar17)) {
            uVar12 = uVar17;
          }
          if (((local_1f0 - iVar14 <= (int)(uVar10 - iVar16)) && ((local_1f8 & 0x8000) != 0)) &&
             (uVar10 = ((uVar10 - iVar16) - local_1f0) + 1 + iVar14, (int)uVar12 < (int)uVar10)) {
            uVar12 = uVar10;
          }
          if (uVar12 != 0) {
            uStack_80 = local_134;
            iStack_7c = local_130;
            (*pcStack_d0)(auStack_dc);
            uStack_158 = uStack_a4;
            uStack_154 = uStack_a0;
            sStack_f4 = (short)local_1e4 * (short)uVar12;
            uStack_ea = (undefined1)
                        (uVar12 * local_1e4 + ((int)(uVar12 * local_1e4) >> 0x1f & 0xffU) >> 8);
            (*pcStack_b8)(&local_19c);
          }
        }
        (*local_188)(&local_198);
        uVar8 = uVar8 + local_198;
        local_1e8 = local_1e8 + iVar2;
        bVar5 = local_1e4 < iVar3;
        local_1e4 = local_1e4 + 1;
      } while (bVar5);
    }
  }
  return 0;
}


