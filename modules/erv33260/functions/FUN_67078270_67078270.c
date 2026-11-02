/* Module: erv33260.dll
   Function: FUN_67078270
   Address: 67078270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_67078270(int param_1)

{
  if (*(int *)(param_1 + 0x328) != 0) {
    FUN_670787a0(param_1);
    *(undefined4 *)(param_1 + 0x328) = 0;
  }
  return 0;
}


