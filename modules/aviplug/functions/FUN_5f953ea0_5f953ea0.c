/* Module: aviplug.dll
   Function: FUN_5f953ea0
   Address: 5f953ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f953ea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f9d8cc8;
  if (param_1[0xc] != 0) {
    FUN_5f955090(param_1,param_1 + 6);
  }
  if (param_1[0x13] != 0) {
    FUN_5f955090(param_1,param_1 + 0xd);
  }
  FUN_5f955e70(param_1);
  return;
}


