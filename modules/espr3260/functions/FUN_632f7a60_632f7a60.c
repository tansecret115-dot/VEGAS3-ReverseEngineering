/* Module: espr3260.dll
   Function: FUN_632f7a60
   Address: 632f7a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_632f7a60(float *param_1,int param_2,int param_3,float param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_8;
  
  iVar6 = param_2;
  local_8 = -1e+23;
  if ((int)param_4 <= param_3) {
    pfVar5 = param_1 + -param_3;
    do {
      fVar3 = _DAT_632fa524;
      if (0 < iVar6) {
        pfVar4 = param_1;
        iVar7 = iVar6;
        do {
          pfVar1 = (float *)((int)pfVar4 + ((int)pfVar5 - (int)param_1));
          fVar2 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar7 = iVar7 + -1;
          fVar3 = *pfVar1 * fVar2 + fVar3;
        } while (iVar7 != 0);
      }
      if (local_8 < fVar3) {
        param_2 = param_3;
        local_8 = fVar3;
      }
      param_3 = param_3 + -1;
      pfVar5 = pfVar5 + 1;
    } while ((int)param_4 <= param_3);
  }
  param_4 = _DAT_632fa528;
  pfVar5 = param_1 + -param_2;
  if (0 < iVar6) {
    do {
      fVar3 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
      param_4 = fVar3 * fVar3 + param_4;
    } while (iVar6 != 0);
  }
  fVar8 = FUN_632f68d0(param_4);
  *param_5 = (float)(fVar8 * (float10)local_8);
  return param_2;
}


