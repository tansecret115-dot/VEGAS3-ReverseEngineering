/* Module: vegas30.exe
   Function: FUN_00434710
   Address: 00434710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00434710(float *param_1)

{
  if (*param_1 != (float)_DAT_006106d0) {
    *param_1 = 1.0;
    return 1;
  }
  *param_1 = 1.0;
  return 0;
}


