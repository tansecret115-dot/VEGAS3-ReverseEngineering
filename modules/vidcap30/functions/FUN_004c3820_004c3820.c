/* Module: vidcap30.exe
   Function: FUN_004c3820
   Address: 004c3820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c3820(uint param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5,
                int param_6,int param_7)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined4 *puVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined4 *local_13c;
  undefined4 *local_138;
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
  puVar1 = param_4 + param_1 * param_5 * 2;
  local_118 = 0.0;
  if ((dVar5 < _DAT_00587ad0) && (param_7 != 0)) {
    FUN_0053b7c0(param_4,param_4,param_5,param_1,param_6 + 0x130);
  }
  puVar9 = param_2;
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
          *(undefined4 *)(iVar4 + iVar12) = *local_13c;
          *(undefined4 *)(iVar4 + 4 + iVar12) = local_13c[1];
          local_13c = local_13c + 2;
        } while (iVar10 < (int)param_1);
      }
      local_138 = local_138 + param_1 * 2;
      iVar12 = iVar12 + -8;
      *(int *)(param_6 + 0x1d84) = *(int *)(param_6 + 0x1d84) + 1;
    } while (-1 < iVar12);
    *(undefined4 *)(param_6 + 0x1d6c) = 0;
    param_4 = local_138;
  }
  for (; local_13c = param_4, puVar9 < param_2 + param_1 * param_3 * 2;
      puVar9 = puVar9 + param_1 * 2) {
    bVar8 = false;
    local_130 = (local_118 - *(double *)(param_6 + 0x1d78)) - _DAT_00587ad0;
    if (-1 < (longlong)local_130) {
      do {
        local_13c = param_4;
        if ((param_4 == puVar1) && (bVar8 = true, param_5 != 0)) goto joined_r0x004c3bdc;
        local_130 = local_130 - _DAT_00587ad0;
        dVar6 = *(double *)(param_6 + 0x1d78) + _DAT_00587ad0;
        *(undefined4 *)(param_6 + 0x1d80) =
             *(undefined4 *)(*(int *)(param_6 + 0x1d88) + -4 + *(int *)(param_6 + 0x1d80) * 4);
        *(double *)(param_6 + 0x1d78) = dVar6;
        if (param_4 < puVar1) {
          iVar12 = 0;
          if (0 < (int)param_1) {
            do {
              iVar10 = *(int *)(param_6 + 0x1d80);
              iVar4 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar12 * 4);
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar4 + iVar10 * 8) = *local_13c;
              *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = local_13c[1];
              param_4 = local_138;
              local_13c = local_13c + 2;
            } while (iVar12 < (int)param_1);
          }
          param_4 = param_4 + param_1 * 2;
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
    local_13c = *(undefined4 **)(param_6 + 0x1d80);
    local_108._0_4_ = 0;
    dVar6 = _DAT_0059a1c8 - (local_118 - *(double *)(param_6 + 0x1d78));
    local_108._4_4_ = 0;
    if (1 < (int)param_1) {
      local_100 = 0;
      local_fc = 0;
      if (2 < (int)param_1) {
        puVar15 = local_f8;
        for (uVar13 = param_1 * 2 - 3 & 0x3ffffffe; param_4 = local_138, uVar13 != 0;
            uVar13 = uVar13 - 1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
    }
    local_130._0_4_ = 0x19;
    do {
      dVar7 = ABS(dVar6) * *(double *)(param_6 + 0x1d70);
      local_128 = SUB84(dVar7 + _DAT_0058a850,0);
      local_128 = local_128 + -0x80000000;
      if (0x3e6 < local_128) {
        local_128 = 0x3e6;
      }
      dVar2 = *(double *)(DAT_005c22ec + local_128 * 8);
      dVar6 = dVar6 - _DAT_00587ad0;
      dVar3 = *(double *)(DAT_005c22ec + 8 + local_128 * 8);
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
      local_13c = *(undefined4 **)(*(int *)(param_6 + 0x1d88) + 4 + (int)local_13c * 4);
      local_130._0_4_ = local_130._0_4_ + -1;
    } while (local_130._0_4_ != 0);
    if (0 < (int)param_1) {
      puVar16 = &local_108;
      puVar15 = puVar9;
      for (iVar12 = (param_1 & 0x1fffffff) << 1; param_4 = local_138, iVar12 != 0;
          iVar12 = iVar12 + -1) {
        *puVar15 = *(undefined4 *)puVar16;
        puVar16 = (undefined8 *)((int)puVar16 + 4);
        puVar15 = puVar15 + 1;
      }
    }
    local_118 = local_118 + dVar5;
  }
joined_r0x004c3bdc:
  while (local_13c < puVar1) {
    iVar12 = *(int *)(param_6 + 0x1d80) + -1;
    *(int *)(param_6 + 0x1d80) = iVar12;
    if (iVar12 < 0) {
      *(undefined4 *)(param_6 + 0x1d80) = 0x18;
    }
    puVar15 = local_13c;
    if (local_13c < puVar1) {
      iVar12 = 0;
      if (0 < (int)param_1) {
        do {
          iVar10 = *(int *)(param_6 + 0x1d80);
          iVar4 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar12 * 4);
          iVar12 = iVar12 + 1;
          *(undefined4 *)(iVar4 + iVar10 * 8) = *local_13c;
          *(undefined4 *)(iVar4 + 4 + iVar10 * 8) = local_13c[1];
          local_13c = local_13c + 2;
          puVar15 = local_138;
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
    *(double *)(param_6 + 0x1d78) = *(double *)(param_6 + 0x1d78) + _DAT_00587ad0;
    local_13c = puVar15 + param_1 * 2;
    local_138 = local_13c;
  }
  iVar12 = (int)(param_2 + param_1 * param_3 * 2) - (int)puVar9;
  iVar12 = param_3 - (int)(CONCAT44(iVar12 >> 0x1f,iVar12 >> 3) / (longlong)(int)param_1);
  *(double *)(param_6 + 0x1d78) = *(double *)(param_6 + 0x1d78) - (double)iVar12 * dVar5;
  if ((_DAT_00587ad0 < dVar5) && (param_7 != 0)) {
    FUN_0053b7c0(param_2,param_2,param_3,param_1,param_6 + 0x130);
  }
  return iVar12;
}


