/* Module: vegas30k.dll
   Function: _SfTransformInPlace@8
   Address: 010fe240
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfTransformInPlace_8(double *param_1,double *param_2)

{
  double dVar1;
  
                    /* 0xfe240  1235  _SfTransformInPlace@8 */
  dVar1 = *param_1;
  *param_1 = dVar1 * *param_2 + param_1[1] * param_2[1] + param_2[2];
  param_1[1] = dVar1 * param_2[3] + param_1[1] * param_2[4] + param_2[5];
  return;
}


