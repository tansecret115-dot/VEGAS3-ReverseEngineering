/* Module: sfppack3.dll
   Function: FUN_5cc422a0
   Address: 5cc422a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc422a0(int param_1,int param_2)

{
  if (param_2 < -600) {
    param_2 = -600;
  }
  else if (0xf0 < param_2) {
    param_2 = 0xf0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x244) = 1;
    *(undefined4 *)(param_1 + 0x248) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


