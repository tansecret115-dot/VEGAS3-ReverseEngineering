/* Module: vidpcore.dll
   Function: FUN_5de86ee0
   Address: 5de86ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de86ee0(int *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  int iVar9;
  float10 fVar10;
  int local_2c;
  double local_28;
  double local_20;
  
  dVar4 = _DAT_5df18838;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = param_1[1];
  param_1[4] = 0;
  local_28 = 0.0;
  dVar7 = _DAT_5df18830 / (double)iVar2;
  local_20 = 0.0;
  param_1[5] = 0;
  if (param_1[0xe] == 0) {
    local_2c = 0;
    if (0 < iVar2) {
      pdVar8 = (double *)*param_1;
      do {
        local_28 = local_28 + *pdVar8;
        dVar3 = (double)local_2c;
        local_2c = local_2c + 1;
        pdVar8 = pdVar8 + 1;
        local_20 = dVar3 * dVar7 + local_20;
      } while (local_2c < iVar2);
    }
    dVar3 = (double)(iVar2 + 1);
  }
  else {
    local_2c = 0;
    dVar3 = _DAT_5df18838;
    if (0 < iVar2) {
      pdVar8 = (double *)*param_1;
      do {
        dVar1 = *(double *)((param_1[0xf] - *param_1) + (int)pdVar8);
        iVar9 = local_2c + 1;
        dVar1 = _DAT_5df18830 / (dVar1 * dVar1);
        dVar3 = dVar1 + dVar3;
        local_28 = dVar1 * *pdVar8 + local_28;
        local_20 = (double)local_2c * dVar7 * dVar1 + local_20;
        pdVar8 = pdVar8 + 1;
        local_2c = iVar9;
      } while (iVar9 < iVar2);
    }
  }
  if (param_1[0xe] == 0) {
    local_2c = 0;
    if (0 < iVar2) {
      pdVar8 = (double *)*param_1;
      do {
        dVar1 = *pdVar8 - local_28 / dVar3;
        iVar9 = local_2c + 1;
        pdVar8 = pdVar8 + 1;
        dVar4 = dVar1 * dVar1 + dVar4;
        *(double *)(param_1 + 4) = (double)local_2c * dVar7 * dVar1 + *(double *)(param_1 + 4);
        local_2c = iVar9;
      } while (iVar9 < iVar2);
    }
  }
  else {
    local_2c = 0;
    if (0 < iVar2) {
      pdVar8 = (double *)param_1[0xf];
      do {
        iVar9 = local_2c + 1;
        dVar1 = (*(double *)((*param_1 - param_1[0xf]) + (int)pdVar8) - local_28 / dVar3) / *pdVar8;
        dVar4 = dVar1 * dVar1 + dVar4;
        *(double *)(param_1 + 4) =
             ((double)local_2c * dVar7 * dVar1) / *pdVar8 + *(double *)(param_1 + 4);
        pdVar8 = pdVar8 + 1;
        local_2c = iVar9;
      } while (iVar9 < iVar2);
    }
  }
  dVar1 = *(double *)(param_1 + 4) / dVar4;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0x3ff00000;
  *(double *)(param_1 + 4) = dVar1;
  dVar6 = (local_20 - dVar1 * local_28) / dVar3;
  *(double *)(param_1 + 2) = dVar6;
  dVar3 = SQRT(((local_28 * local_28) / (dVar3 * dVar4)) / dVar3 + _DAT_5df18830);
  *(double *)(param_1 + 6) = dVar3;
  dVar4 = _DAT_5df18830 / dVar4;
  *(double *)(param_1 + 8) = SQRT(dVar4);
  if (param_1[0xe] == 0) {
    local_2c = 0;
    if (0 < iVar2) {
      pdVar8 = (double *)*param_1;
      do {
        dVar5 = (double)local_2c;
        local_2c = local_2c + 1;
        dVar5 = (dVar5 * dVar7 - dVar6) - dVar1 * *pdVar8;
        *(double *)(param_1 + 10) = dVar5 * dVar5 + *(double *)(param_1 + 10);
        pdVar8 = pdVar8 + 1;
      } while (local_2c < iVar2);
    }
    dVar7 = SQRT(*(double *)(param_1 + 10) / (double)(iVar2 + -2));
    *(double *)(param_1 + 6) = dVar3 * dVar7;
    *(double *)(param_1 + 8) = SQRT(dVar4) * dVar7;
  }
  else {
    local_2c = 0;
    if (0 < iVar2) {
      pdVar8 = (double *)param_1[0xf];
      do {
        dVar4 = (double)local_2c;
        local_2c = local_2c + 1;
        dVar4 = ((dVar4 * dVar7 - dVar6) -
                dVar1 * *(double *)((int)pdVar8 + (*param_1 - param_1[0xf]))) / *pdVar8;
        *(double *)(param_1 + 10) = dVar4 * dVar4 + *(double *)(param_1 + 10);
        pdVar8 = pdVar8 + 1;
      } while (local_2c < iVar2);
    }
    if (2 < iVar2) {
      fVar10 = (float10)FUN_5de86e90((double)(iVar2 + -2) * _DAT_5df1eec0,
                                     *(double *)(param_1 + 10) * _DAT_5df1eec0);
      *(double *)(param_1 + 0xc) = (double)fVar10;
      return 1;
    }
  }
  return 1;
}


