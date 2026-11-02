/* Module: rnco3260.dll
   Function: FUN_636f22f0
   Address: 636f22f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636f22f0(int param_1)

{
  if ((((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x24) == 0)) &&
      (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x18))) &&
     (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x1c))) {
    return 1;
  }
  return 0;
}


