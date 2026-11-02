/* Module: vegas30k.dll
   Function: SfVector3DHomogenize
   Address: 0107ca40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfVector3DHomogenize(float * const) */

void SfVector3DHomogenize(float *param_1)

{
                    /* 0x7ca40  514  ?SfVector3DHomogenize@@YGXQAM@Z */
  *param_1 = *param_1 / param_1[3];
  param_1[1] = param_1[1] / param_1[3];
  param_1[2] = param_1[2] / param_1[3];
  return;
}


