/* Module: sfxpfx2.dll
   Function: FUN_5c893cd0
   Address: 5c893cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c893cd0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return 0;
  }
  if (1000 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 1000;
    return 0;
  }
  return 1;
}


