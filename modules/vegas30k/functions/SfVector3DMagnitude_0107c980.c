/* Module: vegas30k.dll
   Function: SfVector3DMagnitude
   Address: 0107c980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* float __stdcall SfVector3DMagnitude(float * const) */

float SfVector3DMagnitude(float *param_1)

{
                    /* 0x7c980  515  ?SfVector3DMagnitude@@YGMQAM@Z */
  return SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
}


