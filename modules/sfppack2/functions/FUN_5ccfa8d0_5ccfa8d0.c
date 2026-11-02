/* Module: sfppack2.dll
   Function: FUN_5ccfa8d0
   Address: 5ccfa8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccfa8d0(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


