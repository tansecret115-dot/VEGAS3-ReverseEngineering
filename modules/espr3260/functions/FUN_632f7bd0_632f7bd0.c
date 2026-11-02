/* Module: espr3260.dll
   Function: FUN_632f7bd0
   Address: 632f7bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_632f7bd0(float *param_1,float param_2,int param_3,int param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float10 fVar11;
  float local_10;
  float local_c;
  float local_8;
  
  fVar8 = param_2;
  local_8 = -3.4028235e+38;
  iVar9 = param_3;
  if (param_4 + 3 <= param_3) {
    pfVar6 = param_1 + (2 - param_3);
    do {
      local_10 = 0.0;
      local_c = 0.0;
      param_2 = 0.0;
      fVar4 = _DAT_632fa53c;
      if (0 < (int)fVar8) {
        param_2 = 0.0;
        local_c = 0.0;
        local_10 = 0.0;
        pfVar5 = pfVar6;
        pfVar7 = param_1;
        fVar10 = fVar8;
        do {
          pfVar1 = pfVar5 + -1;
          pfVar2 = pfVar5 + -2;
          fVar3 = *pfVar5;
          fVar4 = pfVar5[1] * *pfVar7 + fVar4;
          pfVar5 = pfVar5 + 1;
          fVar10 = (float)((int)fVar10 + -1);
          param_2 = *pfVar7 * fVar3 + param_2;
          local_c = *pfVar1 * *pfVar7 + local_c;
          local_10 = *pfVar2 * *pfVar7 + local_10;
          pfVar7 = pfVar7 + 1;
        } while (fVar10 != 0.0);
      }
      if (local_8 < local_10) {
        param_3 = iVar9;
        local_8 = local_10;
      }
      if (local_8 < local_c) {
        param_3 = iVar9 + -1;
        local_8 = local_c;
      }
      if (local_8 < param_2) {
        param_3 = iVar9 + -2;
        local_8 = param_2;
      }
      if (local_8 < fVar4) {
        param_3 = iVar9 + -3;
        local_8 = fVar4;
      }
      iVar9 = iVar9 + -4;
      pfVar6 = pfVar6 + 4;
    } while (param_4 + 3 <= iVar9);
  }
  if (param_4 <= iVar9) {
    pfVar6 = param_1 + -iVar9;
    do {
      fVar4 = _DAT_632fa53c;
      if (0 < (int)fVar8) {
        pfVar5 = param_1;
        fVar10 = fVar8;
        do {
          pfVar7 = (float *)((int)pfVar5 + ((int)pfVar6 - (int)param_1));
          fVar3 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar10 = (float)((int)fVar10 + -1);
          fVar4 = *pfVar7 * fVar3 + fVar4;
        } while (fVar10 != 0.0);
      }
      if (local_8 < fVar4) {
        param_3 = iVar9;
        local_8 = fVar4;
      }
      iVar9 = iVar9 + -1;
      pfVar6 = pfVar6 + 1;
    } while (param_4 <= iVar9);
  }
  pfVar6 = param_1 + -param_3;
  fVar4 = _DAT_632fa540;
  if (0 < (int)fVar8) {
    do {
      fVar10 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar8 = (float)((int)fVar8 + -1);
      fVar4 = fVar10 * fVar10 + fVar4;
    } while (fVar8 != 0.0);
  }
  fVar11 = FUN_632f68e0(SUB84((double)fVar4,0),(int)((ulonglong)(double)fVar4 >> 0x20));
  *param_5 = (float)(fVar11 * (float10)local_8);
  return param_3;
}


