/* Module: sfppack1.dll
   Function: FUN_5cdb3510
   Address: 5cdb3510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb3510(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x38) != param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


