/* Module: vegas30.exe
   Function: FUN_005ce7b0
   Address: 005ce7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ce7b0(int param_1,undefined4 *param_2)

{
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),1);
  *(undefined4 *)(param_1 + 0x4c) = *param_2;
  *(undefined4 *)(param_1 + 0x50) = param_2[1];
  *(undefined4 *)(param_1 + 0x54) = param_2[2];
  *(undefined4 *)(param_1 + 0x22c) = param_2[4];
  *(undefined4 *)(param_1 + 0x3e0) = param_2[5];
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),1);
  return;
}


