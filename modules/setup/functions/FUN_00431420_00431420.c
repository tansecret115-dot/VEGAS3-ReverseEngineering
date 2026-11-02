/* Module: Setup.exe
   Function: FUN_00431420
   Address: 00431420
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00431420(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_0044f3b0 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_0044f3b0);
    DAT_0044f3b0 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


