/* Module: sfppack2.dll
   Function: FUN_5ccec6d0
   Address: 5ccec6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec6d0(int param_1)

{
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 100) = 0;
    return 0;
  }
  if (50000 < *(int *)(param_1 + 100)) {
    *(undefined4 *)(param_1 + 100) = 50000;
    return 0;
  }
  return 1;
}


