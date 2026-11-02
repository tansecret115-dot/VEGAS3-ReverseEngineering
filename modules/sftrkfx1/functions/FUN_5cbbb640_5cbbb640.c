/* Module: sftrkfx1.dll
   Function: FUN_5cbbb640
   Address: 5cbbb640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbbb640(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (500 < param_2) {
    param_2 = 500;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x3c) != param_2) {
    *(int *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


