/* Module: rnco3260.dll
   Function: FUN_636f20c0
   Address: 636f20c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f20c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (-1 < param_2) {
    if (((param_4 + param_2 <= *(int *)(param_1 + 8)) && (-1 < param_3)) &&
       (param_5 + param_3 <= *(int *)(param_1 + 0xc))) {
      *(int *)(param_1 + 0x10) = param_2;
      *(int *)(param_1 + 0x14) = param_3;
      *(int *)(param_1 + 0x18) = param_4;
      *(int *)(param_1 + 0x1c) = param_5;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      return 0;
    }
  }
  return 0x80070057;
}


