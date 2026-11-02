/* Module: stl2plg.dll
   Function: FUN_00405560
   Address: 00405560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00405560(void)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x40,0x48);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00405580(puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


