/* Module: vidcap30.exe
   Function: FUN_00527070
   Address: 00527070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00527070(int param_1)

{
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x4000;
  return;
}


