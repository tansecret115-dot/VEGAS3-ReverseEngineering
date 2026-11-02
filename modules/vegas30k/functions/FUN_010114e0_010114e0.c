/* Module: vegas30k.dll
   Function: FUN_010114e0
   Address: 010114e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010114e0(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x42,0x14);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0xc;
    *(undefined4 **)(param_1 + 0x350) = puVar1;
    return 0;
  }
  FUN_010114b0(0);
  return 0x8007000e;
}


