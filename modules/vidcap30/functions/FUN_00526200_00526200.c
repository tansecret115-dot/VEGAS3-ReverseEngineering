/* Module: vidcap30.exe
   Function: FUN_00526200
   Address: 00526200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00526200(int param_1)

{
  if (*(char *)(param_1 + 0x11f) == '\x10') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x10;
  }
  return;
}


