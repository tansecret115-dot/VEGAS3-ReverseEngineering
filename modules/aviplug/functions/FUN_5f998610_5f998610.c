/* Module: aviplug.dll
   Function: FUN_5f998610
   Address: 5f998610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f998610(uint param_1,double *param_2,int param_3,double *param_4,int param_5,int param_6,
                int param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  double *pdVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  double *local_13c;
  double *local_138;
  double local_130;
  int local_128;
  double local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [61];
  
  if (param_4 == param_2) {
    return 0;
  }
  dVar5 = (double)param_5 / (double)param_3;
  local_138 = param_4;
  pdVar1 = param_4 + param_1 * param_5;
  local_118 = 0.0;
  if ((dVar5 < _DAT_5f9d7c98) && (param_7 != 0)) {
    FUN_5f9d2c50(param_4,(int)param_4,param_5,param_1,param_6 + 0x130);
  }
  pdVar9 = param_2;
  if (*(int *)(param_6 + 0x1d6c) != 0) {
    *(undefined4 *)(param_6 + 0x1d78) = 0;
    *(undefined4 *)(param_6 + 0x1d7c) = 0;
    *(undefined4 *)(param_6 + 0x1d80) = 0;
    *(undefined4 *)(param_6 + 0x1d84) = 0;
    iVar12 = 0x60;
    do {
      iVar10 = 0;
      local_13c = local_138;
      if (0 < (int)param_1) {
        do {
          iVar4 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar10 * 4);
          iVar10 = iVar10 + 1;
          *(undefined4 *)(iVar4 + iVar12) = *(undefined4 *)local_13c;
          *(undefined4 *)(iVar4 + 4 + iVar12) = *(undefined4 *)((int)local_13c + 4);
          local_13c = local_13c + 1;
        } while (iVar10 < (int)param_1);
      }
      local_138 = local_138 + param_1;
      iVar12 = iVar12 + -8;
      *(int *)(param_6 + 0x1d84) = *(int *)(param_6 + 0x1d84) + 1;
    } while (-1 < iVar12);
    *(undefined4 *)(param_6 + 0x1d6c) = 0;
    param_4 = local_138;
  }
  for (; local_13c = param_4, pdVar9 < param_2 + param_1 * param_3; pdVar9 = pdVar9 + param_1) {
    bVar8 = false;
    local_130 = (local_118 - *(double *)(param_6 + 0x1d78)) - _DAT_5f9d7c98;
    if (-1 < (longlong)local_130) {
      do {
        local_13c = param_4;
        if ((param_4 == pdVar1) && (bVar8 = true, param_5 != 0)) goto joined_r0x5f9989cc;
        local_130 = local_130 - _DAT_5f9d7c98;
        dVar6 = *(double *)(param_6 + 0x1d78) + _DAT_5f9d7c98;
        *(undefined4 *)(param_6 + 0x1d80) =
             *(undefined4 *)(*(int *)(param_6 + 0x1d88) + -4 + *(int *)(param_6 + 0x1d80) * 4);
        *(double *)(param_6 + 0x1d78) = dVar6;
        if (param_4 < pdVar1) {
          iVar12 = 0;
          if (0 < (int)param_1) {
            do {
              iVar10 = *(int *)(param_6 + 0x1d80);
              iVar4 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar12 * 4);
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar4 + iVar10 * 8) = *(undefined4 *)local_13c;
              *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = *(undefined4 *)((int)local_13c + 4);
              param_4 = local_138;
              local_13c = local_13c + 1;
            } while (iVar12 < (int)param_1);
          }
          param_4 = param_4 + param_1;
          local_138 = param_4;
        }
        else {
          iVar12 = 0;
          if (0 < (int)param_1) {
            do {
              iVar10 = *(int *)(param_6 + 0x1d80);
              iVar4 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar12 * 4);
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar4 + iVar10 * 8) = 0;
              *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = 0;
            } while (iVar12 < (int)param_1);
          }
        }
      } while (-1 < (longlong)local_130);
      if (bVar8) {
        local_13c = param_4;
        if ((param_5 != 0) || (*(int *)(param_6 + 0x1d84) < 1)) break;
        *(int *)(param_6 + 0x1d84) = *(int *)(param_6 + 0x1d84) + -1;
      }
    }
    local_13c = *(double **)(param_6 + 0x1d80);
    local_108._0_4_ = 0;
    dVar6 = _DAT_5f9ec360 - (local_118 - *(double *)(param_6 + 0x1d78));
    local_108._4_4_ = 0;
    if (1 < (int)param_1) {
      local_100 = 0;
      local_fc = 0;
      if (2 < (int)param_1) {
        puVar16 = local_f8;
        for (uVar13 = param_1 * 2 - 3 & 0x3ffffffe; param_4 = local_138, uVar13 != 0;
            uVar13 = uVar13 - 1) {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        }
      }
    }
    local_130._0_4_ = 0x19;
    do {
      dVar7 = ABS(dVar6) * *(double *)(param_6 + 0x1d70);
      local_128 = SUB84(dVar7 + _DAT_5f9ec358,0);
      local_128 = local_128 + -0x80000000;
      if (0x3e6 < local_128) {
        local_128 = 0x3e6;
      }
      dVar2 = *(double *)(DAT_5f9f5c40 + local_128 * 8);
      dVar6 = dVar6 - _DAT_5f9d7c98;
      dVar3 = *(double *)(DAT_5f9f5c40 + 8 + local_128 * 8);
      if (0 < (int)param_1) {
        pdVar11 = (double *)&local_108;
        piVar14 = *(int **)(param_6 + 0x1d68);
        uVar13 = param_1;
        do {
          uVar13 = uVar13 - 1;
          *pdVar11 = ((dVar7 - (double)local_128) * (dVar3 - dVar2) + dVar2) *
                     *(double *)((int)local_13c * 8 + *piVar14) + *pdVar11;
          pdVar11 = pdVar11 + 1;
          piVar14 = piVar14 + 1;
          param_4 = local_138;
        } while (uVar13 != 0);
      }
      local_13c = *(double **)(*(int *)(param_6 + 0x1d88) + 4 + (int)local_13c * 4);
      local_130._0_4_ = local_130._0_4_ + -1;
    } while (local_130._0_4_ != 0);
    if (0 < (int)param_1) {
      puVar15 = &local_108;
      pdVar11 = pdVar9;
      for (iVar12 = (param_1 & 0x1fffffff) << 1; param_4 = local_138, iVar12 != 0;
          iVar12 = iVar12 + -1) {
        *(undefined4 *)pdVar11 = *(undefined4 *)puVar15;
        puVar15 = (undefined8 *)((int)puVar15 + 4);
        pdVar11 = (double *)((int)pdVar11 + 4);
      }
    }
    local_118 = local_118 + dVar5;
  }
joined_r0x5f9989cc:
  while (local_13c < pdVar1) {
    iVar12 = *(int *)(param_6 + 0x1d80) + -1;
    *(int *)(param_6 + 0x1d80) = iVar12;
    if (iVar12 < 0) {
      *(undefined4 *)(param_6 + 0x1d80) = 0x18;
    }
    pdVar11 = local_13c;
    if (local_13c < pdVar1) {
      iVar12 = 0;
      if (0 < (int)param_1) {
        do {
          iVar10 = *(int *)(param_6 + 0x1d80);
          iVar4 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar12 * 4);
          iVar12 = iVar12 + 1;
          *(undefined4 *)(iVar4 + iVar10 * 8) = *(undefined4 *)local_13c;
          *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = *(undefined4 *)((int)local_13c + 4);
          local_13c = local_13c + 1;
          pdVar11 = local_138;
        } while (iVar12 < (int)param_1);
      }
    }
    else {
      iVar12 = 0;
      if (0 < (int)param_1) {
        do {
          iVar10 = *(int *)(param_6 + 0x1d80);
          iVar4 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar12 * 4);
          iVar12 = iVar12 + 1;
          *(undefined4 *)(iVar4 + iVar10 * 8) = 0;
          *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = 0;
        } while (iVar12 < (int)param_1);
      }
    }
    local_13c = pdVar11 + param_1;
    *(double *)(param_6 + 0x1d78) = *(double *)(param_6 + 0x1d78) + _DAT_5f9d7c98;
    local_138 = local_13c;
  }
  iVar12 = (int)(param_2 + param_1 * param_3) - (int)pdVar9;
  iVar12 = param_3 - (int)(CONCAT44(iVar12 >> 0x1f,iVar12 >> 3) / (longlong)(int)param_1);
  *(double *)(param_6 + 0x1d78) = *(double *)(param_6 + 0x1d78) - (double)iVar12 * dVar5;
  if ((_DAT_5f9d7c98 < dVar5) && (param_7 != 0)) {
    FUN_5f9d2c50(param_2,(int)param_2,param_3,param_1,param_6 + 0x130);
  }
  return iVar12;
}


