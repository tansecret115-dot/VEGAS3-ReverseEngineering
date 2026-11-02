/* Module: rmbe3260.dll
   Function: FUN_6600e3c0
   Address: 6600e3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600e3c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x1c) = param_4 + param_2;
  *(int *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0x20) = param_5 + param_3;
  return 0;
}


