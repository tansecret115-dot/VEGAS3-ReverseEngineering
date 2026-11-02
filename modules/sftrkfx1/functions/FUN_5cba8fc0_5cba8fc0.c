/* Module: sftrkfx1.dll
   Function: FUN_5cba8fc0
   Address: 5cba8fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8fc0(int param_1)

{
  if (*(int *)(param_1 + 0x74) < 1) {
    *(undefined4 *)(param_1 + 0x74) = 1;
    return 0;
  }
  if (4 < *(int *)(param_1 + 0x74)) {
    *(undefined4 *)(param_1 + 0x74) = 4;
    return 0;
  }
  return 1;
}


