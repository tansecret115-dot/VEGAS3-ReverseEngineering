/* Module: sftrkfx1.dll
   Function: FUN_5cba8d80
   Address: 5cba8d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8d80(int param_1)

{
  if (*(int *)(param_1 + 0x44) < 1) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    return 0;
  }
  if (0x28 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 0x28;
    return 0;
  }
  return 1;
}


