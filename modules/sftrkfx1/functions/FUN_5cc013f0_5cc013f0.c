/* Module: sftrkfx1.dll
   Function: FUN_5cc013f0
   Address: 5cc013f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc013f0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5cc17da0 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5cc17da0);
    DAT_5cc17da0 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


