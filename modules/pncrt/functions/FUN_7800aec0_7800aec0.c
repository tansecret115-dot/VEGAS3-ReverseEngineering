/* Module: pncrt.dll
   Function: FUN_7800aec0
   Address: 7800aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_7800aec0(void)

{
  undefined **ppuVar1;
  
  DAT_78042734 = HeapCreate(0,0x1000,0);
  if (DAT_78042734 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_7800b050();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_78042734);
    return 0;
  }
  return 1;
}


