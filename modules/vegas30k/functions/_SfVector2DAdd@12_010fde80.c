/* Module: vegas30k.dll
   Function: _SfVector2DAdd@12
   Address: 010fde80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVector2DAdd_12(double *param_1,double *param_2,double *param_3)

{
                    /* 0xfde80  1239  _SfVector2DAdd@12 */
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  return;
}


