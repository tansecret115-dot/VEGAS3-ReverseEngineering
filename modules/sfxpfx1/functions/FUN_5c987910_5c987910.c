/* Module: sfxpfx1.dll
   Function: FUN_5c987910
   Address: 5c987910
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c987910(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5c99f040 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5c99f040);
    DAT_5c99f040 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


