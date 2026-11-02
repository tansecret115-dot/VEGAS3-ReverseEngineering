/* Module: espr3260.dll
   Function: FUN_632f88d0
   Address: 632f88d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f88d0(float *param_1,float param_2,int param_3)

{
  float fVar1;
  
  fVar1 = param_2;
  if (0 < param_3) {
    do {
      if (*param_1 < fVar1) {
        *param_1 = fVar1;
      }
      fVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
      fVar1 = param_2 + fVar1;
    } while (param_3 != 0);
  }
  return;
}


