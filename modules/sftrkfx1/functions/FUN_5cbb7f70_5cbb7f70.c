/* Module: sftrkfx1.dll
   Function: FUN_5cbb7f70
   Address: 5cbb7f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbb7f70(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (2 < param_2) {
    param_2 = 2;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x24) != param_2) {
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


