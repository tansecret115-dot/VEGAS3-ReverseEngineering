/* Module: sfppack3.dll
   Function: FUN_5cc46af0
   Address: 5cc46af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc46af0(int param_1,int param_2)

{
  if (param_2 < -800) {
    param_2 = -800;
  }
  else if (0 < param_2) {
    param_2 = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x38) != param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x140) = 1;
    *(undefined4 *)(param_1 + 0x148) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


