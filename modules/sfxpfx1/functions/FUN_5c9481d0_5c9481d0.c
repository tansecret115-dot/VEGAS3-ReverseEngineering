/* Module: sfxpfx1.dll
   Function: FUN_5c9481d0
   Address: 5c9481d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c9481d0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) < 10) {
    *(undefined4 *)(param_1 + 0x3c) = 10;
    return 0;
  }
  if (5000 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 5000;
    return 0;
  }
  return 1;
}


