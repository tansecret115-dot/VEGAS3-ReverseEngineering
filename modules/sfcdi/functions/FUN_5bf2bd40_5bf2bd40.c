/* Module: sfcdi.dll
   Function: FUN_5bf2bd40
   Address: 5bf2bd40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2bd40(int param_1)

{
  if (param_1 == 0) {
    return 0x80004003;
  }
  *(int *)(param_1 + 4) = param_1 + 8;
  return 0;
}


