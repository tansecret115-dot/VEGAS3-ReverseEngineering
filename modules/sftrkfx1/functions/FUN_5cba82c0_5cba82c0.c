/* Module: sftrkfx1.dll
   Function: FUN_5cba82c0
   Address: 5cba82c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba82c0(int param_1,int param_2)

{
  if (param_2 < 0x14) {
    param_2 = 0x14;
  }
  else if (20000 < param_2) {
    param_2 = 20000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x54) != param_2) {
    *(int *)(param_1 + 0x54) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


