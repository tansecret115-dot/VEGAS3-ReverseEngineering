/* Module: mp3plug.dll
   Function: FUN_5f6c1be0
   Address: 5f6c1be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5f6c1be0(double param_1)

{
  if (_DAT_5f7349d0 <= param_1) {
    return SQRT((float10)param_1);
  }
  return (float10)_DAT_5f7349d0;
}


