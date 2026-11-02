/* Module: sfppack2.dll
   Function: FUN_5ccec4b0
   Address: 5ccec4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccec4b0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) < -600) {
    *(undefined4 *)(param_1 + 0x2c) = 0xfffffda8;
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return 0;
  }
  return 1;
}


