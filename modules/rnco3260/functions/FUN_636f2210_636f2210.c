/* Module: rnco3260.dll
   Function: FUN_636f2210
   Address: 636f2210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f2210(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (-1 < param_2) {
    if (((param_4 + param_2 <= *(int *)(param_1 + 0x24)) && (-1 < param_3)) &&
       (param_5 + param_3 <= *(int *)(param_1 + 0x28))) {
      *(int *)(param_1 + 0x2c) = param_2;
      *(int *)(param_1 + 0x30) = param_3;
      *(int *)(param_1 + 0x34) = param_4;
      *(int *)(param_1 + 0x38) = param_5;
      *(undefined4 *)(param_1 + 0x48) = 1;
      return 0;
    }
  }
  return 0x80070057;
}


