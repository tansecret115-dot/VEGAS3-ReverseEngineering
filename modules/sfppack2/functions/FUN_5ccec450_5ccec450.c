/* Module: sfppack2.dll
   Function: FUN_5ccec450
   Address: 5ccec450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec450(int param_1)

{
  if (*(int *)(param_1 + 0x24) < -600) {
    *(undefined4 *)(param_1 + 0x24) = 0xfffffda8;
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return 0;
  }
  return 1;
}


