/* Module: sftrans1.dll
   Function: FUN_004dad70
   Address: 004dad70
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_004dad70(float *param_1,float *param_2)

{
  return (float10)*param_1 * (float10)*param_2 +
         (float10)param_1[1] * (float10)param_2[1] + (float10)param_1[2] * (float10)param_2[2];
}


