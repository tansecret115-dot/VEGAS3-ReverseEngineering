/* Module: sftrkfx1.dll
   Function: FUN_5cba8f60
   Address: 5cba8f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8f60(int param_1)

{
  if (*(int *)(param_1 + 0x6c) < 1) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    return 0;
  }
  if (3 < *(int *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x6c) = 3;
    return 0;
  }
  return 1;
}


