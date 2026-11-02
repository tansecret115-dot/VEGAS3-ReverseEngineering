/* Module: sfxpfx1.dll
   Function: FUN_5c947940
   Address: 5c947940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c947940(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 1;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


