/* Module: sfppack1.dll
   Function: FUN_5cdc84d0
   Address: 5cdc84d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc84d0(int param_1)

{
  if (*(int *)(param_1 + 0xa0) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    return 0;
  }
  if (7 < *(int *)(param_1 + 0xa0)) {
    *(undefined4 *)(param_1 + 0xa0) = 7;
    return 0;
  }
  return 1;
}


