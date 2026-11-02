/* Module: sfppack2.dll
   Function: FUN_5ccec850
   Address: 5ccec850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec850(int param_1)

{
  if (*(int *)(param_1 + 0x84) < 3) {
    *(undefined4 *)(param_1 + 0x84) = 3;
    return 0;
  }
  if (0x1e < *(int *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x84) = 0x1e;
    return 0;
  }
  return 1;
}


