/* Module: vegas30.exe
   Function: FUN_00609df0
   Address: 00609df0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00609df0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_0065f618 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_0065f618);
    DAT_0065f618 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


