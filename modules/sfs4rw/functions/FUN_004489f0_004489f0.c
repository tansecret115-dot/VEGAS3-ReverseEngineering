/* Module: sfs4rw.dll
   Function: FUN_004489f0
   Address: 004489f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004489f0(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x4000;
  return;
}


