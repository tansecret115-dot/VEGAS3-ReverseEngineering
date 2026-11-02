/* Module: vegas30.exe
   Function: FUN_005438a0
   Address: 005438a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005438a0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3c) != param_2) {
    *(int *)(param_1 + 0x3c) = param_2;
    FUN_005438c0(param_1,param_1 + 0x34,1);
  }
  return;
}


