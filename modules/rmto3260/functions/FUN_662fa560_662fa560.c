/* Module: rmto3260.dll
   Function: FUN_662fa560
   Address: 662fa560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_662fa560(undefined4 param_1,uint param_2)

{
  if ((double)param_2 * _DAT_66308020 != (double)_DAT_66308028) {
    ftol(param_1,0);
    return;
  }
  ftol();
  return;
}


