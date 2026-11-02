/* Module: sfppack1.dll
   Function: FUN_5cdc8460
   Address: 5cdc8460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc8460(int param_1)

{
  if (*(int *)(param_1 + 0x94) < 100) {
    *(undefined4 *)(param_1 + 0x94) = 100;
    return 0;
  }
  if (10000 < *(int *)(param_1 + 0x94)) {
    *(undefined4 *)(param_1 + 0x94) = 10000;
    return 0;
  }
  return 1;
}


