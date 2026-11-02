/* Module: sfppack2.dll
   Function: FUN_5cce32a0
   Address: 5cce32a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce32a0(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (1 < param_2) {
    param_2 = 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x54) != param_2) {
    *(int *)(param_1 + 0x54) = param_2;
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


