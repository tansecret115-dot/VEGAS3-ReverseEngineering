/* Module: sfppack1.dll
   Function: FUN_5cdcee20
   Address: 5cdcee20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdcee20(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (1 < param_2) {
    param_2 = 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x40) != param_2) {
    *(int *)(param_1 + 0x40) = param_2;
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


