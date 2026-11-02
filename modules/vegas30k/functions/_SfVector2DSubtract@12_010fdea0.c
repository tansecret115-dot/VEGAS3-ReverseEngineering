/* Module: vegas30k.dll
   Function: _SfVector2DSubtract@12
   Address: 010fdea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVector2DSubtract_12(double *param_1,double *param_2,double *param_3)

{
                    /* 0xfdea0  1244  _SfVector2DSubtract@12 */
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  return;
}


