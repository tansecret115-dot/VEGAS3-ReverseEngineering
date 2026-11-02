/* Module: espr3260.dll
   Function: FUN_632f6390
   Address: 632f6390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f6390(float *param_1,int param_2,float param_3,float param_4,int param_5)

{
  float *pfVar1;
  
  if (0 < param_5) {
    pfVar1 = param_1;
    do {
      param_5 = param_5 + -1;
      *pfVar1 = param_3 * *pfVar1 + *(float *)((param_2 - (int)param_1) + (int)pfVar1) * param_4;
      pfVar1 = pfVar1 + 1;
    } while (param_5 != 0);
  }
  return;
}


