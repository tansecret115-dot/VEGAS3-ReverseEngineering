/* Module: sfppack2.dll
   Function: FUN_5cce2d20
   Address: 5cce2d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce2d20(int param_1,int param_2)

{
  if (param_2 < -0xfa) {
    param_2 = -0xfa;
  }
  else if (0xfa < param_2) {
    param_2 = 0xfa;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x24) != param_2) {
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


