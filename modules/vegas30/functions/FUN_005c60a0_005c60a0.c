/* Module: vegas30.exe
   Function: FUN_005c60a0
   Address: 005c60a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c60a0(int param_1)

{
  if (*(int *)(param_1 + 0x1c4) != 0) {
    return 0;
  }
  return param_1 + 0xb8;
}


