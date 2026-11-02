/* Module: vidpcore.dll
   Function: FUN_5df14c00
   Address: 5df14c00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5df14c00(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5dff1acc != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5dff1acc);
    DAT_5dff1acc = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


