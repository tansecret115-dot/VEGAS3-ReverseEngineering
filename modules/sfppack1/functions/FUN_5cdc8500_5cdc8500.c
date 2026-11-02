/* Module: sfppack1.dll
   Function: FUN_5cdc8500
   Address: 5cdc8500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8500(int param_1)

{
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    return 0;
  }
  if (3 < *(int *)(param_1 + 0xa4)) {
    *(undefined4 *)(param_1 + 0xa4) = 3;
    return 0;
  }
  return 1;
}


