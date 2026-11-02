/* Module: sfppack2.dll
   Function: FUN_5ccd3500
   Address: 5ccd3500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd3500(int param_1,int param_2)

{
  if (param_2 < -0x1e0) {
    param_2 = -0x1e0;
  }
  else if (0xf0 < param_2) {
    param_2 = 0xf0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x38) != param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(undefined4 *)(param_1 + 0x280) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


