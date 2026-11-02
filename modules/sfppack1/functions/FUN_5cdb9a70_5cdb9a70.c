/* Module: sfppack1.dll
   Function: FUN_5cdb9a70
   Address: 5cdb9a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb9a70(int param_1,int param_2)

{
  if (param_2 < -0x32) {
    param_2 = -0x32;
  }
  else if (0x32 < param_2) {
    param_2 = 0x32;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


