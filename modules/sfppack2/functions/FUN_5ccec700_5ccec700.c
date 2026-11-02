/* Module: sfppack2.dll
   Function: FUN_5ccec700
   Address: 5ccec700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec700(int param_1)

{
  if (*(int *)(param_1 + 0x68) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    return 0;
  }
  if (50000 < *(int *)(param_1 + 0x68)) {
    *(undefined4 *)(param_1 + 0x68) = 50000;
    return 0;
  }
  return 1;
}


