/* Module: sfxpfx2.dll
   Function: FUN_5c8a0480
   Address: 5c8a0480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c8a0480(int param_1)

{
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    return 0;
  }
  return 1;
}


