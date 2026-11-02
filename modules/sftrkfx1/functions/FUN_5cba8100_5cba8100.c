/* Module: sftrkfx1.dll
   Function: FUN_5cba8100
   Address: 5cba8100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba8100(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (0x28 < param_2) {
    param_2 = 0x28;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x44) != param_2) {
    *(int *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


