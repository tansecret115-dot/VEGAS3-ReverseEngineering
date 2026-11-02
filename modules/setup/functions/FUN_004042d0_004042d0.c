/* Module: Setup.exe
   Function: FUN_004042d0
   Address: 004042d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004042d0(void)

{
  _SfLang_DestroyStringTables_4((int)DAT_00448e00);
  _SfLang_Close_4(DAT_00448e00);
  FUN_00405de0();
  FUN_004134e0();
  FUN_00414eb0();
  FUN_00415e40();
  DAT_00448df8 = 0;
  return 1;
}


