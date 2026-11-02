/* Module: sfppack2.dll
   Function: FUN_5cd1cef0
   Address: 5cd1cef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd1cef0(int param_1,int param_2)

{
  FUN_5cd1cf40((int)(((longlong)(param_2 - *(int *)(param_1 + 0x28)) *
                     (longlong)*(int *)(param_1 + 0x2c)) /
                    (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))));
  return;
}


