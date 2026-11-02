/* Module: vegas30.exe
   Function: FUN_005ac4b0
   Address: 005ac4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ac4b0(int param_1)

{
  if (((*(int *)(param_1 + 0x478) == 0) && (*(int *)(param_1 + 0x488) == 0x3f800000)) &&
     (*(int *)(param_1 + 0x480) == 0)) {
    return 0;
  }
  return 1;
}


