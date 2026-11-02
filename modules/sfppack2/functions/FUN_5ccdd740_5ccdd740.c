/* Module: sfppack2.dll
   Function: FUN_5ccdd740
   Address: 5ccdd740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccdd740(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x30) != param_2) {
    *(int *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


