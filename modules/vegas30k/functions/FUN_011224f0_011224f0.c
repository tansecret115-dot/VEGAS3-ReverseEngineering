/* Module: vegas30k.dll
   Function: FUN_011224f0
   Address: 011224f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011224f0(int param_1)

{
  if (*(char *)(param_1 + 0x11b) != '\0') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
    return 7;
  }
  return 1;
}


