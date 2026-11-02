/* Module: rmbe3260.dll
   Function: FUN_6600e450
   Address: 6600e450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600e450(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x2c) = param_4 + param_2;
  *(int *)(param_1 + 0x28) = param_3;
  *(int *)(param_1 + 0x30) = param_5 + param_3;
  return 0;
}


