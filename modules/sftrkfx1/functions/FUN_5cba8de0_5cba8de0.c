/* Module: sftrkfx1.dll
   Function: FUN_5cba8de0
   Address: 5cba8de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8de0(int param_1)

{
  if (*(int *)(param_1 + 0x4c) < 1) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    return 0;
  }
  if (0x28 < *(int *)(param_1 + 0x4c)) {
    *(undefined4 *)(param_1 + 0x4c) = 0x28;
    return 0;
  }
  return 1;
}


