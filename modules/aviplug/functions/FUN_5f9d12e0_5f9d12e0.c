/* Module: aviplug.dll
   Function: FUN_5f9d12e0
   Address: 5f9d12e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5f9d12e0(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)log2(SQRT((float10)param_1 * (float10)param_1 + (float10)_DAT_5f9d7c98) +
                        (float10)param_1);
  return (float10)0.6931471805599453 * fVar1;
}


