/* Module: sfppack3.dll
   Function: FUN_5cc32c80
   Address: 5cc32c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc32c80(int param_1,int param_2)

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
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


