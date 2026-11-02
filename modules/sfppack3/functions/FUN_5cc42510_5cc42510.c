/* Module: sfppack3.dll
   Function: FUN_5cc42510
   Address: 5cc42510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc42510(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (1 < param_2) {
    param_2 = 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x1c) != param_2) {
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x244) = 1;
    *(undefined4 *)(param_1 + 0x248) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


