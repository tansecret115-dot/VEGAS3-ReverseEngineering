/* Module: stl2plg.dll
   Function: FUN_0041e5b0
   Address: 0041e5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e5b0(int param_1)

{
  if (*(char *)(param_1 + 0x11f) == '\x10') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x10;
  }
  return;
}


