/* Module: rnco3260.dll
   Function: FUN_636f22c0
   Address: 636f22c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636f22c0(int param_1)

{
  if ((((*(int *)(param_1 + 0x3c) == 0) && (*(int *)(param_1 + 0x40) == 0)) &&
      (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x34))) &&
     (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x38))) {
    return 1;
  }
  return 0;
}


