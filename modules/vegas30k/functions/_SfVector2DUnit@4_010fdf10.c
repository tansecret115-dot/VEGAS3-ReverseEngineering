/* Module: vegas30k.dll
   Function: _SfVector2DUnit@4
   Address: 010fdf10
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVector2DUnit_4(double *param_1)

{
  float10 fVar1;
  
                    /* 0xfdf10  1245  _SfVector2DUnit@4 */
  fVar1 = (float10)_SfVector2DMagnitude_4(param_1);
  *param_1 = (double)((float10)*param_1 / fVar1);
  param_1[1] = (double)((float10)param_1[1] / fVar1);
  return;
}


