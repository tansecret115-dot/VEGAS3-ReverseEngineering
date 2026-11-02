/* Module: sfxpfx1.dll
   Function: FUN_5c943a20
   Address: 5c943a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c943a20(int param_1)

{
  if (*(int *)(param_1 + 0x30) < 100) {
    *(undefined4 *)(param_1 + 0x30) = 100;
    return 0;
  }
  if (5000 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 5000;
    return 0;
  }
  return 1;
}


