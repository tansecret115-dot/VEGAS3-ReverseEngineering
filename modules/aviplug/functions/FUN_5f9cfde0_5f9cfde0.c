/* Module: aviplug.dll
   Function: FUN_5f9cfde0
   Address: 5f9cfde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5f9cfde0(double param_1)

{
  if (_DAT_5f9d78f0 <= param_1) {
    return SQRT((float10)param_1);
  }
  return (float10)_DAT_5f9d78f0;
}


