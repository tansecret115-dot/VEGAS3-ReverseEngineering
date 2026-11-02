/* Module: vidpcore.dll
   Function: FUN_5dec7cd0
   Address: 5dec7cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dec7cd0(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  float *pfVar4;
  int local_4;
  
  local_4 = 0;
  if (0 < param_2 * 4) {
    do {
      if (0 < param_3) {
        iVar1 = 0;
        pdVar2 = (double *)(param_4 + local_4 * 8);
        iVar3 = param_3;
        pfVar4 = param_1;
        do {
          iVar3 = iVar3 + -1;
          *pfVar4 = (float)((float10)*(double *)
                                      (iVar1 + local_4 * -8 + -0x20 + param_2 * 0x20 + param_5) +
                           (float10)*pdVar2);
          iVar1 = iVar1 + 8;
          pdVar2 = pdVar2 + 1;
          pfVar4 = pfVar4 + 1;
        } while (iVar3 != 0);
      }
      local_4 = local_4 + 4;
      param_1 = param_1 + 4;
    } while (local_4 < param_2 * 4);
  }
  return;
}


