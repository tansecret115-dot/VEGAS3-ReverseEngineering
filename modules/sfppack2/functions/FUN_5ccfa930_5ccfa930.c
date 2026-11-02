/* Module: sfppack2.dll
   Function: FUN_5ccfa930
   Address: 5ccfa930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccfa930(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x2c) != param_2) {
    *(int *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


