/* Module: sfppack3.dll
   Function: FUN_5cc3eac0
   Address: 5cc3eac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc3eac0(int param_1,int param_2)

{
  if (param_2 < -5) {
    param_2 = -5;
  }
  else if (5 < param_2) {
    param_2 = 5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x1c) != param_2) {
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


