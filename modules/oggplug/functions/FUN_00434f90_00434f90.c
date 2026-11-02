/* Module: oggplug.dll
   Function: FUN_00434f90
   Address: 00434f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00434f90(float param_1,float param_2,float *param_3,float *param_4)

{
  if (ABS(param_1) <= ABS(param_2)) {
    *param_3 = param_2;
    if (_DAT_0044d6f0 < param_2) {
      *param_4 = param_1 - param_2;
      return;
    }
    *param_4 = param_2 - param_1;
    return;
  }
  *param_3 = param_1;
  if (_DAT_0044d6f0 < param_1) {
    *param_4 = param_1 - param_2;
    return;
  }
  *param_4 = param_2 - param_1;
  return;
}


