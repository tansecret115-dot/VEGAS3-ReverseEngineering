/* Module: sfppack1.dll
   Function: FUN_5cdd48e0
   Address: 5cdd48e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdd48e0(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (1000 < param_2) {
    param_2 = 1000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x34) != param_2) {
    *(int *)(param_1 + 0x34) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 1;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


