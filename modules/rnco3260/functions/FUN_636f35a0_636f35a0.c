/* Module: rnco3260.dll
   Function: FUN_636f35a0
   Address: 636f35a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f35a0(int param_1,int param_2,int param_3)

{
  if ((0 < param_2) && (0 < param_3)) {
    *(int *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x10) = param_3;
    return 0;
  }
  return 0x80070057;
}


