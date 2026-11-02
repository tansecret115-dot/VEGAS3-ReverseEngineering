/* Module: stl2plg.dll
   Function: FUN_0041e5d0
   Address: 0041e5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e5d0(int param_1)

{
  if (*(byte *)(param_1 + 0x11f) < 8) {
    *(undefined1 *)(param_1 + 0x120) = 8;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 4;
  }
  return;
}


