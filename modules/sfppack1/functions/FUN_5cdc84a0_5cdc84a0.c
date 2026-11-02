/* Module: sfppack1.dll
   Function: FUN_5cdc84a0
   Address: 5cdc84a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc84a0(int param_1)

{
  if (*(int *)(param_1 + 0x7c) < 1) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    return 0;
  }
  if (8 < *(int *)(param_1 + 0x7c)) {
    *(undefined4 *)(param_1 + 0x7c) = 8;
    return 0;
  }
  return 1;
}


