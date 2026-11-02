/* Module: vegas30k.dll
   Function: FUN_010f7830
   Address: 010f7830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_010f7830(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)log2(SQRT((float10)param_1 * (float10)param_1 + (float10)_DAT_011dad58) +
                        (float10)param_1);
  return (float10)0.6931471805599453 * fVar1;
}


