/* Module: sfppack1.dll
   Function: FUN_5cdceb10
   Address: 5cdceb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdceb10(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x2c) != param_2) {
    *(int *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


