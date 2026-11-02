/* Module: mp3rw.dll
   Function: FUN_0041b300
   Address: 0041b300
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041b300(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_004a9664 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_004a9664);
    DAT_004a9664 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


