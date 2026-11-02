/* Module: sfppack1.dll
   Function: FUN_5ce0df30
   Address: 5ce0df30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5ce0df30(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5ce2a0c8 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5ce2a0c8);
    DAT_5ce2a0c8 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


