/* Module: vegas30.exe
   Function: FUN_00438af0
   Address: 00438af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00438af0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)param_3[1] - (float10)param_2[1];
  fVar3 = (float10)*param_3 - (float10)*param_2;
  dVar1 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  return ((float10)*param_2 - (float10)*param_1) *
         ((fVar2 * (float10)_DAT_00610fe0) / (float10)dVar1) +
         ((float10)param_2[1] - (float10)param_1[1]) * ((float10)(double)fVar3 / (float10)dVar1);
}


