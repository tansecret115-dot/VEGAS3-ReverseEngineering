/* Module: vegas30k.dll
   Function: FUN_0104eb40
   Address: 0104eb40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0104eb40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint unaff_EBX;
  int iVar17;
  int iVar18;
  int iVar19;
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
  undefined1 local_d8 [8];
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
  undefined4 local_1c [7];
  
  iVar1 = param_1[0x1b];
  local_1e0 = param_1[0x13];
  local_1e8 = param_1[7];
  iVar2 = param_1[0xf];
  uVar6 = _SfGetPixelType_4(param_1[0x11]);
  uVar7 = _SfGetPixelType_4(param_1[5]);
  iVar8 = _SfGetPixelBitsPerChannel_8(uVar6,local_1a0);
  _SfGetPixelBitsPerChannel_8(uVar7,local_1a0);
  _SfXCHGGetFunctionPointers_20(uVar7,uVar6,param_1[0x22],local_194,0);
  local_108 = param_1[0x1c];
  local_104 = param_1[0x10];
  local_100 = param_1[0x1d];
  local_1c[0] = 3;
  _SfXCHGGetFunctionPointers_20(uVar6,uVar7,param_1[0x22],local_d8,local_1c);
  local_4c = param_1[0x10];
  local_48 = param_1[0x1c];
  local_44 = param_1[0x1d];
  local_1f4 = local_194[0];
  local_64 = iVar2;
  if (*param_1 == 0) {
    iVar8 = param_1[0x19];
    iVar3 = param_1[0x1a];
    local_1e4 = 0;
    if (0 < iVar3) {
      do {
        local_138 = local_1e0;
        local_134 = param_1[0x14];
        local_130 = local_1e8;
        local_12c = param_1[8];
        iVar18 = 0;
        if (local_10c != 0) {
          local_1f8 = 0;
          if (((param_1[0x1f] + local_1e4 < local_10c) && ((local_194[0] & 0x2000) != 0)) &&
             (uVar9 = (local_10c - param_1[0x1f]) - local_1e4, -1 < (int)uVar9)) {
            local_1f8 = uVar9;
          }
          if (((iVar3 - local_10c <= local_1e4 - param_1[0x21]) && ((local_194[0] & 0x1000) != 0))
             && (uVar9 = ((local_1e4 - param_1[0x21]) - iVar3) + 1 + local_10c,
                (int)local_1f8 < (int)uVar9)) {
            local_1f8 = uVar9;
          }
        }
        if (0 < iVar8) {
          do {
            (*local_188)(local_194);
            if (local_10c != 0) {
              uVar9 = unaff_EBX;
              if (((param_1[0x1e] + iVar18 < local_10c) && ((local_1f8 & 0x4000) != 0)) &&
                 (uVar10 = (local_10c - param_1[0x1e]) - iVar18, (int)unaff_EBX < (int)uVar10)) {
                uVar9 = uVar10;
              }
              if ((((int)(local_194[0] - local_10c) <= iVar18 - param_1[0x20]) &&
                  ((local_1f8 & 0x8000) != 0)) &&
                 (uVar10 = ((iVar18 - param_1[0x20]) - local_194[0]) + 1 + local_10c,
                 (int)uVar9 < (int)uVar10)) {
                uVar9 = uVar10;
              }
              if (uVar9 != 0) {
                uStack_80 = local_134;
                iStack_7c = local_130;
                (*pcStack_d0)(auStack_dc);
                uStack_154 = uStack_a0;
                uStack_158 = uStack_a4;
                sStack_f4 = (short)local_1e4 * (short)uVar9;
                uStack_ea = (undefined1)
                            (uVar9 * local_1e4 + ((int)(uVar9 * local_1e4) >> 0x1f & 0xffU) >> 8);
                (*pcStack_b8)(&local_19c);
              }
            }
            (*local_188)(&local_198);
            iVar18 = iVar18 + 1;
          } while (iVar18 < iVar8);
        }
        local_1e0 = local_1e0 + iVar1;
        local_1e8 = local_1e8 + iVar2;
        local_1e4 = local_1e4 + 1;
      } while (local_1e4 < iVar3);
      return 0;
    }
  }
  else {
    iVar3 = param_1[0xe];
    local_19c = param_1[3];
    iVar18 = param_1[0x1a];
    iVar4 = param_1[0xd];
    uVar9 = param_1[1];
    local_198 = param_1[4];
    iVar11 = param_1[0x21] * local_198;
    iVar19 = (int)(param_1[0x1f] * local_198 + (param_1[0x1f] * local_198 >> 0x1f & 0x3fffU)) >> 0xe
    ;
    iVar17 = local_198;
    if (local_198 <= local_19c) {
      iVar17 = local_19c;
    }
    iVar17 = (int)(iVar17 * local_10c + (iVar17 * local_10c >> 0x1f & 0x3fffU)) >> 0xe;
    if (param_1[0x19] == 1) {
      local_180 = local_170;
    }
    local_120 = iVar1;
    if (iVar18 == 1) {
      local_120 = 0;
    }
    uVar10 = param_1[2];
    local_1e4 = 1;
    if (0 < iVar3) {
      do {
        uVar12 = uVar10 >> 0xe;
        iVar16 = uVar12 * iVar1 + local_1e0;
        local_130 = local_1e8;
        local_12c = param_1[8];
        if (iVar3 <= local_1e4) {
          local_120 = 0;
        }
        if (iVar17 != 0) {
          local_1f8 = 0;
          if ((((int)(uVar12 + iVar19) < iVar17) && ((local_1f4 & 0x2000) != 0)) &&
             (uVar15 = (iVar17 - uVar12) - iVar19, -1 < (int)uVar15)) {
            local_1f8 = uVar15;
          }
          iVar13 = uVar12 - ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fffU)) >> 0xe);
          if (((iVar18 - iVar17 <= iVar13) && ((local_1f4 & 0x1000) != 0)) &&
             (uVar12 = (iVar13 - iVar18) + iVar17, (int)local_1f8 < (int)uVar12)) {
            local_1f8 = uVar12;
          }
        }
        local_118 = uVar10 & 0x3fff;
        uVar12 = uVar9;
        if (1 < iVar4) {
          local_1bc = iVar4 + -1;
          do {
            uVar15 = uVar12 >> 0xe;
            local_134 = uVar15 * iVar8 & 7;
            local_138 = (uVar15 * iVar8 >> 3) + iVar16;
            local_11c = uVar12 & 0x3fff;
            (*local_180)(local_194);
            if (iVar17 != 0) {
              local_1f4 = unaff_EBX;
              if ((((int)(uVar15 + local_1bc) < iVar17) &&
                  (local_1f4 = unaff_EBX, (local_1f8 & 0x4000) != 0)) &&
                 (uVar14 = (iVar17 - uVar15) - local_1bc, local_1f4 = unaff_EBX,
                 (int)unaff_EBX < (int)uVar14)) {
                local_1f4 = uVar14;
              }
              if (((local_1f0 - iVar17 <= (int)(uVar15 - iVar19)) && ((local_1f8 & 0x8000) != 0)) &&
                 (uVar15 = ((uVar15 - iVar19) - local_1f0) + 1 + iVar17,
                 (int)local_1f4 < (int)uVar15)) {
                local_1f4 = uVar15;
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
            uVar12 = uVar12 + local_19c;
            local_1bc = local_1bc + -1;
          } while (local_1bc != 0);
          local_1bc = 0;
        }
        local_11c = uVar12 & 0x3fff;
        uVar12 = uVar12 >> 0xe;
        local_138 = (uVar12 * iVar8 >> 3) + iVar16;
        local_134 = uVar12 * iVar8 & 7;
        (*local_170)(local_194);
        if (iVar17 != 0) {
          uVar15 = unaff_EBX;
          if ((((int)(uVar12 + local_1bc) < iVar17) && ((local_1f8 & 0x4000) != 0)) &&
             (uVar14 = (iVar17 - uVar12) - local_1bc, (int)unaff_EBX < (int)uVar14)) {
            uVar15 = uVar14;
          }
          if (((local_1f0 - iVar17 <= (int)(uVar12 - iVar19)) && ((local_1f8 & 0x8000) != 0)) &&
             (uVar12 = ((uVar12 - iVar19) - local_1f0) + 1 + iVar17, (int)uVar15 < (int)uVar12)) {
            uVar15 = uVar12;
          }
          if (uVar15 != 0) {
            uStack_80 = local_134;
            iStack_7c = local_130;
            (*pcStack_d0)(auStack_dc);
            uStack_158 = uStack_a4;
            uStack_154 = uStack_a0;
            sStack_f4 = (short)local_1e4 * (short)uVar15;
            uStack_ea = (undefined1)
                        (uVar15 * local_1e4 + ((int)(uVar15 * local_1e4) >> 0x1f & 0xffU) >> 8);
            (*pcStack_b8)(&local_19c);
          }
        }
        (*local_188)(&local_198);
        uVar10 = uVar10 + local_198;
        local_1e8 = local_1e8 + iVar2;
        bVar5 = local_1e4 < iVar3;
        local_1e4 = local_1e4 + 1;
      } while (bVar5);
    }
  }
  return 0;
}


