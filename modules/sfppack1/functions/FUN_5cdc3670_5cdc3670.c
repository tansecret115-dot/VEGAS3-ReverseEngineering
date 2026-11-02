/* Module: sfppack1.dll
   Function: FUN_5cdc3670
   Address: 5cdc3670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc3670(int param_1)

{
  if (*(int *)(param_1 + 0x24) < 1) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return 0;
  }
  if (200 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 200;
    return 0;
  }
  return 1;
}


