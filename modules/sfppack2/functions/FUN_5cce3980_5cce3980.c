/* Module: sfppack2.dll
   Function: FUN_5cce3980
   Address: 5cce3980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce3980(int param_1)

{
  if (*(int *)(param_1 + 0x3c) < 3) {
    *(undefined4 *)(param_1 + 0x3c) = 3;
    return 0;
  }
  if (0x19 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0x19;
    return 0;
  }
  return 1;
}


