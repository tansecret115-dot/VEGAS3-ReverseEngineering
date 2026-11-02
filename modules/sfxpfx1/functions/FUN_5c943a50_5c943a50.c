/* Module: sfxpfx1.dll
   Function: FUN_5c943a50
   Address: 5c943a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c943a50(int param_1)

{
  if (*(int *)(param_1 + 0x34) < 1) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 100;
    return 0;
  }
  return 1;
}


