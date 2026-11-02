/* Module: vegas30k.dll
   Function: FUN_010f6330
   Address: 010f6330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_010f6330(double param_1)

{
  if (_DAT_011db3f0 <= param_1) {
    return SQRT((float10)param_1);
  }
  return (float10)_DAT_011db3f0;
}


