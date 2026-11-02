/* Module: sfppack2.dll
   Function: FUN_5ccfa990
   Address: 5ccfa990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccfa990(int param_1,uint param_2)

{
  if (param_2 < 3) {
    param_2 = 3;
  }
  else if (0x10 < param_2) {
    param_2 = 0x10;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(uint *)(param_1 + 0xb0) != param_2) {
    *(uint *)(param_1 + 0xb0) = param_2;
    *(undefined4 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


