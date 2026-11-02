/* Module: sfppack1.dll
   Function: FUN_5cdc8770
   Address: 5cdc8770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8770(int param_1)

{
  if (*(int *)(param_1 + 0x2c) < 1) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return 0;
  }
  if (0x9c4 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x9c4;
    return 0;
  }
  return 1;
}


