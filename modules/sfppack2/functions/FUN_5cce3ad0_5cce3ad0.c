/* Module: sfppack2.dll
   Function: FUN_5cce3ad0
   Address: 5cce3ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce3ad0(int param_1)

{
  if (*(int *)(param_1 + 0x58) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x58) = 1;
    return 0;
  }
  return 1;
}


