/* Module: sfppack2.dll
   Function: FUN_5cceb270
   Address: 5cceb270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cceb270(int param_1,int param_2)

{
  if (param_2 < 3) {
    param_2 = 3;
  }
  else if (0x1e < param_2) {
    param_2 = 0x1e;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x84) != param_2) {
    *(int *)(param_1 + 0x84) = param_2;
    *(undefined4 *)(param_1 + 0xec) = 1;
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


