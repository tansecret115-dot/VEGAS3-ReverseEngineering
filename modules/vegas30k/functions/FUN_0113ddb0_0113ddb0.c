/* Module: vegas30k.dll
   Function: FUN_0113ddb0
   Address: 0113ddb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0113ddb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011e6cb4;
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  param_1[4] = 0;
  return;
}


