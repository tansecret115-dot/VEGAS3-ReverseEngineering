/* Module: sfppack1.dll
   Function: FUN_5cdc7190
   Address: 5cdc7190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc7190(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (3 < param_2) {
    param_2 = 3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0xa4) != param_2) {
    *(int *)(param_1 + 0xa4) = param_2;
    *(undefined4 *)(param_1 + 0xa8) = 1;
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


