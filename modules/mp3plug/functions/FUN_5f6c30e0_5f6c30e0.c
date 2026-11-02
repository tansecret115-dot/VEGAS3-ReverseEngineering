/* Module: mp3plug.dll
   Function: FUN_5f6c30e0
   Address: 5f6c30e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5f6c30e0(double param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)log2(SQRT((float10)param_1 * (float10)param_1 + (float10)_DAT_5f72c7c8) +
                        (float10)param_1);
  return (float10)0.6931471805599453 * fVar1;
}


