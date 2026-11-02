/* Module: encn3260.dll
   Function: FUN_664a6ba0
   Address: 664a6ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6ba0(int param_1,int param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x68) + 0xb4));
  if (*(int *)(param_1 + 0xdc) != param_2) {
    *(int *)(param_1 + 0xdc) = param_2;
    if (*(void **)(param_1 + 0x68) != (void *)0x0) {
      FUN_664aa6d0(*(void **)(param_1 + 0x68),1,0);
    }
  }
  if (*(HWND *)(param_1 + 0x140) != (HWND)0x0) {
    FUN_664ab3b0((void *)(param_1 + -4),*(HWND *)(param_1 + 0x140),-(uint)(param_2 != 0) & 5);
  }
  FUN_664a9870((void *)(param_1 + -4));
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x68) + 0xb4));
  return 0;
}


