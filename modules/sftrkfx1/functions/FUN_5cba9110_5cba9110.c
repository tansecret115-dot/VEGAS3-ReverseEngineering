/* Module: sftrkfx1.dll
   Function: FUN_5cba9110
   Address: 5cba9110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba9110(int param_1)

{
  if (*(int *)(param_1 + 0x90) < 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x90)) {
    *(undefined4 *)(param_1 + 0x90) = 1;
    return 0;
  }
  return 1;
}


