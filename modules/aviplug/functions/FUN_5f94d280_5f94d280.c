/* Module: aviplug.dll
   Function: FUN_5f94d280
   Address: 5f94d280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94d280(int param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint local_118;
  int local_114;
  int local_10c [3];
  int *local_100;
  int local_fc;
  undefined4 *local_f8;
  byte abStack_f4 [8];
  int local_ec;
  int local_e8;
  int aiStack_e4 [7];
  int local_c8 [50];
  
  iVar9 = param_4[3];
  if ((1 < *param_4) && (param_4[9] <= iVar9)) {
    iVar9 = param_4[9];
  }
  iVar8 = *(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
  local_10c[2] = iVar8 - iVar9;
  if (local_10c[2] < 0) {
    local_10c[2] = 0;
  }
  else if ((0 < local_10c[2]) && ((param_2 & 0x20) == 0)) {
    return 0x8004e023;
  }
  if (iVar9 < iVar8) {
    iVar8 = iVar9;
  }
  iVar9 = param_4[1];
  local_fc = 2;
  if (*param_4 == 1) {
    if (iVar9 != 0) {
      return 0x80070057;
    }
    local_10c[0] = param_4[2];
    local_10c[1] = local_10c[0];
    if ((*(uint *)(param_1 + 0x48) & 0x800) != 0) {
      local_10c[1] = local_10c[0] + 2;
      local_fc = 4;
    }
  }
  else if (iVar9 == 0) {
    if (param_4[7] != 1) {
      return 0x80070057;
    }
    local_10c[0] = param_4[8];
    local_10c[1] = param_4[2];
  }
  else {
    if (iVar9 != 1) {
      return 0x80070057;
    }
    if (param_4[7] != 0) {
      return 0x80070057;
    }
    local_10c[0] = param_4[2];
    local_10c[1] = param_4[8];
  }
  uVar10 = *(uint *)(param_1 + 0x1c);
  local_ec = uVar10 * 12000;
  cVar2 = *(char *)(param_1 + 0x14);
  iVar9 = 0;
  puVar13 = (undefined4 *)(param_1 + 0x38);
  do {
    bVar6 = (byte)puVar13[-1];
    *(undefined4 *)(abStack_f4 + iVar9) = puVar13[-1];
    iVar4 = iVar9 + 4;
    uVar3 = *puVar13;
    abStack_f4[iVar9] = (bVar6 ^ (char)iVar8 - cVar2) & 0x3f ^ bVar6;
    *(undefined4 *)((int)aiStack_e4 + iVar9) = uVar3;
    iVar9 = iVar4;
    puVar13 = puVar13 + 2;
  } while (iVar4 < 8);
  if (uVar10 == 6) {
    local_f8 = &DAT_5f9d8268;
    local_100 = &DAT_5f9d83f4;
  }
  else {
    local_f8 = &DAT_5f9d81b4;
    local_100 = &DAT_5f9d8340;
  }
  local_118 = 0;
  local_114 = 0;
  do {
    FUN_5f94c740(param_3,uVar10,(uint *)(aiStack_e4 + 2));
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      piVar5 = local_c8;
      do {
        iVar4 = piVar5[iVar9 + -4];
        iVar11 = 9;
        do {
          iVar11 = iVar11 + -1;
          puVar13 = (undefined4 *)(iVar4 + 8);
          for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
        } while (iVar11 != 0);
        if ((iVar9 + local_118 & 1) == 0) {
          *(undefined4 *)(piVar5[-1] + 4) = *(undefined4 *)(abStack_f4 + local_114);
          iVar4 = *piVar5;
        }
        else {
          *(undefined4 *)(piVar5[-4] + 4) = *(undefined4 *)(abStack_f4 + local_114);
          iVar4 = piVar5[-3];
        }
        piVar5 = piVar5 + 9;
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)((int)aiStack_e4 + local_114);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x1c));
    }
    puVar12 = *(undefined1 **)((int)local_10c + local_114);
    iVar9 = aiStack_e4[2] * 9;
    if (iVar8 < aiStack_e4[2] * 9) {
      iVar9 = iVar8;
    }
    if (0 < iVar8) {
      iVar11 = 9;
      iVar4 = iVar8;
      local_118 = iVar9;
      do {
        uVar10 = iVar9;
        if (0 < iVar9) {
          iVar4 = iVar4 - iVar9;
          local_e8 = iVar4;
          piVar5 = local_100;
          do {
            piVar1 = (int *)((int)piVar5 + ((int)local_f8 - (int)local_100));
            iVar7 = *piVar5;
            piVar5 = piVar5 + 1;
            iVar7 = aiStack_e4[*piVar1 * 9 + iVar7 + 3];
            *(undefined1 *)(iVar11 + -1 + iVar7) = puVar12[1];
            *(undefined1 *)(iVar11 + iVar7) = *puVar12;
            puVar12 = puVar12 + local_fc;
            iVar9 = iVar9 + -1;
            uVar10 = local_118;
          } while (iVar9 != 0);
        }
        iVar11 = iVar11 + 2;
        iVar9 = uVar10;
        if (iVar4 < (int)uVar10) {
          iVar9 = iVar4;
          local_118 = iVar4;
        }
      } while (0 < iVar4);
    }
    param_3 = param_3 + local_ec;
    uVar10 = *(uint *)(param_1 + 0x1c);
    local_114 = local_114 + 4;
    local_118 = uVar10;
  } while (local_114 < 8);
  iVar9 = 0;
  if (0 < *param_4) {
    piVar5 = param_4 + 5;
    do {
      piVar5[-1] = iVar8;
      *piVar5 = local_10c[2];
      iVar9 = iVar9 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar9 < *param_4);
  }
  return 0;
}


