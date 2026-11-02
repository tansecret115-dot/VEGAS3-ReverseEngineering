/* Module: vidcap30.exe
   Function: FUN_00527060
   Address: 00527060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00527060(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x1000;
  return;
}


