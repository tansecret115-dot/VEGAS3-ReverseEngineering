/* Module: vegas30.exe
   Function: FUN_005a65a0
   Address: 005a65a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a65a0(int param_1,int param_2)

{
  FUN_005a6090(param_1,*(float *)(param_2 + 0x40) - *(float *)(param_1 + 0x40),
               *(float *)(param_2 + 0x44) - *(float *)(param_1 + 0x44));
  return;
}


