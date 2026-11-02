/* Module: vidcap30.exe
   Function: FUN_0042d6d0
   Address: 0042d6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042d6d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0058abac;
  param_1[3] = &PTR_LAB_0058ab98;
  FUN_0042cf90(param_1);
  if (param_1 != (undefined4 *)0x0) {
    FUN_0057b430();
    return;
  }
  FUN_0057b430();
  return;
}


