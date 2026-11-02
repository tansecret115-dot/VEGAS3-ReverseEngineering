/* Module: vfplugs.dll
   Function: FUN_00480bc0
   Address: 00480bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00480bc0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_0053b260 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_0053b260);
    DAT_0053b260 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


