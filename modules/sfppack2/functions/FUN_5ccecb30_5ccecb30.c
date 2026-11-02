/* Module: sfppack2.dll
   Function: FUN_5ccecb30
   Address: 5ccecb30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccecb30(int param_1)

{
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xdc)) {
    *(undefined4 *)(param_1 + 0xdc) = 1;
    return 0;
  }
  return 1;
}


