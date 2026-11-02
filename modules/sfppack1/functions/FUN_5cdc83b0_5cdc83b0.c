/* Module: sfppack1.dll
   Function: FUN_5cdc83b0
   Address: 5cdc83b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc83b0(int param_1)

{
  if (*(int *)(param_1 + 0x9c) < 1) {
    *(undefined4 *)(param_1 + 0x9c) = 1;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x9c)) {
    *(undefined4 *)(param_1 + 0x9c) = 100;
    return 0;
  }
  return 1;
}


