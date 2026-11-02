/* Module: encn3260.dll
   Function: FUN_664d11e0
   Address: 664d11e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664d11e0(undefined4 *param_1)

{
  strftime((char *)*param_1,0x50,s__a___d__b__Y__H__M__S_GMT_664f02c0,(tm *)(param_1 + 1));
  return *param_1;
}


