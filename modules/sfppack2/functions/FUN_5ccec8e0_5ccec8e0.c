/* Module: sfppack2.dll
   Function: FUN_5ccec8e0
   Address: 5ccec8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec8e0(int param_1)

{
  if (*(int *)(param_1 + 0x90) < 0x32) {
    *(undefined4 *)(param_1 + 0x90) = 0x32;
    return 0;
  }
  if (15000 < *(int *)(param_1 + 0x90)) {
    *(undefined4 *)(param_1 + 0x90) = 15000;
    return 0;
  }
  return 1;
}


