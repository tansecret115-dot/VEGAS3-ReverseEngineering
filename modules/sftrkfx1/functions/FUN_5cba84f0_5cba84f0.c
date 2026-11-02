/* Module: sftrkfx1.dll
   Function: FUN_5cba84f0
   Address: 5cba84f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba84f0(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (3 < param_2) {
    param_2 = 3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x68) != param_2) {
    *(int *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


