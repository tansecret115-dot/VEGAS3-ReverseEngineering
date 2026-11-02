/* Module: sfppack1.dll
   Function: FUN_5cdc83e0
   Address: 5cdc83e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc83e0(int param_1)

{
  if (*(int *)(param_1 + 0x98) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x98)) {
    *(undefined4 *)(param_1 + 0x98) = 100;
    return 0;
  }
  return 1;
}


