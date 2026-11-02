/* Module: sfppack2.dll
   Function: FUN_5ccecb60
   Address: 5ccecb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccecb60(int param_1)

{
  if (*(int *)(param_1 + 0xe0) < 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xe0)) {
    *(undefined4 *)(param_1 + 0xe0) = 1;
    return 0;
  }
  return 1;
}


