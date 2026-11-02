/* Module: sfcdi.dll
   Function: FUN_5bf3f4f0
   Address: 5bf3f4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3f4f0(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  hMem = GlobalAlloc(0x42,0xc);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0xb;
    *(undefined4 **)(param_1 + 0x350) = puVar1;
    return 0;
  }
  FUN_5bf3f4c0((LPCVOID)0x0);
  return 0x8007000e;
}


