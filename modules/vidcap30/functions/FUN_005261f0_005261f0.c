/* Module: vidcap30.exe
   Function: FUN_005261f0
   Address: 005261f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005261f0(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
  return;
}


