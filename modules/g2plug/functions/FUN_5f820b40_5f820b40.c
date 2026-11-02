/* Module: g2plug.dll
   Function: FUN_5f820b40
   Address: 5f820b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f820b40(int *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var;
  int iVar9;
  float *pfVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int local_f4;
  float *local_f0;
  int local_e8;
  float *local_dc;
  int local_d4;
  int local_cc;
  uint local_c8;
  int local_c4;
  undefined1 local_c0 [4];
  uint local_bc [2];
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
  float *local_60;
  uint local_5c;
  float *local_58;
  int local_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  local_f0 = (float *)param_1[0x13];
  uVar1 = param_1[0x1b];
  local_dc = (float *)param_1[7];
  iVar2 = param_1[0xf];
  uVar7 = FUN_5f81e5e0(param_1[0x11]);
  uVar8 = FUN_5f81e5e0(param_1[5]);
  uVar6 = FUN_5f81e870(uVar7,local_c0);
  iVar17 = CONCAT31(extraout_var,uVar6);
  FUN_5f81e870(uVar8,local_c0);
  FUN_5f8616d0(uVar8,uVar7,param_1[0x22],local_bc,(uint *)0x0);
  local_2c = param_1[0x10];
  local_30 = param_1[0x1c];
  local_28 = param_1[0x1d];
  if (*param_1 == 0) {
    uVar13 = param_1[0x19];
    iVar9 = (int)(uVar13 + ((int)uVar13 >> 0x1f & 3U)) >> 2;
    uVar16 = uVar13 & 0x80000003;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
    }
    local_f4 = param_1[0x1a];
    if (uVar7 == 0x20) {
      if ((uVar8 == 0x1c) || (uVar8 == 0x1d)) {
        if (local_f4 < 1) {
          return 0;
        }
        do {
          FUN_5f820a60((undefined1 *)local_dc,local_f0,uVar13 * 4);
          local_f0 = (float *)((int)local_f0 + uVar1);
          local_dc = (float *)((int)local_dc + iVar2);
          local_f4 = local_f4 + -1;
        } while (local_f4 != 0);
        return 0;
      }
    }
    else if ((uVar7 == 0x1b) && ((uVar8 == 0x1c || (uVar8 == 0x1d)))) {
      if (local_f4 < 1) {
        return 0;
      }
      do {
        pfVar10 = local_dc;
        pfVar14 = local_f0;
        iVar17 = iVar9;
        if (0 < iVar9) {
          do {
            fVar3 = *pfVar14;
            *(undefined1 *)((int)pfVar10 + 0xf) = 0xff;
            *pfVar10 = fVar3;
            pfVar10[1] = *(float *)((int)pfVar14 + 3);
            pfVar10[2] = *(float *)((int)pfVar14 + 6);
            *(undefined1 *)(pfVar10 + 3) = *(undefined1 *)((int)pfVar14 + 9);
            *(undefined1 *)((int)pfVar10 + 0xd) = *(undefined1 *)((int)pfVar14 + 10);
            uVar6 = *(undefined1 *)((int)pfVar14 + 0xb);
            *(undefined1 *)((int)pfVar10 + 3) = 0xff;
            *(undefined1 *)((int)pfVar10 + 7) = 0xff;
            *(undefined1 *)((int)pfVar10 + 0xb) = 0xff;
            *(undefined1 *)((int)pfVar10 + 0xe) = uVar6;
            pfVar14 = pfVar14 + 3;
            pfVar10 = pfVar10 + 4;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        if (0 < (int)uVar16) {
          puVar11 = (undefined1 *)((int)pfVar10 + 2);
          puVar15 = (undefined1 *)((int)pfVar14 + 2);
          uVar7 = uVar16;
          do {
            puVar11[-2] = puVar15[-2];
            puVar11[-1] = puVar15[-1];
            *puVar11 = *puVar15;
            puVar11[1] = 0xff;
            puVar11 = puVar11 + 4;
            uVar7 = uVar7 - 1;
            puVar15 = puVar15 + 3;
          } while (uVar7 != 0);
        }
        local_f0 = (float *)((int)local_f0 + uVar1);
        local_dc = (float *)((int)local_dc + iVar2);
        local_f4 = local_f4 + -1;
      } while (local_f4 != 0);
      return 0;
    }
    if ((uVar7 == uVar8) && (8 < iVar17)) {
      if (0 < local_f4) {
        uVar7 = (int)(uVar13 * iVar17 + ((int)(uVar13 * iVar17) >> 0x1f & 7U)) >> 3;
        do {
          pfVar10 = local_f0;
          pfVar14 = local_dc;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pfVar14 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar14 = pfVar14 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)pfVar14 = *(undefined1 *)pfVar10;
            pfVar10 = (float *)((int)pfVar10 + 1);
            pfVar14 = (float *)((int)pfVar14 + 1);
          }
          local_f0 = (float *)((int)local_f0 + uVar1);
          local_dc = (float *)((int)local_dc + iVar2);
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
        iVar17 = iVar9;
        local_58 = local_dc;
        if (0 < iVar9) {
          do {
            (*local_a0)(local_bc);
            (*local_a0)(local_c0);
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        uVar7 = uVar16;
        if (0 < (int)uVar16) {
          do {
            (*pcStack_b0)(local_bc);
            (*pcStack_b0)(local_c0);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        local_f0 = (float *)((int)local_f0 + uVar1);
        local_dc = (float *)((int)local_dc + iVar2);
        local_f4 = local_f4 + -1;
      } while (local_f4 != 0);
      return 0;
    }
  }
  else {
    local_d4 = param_1[4];
    local_c8 = param_1[1];
    iVar9 = param_1[0xe];
    iVar12 = param_1[3];
    iVar4 = param_1[0xd];
    if (((byte)param_1[0x22] & 0xf) < 3) {
      iVar12 = (param_1[0x19] << 0xe) / iVar4;
      local_d4 = (param_1[0x1a] << 0xe) / iVar9;
    }
    if (param_1[0x19] == 1) {
      local_a8 = local_98;
    }
    local_48 = uVar1;
    if (param_1[0x1a] == 1) {
      local_48 = 0;
    }
    uVar7 = param_1[2];
    local_f4 = 1;
    if (0 < iVar9) {
      local_cc = (int)(iVar4 + -2 + (iVar4 + -2 >> 0x1f & 3U)) >> 2;
      do {
        if (local_f4 == iVar9) {
          uVar8 = param_1[0x1a] - 1;
        }
        else {
          uVar8 = uVar7 >> 0xe;
        }
        iVar18 = uVar8 * uVar1;
        local_58 = local_dc;
        local_54 = param_1[8];
        if (iVar9 <= local_f4) {
          local_48 = 0;
        }
        local_40 = uVar7 & 0x3fff;
        local_c4 = local_cc * 4 + 1;
        uVar8 = local_c8;
        local_e8 = local_cc;
        if (0 < local_cc) {
          do {
            uVar8 = uVar8 + iVar12;
            local_5c = (uVar8 >> 0xe) * iVar17;
            local_44 = uVar8 & 0x3fff;
            local_60 = (float *)((int)local_f0 + (local_5c >> 3) + iVar18);
            local_5c = local_5c & 7;
            (*local_a8)(local_bc);
            uVar8 = uVar8 + iVar12;
            uVar13 = (uVar8 >> 0xe) * iVar17;
            uStack_7c = uStack_84;
            uStack_78 = uStack_80;
            puStack_64 = (undefined1 *)((int)local_f0 + (uVar13 >> 3) + iVar18);
            local_60 = (float *)(uVar13 & 7);
            local_48 = uVar8 & 0x3fff;
            (*pcStack_ac)(local_c0);
            uVar8 = uVar8 + iVar12;
            uVar13 = (uVar8 >> 0xe) * iVar17;
            uStack_78 = uStack_88;
            uStack_74 = uStack_84;
            puStack_68 = (undefined1 *)((int)local_f0 + (uVar13 >> 3) + iVar18);
            puStack_64 = (undefined1 *)(uVar13 & 7);
            uStack_4c = uVar8 & 0x3fff;
            (*pcStack_b0)(&local_c4);
            uVar8 = uVar8 + iVar12;
            uStack_74 = uStack_8c;
            uVar13 = uVar8 + iVar12 * -4;
            uStack_70 = uStack_88;
            uStack_50 = uVar13 & 0x3fff;
            uVar13 = (uVar13 >> 0xe) * iVar17;
            puStack_6c = (undefined1 *)((int)local_f0 + (uVar13 >> 3) + iVar18);
            puStack_68 = (undefined1 *)(uVar13 & 7);
            (*pcStack_b4)(&local_c8);
            (*pcStack_ac)(&local_cc);
            local_e8 = local_e8 + -1;
          } while (local_e8 != 0);
        }
        if (local_c4 < iVar4) {
          local_e8 = (iVar4 - (local_c4 + 1)) + 1;
          do {
            local_5c = (uVar8 >> 0xe) * iVar17;
            local_60 = (float *)((int)local_f0 + (local_5c >> 3) + iVar18);
            local_5c = local_5c & 7;
            local_44 = uVar8 & 0x3fff;
            (*local_a8)(local_bc);
            (*pcStack_b0)(local_c0);
            uVar8 = uVar8 + iVar12;
            local_e8 = local_e8 + -1;
          } while (local_e8 != 0);
        }
        local_44 = 0;
        uVar8 = (param_1[0x19] + -1) * iVar17;
        local_5c = uVar8 & 7;
        local_60 = (float *)((int)local_f0 + (uVar8 >> 3) + iVar18);
        (*local_98)(local_bc);
        (*pcStack_b0)(local_c0);
        local_dc = (float *)((int)local_dc + iVar2);
        uVar7 = uVar7 + local_d4;
        bVar5 = local_f4 < iVar9;
        local_f4 = local_f4 + 1;
      } while (bVar5);
    }
  }
  return 0;
}


