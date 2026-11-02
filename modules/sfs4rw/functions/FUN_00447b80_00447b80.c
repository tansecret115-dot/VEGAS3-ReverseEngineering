/* Module: sfs4rw.dll
   Function: FUN_00447b80
   Address: 00447b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00447b80(int param_1)

{
  if (*(char *)(param_1 + 0x11f) == '\x10') {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x10;
  }
  return;
}


