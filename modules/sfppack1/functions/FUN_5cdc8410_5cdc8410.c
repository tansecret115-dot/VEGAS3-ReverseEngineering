/* Module: sfppack1.dll
   Function: FUN_5cdc8410
   Address: 5cdc8410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8410(int param_1)

{
  if (*(int *)(param_1 + 0x88) < 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    return 0;
  }
  if (0x96 < *(int *)(param_1 + 0x88)) {
    *(undefined4 *)(param_1 + 0x88) = 0x96;
    return 0;
  }
  return 1;
}


