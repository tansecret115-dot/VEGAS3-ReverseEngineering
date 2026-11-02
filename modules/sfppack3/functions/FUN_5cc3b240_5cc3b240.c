/* Module: sfppack3.dll
   Function: FUN_5cc3b240
   Address: 5cc3b240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc3b240(int param_1,int param_2)

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
    *(undefined4 *)(param_1 + 0x130) = 1;
    *(undefined4 *)(param_1 + 0x134) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


