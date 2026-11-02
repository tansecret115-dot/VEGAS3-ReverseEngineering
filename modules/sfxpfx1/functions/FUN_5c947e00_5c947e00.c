/* Module: sfxpfx1.dll
   Function: FUN_5c947e00
   Address: 5c947e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c947e00(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (1000 < param_2) {
    param_2 = 1000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x48) != param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


