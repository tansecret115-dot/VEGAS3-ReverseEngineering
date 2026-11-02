/* Module: sfppack1.dll
   Function: FUN_5cdd4730
   Address: 5cdd4730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdd4730(int param_1,int param_2)

{
  if (param_2 < -600) {
    param_2 = -600;
  }
  else if (0 < param_2) {
    param_2 = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


