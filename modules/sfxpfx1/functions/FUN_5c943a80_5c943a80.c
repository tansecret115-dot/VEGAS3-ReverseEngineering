/* Module: sfxpfx1.dll
   Function: FUN_5c943a80
   Address: 5c943a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c943a80(int param_1)

{
  if (*(int *)(param_1 + 0x38) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return 0;
  }
  if (1000 < *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 1000;
    return 0;
  }
  return 1;
}


