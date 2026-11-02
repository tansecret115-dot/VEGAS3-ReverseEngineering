/* Module: vidcap30.exe
   Function: FUN_0049d680
   Address: 0049d680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049d680(undefined4 param_1)

{
  _SfLang_DestroyStringTables_4(DAT_005c16d8);
  _SfLang_Close_4(DAT_005c16d8);
  FUN_0047bc00();
  FUN_00481500(param_1);
  FUN_0047d850();
  FUN_0047ecf0();
  DAT_005c16d0 = 0;
  return 1;
}


