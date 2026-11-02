/* Module: vegas30k.dll
   Function: FUN_01034930
   Address: 01034930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01034930(int param_1,float *param_2,int param_3,float *param_4,int param_5,int param_6,
                int param_7)

{
  int iVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  float *pfVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float *local_140;
  int local_13c;
  double local_130;
  int local_120;
  double local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [61];
  
  if (param_4 == param_2) {
    return 0;
  }
  dVar6 = (double)param_5 / (double)param_3;
  pfVar2 = param_4 + param_1 * param_5;
  local_118 = 0.0;
  if ((dVar6 < _DAT_011dad58) && (param_7 != 0)) {
    FUN_010f9070(param_4,param_4,param_5,param_1,param_6 + 0x130);
  }
  local_140 = param_4;
  pfVar9 = param_2;
  if (*(int *)(param_6 + 0x1d6c) != 0) {
    *(undefined4 *)(param_6 + 0x1d78) = 0;
    *(undefined4 *)(param_6 + 0x1d7c) = 0;
    *(undefined4 *)(param_6 + 0x1d80) = 0;
    *(undefined4 *)(param_6 + 0x1d84) = 0;
    iVar12 = 0x60;
    do {
      iVar10 = 0;
      if (0 < param_1) {
        do {
          pfVar15 = param_4 + iVar10;
          iVar1 = iVar10 * 4;
          iVar10 = iVar10 + 1;
          *(double *)(*(int *)(*(int *)(param_6 + 0x1d68) + iVar1) + iVar12) = (double)*pfVar15;
        } while (iVar10 < param_1);
      }
      param_4 = param_4 + param_1;
      iVar12 = iVar12 + -8;
      *(int *)(param_6 + 0x1d84) = *(int *)(param_6 + 0x1d84) + 1;
    } while (-1 < iVar12);
    *(undefined4 *)(param_6 + 0x1d6c) = 0;
    local_140 = param_4;
  }
  for (; pfVar9 < param_2 + param_1 * param_3; pfVar9 = pfVar9 + param_1) {
    bVar8 = false;
    local_130 = (local_118 - *(double *)(param_6 + 0x1d78)) - _DAT_011dad58;
    if (-1 < (longlong)local_130) {
      do {
        if ((param_4 == pfVar2) && (bVar8 = true, param_5 != 0)) goto joined_r0x01034c9e;
        local_130 = local_130 - _DAT_011dad58;
        dVar5 = *(double *)(param_6 + 0x1d78) + _DAT_011dad58;
        *(undefined4 *)(param_6 + 0x1d80) =
             *(undefined4 *)(*(int *)(param_6 + 0x1d88) + -4 + *(int *)(param_6 + 0x1d80) * 4);
        *(double *)(param_6 + 0x1d78) = dVar5;
        if (param_4 < pfVar2) {
          iVar12 = 0;
          if (0 < param_1) {
            do {
              pfVar15 = param_4 + iVar12;
              iVar10 = iVar12 * 4;
              iVar12 = iVar12 + 1;
              *(double *)
               (*(int *)(*(int *)(param_6 + 0x1d68) + iVar10) + *(int *)(param_6 + 0x1d80) * 8) =
                   (double)*pfVar15;
            } while (iVar12 < param_1);
          }
          param_4 = param_4 + param_1;
          local_140 = param_4;
        }
        else {
          iVar12 = 0;
          if (0 < param_1) {
            do {
              iVar10 = *(int *)(param_6 + 0x1d80);
              iVar1 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar12 * 4);
              iVar12 = iVar12 + 1;
              *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
              *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
            } while (iVar12 < param_1);
          }
        }
      } while (-1 < (longlong)local_130);
      if (bVar8) {
        if ((param_5 != 0) || (*(int *)(param_6 + 0x1d84) < 1)) break;
        *(int *)(param_6 + 0x1d84) = *(int *)(param_6 + 0x1d84) + -1;
      }
    }
    local_13c = *(int *)(param_6 + 0x1d80);
    local_108._0_4_ = 0;
    dVar5 = _DAT_011dbdd8 - (local_118 - *(double *)(param_6 + 0x1d78));
    local_108._4_4_ = 0;
    if (1 < param_1) {
      local_100 = 0;
      local_fc = 0;
      if (2 < param_1) {
        puVar16 = local_f8;
        for (uVar13 = param_1 * 2 - 3U & 0x3ffffffe; param_4 = local_140, uVar13 != 0;
            uVar13 = uVar13 - 1) {
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        }
      }
    }
    local_130._0_4_ = 0x19;
    do {
      dVar7 = ABS(dVar5) * *(double *)(param_6 + 0x1d70);
      local_120 = SUB84(dVar7 + _DAT_011dbdd0,0);
      local_120 = local_120 + -0x80000000;
      if (0x3e6 < local_120) {
        local_120 = 0x3e6;
      }
      dVar3 = *(double *)(DAT_012099f4 + local_120 * 8);
      dVar5 = dVar5 - _DAT_011dad58;
      dVar4 = *(double *)(DAT_012099f4 + 8 + local_120 * 8);
      if (0 < param_1) {
        pdVar11 = (double *)&local_108;
        piVar14 = *(int **)(param_6 + 0x1d68);
        iVar12 = param_1;
        do {
          iVar12 = iVar12 + -1;
          *pdVar11 = ((dVar7 - (double)local_120) * (dVar4 - dVar3) + dVar3) *
                     *(double *)(local_13c * 8 + *piVar14) + *pdVar11;
          pdVar11 = pdVar11 + 1;
          piVar14 = piVar14 + 1;
          param_4 = local_140;
        } while (iVar12 != 0);
      }
      local_13c = *(int *)(*(int *)(param_6 + 0x1d88) + 4 + local_13c * 4);
      local_130._0_4_ = local_130._0_4_ + -1;
    } while (local_130._0_4_ != 0);
    if (0 < param_1) {
      pdVar11 = (double *)&local_108;
      pfVar15 = pfVar9;
      iVar12 = param_1;
      do {
        dVar5 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        *pfVar15 = (float)dVar5;
        pfVar15 = pfVar15 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    local_118 = local_118 + dVar6;
  }
joined_r0x01034c9e:
  while (param_4 < pfVar2) {
    iVar12 = *(int *)(param_6 + 0x1d80) + -1;
    *(int *)(param_6 + 0x1d80) = iVar12;
    if (iVar12 < 0) {
      *(undefined4 *)(param_6 + 0x1d80) = 0x18;
    }
    if (param_4 < pfVar2) {
      iVar12 = 0;
      if (0 < param_1) {
        do {
          pfVar15 = param_4 + iVar12;
          iVar10 = iVar12 * 4;
          iVar12 = iVar12 + 1;
          *(double *)
           (*(int *)(*(int *)(param_6 + 0x1d68) + iVar10) + *(int *)(param_6 + 0x1d80) * 8) =
               (double)*pfVar15;
        } while (iVar12 < param_1);
      }
    }
    else {
      iVar12 = 0;
      if (0 < param_1) {
        do {
          iVar10 = *(int *)(param_6 + 0x1d80);
          iVar1 = *(int *)(*(int *)(param_6 + 0x1d68) + iVar12 * 4);
          iVar12 = iVar12 + 1;
          *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
          *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
        } while (iVar12 < param_1);
      }
    }
    param_4 = param_4 + param_1;
    *(double *)(param_6 + 0x1d78) = *(double *)(param_6 + 0x1d78) + _DAT_011dad58;
  }
  iVar12 = (int)(param_2 + param_1 * param_3) - (int)pfVar9;
  iVar12 = param_3 - (int)(CONCAT44(iVar12 >> 0x1f,iVar12 >> 2) / (longlong)param_1);
  *(double *)(param_6 + 0x1d78) = *(double *)(param_6 + 0x1d78) - (double)iVar12 * dVar6;
  if ((_DAT_011dad58 < dVar6) && (param_7 != 0)) {
    FUN_010f9070(param_2,param_2,param_3,param_1,param_6 + 0x130);
  }
  return iVar12;
}


