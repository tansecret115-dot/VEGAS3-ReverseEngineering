/* Module: sfppack2.dll
   Function: FUN_5cce3b90
   Address: 5cce3b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce3b90(int param_1)

{
  if (*(int *)(param_1 + 0x68) < -0xfa) {
    *(undefined4 *)(param_1 + 0x68) = 0xffffff06;
    return 0;
  }
  if (0xfa < *(int *)(param_1 + 0x68)) {
    *(undefined4 *)(param_1 + 0x68) = 0xfa;
    return 0;
  }
  return 1;
}


