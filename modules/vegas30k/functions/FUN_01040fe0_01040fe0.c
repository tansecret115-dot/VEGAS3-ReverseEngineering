/* Module: vegas30k.dll
   Function: FUN_01040fe0
   Address: 01040fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01040fe0(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x84) != 0) {
    (**(code **)(**(int **)(param_1 + 0x68) + 0x78))
              (*(int **)(param_1 + 0x68),*(undefined4 *)(*(int *)(param_1 + 0x78) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x78) + 0xc));
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x18);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}


