/* Module: espr3260.dll
   Function: FUN_632f9710
   Address: 632f9710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f9710(float *param_1,float *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  *param_2 = *param_1;
  fVar1 = param_3;
  if (0 < param_4) {
    do {
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      fVar2 = fVar1 * *param_1;
      fVar1 = fVar1 * param_3;
      *param_2 = fVar2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


