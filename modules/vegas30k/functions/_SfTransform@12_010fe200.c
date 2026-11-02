/* Module: vegas30k.dll
   Function: _SfTransform@12
   Address: 010fe200
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfTransform_12(double *param_1,double *param_2,double *param_3)

{
                    /* 0xfe200  1234  _SfTransform@12 */
  *param_2 = *param_1 * *param_3 + param_3[1] * param_1[1] + param_3[2];
  param_2[1] = param_3[4] * param_1[1] + param_3[3] * *param_1 + param_3[5];
  return;
}


