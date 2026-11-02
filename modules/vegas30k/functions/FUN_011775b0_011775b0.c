/* Module: vegas30k.dll
   Function: FUN_011775b0
   Address: 011775b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011775b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_0118dee0(param_3,param_4);
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_0118fe40(param_3,param_4);
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_0118edf0(param_3,param_4);
  }
  return 1;
}


