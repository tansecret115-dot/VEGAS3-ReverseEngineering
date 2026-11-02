/* Module: sfppack2.dll
   Function: FUN_5cceaaf0
   Address: 5cceaaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cceaaf0(int param_1,int param_2)

{
  if (param_2 < 10) {
    param_2 = 10;
  }
  else if (500 < param_2) {
    param_2 = 500;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x48) != param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    *(undefined4 *)(param_1 + 0xec) = 1;
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


