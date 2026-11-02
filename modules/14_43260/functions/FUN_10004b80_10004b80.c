/* Module: 14_43260.dll
   Function: FUN_10004b80
   Address: 10004b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10004b80(float param_1,float *param_2)

{
  float *pfVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_10010c98;
  pfVar1 = param_2 + 10;
  for (; param_2 < pfVar1; param_2 = param_2 + 1) {
    fVar2 = ((float10)_DAT_10010c90 - (float10)*param_2 * (float10)*param_2) * fVar2;
  }
  return SQRT(fVar2) * (float10)param_1;
}


