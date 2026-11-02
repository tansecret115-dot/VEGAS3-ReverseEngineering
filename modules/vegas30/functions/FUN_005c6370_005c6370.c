/* Module: vegas30.exe
   Function: FUN_005c6370
   Address: 005c6370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c6370(int param_1)

{
  FUN_005b83b0(param_1,1);
  *(uint *)(param_1 + 0xc2c) = *(uint *)(param_1 + 0xc2c) | 1;
  FUN_005b84d0(param_1,1);
  return;
}


