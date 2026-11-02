/* Module: sfppack3.dll
   Function: FUN_5cc47230
   Address: 5cc47230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc47230(int param_1)

{
  if (*(int *)(param_1 + 0x20) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    return 0;
  }
  return 1;
}


