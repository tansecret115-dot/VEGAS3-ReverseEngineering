/* Module: sfxpfx2.dll
   Function: FUN_5c893c10
   Address: 5c893c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c893c10(int param_1)

{
  if (*(int *)(param_1 + 0x28) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    return 0;
  }
  return 1;
}


