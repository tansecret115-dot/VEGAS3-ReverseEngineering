/* Module: vegas30.exe
   Function: FUN_0047b600
   Address: 0047b600
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047b600(int param_1,int param_2,uint param_3,int param_4,double param_5,int param_6)

{
  float *pfVar1;
  float fVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  float10 fVar15;
  uint local_30;
  int local_2c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  iVar9 = *(int *)(param_1 + 0x4c);
  local_30 = **(uint **)(param_2 + 0x30);
  if (iVar9 == 0) {
    return 0;
  }
  uVar11 = *(uint *)(param_1 + 0x48);
  puVar3 = (uint *)(*(uint **)(param_2 + 0x30))[2];
  if (uVar11 == 0) {
    param_4 = 0;
    param_3 = 0;
  }
  if (((*(byte *)(*(int *)(param_1 + 0x54) + 0x28) & 0x14) != 0) && (param_6 == 0)) {
    param_4 = 0;
    param_3 = 0;
  }
  local_18 = 0x7fffffff;
  local_14 = 0;
  local_10 = 0x80000000;
  local_c = 0xffffffff;
  if (local_30 == 2) {
    if (uVar11 != 0) {
      uVar7 = puVar3[uVar11 * 4 + -4];
      uVar8 = puVar3[uVar11 * 4 + -3];
      if ((-2 < (int)uVar8) && ((uVar8 < 0x80000000 || (0x7fffffff < uVar7)))) {
        local_10 = uVar7;
        local_c = uVar8;
      }
      if (((int)uVar8 < 1) && (((int)uVar8 < 0 || (uVar7 < 0x80000000)))) {
        local_18 = uVar7;
        local_14 = uVar8;
      }
    }
    uVar7 = iVar9 + uVar11;
    if (uVar7 < 2) {
      uVar8 = puVar3[uVar7 * 4];
      uVar7 = puVar3[uVar7 * 4 + 1];
      if (((int)local_c <= (int)uVar7) && (((int)local_c < (int)uVar7 || (local_10 <= uVar8)))) {
        local_10 = uVar8;
        local_c = uVar7;
      }
      if (((int)uVar7 <= (int)local_14) && (((int)uVar7 < (int)local_14 || (uVar8 <= local_18)))) {
        local_18 = uVar8;
        local_14 = uVar7;
      }
    }
  }
  uVar8 = iVar9 + uVar11;
  uVar7 = param_3;
  if (uVar11 < uVar8) {
    fVar15 = (float10)param_5;
    puVar12 = puVar3 + uVar11 * 4;
    local_2c = uVar8 - uVar11;
    do {
      if (fVar15 != (float10)_DAT_00610fd8) {
        fVar2 = (float)puVar12[2];
        if (((float10)*(float *)(param_2 + 0x24) <= (float10)fVar2 + fVar15) &&
           (fVar6 = *(float *)(param_2 + 0x24) - fVar2, (float10)fVar6 <= fVar15)) {
          fVar15 = (float10)fVar6;
        }
        if (((float10)fVar2 + fVar15 < (float10)*(float *)(param_2 + 0x20)) &&
           (fVar2 = *(float *)(param_2 + 0x20) - fVar2, fVar15 <= (float10)fVar2)) {
          fVar15 = (float10)fVar2;
        }
      }
      if (uVar7 != 0 || param_4 != 0) {
        uVar4 = *puVar12;
        uVar5 = puVar12[1];
        uVar7 = *(uint *)(param_1 + 0x10);
        iVar9 = *(int *)(param_1 + 0x14);
        iVar10 = uVar5 + param_4 + (uint)CARRY4(uVar4,param_3);
        if ((iVar9 <= iVar10) && ((iVar9 < iVar10 || (uVar7 <= uVar4 + param_3)))) {
          uVar13 = (uVar7 - uVar4) - 1;
          iVar9 = ((iVar9 - uVar5) - (uint)(uVar7 < uVar4)) - (uint)(uVar7 - uVar4 == 0);
          if ((iVar9 <= param_4) && ((iVar9 < param_4 || (uVar13 <= param_3)))) {
            param_4 = iVar9;
            param_3 = uVar13;
          }
        }
        iVar9 = uVar5 + param_4 + (uint)CARRY4(uVar4,param_3);
        uVar7 = param_3;
        if ((iVar9 < 1) && ((iVar9 < 0 || (uVar4 + param_3 == 0)))) {
          uVar13 = 1 - uVar4;
          iVar9 = -(uint)(1 < uVar4) - uVar5;
          if ((param_4 <= iVar9) && ((param_4 < iVar9 || (param_3 <= uVar13)))) {
            param_4 = iVar9;
            uVar7 = uVar13;
            param_3 = uVar13;
          }
        }
      }
      puVar12 = puVar12 + 4;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  else {
    fVar15 = (float10)param_5;
  }
  if (((int)local_c < (int)local_14) || (((int)local_c <= (int)local_14 && (local_10 <= local_18))))
  {
LAB_0047b938:
    if ((uVar7 != 0) || (param_4 != 0)) goto LAB_0047b95d;
  }
  else if (uVar7 != 0 || param_4 != 0) {
    if ((param_4 < 0) || ((param_4 < 1 && (uVar7 == 0)))) {
      uVar8 = puVar3[uVar11 * 4];
      iVar9 = puVar3[uVar11 * 4 + 1] + param_4 + (uint)CARRY4(uVar8,uVar7);
      if ((iVar9 <= (int)local_14) && ((iVar9 < (int)local_14 || (uVar8 + uVar7 <= local_18)))) {
        iVar9 = (local_14 - puVar3[uVar11 * 4 + 1]) - (uint)(local_18 < uVar8);
        if ((param_4 <= iVar9) && ((param_4 < iVar9 || (uVar7 <= local_18 - uVar8)))) {
          param_4 = iVar9;
          uVar7 = local_18 - uVar8;
        }
      }
    }
    else {
      uVar11 = puVar3[uVar8 * 4 + -4];
      iVar9 = puVar3[uVar8 * 4 + -3] + param_4 + (uint)CARRY4(uVar11,uVar7);
      if (((int)local_c <= iVar9) && (((int)local_c < iVar9 || (local_10 <= uVar11 + uVar7)))) {
        iVar9 = (local_c - puVar3[uVar8 * 4 + -3]) - (uint)(local_10 < uVar11);
        if ((iVar9 <= param_4) && ((iVar9 < param_4 || (local_10 - uVar11 <= uVar7)))) {
          param_4 = iVar9;
          uVar7 = local_10 - uVar11;
        }
      }
    }
    goto LAB_0047b938;
  }
  if ((float10)_DAT_00610fd8 == fVar15) {
    return 0;
  }
LAB_0047b95d:
  uVar11 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      puVar12 = puVar3 + (uVar11 + *(int *)(param_1 + 0x48)) * 4;
      uVar8 = *puVar12;
      *puVar12 = uVar8 + uVar7;
      puVar12[1] = puVar12[1] + param_4 + (uint)CARRY4(uVar8,uVar7);
      iVar9 = uVar11 + *(int *)(param_1 + 0x48);
      puVar3[iVar9 * 4 + 2] = (uint)(float)(fVar15 + (float10)(float)puVar3[iVar9 * 4 + 2]);
      iVar9 = uVar11 + *(int *)(param_1 + 0x48);
      pfVar1 = (float *)(puVar3 + iVar9 * 4 + 2);
      if (*(float *)(param_2 + 0x20) <= (float)puVar3[iVar9 * 4 + 2]) {
        if (*pfVar1 <= *(float *)(param_2 + 0x24)) {
          fVar2 = *pfVar1;
        }
        else {
          fVar2 = *(float *)(param_2 + 0x24);
        }
      }
      else {
        fVar2 = *(float *)(param_2 + 0x20);
      }
      *pfVar1 = fVar2;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x4c));
  }
  if ((param_4 < 1) && (param_4 < 0)) {
    uVar11 = 1;
    puVar12 = puVar3;
    while( true ) {
      puVar14 = puVar12 + 4;
      uVar7 = *(uint *)(param_1 + 0x48);
      uVar8 = local_30;
      if (uVar7 < local_30) {
        uVar8 = uVar7;
      }
      if (uVar8 <= uVar11) break;
      uVar8 = (puVar3 + uVar7 * 4)[1];
      if (((int)uVar8 <= (int)puVar12[5]) &&
         ((((int)uVar8 < (int)puVar12[5] || (puVar3[uVar7 * 4] <= *puVar14)) &&
          (iVar9 = FUN_004797c0(param_1,param_2,uVar11), iVar9 != 0)))) {
        uVar11 = uVar11 - 1;
        local_30 = local_30 - 1;
        puVar14 = puVar12;
      }
      uVar11 = uVar11 + 1;
      puVar12 = puVar14;
    }
  }
  else {
    uVar11 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48);
    if (uVar11 < local_30) {
      puVar12 = puVar3 + uVar11 * 4;
      do {
        iVar9 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48);
        if ((((int)puVar12[1] <= (int)puVar3[iVar9 * 4 + -3]) &&
            (((int)puVar12[1] < (int)puVar3[iVar9 * 4 + -3] || (*puVar12 <= puVar3[iVar9 * 4 + -4]))
            )) && (iVar9 = FUN_004797c0(param_1,param_2,uVar11), iVar9 != 0)) {
          uVar11 = uVar11 - 1;
          puVar12 = puVar12 + -4;
          local_30 = local_30 - 1;
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 4;
      } while (uVar11 < local_30);
    }
  }
  return 1;
}


