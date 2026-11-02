/* Module: sfppack2.dll
   Function: FUN_5ccecb00
   Address: 5ccecb00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccecb00(int param_1)

{
  if (*(int *)(param_1 + 0xd8) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xd8)) {
    *(undefined4 *)(param_1 + 0xd8) = 1;
    return 0;
  }
  return 1;
}


