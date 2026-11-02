/* Module: sfppack1.dll
   Function: FUN_5cdc8740
   Address: 5cdc8740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8740(int param_1)

{
  if (*(int *)(param_1 + 0x28) < 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    return 0;
  }
  if (0x9c4 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 0x9c4;
    return 0;
  }
  return 1;
}


