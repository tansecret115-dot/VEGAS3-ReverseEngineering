/* Module: sfppack2.dll
   Function: FUN_5ccd3880
   Address: 5ccd3880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd3880(int param_1,int param_2)

{
  if (param_2 < -0x1e0) {
    param_2 = -0x1e0;
  }
  else if (0xf0 < param_2) {
    param_2 = 0xf0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x54) != param_2) {
    *(int *)(param_1 + 0x54) = param_2;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(undefined4 *)(param_1 + 0x280) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


