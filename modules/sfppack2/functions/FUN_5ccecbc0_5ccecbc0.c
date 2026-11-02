/* Module: sfppack2.dll
   Function: FUN_5ccecbc0
   Address: 5ccecbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccecbc0(int param_1)

{
  if (*(int *)(param_1 + 0xe8) < 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xe8)) {
    *(undefined4 *)(param_1 + 0xe8) = 1;
    return 0;
  }
  return 1;
}


