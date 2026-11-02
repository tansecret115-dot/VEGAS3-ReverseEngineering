/* Module: vegas30k.dll
   Function: FUN_0113afa0
   Address: 0113afa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0113afa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011e6a68;
  FUN_0113b200(param_1);
  if (param_1[0xf] != 0) {
    FUN_01040210(param_1[0xf]);
  }
  param_1[0xf] = 0;
  return;
}


