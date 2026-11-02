/* Module: sfppack1.dll
   Function: FUN_5cdc7080
   Address: 5cdc7080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc7080(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (8 < param_2) {
    param_2 = 8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x7c) != param_2) {
    *(int *)(param_1 + 0x7c) = param_2;
    *(undefined4 *)(param_1 + 0xa8) = 1;
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1;
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


