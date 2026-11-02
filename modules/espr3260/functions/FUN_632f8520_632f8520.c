/* Module: espr3260.dll
   Function: FUN_632f8520
   Address: 632f8520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_632f8520(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_8;
  
  iVar6 = param_3;
  iVar7 = 0;
  local_8 = 1e+30;
  pfVar4 = param_2;
  if (0 < param_4) {
    do {
      pfVar3 = param_1;
      iVar5 = iVar6;
      fVar2 = _DAT_632fa5f4;
      if (0 < iVar6) {
        do {
          fVar1 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar5 = iVar5 + -1;
          fVar2 = (*pfVar3 - fVar1) * (*pfVar3 - fVar1) + fVar2;
          pfVar3 = pfVar3 + 1;
        } while (iVar5 != 0);
      }
      if (fVar2 < local_8) {
        param_3 = iVar7;
        local_8 = fVar2;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_4);
  }
  pfVar4 = param_2 + param_3 * iVar6;
  if (0 < iVar6) {
    do {
      fVar2 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      *param_1 = fVar2;
      param_1 = param_1 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_3;
}


