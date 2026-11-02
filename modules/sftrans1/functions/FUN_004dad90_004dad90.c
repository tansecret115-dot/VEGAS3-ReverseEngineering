/* Module: sftrans1.dll
   Function: FUN_004dad90
   Address: 004dad90
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_004dad90(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}


