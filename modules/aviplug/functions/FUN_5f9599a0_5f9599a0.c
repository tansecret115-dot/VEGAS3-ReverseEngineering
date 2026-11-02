/* Module: aviplug.dll
   Function: FUN_5f9599a0
   Address: 5f9599a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f9599a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f9d8fc8;
  if (param_1[2] != 0) {
    ICClose(param_1[2]);
    param_1[2] = 0;
  }
  FUN_5f9593b0(param_1);
  return;
}


