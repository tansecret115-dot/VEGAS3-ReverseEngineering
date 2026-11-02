/* Module: rmto3260.dll
   Function: FUN_662f30d0
   Address: 662f30d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_662f30d0(undefined4 *param_1)

{
  FUN_662eefd0(param_1 + 1);
  param_1[4] = 0xffffffff;
  *param_1 = &PTR_FUN_66307e18;
  return param_1;
}


