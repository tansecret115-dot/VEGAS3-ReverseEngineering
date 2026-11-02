/* Module: rmbe3260.dll
   Function: FUN_66047e00
   Address: 66047e00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_66047e00(undefined4 param_1,uint param_2)

{
  if ((double)param_2 * _DAT_660682f0 != (double)_DAT_660682f8) {
    ftol(param_1,0);
    return;
  }
  ftol();
  return;
}


