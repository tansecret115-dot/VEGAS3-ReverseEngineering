/* Module: vegas30k.dll
   Function: FUN_01122460
   Address: 01122460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01122460(int param_1)

{
  if (*(char *)(param_1 + 0x11f) == '\x10') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x10;
  }
  return;
}


