/* Module: sfppack2.dll
   Function: FUN_5ccebd00
   Address: 5ccebd00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccebd00(int param_1,undefined4 param_2,uint param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (param_3 == 0) {
    param_3 = 1;
  }
  else if (4 < param_3) {
    param_3 = 4;
  }
  *(undefined4 *)(param_1 + 0xb0 + param_3 * 4) = param_2;
  *(undefined4 *)(param_1 + 0xf0) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


