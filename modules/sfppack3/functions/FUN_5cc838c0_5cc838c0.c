/* Module: sfppack3.dll
   Function: FUN_5cc838c0
   Address: 5cc838c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc838c0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_5cc9eba0 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_5cc9eba0);
    DAT_5cc9eba0 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


