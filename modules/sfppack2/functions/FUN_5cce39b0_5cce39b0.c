/* Module: sfppack2.dll
   Function: FUN_5cce39b0
   Address: 5cce39b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce39b0(int param_1)

{
  if (*(int *)(param_1 + 0x40) < 3) {
    *(undefined4 *)(param_1 + 0x40) = 3;
    return 0;
  }
  if (0x19 < *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 0x19;
    return 0;
  }
  return 1;
}


