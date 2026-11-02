/* Module: vegas30k.dll
   Function: FUN_010ab2c0
   Address: 010ab2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010ab2c0(int param_1,int param_2)

{
  FUN_010ab310((int)(((longlong)(param_2 - *(int *)(param_1 + 0x28)) *
                     (longlong)*(int *)(param_1 + 0x2c)) /
                    (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))));
  return;
}


