/* Module: vegas30k.dll
   Function: SfVector3DCross
   Address: 0107c920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfVector3DCross(float * const,float * const,float * const) */

void SfVector3DCross(float *param_1,float *param_2,float *param_3)

{
                    /* 0x7c920  512  ?SfVector3DCross@@YGXQAM00@Z */
  *param_3 = param_2[2] * param_1[1] - param_1[2] * param_2[1];
  param_3[1] = param_1[2] * *param_2 - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - *param_2 * param_1[1];
  return;
}


