/* Module: vidcap30.exe
   Function: FUN_00538950
   Address: 00538950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00538950(double param_1)

{
  if (_DAT_00589f10 <= param_1) {
    return SQRT((float10)param_1);
  }
  return (float10)_DAT_00589f10;
}


