/* Module: sfpagepeel.dll
   Function: FUN_0046c880
   Address: 0046c880
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0046c880(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_004a41c8 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_004a41c8);
    DAT_004a41c8 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


