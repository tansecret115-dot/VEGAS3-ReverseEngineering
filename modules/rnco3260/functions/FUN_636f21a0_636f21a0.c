/* Module: rnco3260.dll
   Function: FUN_636f21a0
   Address: 636f21a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f21a0(int param_1,int param_2,int param_3)

{
  if ((((-1 < param_2) && (*(int *)(param_1 + 0x34) + param_2 <= *(int *)(param_1 + 0x24))) &&
      (-1 < param_3)) && (*(int *)(param_1 + 0x38) + param_3 <= *(int *)(param_1 + 0x28))) {
    *(int *)(param_1 + 0x2c) = param_2;
    *(int *)(param_1 + 0x30) = param_3;
    *(undefined4 *)(param_1 + 0x48) = 1;
    return 0;
  }
  return 0x80070057;
}


