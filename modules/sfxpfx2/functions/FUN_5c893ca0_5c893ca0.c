/* Module: sfxpfx2.dll
   Function: FUN_5c893ca0
   Address: 5c893ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c893ca0(int param_1)

{
  if (*(int *)(param_1 + 0x20) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    return 0;
  }
  return 1;
}


