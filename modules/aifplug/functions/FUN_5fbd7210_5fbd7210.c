/* Module: aifplug.dll
   Function: FUN_5fbd7210
   Address: 5fbd7210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5fbd7210(int param_1)

{
  if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) != 0)) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    FUN_5fbd7400(param_1);
    FUN_5fbd7530(param_1);
    FUN_5fbd7630(param_1);
    return 1;
  }
  return 0;
}


