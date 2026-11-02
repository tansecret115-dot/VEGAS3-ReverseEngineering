/* Module: vegas30k.dll
   Function: SfVector3DNormal
   Address: 0107c9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfVector3DNormal(float * const,float * const,float * const) */

void SfVector3DNormal(float *param_1,float *param_2,float *param_3)

{
                    /* 0x7c9b0  516  ?SfVector3DNormal@@YGXQAM00@Z */
  SfVector3DCross(param_1,param_2,param_3);
  return;
}


