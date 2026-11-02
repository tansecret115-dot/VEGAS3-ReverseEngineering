/* Module: sftrkfx1.dll
   Function: FUN_5cba9050
   Address: 5cba9050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba9050(int param_1)

{
  if (*(int *)(param_1 + 0x80) < 1) {
    *(undefined4 *)(param_1 + 0x80) = 1;
    return 0;
  }
  if (4 < *(int *)(param_1 + 0x80)) {
    *(undefined4 *)(param_1 + 0x80) = 4;
    return 0;
  }
  return 1;
}


