/* Module: rnco3260.dll
   Function: FUN_636f3680
   Address: 636f3680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f3680(int param_1,int param_2,int param_3)

{
  if ((0 < param_2) && (0 < param_3)) {
    *(int *)(param_1 + 0x2c) = param_2;
    *(int *)(param_1 + 0x30) = param_3;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    return 0;
  }
  return 0x80070057;
}


