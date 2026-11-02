/* Module: sfppack2.dll
   Function: FUN_5ccecad0
   Address: 5ccecad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccecad0(int param_1)

{
  if (*(int *)(param_1 + 0xd4) < 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0xd4)) {
    *(undefined4 *)(param_1 + 0xd4) = 1;
    return 0;
  }
  return 1;
}


