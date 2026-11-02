/* Module: sfppack1.dll
   Function: FUN_5cde7590
   Address: 5cde7590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde7590(int param_1,int param_2)

{
  FUN_5cde75e0((int)(((longlong)(param_2 - *(int *)(param_1 + 0x28)) *
                     (longlong)*(int *)(param_1 + 0x2c)) /
                    (longlong)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10))));
  return;
}


