/* Module: Setup.exe
   Function: FUN_00402860
   Address: 00402860
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00402860(void)

{
  int iVar1;
  
  iVar1 = _SfGetModulePath_12((HMODULE)0x0,&DAT_00446c78,0x104);
  return -(uint)(iVar1 != 0) & 0x446c78;
}


