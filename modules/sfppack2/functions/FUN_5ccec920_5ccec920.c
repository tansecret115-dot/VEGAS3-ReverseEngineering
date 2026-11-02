/* Module: sfppack2.dll
   Function: FUN_5ccec920
   Address: 5ccec920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec920(int param_1)

{
  if (*(int *)(param_1 + 0x94) < 0x32) {
    *(undefined4 *)(param_1 + 0x94) = 0x32;
    return 0;
  }
  if (15000 < *(int *)(param_1 + 0x94)) {
    *(undefined4 *)(param_1 + 0x94) = 15000;
    return 0;
  }
  return 1;
}


