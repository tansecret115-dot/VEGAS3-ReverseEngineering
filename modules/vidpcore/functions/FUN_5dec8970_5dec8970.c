/* Module: vidpcore.dll
   Function: FUN_5dec8970
   Address: 5dec8970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5dec8970(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5,
                 uint param_6,int param_7,double *param_8,int param_9,int param_10,int param_11,
                 undefined4 param_12,undefined4 param_13,int param_14,double *param_15)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  float *pfVar10;
  double *pdVar11;
  float *pfVar12;
  int local_78;
  int local_74;
  int local_70;
  double *local_64;
  float *local_60;
  float *local_58;
  int local_54;
  uint local_50;
  int local_48;
  double local_30;
  float local_28 [4];
  float local_18 [5];
  
  local_64 = param_15;
  pfVar4 = (float *)((param_5 + -1) * param_4 + (int)param_3);
  local_60 = param_3;
  if (0 < (int)param_6) {
    pfVar10 = pfVar4;
    pfVar12 = local_18;
    for (uVar7 = param_6 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pfVar12 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar12 = pfVar12 + 1;
    }
    pfVar10 = param_3;
    pfVar12 = local_28;
    for (uVar7 = param_6 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pfVar12 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar12 = pfVar12 + 1;
    }
  }
  local_48 = 0;
  if (0 < param_5) {
    local_74 = -(int)param_3;
    do {
      local_78 = local_48;
      if (4 < local_48) {
        local_78 = 5;
      }
      if (0 < (int)param_6) {
        local_50 = param_6;
        pdVar8 = local_64;
        pfVar10 = local_60;
        do {
          dVar3 = _DAT_5df18838;
          pdVar5 = (double *)((param_14 - (int)param_15) + (int)pdVar8);
          *(undefined4 *)pdVar8 = 0;
          *(undefined4 *)pdVar5 = 0;
          *(undefined4 *)((int)pdVar5 + 4) = 0;
          local_30 = 0.0;
          *(undefined4 *)((int)pdVar8 + 4) = 0;
          local_70 = 0;
          if (local_78 < 1) {
LAB_5dec8b02:
            pdVar6 = (double *)(param_10 + local_70 * 8);
            local_70 = 5 - local_70;
            do {
              pdVar9 = (double *)((param_7 - param_10) + (int)pdVar6);
              dVar2 = *pdVar6;
              pdVar6 = pdVar6 + 1;
              local_70 = local_70 + -1;
              local_30 = (*pdVar9 - dVar2) *
                         (double)*(float *)((int)local_28 + local_74 + (int)pfVar10) + local_30;
              dVar3 = (*(double *)((param_9 - param_10) + -8 + (int)pdVar6) -
                      *(double *)((param_11 - param_10) + -8 + (int)pdVar6)) *
                      (double)*(float *)((int)local_18 + local_74 + (int)pfVar10) + dVar3;
            } while (local_70 != 0);
          }
          else {
            local_58 = (float *)(((int)pfVar4 - (int)local_60) + (int)pfVar10);
            local_54 = local_78;
            local_70 = local_78;
            pdVar6 = param_8;
            pdVar9 = pdVar8;
            pfVar12 = pfVar10;
            do {
              pdVar11 = (double *)((param_9 - (int)param_8) + (int)pdVar6);
              fVar1 = *pfVar12;
              pfVar12 = (float *)((int)pfVar12 - param_4);
              local_30 = ((double)fVar1 * *(double *)((int)pdVar11 + (param_7 - param_9)) -
                         *(double *)((param_14 - (int)param_15) + (int)pdVar9) * *pdVar6) + local_30
              ;
              fVar1 = *local_58;
              local_58 = (float *)((int)local_58 + param_4);
              local_54 = local_54 + -1;
              dVar3 = ((double)fVar1 * *pdVar11 - *pdVar6 * *pdVar9) + dVar3;
              pdVar6 = pdVar6 + 1;
              pdVar9 = pdVar9 + -4;
            } while (local_54 != 0);
            if (local_78 < 5) goto LAB_5dec8b02;
          }
          if ((local_30 < _DAT_5df34a88) && (_DAT_5df34ad8 < local_30)) {
            local_30 = _DAT_5df18838;
          }
          if ((dVar3 < _DAT_5df34a88) && (_DAT_5df34ad8 < dVar3)) {
            dVar3 = _DAT_5df18838;
          }
          pfVar10 = pfVar10 + 1;
          *pdVar5 = local_30;
          *pdVar8 = dVar3;
          local_50 = local_50 - 1;
          pdVar8 = pdVar8 + 1;
        } while (local_50 != 0);
      }
      pfVar4 = (float *)((int)pfVar4 - param_4);
      local_64 = local_64 + 4;
      local_60 = (float *)((int)local_60 + param_4);
      local_74 = local_74 - param_4;
      local_48 = local_48 + 1;
    } while (local_48 < param_5);
  }
  if (param_6 != 4) {
    FUN_5dec84f0(param_1,param_5,param_2,param_6,param_14,param_15);
    return;
  }
  FUN_5dec83d0(param_1,param_5,param_2,param_14,param_15);
  return;
}


