/* Module: sfppack2.dll
   Function: FUN_5ccdd880
   Address: 5ccdd880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccdd880(int param_1,int param_2)

{
  if (param_2 < -600) {
    param_2 = -600;
  }
  else if (200 < param_2) {
    param_2 = 200;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


