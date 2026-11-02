/* Module: sfppack2.dll
   Function: FUN_5ccea870
   Address: 5ccea870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccea870(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x30) != param_2) {
    *(int *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0xec) = 1;
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


