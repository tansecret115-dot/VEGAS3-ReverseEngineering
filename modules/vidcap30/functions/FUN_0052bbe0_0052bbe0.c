/* Module: vidcap30.exe
   Function: FUN_0052bbe0
   Address: 0052bbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052bbe0(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 2;
  *(undefined4 *)(param_1 + 0xac) = param_2;
  return;
}


