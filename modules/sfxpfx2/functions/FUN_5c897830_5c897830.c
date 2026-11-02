/* Module: sfxpfx2.dll
   Function: FUN_5c897830
   Address: 5c897830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c897830(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (20000 < param_2) {
    param_2 = 20000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


