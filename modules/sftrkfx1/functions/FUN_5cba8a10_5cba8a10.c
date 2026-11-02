/* Module: sftrkfx1.dll
   Function: FUN_5cba8a10
   Address: 5cba8a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba8a10(int param_1,uint param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(uint *)(param_1 + 0x94) != param_2) {
    *(uint *)(param_1 + 0x94) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


