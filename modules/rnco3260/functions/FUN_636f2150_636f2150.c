/* Module: rnco3260.dll
   Function: FUN_636f2150
   Address: 636f2150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f2150(int param_1,int param_2,int param_3)

{
  if ((0 < param_2) && (0 < param_3)) {
    *(int *)(param_1 + 0x24) = param_2;
    *(int *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x44) = 1;
    return 0;
  }
  return 0x80070057;
}


