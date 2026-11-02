/* Module: sftrans1.dll
   Function: FUN_0053a410
   Address: 0053a410
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0053a410(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_00622464 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_00622464);
    DAT_00622464 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


