/* Module: aviplug.dll
   Function: FUN_5f94d570
   Address: 5f94d570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94d570(int param_1,uint param_2,uint param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar7;
  int *piVar6;
  byte bVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined2 uVar18;
  undefined4 *puVar19;
  uint local_148;
  int local_144;
  int local_13c;
  uint local_138;
  int local_134;
  int local_130 [5];
  int local_11c;
  undefined4 *local_118;
  int local_114 [4];
  short *local_104;
  int local_100;
  short *local_fc;
  int *local_f8;
  byte abStack_f4 [8];
  int local_ec;
  int local_e8;
  int aiStack_e4 [7];
  int local_c8 [50];
  
  local_114[0] = 1;
  local_114[1] = 1;
  local_114[2] = 1;
  local_114[3] = 1;
  iVar13 = *param_4;
  local_144 = *(int *)(param_1 + 0x18);
  local_130[0] = 0;
  local_130[1] = 0;
  local_130[2] = 0;
  local_130[3] = 0;
  local_13c = 0;
  if (0 < iVar13) {
    piVar6 = param_4 + 2;
    do {
      iVar12 = piVar6[-1];
      if ((iVar12 < 0) || (*(int *)(param_1 + 0x44) <= iVar12)) {
        return 0x80070057;
      }
      if (piVar6[1] <= local_144) {
        local_144 = piVar6[1];
      }
      uVar16 = *(uint *)(param_1 + 0x48 + iVar12 * 4);
      uVar4 = ~uVar16 >> 9 & 2;
      if ((uVar16 & 0x100) == 0) {
        local_130[uVar4 + 1] = *piVar6;
      }
      else {
        iVar12 = *piVar6;
        local_130[uVar4] = iVar12;
        if ((uVar16 & 0x200) != 0) {
          local_114[uVar4] = 2;
          local_130[uVar4 + 1] = iVar12 + 2;
          local_114[uVar4 + 1] = 2;
        }
      }
      piVar6 = piVar6 + 6;
      local_13c = local_13c + 1;
    } while (local_13c < iVar13);
  }
  iVar13 = *(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
  local_11c = iVar13 - local_144;
  if (local_11c < 0) {
    local_11c = 0;
  }
  else if ((0 < local_11c) && ((param_2 & 0x20) == 0)) {
    return 0x8004e023;
  }
  if (local_144 <= iVar13) {
    iVar13 = local_144;
  }
  cVar1 = *(char *)(param_1 + 0x14);
  iVar12 = 0;
  puVar19 = (undefined4 *)(param_1 + 0x38);
  do {
    bVar8 = (byte)puVar19[-1];
    *(undefined4 *)(abStack_f4 + iVar12) = puVar19[-1];
    iVar5 = iVar12 + 4;
    uVar3 = *puVar19;
    abStack_f4[iVar12] = (bVar8 ^ (char)iVar13 - cVar1) & 0x3f ^ bVar8;
    *(undefined4 *)((int)aiStack_e4 + iVar12) = uVar3;
    iVar12 = iVar5;
    puVar19 = puVar19 + 2;
  } while (iVar5 < 8);
  if (local_130[1] == 0) {
    local_130[1] = local_130[0];
  }
  if (local_130[2] == 0) {
    local_130[2] = local_130[0];
    local_114[2] = local_114[0];
    local_114[3] = local_114[1];
    local_130[3] = local_130[1];
  }
  else if (local_130[3] == 0) {
    local_130[3] = local_130[2];
  }
  uVar16 = *(uint *)(param_1 + 0x1c);
  local_ec = uVar16 * 12000;
  if (uVar16 == 6) {
    local_118 = &DAT_5f9d8268;
    local_f8 = &DAT_5f9d83f4;
    local_138 = 0;
    local_100 = 0;
    local_144 = 0;
  }
  else {
    local_118 = &DAT_5f9d81b4;
    local_f8 = &DAT_5f9d8340;
    local_138 = 0;
    local_100 = 0;
    local_144 = 0;
  }
  do {
    iVar12 = local_100;
    FUN_5f94c740(param_3,uVar16,(uint *)(aiStack_e4 + 2));
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      piVar6 = local_c8;
      do {
        iVar15 = piVar6[iVar5 + -4];
        iVar17 = 9;
        do {
          iVar17 = iVar17 + -1;
          puVar19 = (undefined4 *)(iVar15 + 8);
          for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar19 = 0;
            puVar19 = puVar19 + 1;
          }
        } while (iVar17 != 0);
        if ((iVar5 + local_138 & 1) == 0) {
          *(undefined4 *)(piVar6[-1] + 4) = *(undefined4 *)(abStack_f4 + local_144);
          iVar15 = *piVar6;
        }
        else {
          *(undefined4 *)(piVar6[-4] + 4) = *(undefined4 *)(abStack_f4 + local_144);
          iVar15 = piVar6[-3];
        }
        piVar6 = piVar6 + 9;
        *(undefined4 *)(iVar15 + 4) = *(undefined4 *)((int)aiStack_e4 + local_144);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x1c));
    }
    psVar10 = *(short **)((int)local_130 + iVar12);
    local_130[4] = iVar13;
    psVar14 = *(short **)((int)local_130 + iVar12 + 4);
    local_104 = psVar10;
    local_fc = psVar14;
    local_134 = aiStack_e4[2] * 9;
    if (iVar13 < aiStack_e4[2] * 9) {
      local_134 = iVar13;
    }
    if (0 < iVar13) {
      local_138 = 9;
      local_13c = local_134;
      do {
        iVar5 = local_134;
        if (0 < local_134) {
          local_e8 = (int)local_118 - (int)local_f8;
          local_130[4] = local_130[4] - local_134;
          piVar6 = local_f8;
          do {
            iVar5 = *(int *)(((int)local_118 - (int)local_f8) + (int)piVar6) * 9 + *piVar6;
            uVar18 = (undefined2)((uint)*piVar6 >> 0x10);
            iVar15 = 0;
            iVar12 = aiStack_e4[iVar5 + 3];
            uVar7 = (undefined2)((uint)iVar5 >> 0x10);
            uVar16 = CONCAT22(uVar7,*psVar10 >> 0x1f);
            local_148 = CONCAT22(uVar7,*psVar10) ^ uVar16;
            if ((local_148 & 0x7e00) != 0) {
              do {
                uVar2 = (short)local_148 >> 1;
                local_148 = CONCAT22(local_148._2_2_,uVar2);
                iVar15 = iVar15 + 1;
              } while ((uVar2 & 0x7e00) != 0);
            }
            uVar16 = iVar15 * 0x100 + local_148 ^ uVar16;
            uVar4 = 0xfffff801;
            if ((short)uVar16 != -0x800) {
              uVar4 = uVar16;
            }
            iVar5 = 0;
            uVar16 = CONCAT22(uVar18,*psVar14 >> 0x1f);
            local_148 = uVar16 ^ CONCAT22(uVar18,*psVar14);
            if ((local_148 & 0x7e00) != 0) {
              do {
                uVar2 = (short)local_148 >> 1;
                local_148 = CONCAT22(local_148._2_2_,uVar2);
                iVar5 = iVar5 + 1;
              } while ((uVar2 & 0x7e00) != 0);
            }
            uVar16 = iVar5 * 0x100 + local_148 ^ uVar16;
            uVar11 = 0xfffff801;
            if ((short)uVar16 != -0x800) {
              uVar11 = uVar16;
            }
            piVar6 = piVar6 + 1;
            *(char *)(iVar12 + -1 + local_138) = (char)((int)uVar4 >> 4);
            *(char *)(iVar12 + local_138) = (char)((int)uVar11 >> 4);
            *(byte *)(iVar12 + 1 + local_138) = (byte)uVar11 & 0xf | (char)uVar4 << 4;
            psVar10 = local_104 + *(int *)((int)local_114 + local_100);
            local_104 = psVar10;
            psVar14 = local_fc + *(int *)((int)local_114 + local_100 + 4);
            local_134 = local_134 + -1;
            local_fc = psVar14;
            iVar5 = local_13c;
            iVar12 = local_100;
          } while (local_134 != 0);
        }
        local_138 = local_138 + 3;
        local_134 = iVar5;
        if (local_130[4] < iVar5) {
          local_13c = local_130[4];
          local_134 = local_130[4];
        }
      } while (0 < local_130[4]);
    }
    param_3 = param_3 + local_ec;
    local_100 = iVar12 + 8;
    uVar16 = *(uint *)(param_1 + 0x1c);
    local_144 = local_144 + 4;
    local_138 = uVar16;
  } while (local_144 < 8);
  iVar12 = 0;
  if (0 < *param_4) {
    piVar6 = param_4 + 5;
    do {
      iVar12 = iVar12 + 1;
      piVar6[-1] = iVar13;
      *piVar6 = local_11c;
      piVar6 = piVar6 + 6;
    } while (iVar12 < *param_4);
  }
  return 0;
}


