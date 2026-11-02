/* Module: mp3plug.dll
   Function: FUN_5f729600
   Address: 5f729600
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f729600(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5f75bbb4 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5f75bbb4);
    DAT_5f75bbb4 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


