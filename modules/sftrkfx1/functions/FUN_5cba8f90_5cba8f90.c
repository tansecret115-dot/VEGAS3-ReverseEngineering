/* Module: sftrkfx1.dll
   Function: FUN_5cba8f90
   Address: 5cba8f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cba8f90(int param_1)

{
  if (*(int *)(param_1 + 0x70) < 1) {
    *(undefined4 *)(param_1 + 0x70) = 1;
    return 0;
  }
  if (3 < *(int *)(param_1 + 0x70)) {
    *(undefined4 *)(param_1 + 0x70) = 3;
    return 0;
  }
  return 1;
}


