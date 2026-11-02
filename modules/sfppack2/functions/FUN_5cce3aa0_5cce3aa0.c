/* Module: sfppack2.dll
   Function: FUN_5cce3aa0
   Address: 5cce3aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce3aa0(int param_1)

{
  if (*(int *)(param_1 + 0x54) < 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = 1;
    return 0;
  }
  return 1;
}


