/* Module: sfppack2.dll
   Function: FUN_5cd4cdb0
   Address: 5cd4cdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cd4cdb0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5cd764e0 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5cd764e0);
    DAT_5cd764e0 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


