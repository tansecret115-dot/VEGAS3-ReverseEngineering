/* Module: vidcap30.exe
   Function: FUN_004937f0
   Address: 004937f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004937f0(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  int local_f4;
  undefined4 *local_f0;
  int local_e8;
  undefined4 *local_dc;
  int local_d4;
  int local_cc;
  uint local_c8;
  int local_c4;
  undefined1 local_c0 [4];
  undefined1 local_bc [8];
  code *pcStack_b4;
  code *pcStack_b0;
  code *pcStack_ac;
  code *local_a8;
  code *local_a0;
  code *local_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 *local_60;
  uint local_5c;
  undefined4 *local_58;
  int local_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  local_f0 = (undefined4 *)param_1[0x13];
  uVar2 = param_1[0x1b];
  local_dc = (undefined4 *)param_1[7];
  iVar3 = param_1[0xf];
  iVar6 = _SfGetPixelType_4(param_1[0x11]);
  iVar7 = _SfGetPixelType_4(param_1[5]);
  iVar8 = _SfGetPixelBitsPerChannel_8(iVar6,local_c0);
  _SfGetPixelBitsPerChannel_8(iVar7,local_c0);
  _SfXCHGGetFunctionPointers_20(iVar7,iVar6,param_1[0x22],local_bc,0);
  local_2c = param_1[0x10];
  local_30 = param_1[0x1c];
  local_28 = param_1[0x1d];
  if (*param_1 == 0) {
    uVar12 = param_1[0x19];
    iVar9 = (int)(uVar12 + ((int)uVar12 >> 0x1f & 3U)) >> 2;
    uVar16 = uVar12 & 0x80000003;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
    }
    local_f4 = param_1[0x1a];
    if (iVar6 == 0x20) {
      if ((iVar7 == 0x1c) || (iVar7 == 0x1d)) {
        if (local_f4 < 1) {
          return 0;
        }
        do {
          FUN_00493710(local_dc,local_f0,uVar12 * 4);
          local_f0 = (undefined4 *)((int)local_f0 + uVar2);
          local_dc = (undefined4 *)((int)local_dc + iVar3);
          local_f4 = local_f4 + -1;
        } while (local_f4 != 0);
        return 0;
      }
    }
    else if ((iVar6 == 0x1b) && ((iVar7 == 0x1c || (iVar7 == 0x1d)))) {
      if (local_f4 < 1) {
        return 0;
      }
      do {
        puVar10 = local_dc;
        puVar14 = local_f0;
        iVar6 = iVar9;
        if (0 < iVar9) {
          do {
            uVar4 = *puVar14;
            *(undefined1 *)((int)puVar10 + 0xf) = 0xff;
            *puVar10 = uVar4;
            puVar10[1] = *(undefined4 *)((int)puVar14 + 3);
            puVar10[2] = *(undefined4 *)((int)puVar14 + 6);
            *(undefined1 *)(puVar10 + 3) = *(undefined1 *)((int)puVar14 + 9);
            *(undefined1 *)((int)puVar10 + 0xd) = *(undefined1 *)((int)puVar14 + 10);
            uVar1 = *(undefined1 *)((int)puVar14 + 0xb);
            *(undefined1 *)((int)puVar10 + 3) = 0xff;
            *(undefined1 *)((int)puVar10 + 7) = 0xff;
            *(undefined1 *)((int)puVar10 + 0xb) = 0xff;
            *(undefined1 *)((int)puVar10 + 0xe) = uVar1;
            puVar14 = puVar14 + 3;
            puVar10 = puVar10 + 4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (0 < (int)uVar16) {
          puVar11 = (undefined1 *)((int)puVar10 + 2);
          puVar15 = (undefined1 *)((int)puVar14 + 2);
          uVar12 = uVar16;
          do {
            puVar11[-2] = puVar15[-2];
            puVar11[-1] = puVar15[-1];
            *puVar11 = *puVar15;
            puVar11[1] = 0xff;
            puVar11 = puVar11 + 4;
            uVar12 = uVar12 - 1;
            puVar15 = puVar15 + 3;
          } while (uVar12 != 0);
        }
        local_f0 = (undefined4 *)((int)local_f0 + uVar2);
        local_dc = (undefined4 *)((int)local_dc + iVar3);
        local_f4 = local_f4 + -1;
      } while (local_f4 != 0);
      return 0;
    }
    if ((iVar6 == iVar7) && (8 < iVar8)) {
      if (0 < local_f4) {
        uVar12 = (int)(uVar12 * iVar8 + ((int)(uVar12 * iVar8) >> 0x1f & 7U)) >> 3;
        do {
          puVar10 = local_f0;
          puVar14 = local_dc;
          for (uVar16 = uVar12 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
          for (uVar16 = uVar12 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          local_f0 = (undefined4 *)((int)local_f0 + uVar2);
          local_dc = (undefined4 *)((int)local_dc + iVar3);
          local_f4 = local_f4 + -1;
        } while (local_f4 != 0);
        return 0;
      }
    }
    else if (0 < local_f4) {
      do {
        local_5c = param_1[0x14];
        local_54 = param_1[8];
        local_60 = local_f0;
        iVar6 = iVar9;
        local_58 = local_dc;
        if (0 < iVar9) {
          do {
            (*local_a0)(local_bc);
            (*local_a0)(local_c0);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar12 = uVar16;
        if (0 < (int)uVar16) {
          do {
            (*pcStack_b0)(local_bc);
            (*pcStack_b0)(local_c0);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        local_f0 = (undefined4 *)((int)local_f0 + uVar2);
        local_dc = (undefined4 *)((int)local_dc + iVar3);
        local_f4 = local_f4 + -1;
      } while (local_f4 != 0);
      return 0;
    }
  }
  else {
    local_d4 = param_1[4];
    local_c8 = param_1[1];
    iVar6 = param_1[0xe];
    iVar7 = param_1[3];
    iVar9 = param_1[0xd];
    if (((byte)param_1[0x22] & 0xf) < 3) {
      iVar7 = (param_1[0x19] << 0xe) / iVar9;
      local_d4 = (param_1[0x1a] << 0xe) / iVar6;
    }
    if (param_1[0x19] == 1) {
      local_a8 = local_98;
    }
    local_48 = uVar2;
    if (param_1[0x1a] == 1) {
      local_48 = 0;
    }
    uVar12 = param_1[2];
    local_f4 = 1;
    if (0 < iVar6) {
      local_cc = (int)(iVar9 + -2 + (iVar9 + -2 >> 0x1f & 3U)) >> 2;
      do {
        if (local_f4 == iVar6) {
          uVar16 = param_1[0x1a] - 1;
        }
        else {
          uVar16 = uVar12 >> 0xe;
        }
        iVar17 = uVar16 * uVar2;
        local_58 = local_dc;
        local_54 = param_1[8];
        if (iVar6 <= local_f4) {
          local_48 = 0;
        }
        local_40 = uVar12 & 0x3fff;
        local_c4 = local_cc * 4 + 1;
        uVar16 = local_c8;
        local_e8 = local_cc;
        if (0 < local_cc) {
          do {
            uVar16 = uVar16 + iVar7;
            local_5c = (uVar16 >> 0xe) * iVar8;
            local_44 = uVar16 & 0x3fff;
            local_60 = (undefined4 *)((int)local_f0 + (local_5c >> 3) + iVar17);
            local_5c = local_5c & 7;
            (*local_a8)(local_bc);
            uVar16 = uVar16 + iVar7;
            uVar13 = (uVar16 >> 0xe) * iVar8;
            uStack_7c = uStack_84;
            uStack_78 = uStack_80;
            puStack_64 = (undefined1 *)((int)local_f0 + (uVar13 >> 3) + iVar17);
            local_60 = (undefined4 *)(uVar13 & 7);
            local_48 = uVar16 & 0x3fff;
            (*pcStack_ac)(local_c0);
            uVar16 = uVar16 + iVar7;
            uVar13 = (uVar16 >> 0xe) * iVar8;
            uStack_78 = uStack_88;
            uStack_74 = uStack_84;
            puStack_68 = (undefined1 *)((int)local_f0 + (uVar13 >> 3) + iVar17);
            puStack_64 = (undefined1 *)(uVar13 & 7);
            uStack_4c = uVar16 & 0x3fff;
            (*pcStack_b0)(&local_c4);
            uVar16 = uVar16 + iVar7;
            uStack_74 = uStack_8c;
            uVar13 = uVar16 + iVar7 * -4;
            uStack_70 = uStack_88;
            uStack_50 = uVar13 & 0x3fff;
            uVar13 = (uVar13 >> 0xe) * iVar8;
            puStack_6c = (undefined1 *)((int)local_f0 + (uVar13 >> 3) + iVar17);
            puStack_68 = (undefined1 *)(uVar13 & 7);
            (*pcStack_b4)(&local_c8);
            (*pcStack_ac)(&local_cc);
            local_e8 = local_e8 + -1;
          } while (local_e8 != 0);
        }
        if (local_c4 < iVar9) {
          local_e8 = (iVar9 - (local_c4 + 1)) + 1;
          do {
            local_5c = (uVar16 >> 0xe) * iVar8;
            local_60 = (undefined4 *)((int)local_f0 + (local_5c >> 3) + iVar17);
            local_5c = local_5c & 7;
            local_44 = uVar16 & 0x3fff;
            (*local_a8)(local_bc);
            (*pcStack_b0)(local_c0);
            uVar16 = uVar16 + iVar7;
            local_e8 = local_e8 + -1;
          } while (local_e8 != 0);
        }
        local_44 = 0;
        uVar16 = (param_1[0x19] + -1) * iVar8;
        local_5c = uVar16 & 7;
        local_60 = (undefined4 *)((int)local_f0 + (uVar16 >> 3) + iVar17);
        (*local_98)(local_bc);
        (*pcStack_b0)(local_c0);
        local_dc = (undefined4 *)((int)local_dc + iVar3);
        uVar12 = uVar12 + local_d4;
        bVar5 = local_f4 < iVar6;
        local_f4 = local_f4 + 1;
      } while (bVar5);
    }
  }
  return 0;
}


