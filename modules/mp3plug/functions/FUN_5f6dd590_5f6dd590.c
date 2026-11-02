/* Module: mp3plug.dll
   Function: FUN_5f6dd590
   Address: 5f6dd590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_5f6dd590(float param_1)

{
  return ((float10)_DAT_5f75cf68 * (float10)param_1 * (float10)param_1 +
         (float10)param_1 * (float10)_DAT_5f75cf6c) - (float10)_DAT_5f75cf70;
}


