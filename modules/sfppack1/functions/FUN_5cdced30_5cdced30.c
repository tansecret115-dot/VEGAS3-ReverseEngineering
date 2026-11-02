/* Module: sfppack1.dll
   Function: FUN_5cdced30
   Address: 5cdced30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdced30(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (200 < param_2) {
    param_2 = 200;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x34) != param_2) {
    *(int *)(param_1 + 0x34) = param_2;
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


