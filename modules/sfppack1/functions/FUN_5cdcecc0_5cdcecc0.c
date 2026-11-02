/* Module: sfppack1.dll
   Function: FUN_5cdcecc0
   Address: 5cdcecc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdcecc0(int param_1,int param_2)

{
  if (param_2 < 5) {
    param_2 = 5;
  }
  else if (0x32 < param_2) {
    param_2 = 0x32;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x30) != param_2) {
    *(int *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


