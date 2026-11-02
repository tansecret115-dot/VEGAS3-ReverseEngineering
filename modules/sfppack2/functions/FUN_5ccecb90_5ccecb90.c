/* Module: sfppack2.dll
   Function: FUN_5ccecb90
   Address: 5ccecb90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccecb90(int param_1)

{
  if (*(int *)(param_1 + 0xe4) < 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xe4)) {
    *(undefined4 *)(param_1 + 0xe4) = 1;
    return 0;
  }
  return 1;
}


