/* Module: rnco3260.dll
   Function: FUN_636f22a0
   Address: 636f22a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636f22a0(int param_1)

{
  if ((*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x28)) &&
     (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x2c))) {
    return 1;
  }
  return 0;
}


