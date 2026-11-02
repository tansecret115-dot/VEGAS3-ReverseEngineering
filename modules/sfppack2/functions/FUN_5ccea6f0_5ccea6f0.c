/* Module: sfppack2.dll
   Function: FUN_5ccea6f0
   Address: 5ccea6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccea6f0(int param_1,int param_2)

{
  if (param_2 < -600) {
    param_2 = -600;
  }
  else if (0 < param_2) {
    param_2 = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x24) != param_2) {
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0xec) = 1;
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


