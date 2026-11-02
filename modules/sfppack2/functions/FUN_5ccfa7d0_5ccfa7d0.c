/* Module: sfppack2.dll
   Function: FUN_5ccfa7d0
   Address: 5ccfa7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccfa7d0(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (5000 < param_2) {
    param_2 = 5000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


