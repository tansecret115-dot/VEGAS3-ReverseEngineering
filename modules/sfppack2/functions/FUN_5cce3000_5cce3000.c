/* Module: sfppack2.dll
   Function: FUN_5cce3000
   Address: 5cce3000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce3000(int param_1,int param_2)

{
  if (param_2 < 3) {
    param_2 = 3;
  }
  else if (0x19 < param_2) {
    param_2 = 0x19;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x3c) != param_2) {
    *(int *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


