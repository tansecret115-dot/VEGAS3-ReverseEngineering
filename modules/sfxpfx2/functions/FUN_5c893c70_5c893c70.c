/* Module: sfxpfx2.dll
   Function: FUN_5c893c70
   Address: 5c893c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c893c70(int param_1)

{
  if (*(int *)(param_1 + 0x1c) < 100) {
    *(undefined4 *)(param_1 + 0x1c) = 100;
    return 0;
  }
  if (10000 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = 10000;
    return 0;
  }
  return 1;
}


