/* Module: vegas30.exe
   Function: FUN_00595ba0
   Address: 00595ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00595ba0(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x3c) != 0) {
    FUN_0058ec90(*(int *)(param_2 + 0x3c));
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    FUN_0058ec90(*(int *)(param_2 + 0x48));
  }
  _SfQueueInsertHead_8(param_1 + 0xf8 + *(int *)(param_2 + 0x10) * 0x38,param_2);
  return;
}


