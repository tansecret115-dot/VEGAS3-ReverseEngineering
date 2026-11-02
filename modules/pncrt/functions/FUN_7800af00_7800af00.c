/* Module: pncrt.dll
   Function: FUN_7800af00
   Address: 7800af00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_7800af00(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_7803d3c8;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_7803d3c8);
  HeapDestroy(DAT_78042734);
  return;
}


