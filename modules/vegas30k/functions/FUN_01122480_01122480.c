/* Module: vegas30k.dll
   Function: FUN_01122480
   Address: 01122480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01122480(int param_1)

{
  if (*(byte *)(param_1 + 0x11f) < 8) {
    *(undefined1 *)(param_1 + 0x120) = 8;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 4;
  }
  return;
}


