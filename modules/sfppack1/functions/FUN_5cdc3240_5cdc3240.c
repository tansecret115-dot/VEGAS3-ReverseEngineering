/* Module: sfppack1.dll
   Function: FUN_5cdc3240
   Address: 5cdc3240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc3240(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x2c) != param_2) {
    *(int *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


