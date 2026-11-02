/* Module: rnco3260.dll
   Function: FUN_636f2070
   Address: 636f2070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f2070(int param_1,int param_2,int param_3)

{
  if ((0 < param_2) && (0 < param_3)) {
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0xc) = param_3;
    return 0;
  }
  return 0x80070057;
}


