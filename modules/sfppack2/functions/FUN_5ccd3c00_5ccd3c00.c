/* Module: sfppack2.dll
   Function: FUN_5ccd3c00
   Address: 5ccd3c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd3c00(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x1c) != param_2) {
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) | 1;
    *(undefined4 *)(param_1 + 0x280) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


