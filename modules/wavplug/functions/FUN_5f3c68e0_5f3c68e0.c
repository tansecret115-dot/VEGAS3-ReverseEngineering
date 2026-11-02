/* Module: wavplug.dll
   Function: FUN_5f3c68e0
   Address: 5f3c68e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f3c68e0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5f3e18cc != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5f3e18cc);
    DAT_5f3e18cc = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


