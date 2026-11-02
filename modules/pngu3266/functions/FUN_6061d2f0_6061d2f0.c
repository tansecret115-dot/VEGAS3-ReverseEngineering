/* Module: pngu3266.dll
   Function: FUN_6061d2f0
   Address: 6061d2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061d2f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6062d230;
  if (-1 < (int)param_1[2]) {
    _close(param_1[2]);
  }
  FUN_6061c9c0(param_1);
  return;
}


