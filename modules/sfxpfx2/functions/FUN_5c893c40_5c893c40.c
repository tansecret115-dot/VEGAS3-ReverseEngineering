/* Module: sfxpfx2.dll
   Function: FUN_5c893c40
   Address: 5c893c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c893c40(int param_1)

{
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x24)) {
    *(undefined4 *)(param_1 + 0x24) = 100;
    return 0;
  }
  return 1;
}


