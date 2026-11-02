/* Module: sfppack3.dll
   Function: FUN_5cc32d00
   Address: 5cc32d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc32d00(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (100 < param_2) {
    param_2 = 100;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x2c) != param_2) {
    *(int *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


