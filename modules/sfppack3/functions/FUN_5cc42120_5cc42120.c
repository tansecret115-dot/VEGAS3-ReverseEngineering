/* Module: sfppack3.dll
   Function: FUN_5cc42120
   Address: 5cc42120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc42120(int param_1,uint param_2)

{
  if (param_2 < 2) {
    param_2 = 2;
  }
  else if (0x20 < param_2) {
    param_2 = 0x20;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(uint *)(param_1 + 0x3c) != param_2) {
    *(uint *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x244) = 1;
    *(undefined4 *)(param_1 + 0x248) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


