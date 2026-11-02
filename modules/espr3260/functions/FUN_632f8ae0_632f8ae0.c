/* Module: espr3260.dll
   Function: FUN_632f8ae0
   Address: 632f8ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f8ae0(float *param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  
  if (param_2 == 10) {
    if (0 < param_5) {
      do {
        param_5 = param_5 + -1;
        *param_4 = param_3[-4] * param_1[4] +
                   param_3[-8] * param_1[8] +
                   param_3[-9] * param_1[9] +
                   param_3[-1] * param_1[1] +
                   param_3[-6] * param_1[6] +
                   param_3[-2] * param_1[2] +
                   param_3[-10] * param_1[10] +
                   param_3[-3] * param_1[3] + param_3[-7] * param_1[7] + param_3[-5] * param_1[5] +
                   *param_3;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      } while (param_5 != 0);
      return;
    }
  }
  else if (0 < param_5) {
    do {
      fVar1 = *param_3;
      iVar4 = param_2;
      pfVar2 = param_3;
      pfVar3 = param_1;
      if (0 < param_2) {
        do {
          iVar4 = iVar4 + -1;
          fVar1 = pfVar2[-1] * pfVar3[1] + fVar1;
          pfVar2 = pfVar2 + -1;
          pfVar3 = pfVar3 + 1;
        } while (iVar4 != 0);
      }
      *param_4 = fVar1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}


