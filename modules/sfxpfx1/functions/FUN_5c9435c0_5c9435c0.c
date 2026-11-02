/* Module: sfxpfx1.dll
   Function: FUN_5c9435c0
   Address: 5c9435c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c9435c0(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (20000 < param_2) {
    param_2 = 20000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


