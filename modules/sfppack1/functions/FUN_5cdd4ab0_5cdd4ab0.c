/* Module: sfppack1.dll
   Function: FUN_5cdd4ab0
   Address: 5cdd4ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdd4ab0(int param_1,int param_2)

{
  if (param_2 < 100) {
    param_2 = 100;
  }
  else if (10000 < param_2) {
    param_2 = 10000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x44) != param_2) {
    *(int *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


