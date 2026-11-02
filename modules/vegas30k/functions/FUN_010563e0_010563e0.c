/* Module: vegas30k.dll
   Function: FUN_010563e0
   Address: 010563e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010563e0(undefined4 param_1)

{
  _SfLang_DestroyStringTables_4(DAT_0120e5c8);
  _SfLang_Close_4(DAT_0120e5c8);
  FUN_010c5590();
  FUN_010fe680(param_1);
  FUN_010fb6a0();
  FUN_010c3210();
  DAT_0120e5c0 = 0;
  return 1;
}


