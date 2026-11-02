/* Module: rmme3260.dll
   Function: FUN_6625be80
   Address: 6625be80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625be80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626d248;
  if (-1 < (int)param_1[2]) {
    _close(param_1[2]);
  }
  FUN_66258110(param_1);
  return;
}


