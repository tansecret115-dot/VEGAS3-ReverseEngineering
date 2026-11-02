/* Module: vegas30k.dll
   Function: FUN_01199790
   Address: 01199790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01199790(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
  if (*(int *)(param_1 + 0x4d0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x4b8) + 0x78))
              (*(int **)(param_1 + 0x4b8),*(undefined4 *)(*(int *)(param_1 + 0x4c4) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0xc));
    *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x18);
    *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
  return;
}


