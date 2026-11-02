/* Module: vegas30k.dll
   Function: FUN_0113b200
   Address: 0113b200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113b200(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  }
  return 0;
}


