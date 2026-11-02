/* Module: sfppack2.dll
   Function: FUN_5cce3560
   Address: 5cce3560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce3560(int param_1,uint param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(uint *)(param_1 + 0x6c) != param_2) {
    *(uint *)(param_1 + 0x6c) = param_2;
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


