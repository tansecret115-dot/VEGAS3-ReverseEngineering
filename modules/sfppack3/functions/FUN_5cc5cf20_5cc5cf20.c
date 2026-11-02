/* Module: sfppack3.dll
   Function: FUN_5cc5cf20
   Address: 5cc5cf20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc5cf20(int param_1,int param_2)

{
  FUN_5cc5cf70((int)(((longlong)(param_2 - *(int *)(param_1 + 0x28)) *
                     (longlong)*(int *)(param_1 + 0x2c)) /
                    (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))));
  return;
}


