/* Module: sfxpfx1.dll
   Function: FUN_5c943550
   Address: 5c943550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c943550(int param_1,int param_2)

{
  if (param_2 < -800) {
    param_2 = -800;
  }
  else if (0x78 < param_2) {
    param_2 = 0x78;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


