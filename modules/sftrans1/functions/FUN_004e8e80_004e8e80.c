/* Module: sftrans1.dll
   Function: FUN_004e8e80
   Address: 004e8e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e8e80(float *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
  iVar3 = 0;
  pfVar4 = param_1;
  if (0 < param_2) {
    do {
      fVar1 = *pfVar4;
      iVar6 = iVar3;
      pfVar5 = pfVar4;
      for (iVar2 = iVar3; iVar2 < param_2; iVar2 = iVar2 + 1) {
        if (*pfVar5 < fVar1) {
          fVar1 = *pfVar5;
          iVar6 = iVar2;
        }
        pfVar5 = pfVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      fVar1 = *pfVar4;
      *pfVar4 = param_1[iVar6];
      param_1[iVar6] = fVar1;
      pfVar4 = pfVar4 + 1;
    } while (iVar3 < param_2);
  }
  iVar3 = 1;
  if (1 < param_2) {
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
    pfVar4 = param_1;
    do {
      if (*param_1 != param_1[-1]) {
        iVar3 = iVar3 + 1;
        *pfVar4 = *param_1;
        pfVar4 = pfVar4 + 1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar3;
}


