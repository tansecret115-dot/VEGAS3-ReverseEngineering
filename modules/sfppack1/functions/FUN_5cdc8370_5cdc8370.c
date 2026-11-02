/* Module: sfppack1.dll
   Function: FUN_5cdc8370
   Address: 5cdc8370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8370(int param_1)

{
  if (*(int *)(param_1 + 0x80) < -800) {
    *(undefined4 *)(param_1 + 0x80) = 0xfffffce0;
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    return 0;
  }
  return 1;
}


