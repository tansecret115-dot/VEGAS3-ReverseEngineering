/* Module: sfmarket2.dll
   Function: FUN_0041f1d0
   Address: 0041f1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041f1d0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_004aae34 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_004aae34);
    DAT_004aae34 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


