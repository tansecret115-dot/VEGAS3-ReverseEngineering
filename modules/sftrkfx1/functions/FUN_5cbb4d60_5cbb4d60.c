/* Module: sftrkfx1.dll
   Function: FUN_5cbb4d60
   Address: 5cbb4d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5cbb4d60(double param_1)

{
  if (_DAT_5cc04098 <= param_1) {
    return SQRT((float10)param_1);
  }
  return (float10)_DAT_5cc04098;
}


