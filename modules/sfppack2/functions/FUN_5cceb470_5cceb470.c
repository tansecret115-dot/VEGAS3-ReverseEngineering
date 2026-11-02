/* Module: sfppack2.dll
   Function: FUN_5cceb470
   Address: 5cceb470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cceb470(int param_1,int param_2)

{
  if (param_2 < 0x32) {
    param_2 = 0x32;
  }
  else if (15000 < param_2) {
    param_2 = 15000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x94) != param_2) {
    *(int *)(param_1 + 0x94) = param_2;
    *(undefined4 *)(param_1 + 0xec) = 1;
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


