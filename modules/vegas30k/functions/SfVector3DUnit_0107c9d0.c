/* Module: vegas30k.dll
   Function: SfVector3DUnit
   Address: 0107c9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfVector3DUnit(float * const) */

void SfVector3DUnit(float *param_1)

{
  float fVar1;
  
                    /* 0x7c9d0  518  ?SfVector3DUnit@@YGXQAM@Z */
  fVar1 = SfVector3DMagnitude(param_1);
  *param_1 = *param_1 / fVar1;
  param_1[1] = param_1[1] / fVar1;
  param_1[2] = param_1[2] / fVar1;
  return;
}


