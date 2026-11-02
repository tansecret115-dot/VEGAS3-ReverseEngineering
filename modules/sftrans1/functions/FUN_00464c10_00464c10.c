/* Module: sftrans1.dll
   Function: FUN_00464c10
   Address: 00464c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00464c10(int *param_1,int *param_2,int *param_3,double param_4)

{
  bool bVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  int local_54;
  int local_50;
  int local_4c;
  double local_38;
  double local_28;
  
  piVar6 = param_2;
  piVar7 = param_1;
  for (iVar4 = 0x54; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  bVar1 = _DAT_00555910 <= param_4;
  param_1[1] = param_2[1];
  dVar2 = _DAT_00555910;
  if ((bVar1) && (dVar2 = param_4, _DAT_00555908 < param_4)) {
    dVar2 = _DAT_00555908;
  }
  *(double *)(param_1 + 2) =
       (*(double *)(param_3 + 2) - *(double *)(param_2 + 2)) * dVar2 + *(double *)(param_2 + 2);
  iVar4 = *param_2;
  local_4c = *param_3;
  local_54 = iVar4;
  if (local_4c <= iVar4) {
    local_54 = local_4c;
  }
  if (local_4c < iVar4) {
    local_4c = iVar4;
  }
  if ((10 < local_54) || (10 < local_4c)) {
    local_54 = 2;
    local_4c = 2;
  }
  *param_1 = local_4c;
  local_50 = 0;
  if (0 < local_4c) {
    do {
      fVar9 = (float10)param_4;
      iVar5 = local_50;
      iVar4 = local_50;
      if (local_54 <= local_50) {
        if (*param_2 < *param_3) {
          iVar5 = local_54 + -1;
        }
        else {
          iVar4 = local_54 + -1;
        }
      }
      if ((float10)_DAT_00555910 <= fVar9) {
        fVar8 = fVar9;
        if ((float10)_DAT_00555908 < fVar9) {
          fVar8 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar8 = (float10)_DAT_00555910;
      }
      param_1[local_50 * 4 + 6] =
           (int)(float)(((float10)(float)param_3[iVar4 * 4 + 6] -
                        (float10)(float)param_2[iVar5 * 4 + 6]) * fVar8 +
                       (float10)(float)param_2[iVar5 * 4 + 6]);
      if ((float10)_DAT_00555910 <= fVar9) {
        fVar8 = fVar9;
        if ((float10)_DAT_00555908 < fVar9) {
          fVar8 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar8 = (float10)_DAT_00555910;
      }
      param_1[local_50 * 4 + 5] =
           (int)(float)(((float10)(float)param_3[iVar4 * 4 + 5] -
                        (float10)(float)param_2[iVar5 * 4 + 5]) * fVar8 +
                       (float10)(float)param_2[iVar5 * 4 + 5]);
      if ((float10)_DAT_00555910 <= fVar9) {
        fVar8 = fVar9;
        if ((float10)_DAT_00555908 < fVar9) {
          fVar8 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar8 = (float10)_DAT_00555910;
      }
      iVar3 = local_50 + 1;
      param_1[iVar3 * 4] =
           (int)(float)(((float10)(float)param_3[(iVar4 + 1) * 4] -
                        (float10)(float)param_2[(iVar5 + 1) * 4]) * fVar8 +
                       (float10)(float)param_2[(iVar5 + 1) * 4]);
      if ((float10)_DAT_00555910 <= fVar9) {
        fVar8 = fVar9;
        if ((float10)_DAT_00555908 < fVar9) {
          fVar8 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar8 = (float10)_DAT_00555910;
      }
      param_1[local_50 * 4 + 7] =
           (int)(float)(((float10)(float)param_3[iVar4 * 4 + 7] -
                        (float10)(float)param_2[iVar5 * 4 + 7]) * fVar8 +
                       (float10)(float)param_2[iVar5 * 4 + 7]);
      if (local_50 == 0) {
        if ((float10)_DAT_00555910 <= fVar9) {
          fVar8 = fVar9;
          if ((float10)_DAT_00555908 < fVar9) {
            fVar8 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar8 = (float10)_DAT_00555910;
        }
        *(double *)(param_1 + 0x2c) =
             (double)(((float10)*(double *)(param_3 + 0x2c) - (float10)*(double *)(param_2 + 0x2c))
                      * fVar8 + (float10)*(double *)(param_2 + 0x2c));
        if ((float10)_DAT_00555910 <= fVar9) {
          if ((float10)_DAT_00555908 < fVar9) {
            fVar9 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar9 = (float10)_DAT_00555910;
        }
        *(double *)(param_1 + 0x40) =
             (double)(((float10)*(double *)(param_3 + 0x40) - (float10)*(double *)(param_2 + 0x40))
                      * fVar9 + (float10)*(double *)(param_2 + 0x40));
      }
      else {
        fVar9 = (float10)FUN_00465050(param_2,param_2[iVar5 * 2 + 0x2c],param_2[iVar5 * 2 + 0x2d],
                                      param_2[iVar5 * 2 + 0x40],param_2[iVar5 * 2 + 0x41]);
        local_28 = (double)fVar9;
        fVar9 = (float10)FUN_00465050(param_3,param_3[iVar4 * 2 + 0x2c],param_3[iVar4 * 2 + 0x2d],
                                      param_3[iVar4 * 2 + 0x40],param_3[iVar4 * 2 + 0x41]);
        local_38 = (double)fVar9;
        if (param_1[1] != 0) {
          local_28 = ABS(local_28);
          local_38 = ABS(local_38);
        }
        fVar9 = (float10)param_4;
        if ((float10)_DAT_00555910 <= fVar9) {
          if ((float10)_DAT_00555908 < fVar9) {
            fVar9 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar9 = (float10)_DAT_00555910;
        }
        fVar9 = ((float10)local_38 - (float10)local_28) * fVar9 + (float10)local_28;
        fVar8 = (float10)fcos((float10)*(double *)(param_1 + 2));
        *(double *)(param_1 + local_50 * 2 + 0x2c) =
             (double)(fVar8 * fVar9 + (float10)*(double *)(param_1 + 0x2c));
        fVar8 = (float10)fsin((float10)*(double *)(param_1 + 2));
        *(double *)(param_1 + local_50 * 2 + 0x40) =
             (double)(fVar8 * fVar9 + (float10)*(double *)(param_1 + 0x40));
      }
      local_50 = iVar3;
    } while (iVar3 < local_4c);
  }
  return 0;
}


