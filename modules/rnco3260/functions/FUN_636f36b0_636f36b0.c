/* Module: rnco3260.dll
   Function: FUN_636f36b0
   Address: 636f36b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f36b0(int param_1,int param_2,int param_3)

{
  if ((((-1 < param_2) && (*(int *)(param_1 + 0x3c) + param_2 <= *(int *)(param_1 + 0x2c))) &&
      (-1 < param_3)) && (*(int *)(param_1 + 0x40) + param_3 <= *(int *)(param_1 + 0x30))) {
    *(int *)(param_1 + 0x34) = param_2;
    *(int *)(param_1 + 0x38) = param_3;
    *(undefined4 *)(param_1 + 0x50) = 1;
    return 0;
  }
  return 0x80070057;
}


