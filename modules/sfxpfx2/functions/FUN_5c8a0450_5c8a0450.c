/* Module: sfxpfx2.dll
   Function: FUN_5c8a0450
   Address: 5c8a0450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c8a0450(int param_1)

{
  if (*(int *)(param_1 + 0x38) < 0x14) {
    *(undefined4 *)(param_1 + 0x38) = 0x14;
    return 0;
  }
  if (15000 < *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 15000;
    return 0;
  }
  return 1;
}


