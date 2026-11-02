/* Module: vegas30k.dll
   Function: SfVector3DDot
   Address: 0107c960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* float __stdcall SfVector3DDot(float * const,float * const) */

float SfVector3DDot(float *param_1,float *param_2)

{
                    /* 0x7c960  513  ?SfVector3DDot@@YGMQAM0@Z */
  return *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
}


