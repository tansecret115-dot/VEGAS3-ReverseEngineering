/* Module: sfppack2.dll
   Function: FUN_5cceca40
   Address: 5cceca40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cceca40(int param_1)

{
  if (*(int *)(param_1 + 0xac) < 0) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xac)) {
    *(undefined4 *)(param_1 + 0xac) = 1;
    return 0;
  }
  return 1;
}


