/* Module: vegas30k.dll
   Function: FUN_010c9290
   Address: 010c9290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c9290(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b4;
  undefined4 local_19c;
  undefined2 local_198;
  undefined2 local_196;
  undefined2 local_194;
  undefined2 local_192;
  undefined4 local_190;
  undefined2 local_18c;
  undefined2 local_18a;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  undefined2 local_184;
  undefined1 local_182;
  undefined1 local_181;
  code *local_180;
  code *pcStack_17c;
  code *pcStack_178;
  code *local_174;
  code *pcStack_170;
  code *local_16c;
  code *local_168;
  code *local_164;
  code *local_15c;
  code *local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *pcStack_138;
  undefined4 uStack_134;
  int iStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint local_124;
  uint local_120;
  uint uStack_114;
  uint uStack_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  int local_f4;
  int local_f0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  undefined1 local_c4 [4];
  int local_c0;
  undefined1 local_bc [4];
  code *pcStack_b8;
  code *pcStack_b4;
  code *pcStack_b0;
  code *pcStack_a4;
  code *pcStack_a0;
  code *pcStack_9c;
  code *pcStack_98;
  code *pcStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_30;
  int local_2c;
  int local_28;
  
  local_1b4 = param_1[0x13];
  uVar1 = param_1[0x1b];
  local_1c0 = param_1[7];
  iVar2 = param_1[0xf];
  uVar7 = _SfGetPixelType_4(param_1[0x11]);
  uVar8 = _SfGetPixelType_4(param_1[5]);
  iVar9 = _SfGetPixelBitsPerChannel_8(uVar7,local_c4);
  _SfGetPixelBitsPerChannel_8(uVar8,local_c4);
  local_19c = **(undefined4 **)param_1[0x23];
  local_190 = ftol();
  local_184 = ftol();
  local_18c = ftol();
  local_182 = ftol();
  local_18a = ftol();
  local_181 = ftol();
  local_194 = ftol();
  local_196 = ftol();
  local_198 = ftol();
  local_192 = ftol();
  local_186 = ftol();
  local_187 = ftol();
  local_188 = ftol();
  local_185 = ftol();
  _SfXCHGGetFunctionPointers_20(uVar8,uVar7,param_1[0x22],&local_180,&local_19c);
  local_f4 = param_1[0x1c];
  local_f0 = param_1[0x10];
  _SfXCHGGetFunctionPointers_20(uVar7,uVar8,param_1[0x22],local_bc,&local_19c);
  local_30 = param_1[0x10];
  local_28 = param_1[0x1d];
  local_2c = local_30;
  if (*param_1 == 0) {
    uVar12 = param_1[0x19];
    local_1c8 = param_1[0x1a];
    iVar9 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 3U)) >> 2;
    uVar12 = uVar12 & 0x80000003;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
    }
    if (0 < local_1c8) {
      do {
        local_5c = param_1[0x14];
        local_54 = param_1[8];
        local_124 = local_1b4;
        local_120 = 0;
        local_1cc = iVar9;
        local_60 = local_1c0;
        local_58 = local_1c0;
        if (0 < iVar9) {
          do {
            (*local_164)(&local_180);
            (*pcStack_a4)(&local_c0);
            (*pcStack_98)(local_c4,&local_188);
            (*pcStack_170)(auStack_cc);
            local_1cc = local_1cc + -1;
          } while (local_1cc != 0);
        }
        local_1cc = uVar12;
        if (0 < (int)uVar12) {
          do {
            (*local_174)(&local_180);
            (*pcStack_b4)(&local_c0);
            uStack_80 = uStack_14c;
            uStack_7c = uStack_148;
            (*pcStack_9c)(local_c4);
            (*pcStack_17c)(auStack_c8);
            local_1cc = local_1cc - 1;
          } while (local_1cc != 0);
        }
        local_1b4 = local_1b4 + uVar1;
        local_1c0 = local_1c0 + iVar2;
        local_1c8 = local_1c8 + -1;
      } while (local_1c8 != 0);
      return 0;
    }
  }
  else {
    local_10c = uVar1;
    if ((((uint)local_180 & 0x20) == 0) || (local_150 == (code *)0x0)) {
      uVar12 = param_1[1];
      local_c0 = param_1[4];
      uVar15 = param_1[2];
      iVar3 = param_1[3];
      iVar4 = param_1[0xd];
      iVar5 = param_1[0xe];
      if (param_1[0x19] == 1) {
        local_16c = local_15c;
      }
      if (param_1[0x1a] == 1) {
        local_10c = 0;
      }
      local_1c8 = 1;
      if (0 < iVar5) {
        iVar11 = (int)(iVar4 + -2 + (iVar4 + -2 >> 0x1f & 3U)) >> 2;
        do {
          local_5c = param_1[8];
          iVar14 = (uVar15 >> 0xe) * uVar1 + local_1b4;
          local_60 = local_1c0;
          local_58 = local_1c0;
          if (iVar5 <= local_1c8) {
            local_10c = 0;
          }
          local_104 = uVar15 & 0x3fff;
          uVar13 = uVar12;
          local_1c4 = iVar11;
          local_54 = local_5c;
          if (0 < iVar11) {
            do {
              uVar13 = uVar13 + iVar3;
              local_120 = (uVar13 >> 0xe) * iVar9;
              local_108 = uVar13 & 0x3fff;
              local_124 = (local_120 >> 3) + iVar14;
              local_120 = local_120 & 7;
              (*local_16c)(&local_180);
              uVar13 = uVar13 + iVar3;
              local_124 = (uVar13 >> 0xe) * iVar9;
              uStack_140 = uStack_148;
              uStack_13c = uStack_144;
              uStack_128 = (local_124 >> 3) + iVar14;
              local_124 = local_124 & 7;
              local_10c = uVar13 & 0x3fff;
              (*pcStack_170)(&local_184);
              uVar13 = uVar13 + iVar3;
              uStack_128 = (uVar13 >> 0xe) * iVar9;
              uStack_13c = uStack_14c;
              pcStack_138 = (code *)uStack_148;
              uStack_12c = (uStack_128 >> 3) + iVar14;
              uStack_128 = uStack_128 & 7;
              uStack_110 = uVar13 & 0x3fff;
              (*local_174)(&local_188);
              uVar13 = uVar13 + iVar3;
              pcStack_138 = local_150;
              uVar10 = uVar13 + iVar3 * -4;
              uStack_134 = uStack_14c;
              uStack_114 = uVar10 & 0x3fff;
              uStack_12c = (uVar10 >> 0xe) * iVar9;
              iStack_130 = (uStack_12c >> 3) + iVar14;
              uStack_12c = uStack_12c & 7;
              (*pcStack_178)(&local_18c);
              (*pcStack_b0)(auStack_cc);
              (*pcStack_a4)(auStack_d0,&local_194);
              (*pcStack_17c)(auStack_d8);
              local_1c4 = local_1c4 + -1;
            } while (local_1c4 != 0);
          }
          if (iVar11 * 4 + 1 < iVar4) {
            local_1c4 = (iVar4 - (iVar11 * 4 + 2)) + 1;
            do {
              local_120 = (uVar13 >> 0xe) * iVar9;
              local_108 = uVar13 & 0x3fff;
              local_124 = (local_120 >> 3) + iVar14;
              local_120 = local_120 & 7;
              (*local_16c)(&local_180);
              (*pcStack_b4)(&local_c0);
              uStack_80 = uStack_14c;
              uStack_7c = uStack_148;
              (*pcStack_9c)(local_c4);
              (*pcStack_17c)(auStack_c8);
              uVar13 = uVar13 + iVar3;
              local_1c4 = local_1c4 + -1;
            } while (local_1c4 != 0);
          }
          uVar10 = (uVar13 >> 0xe) * iVar9;
          local_108 = uVar13 & 0x3fff;
          local_120 = uVar10 & 7;
          local_124 = (uVar10 >> 3) + iVar14;
          (*local_15c)(&local_180);
          (*pcStack_b4)(&local_c0);
          uStack_80 = uStack_14c;
          uStack_7c = uStack_148;
          (*pcStack_9c)(local_c4);
          (*pcStack_17c)(auStack_c8);
          uVar15 = uVar15 + local_c0;
          local_1c0 = local_1c0 + iVar2;
          bVar6 = local_1c8 < iVar5;
          local_1c8 = local_1c8 + 1;
        } while (bVar6);
      }
    }
    else {
      iVar3 = param_1[4];
      iVar4 = param_1[3];
      uVar12 = param_1[1];
      iVar5 = param_1[0xd];
      iVar11 = param_1[0xe];
      uVar15 = param_1[2];
      if (param_1[0x19] == 1) {
        local_168 = local_174;
      }
      if (param_1[0x1a] == 1) {
        local_10c = 0;
      }
      local_1c8 = 1;
      if (0 < iVar11) {
        do {
          iVar14 = (uVar15 >> 0xe) * uVar1 + local_1b4;
          local_5c = param_1[8];
          if (iVar11 <= local_1c8) {
            local_10c = 0;
          }
          local_104 = uVar15 & 0x3fff;
          uVar13 = uVar12;
          local_60 = local_1c0;
          local_58 = local_1c0;
          local_54 = local_5c;
          if (1 < iVar5) {
            local_1bc = iVar5 + -1;
            do {
              local_120 = (uVar13 >> 0xe) * iVar9;
              local_108 = uVar13 & 0x3fff;
              local_124 = (local_120 >> 3) + iVar14;
              local_120 = local_120 & 7;
              (*local_168)(&local_180);
              (*local_150)(&local_184);
              (*pcStack_b8)(local_c4);
              pcStack_84 = local_150;
              uStack_80 = uStack_14c;
              (*pcStack_a0)(auStack_c8);
              (*local_180)(auStack_cc);
              uVar13 = uVar13 + iVar4;
              local_1bc = local_1bc + -1;
            } while (local_1bc != 0);
          }
          uVar10 = (uVar13 >> 0xe) * iVar9;
          local_108 = uVar13 & 0x3fff;
          local_120 = uVar10 & 7;
          local_124 = (uVar10 >> 3) + iVar14;
          (*local_174)(&local_180);
          (*pcStack_b4)(&local_c0);
          uStack_80 = uStack_14c;
          uStack_7c = uStack_148;
          (*pcStack_9c)(local_c4);
          (*pcStack_17c)(auStack_c8);
          uVar15 = uVar15 + iVar3;
          local_1c0 = local_1c0 + iVar2;
          bVar6 = local_1c8 < iVar11;
          local_1c8 = local_1c8 + 1;
        } while (bVar6);
        return 0;
      }
    }
  }
  return 0;
}


