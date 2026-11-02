/* Module: vegas30k.dll
   Function: FUN_010e2650
   Address: 010e2650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010e2650(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 double *param_7,int param_8,int param_9,int param_10,undefined4 param_11,
                 undefined4 param_12,int param_13,double *param_14)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  byte *pbVar7;
  double *pdVar8;
  double *pdVar9;
  byte *pbVar10;
  double *pdVar11;
  byte *pbVar12;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  double *local_54;
  int local_4c;
  int local_44;
  double local_38;
  uint auStack_28 [4];
  uint auStack_18 [5];
  
  local_54 = param_14;
  local_64 = param_2 + -4 + param_3 * 4;
  iVar4 = 0;
  local_68 = param_2;
  if (0 < param_5) {
    pbVar7 = (byte *)(local_64 + param_4);
    do {
      auStack_28[iVar4] = (uint)pbVar7[param_2 - local_64];
      auStack_18[iVar4] = (uint)*pbVar7;
      iVar4 = iVar4 + 1;
      pbVar7 = pbVar7 + 1;
    } while (iVar4 < param_5);
  }
  local_44 = 0;
  if (0 < param_3) {
    do {
      local_6c = local_44;
      if (4 < local_44) {
        local_6c = 5;
      }
      local_5c = 0;
      if (0 < param_5) {
        pbVar7 = (byte *)(local_68 + param_4);
        pdVar8 = local_54;
        do {
          dVar3 = _DAT_011db3f0;
          pdVar5 = (double *)((param_13 - (int)param_14) + (int)pdVar8);
          *(undefined4 *)pdVar8 = 0;
          *(undefined4 *)pdVar5 = 0;
          *(undefined4 *)((int)pdVar5 + 4) = 0;
          local_38 = 0.0;
          *(undefined4 *)((int)pdVar8 + 4) = 0;
          local_60 = 0;
          if (local_6c < 1) {
LAB_010e27dd:
            pdVar6 = (double *)(param_9 + local_60 * 8);
            local_60 = 5 - local_60;
            do {
              pdVar9 = (double *)((param_6 - param_9) + (int)pdVar6);
              dVar1 = *pdVar6;
              pdVar6 = pdVar6 + 1;
              local_60 = local_60 + -1;
              local_38 = (*pdVar9 - dVar1) * (double)(int)auStack_28[local_5c] + local_38;
              dVar3 = (*(double *)((param_8 - param_9) + -8 + (int)pdVar6) -
                      *(double *)((param_10 - param_9) + -8 + (int)pdVar6)) *
                      (double)(int)auStack_18[local_5c] + dVar3;
            } while (local_60 != 0);
          }
          else {
            local_4c = local_6c;
            local_60 = local_6c;
            pdVar6 = param_7;
            pdVar9 = pdVar8;
            pbVar10 = pbVar7;
            pbVar12 = pbVar7 + (local_64 - local_68);
            do {
              pdVar11 = (double *)((param_8 - (int)param_7) + (int)pdVar6);
              bVar2 = *pbVar10;
              pbVar10 = pbVar10 + -4;
              local_38 = ((double)bVar2 * *(double *)((int)pdVar11 + (param_6 - param_8)) -
                         *(double *)((param_13 - (int)param_14) + 0x20 + (int)(pdVar9 + -4)) *
                         *pdVar6) + local_38;
              local_4c = local_4c + -1;
              dVar3 = ((double)*pbVar12 * *pdVar11 - *pdVar6 * *pdVar9) + dVar3;
              pdVar6 = pdVar6 + 1;
              pdVar9 = pdVar9 + -4;
              pbVar12 = pbVar12 + 4;
            } while (local_4c != 0);
            if (local_6c < 5) goto LAB_010e27dd;
          }
          if ((local_38 < _DAT_011e2ef0) && (_DAT_011e2f48 < local_38)) {
            local_38 = _DAT_011db3f0;
          }
          if ((dVar3 < _DAT_011e2ef0) && (_DAT_011e2f48 < dVar3)) {
            dVar3 = _DAT_011db3f0;
          }
          *pdVar5 = local_38;
          *pdVar8 = dVar3;
          local_5c = local_5c + 1;
          pbVar7 = pbVar7 + 1;
          pdVar8 = pdVar8 + 1;
        } while (local_5c < param_5);
      }
      local_54 = local_54 + 4;
      local_68 = local_68 + 4;
      local_64 = local_64 + -4;
      local_44 = local_44 + 1;
    } while (local_44 < param_3);
  }
  FUN_010e2230(param_1,param_3,param_5,param_13,param_14);
  return;
}


