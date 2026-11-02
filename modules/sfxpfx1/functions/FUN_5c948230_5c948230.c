/* Module: sfxpfx1.dll
   Function: FUN_5c948230
   Address: 5c948230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c948230(int param_1)

{
  if (*(int *)(param_1 + 0x48) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    return 0;
  }
  if (1000 < *(int *)(param_1 + 0x48)) {
    *(undefined4 *)(param_1 + 0x48) = 1000;
    return 0;
  }
  return 1;
}


