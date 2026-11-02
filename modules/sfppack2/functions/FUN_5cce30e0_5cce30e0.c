/* Module: sfppack2.dll
   Function: FUN_5cce30e0
   Address: 5cce30e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce30e0(int param_1,int param_2)

{
  if (param_2 < 0x14) {
    param_2 = 0x14;
  }
  else if (15000 < param_2) {
    param_2 = 15000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x44) != param_2) {
    *(int *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x74) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


