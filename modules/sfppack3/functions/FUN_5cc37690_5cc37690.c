/* Module: sfppack3.dll
   Function: FUN_5cc37690
   Address: 5cc37690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc37690(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x32 < param_2) {
    param_2 = 0x32;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x24) != param_2) {
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


