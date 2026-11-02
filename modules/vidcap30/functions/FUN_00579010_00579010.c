/* Module: vidcap30.exe
   Function: FUN_00579010
   Address: 00579010
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00579010(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_00663560 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_00663560);
    DAT_00663560 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


