/* Module: sfppack2.dll
   Function: FUN_5cceca70
   Address: 5cceca70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cceca70(int param_1)

{
  if (*(int *)(param_1 + 0xb0) < 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xb0)) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  return 1;
}


