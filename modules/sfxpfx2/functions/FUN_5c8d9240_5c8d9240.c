/* Module: sfxpfx2.dll
   Function: FUN_5c8d9240
   Address: 5c8d9240
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c8d9240(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5c8efc98 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5c8efc98);
    DAT_5c8efc98 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


