/* Module: mcplug.dll
   Function: FUN_00472930
   Address: 00472930
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00472930(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_004ae464 != (HMODULE)0x0) {
    uVar1 = FreeLibrary(DAT_004ae464);
    DAT_004ae464 = (HMODULE)0x0;
  }
  return uVar1 & 0xffff0000;
}


