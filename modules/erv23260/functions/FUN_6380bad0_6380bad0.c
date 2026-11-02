/* Module: erv23260.dll
   Function: FUN_6380bad0
   Address: 6380bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_6380bad0(uint param_1,uint param_2)

{
  if (param_2 < 2) {
    return (float10)_DAT_6382e320;
  }
  if (param_1 < param_2 >> 1) {
    return (float10)param_1 * ((float10)_DAT_6382e314 / (float10)(param_2 - 1)) -
           (float10)_DAT_6382e318;
  }
  return (float10)_DAT_6382e31c -
         (float10)param_1 * ((float10)_DAT_6382e314 / (float10)(param_2 - 1));
}


