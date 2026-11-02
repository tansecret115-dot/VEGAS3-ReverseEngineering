/* Module: sfppack1.dll
   Function: FUN_5cdc3640
   Address: 5cdc3640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc3640(int param_1)

{
  if (*(int *)(param_1 + 0x20) < 1) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    return 0;
  }
  if (5000 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 5000;
    return 0;
  }
  return 1;
}


