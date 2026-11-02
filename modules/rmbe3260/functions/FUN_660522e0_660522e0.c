/* Module: rmbe3260.dll
   Function: FUN_660522e0
   Address: 660522e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_660522e0(undefined4 *param_1)

{
  FUN_6605b650(param_1 + 1);
  param_1[4] = 0xffffffff;
  *param_1 = &PTR_FUN_66068930;
  return param_1;
}


