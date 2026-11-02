/* Module: sfpaplug.dll
   Function: FUN_00403c10
   Address: 00403c10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_00403c10(int param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar10 = 0;
  iVar7 = 0;
  iVar5 = 0;
  iVar11 = 0;
  iVar8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      uVar2 = param_3[iVar10];
      iVar5 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
      iVar8 = iVar8 + iVar5;
      if (local_c < iVar5) {
        local_c = iVar5;
      }
      uVar6 = uVar2 - *(int *)(param_1 + 0xa0 + param_2 * 4);
      *(uint *)(*(int *)(param_1 + 0x60) + iVar10 * 4) = uVar6;
      iVar11 = iVar11 + ((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f));
      uVar12 = uVar6 - *(int *)(param_1 + 0xa8 + param_2 * 4);
      *(uint *)(*(int *)(param_1 + 100) + iVar10 * 4) = uVar12;
      iVar5 = local_18 + ((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f));
      uVar9 = uVar12 - *(int *)(param_1 + 0xb0 + param_2 * 4);
      *(uint *)(*(int *)(param_1 + 0x68) + iVar10 * 4) = uVar9;
      iVar7 = local_14 + ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f));
      uVar3 = uVar9 - *(int *)(param_1 + 0xb8 + param_2 * 4);
      *(uint *)(*(int *)(param_1 + 0x6c) + iVar10 * 4) = uVar3;
      local_10 = local_10 + ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f));
      *(uint *)(param_1 + 0xa0 + param_2 * 4) = uVar2;
      *(uint *)(param_1 + 0xa8 + param_2 * 4) = uVar6;
      *(uint *)(param_1 + 0xb0 + param_2 * 4) = uVar12;
      *(uint *)(param_1 + 0xb8 + param_2 * 4) = uVar9;
      iVar10 = iVar10 + 1;
      local_18 = iVar5;
      local_14 = iVar7;
    } while (iVar10 < *(int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 8) = local_c;
  iVar10 = iVar8;
  if (iVar8 <= iVar11) {
    iVar10 = iVar11;
  }
  if (iVar10 <= iVar5) {
    iVar10 = iVar5;
  }
  if (iVar10 <= iVar7) {
    iVar10 = iVar7;
  }
  if (iVar10 <= local_10) {
    iVar10 = local_10;
  }
  if (iVar10 < 0) {
    iVar8 = 0x7ffffffe;
    iVar7 = 0x7fffffff;
    local_10 = 0x7fffffff;
    iVar5 = 0x7fffffff;
    iVar10 = 0x7fffffff;
  }
  else {
    if (iVar8 < 0) {
      iVar8 = iVar10;
    }
    if (iVar11 < 0) {
      iVar11 = iVar10;
    }
    if (iVar5 < 0) {
      iVar5 = iVar10;
    }
    if (iVar7 < 0) {
      iVar7 = iVar10;
    }
    if (local_10 < 0) {
      local_10 = iVar10;
    }
    iVar10 = iVar11;
    if (iVar11 < iVar5) goto LAB_00403da5;
  }
  iVar11 = iVar5;
  iVar5 = iVar11;
LAB_00403da5:
  iVar4 = iVar7;
  if ((iVar11 < iVar7) && (iVar4 = iVar5, iVar10 < iVar5)) {
    iVar4 = iVar10;
  }
  if (iVar8 < iVar4) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    *(int *)(param_1 + 0x10) = iVar8;
    puVar13 = param_3;
  }
  else {
    iVar8 = iVar5;
    if (iVar7 <= iVar5) {
      iVar8 = iVar7;
    }
    if (iVar10 < iVar8) {
      *(int *)(param_1 + 0x10) = iVar10;
      puVar13 = *(uint **)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x78) = 1;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    }
    else {
      iVar8 = iVar7;
      if (local_10 <= iVar7) {
        iVar8 = local_10;
      }
      if (iVar5 < iVar8) {
        puVar13 = *(uint **)(param_1 + 100);
        *(undefined4 *)(param_1 + 0x78) = 2;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
        *(int *)(param_1 + 0x10) = iVar5;
      }
      else if (iVar7 < local_10) {
        puVar13 = *(uint **)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x78) = 3;
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        *(int *)(param_1 + 0x10) = iVar7;
      }
      else {
        puVar13 = *(uint **)(param_1 + 0x6c);
        *(undefined4 *)(param_1 + 0x78) = 4;
        *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
        *(int *)(param_1 + 0x10) = local_10;
      }
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00403870((int *)puVar13,*(int **)(param_1 + 0x14),(double *)(param_1 + 0x100),4);
    param_3 = *(uint **)(param_1 + 0x60);
    if (puVar13 == param_3) {
      param_3 = *(uint **)(param_1 + 100);
    }
    pbVar1 = (byte *)(param_2 * 5 + 0xec + param_1);
    iVar5 = FUN_00403aa0((int)puVar13,*(int *)(param_1 + 0x14),(double *)(param_1 + 0x100),4,param_3
                         ,pbVar1);
    iVar7 = ftol();
    if (iVar5 < iVar7) {
      *(int *)(param_1 + 0x10) = iVar5;
      return param_3;
    }
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
  }
  return puVar13;
}


