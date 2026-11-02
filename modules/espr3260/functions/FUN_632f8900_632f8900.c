/* Module: espr3260.dll
   Function: FUN_632f8900
   Address: 632f8900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f8900(float *param_1,float param_2,int param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_3 + -1;
  if (1 < iVar4) {
    iVar5 = param_3 + -2;
    pfVar3 = param_1;
    do {
      pfVar2 = pfVar3 + 1;
      if (*pfVar2 < *pfVar3) {
        fVar1 = *pfVar2;
        *pfVar2 = *pfVar3;
        *pfVar3 = fVar1;
      }
      iVar5 = iVar5 + -1;
      pfVar3 = pfVar2;
    } while (iVar5 != 0);
  }
  pfVar3 = param_1;
  fVar1 = param_2;
  if (0 < iVar4) {
    do {
      if (*pfVar3 < fVar1) {
        *pfVar3 = fVar1;
      }
      fVar1 = *pfVar3;
      iVar4 = iVar4 + -1;
      pfVar3 = pfVar3 + 1;
      fVar1 = param_2 + fVar1;
    } while (iVar4 != 0);
  }
  if (param_1[param_3 + -1] < param_4 * _DAT_632fa628) {
    param_1[param_3 + -1] = param_4 * _DAT_632fa628;
  }
  if (param_1[param_3 + -1] <= param_4 * _DAT_632fa62c) {
    return;
  }
  param_1[param_3 + -1] = param_4 * _DAT_632fa62c;
  return;
}


