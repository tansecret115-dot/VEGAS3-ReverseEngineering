/* Module: vegas30k.dll
   Function: _SfVector2DMagnitude@4
   Address: 010fdef0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 _SfVector2DMagnitude_4(double *param_1)

{
                    /* 0xfdef0  1242  _SfVector2DMagnitude@4 */
  return SQRT((float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}


