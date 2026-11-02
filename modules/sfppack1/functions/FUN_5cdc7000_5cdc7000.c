/* Module: sfppack1.dll
   Function: FUN_5cdc7000
   Address: 5cdc7000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc7000(int param_1,int param_2)

{
  if (param_2 < 100) {
    param_2 = 100;
  }
  else if (10000 < param_2) {
    param_2 = 10000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x94) != param_2) {
    *(int *)(param_1 + 0x94) = param_2;
    *(undefined4 *)(param_1 + 0xa8) = 1;
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


