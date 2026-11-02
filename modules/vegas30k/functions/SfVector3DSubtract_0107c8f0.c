/* Module: vegas30k.dll
   Function: SfVector3DSubtract
   Address: 0107c8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfVector3DSubtract(float * const,float * const,float * const) */

void SfVector3DSubtract(float *param_1,float *param_2,float *param_3)

{
                    /* 0x7c8f0  517  ?SfVector3DSubtract@@YGXQAM00@Z */
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  param_3[2] = param_1[2] - param_2[2];
  return;
}


