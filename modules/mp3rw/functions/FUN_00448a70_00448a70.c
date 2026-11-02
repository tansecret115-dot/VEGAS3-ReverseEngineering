/* Module: mp3rw.dll
   Function: FUN_00448a70
   Address: 00448a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448a70(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x4000;
  return;
}


