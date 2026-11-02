/* Module: sfppack2.dll
   Function: FUN_5ccd3c70
   Address: 5ccd3c70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd3c70(int param_1,uint param_2)

{
  if (param_2 < 2) {
    param_2 = 2;
  }
  else if (0x40 < param_2) {
    param_2 = 0x40;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(uint *)(param_1 + 0x270) != param_2) {
    *(uint *)(param_1 + 0x270) = param_2;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) | 1;
    *(undefined4 *)(param_1 + 0x280) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


