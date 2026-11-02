/* Module: vegas30k.dll
   Function: FUN_011a6e10
   Address: 011a6e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a6e10(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  if (*(int *)(param_1 + 100) != 0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x78))
              (*(int **)(param_1 + 0x4c),*(undefined4 *)(*(int *)(param_1 + 0x58) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc));
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x18);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  return;
}


