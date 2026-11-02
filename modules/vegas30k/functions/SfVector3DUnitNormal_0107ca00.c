/* Module: vegas30k.dll
   Function: SfVector3DUnitNormal
   Address: 0107ca00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfVector3DUnitNormal(float * const,float * const,float * const) */

void SfVector3DUnitNormal(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
                    /* 0x7ca00  519  ?SfVector3DUnitNormal@@YGXQAM00@Z */
  SfVector3DNormal(param_1,param_2,param_3);
  fVar1 = SfVector3DMagnitude(param_3);
  *param_3 = *param_3 / fVar1;
  param_3[1] = param_3[1] / fVar1;
  param_3[2] = param_3[2] / fVar1;
  return;
}


