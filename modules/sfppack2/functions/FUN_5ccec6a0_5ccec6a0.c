/* Module: sfppack2.dll
   Function: FUN_5ccec6a0
   Address: 5ccec6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec6a0(int param_1)

{
  if (*(int *)(param_1 + 0x60) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    return 0;
  }
  if (50000 < *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x60) = 50000;
    return 0;
  }
  return 1;
}


