/* Module: sftrkfx1.dll
   Function: FUN_5cba8f00
   Address: 5cba8f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8f00(int param_1)

{
  if (*(int *)(param_1 + 100) < 1) {
    *(undefined4 *)(param_1 + 100) = 1;
    return 0;
  }
  if (3 < *(int *)(param_1 + 100)) {
    *(undefined4 *)(param_1 + 100) = 3;
    return 0;
  }
  return 1;
}


