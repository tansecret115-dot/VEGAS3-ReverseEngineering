/* Module: vegas30k.dll
   Function: _SfVector2DDot@8
   Address: 010fded0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 _SfVector2DDot_8(double *param_1,double *param_2)

{
                    /* 0xfded0  1241  _SfVector2DDot@8 */
  return (float10)*param_1 * (float10)*param_2 + (float10)param_1[1] * (float10)param_2[1];
}


