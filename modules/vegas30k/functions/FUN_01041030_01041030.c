/* Module: vegas30k.dll
   Function: FUN_01041030
   Address: 01041030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01041030(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  iVar1 = *(int *)(param_1 + 0x84);
  while (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x68) + 0x78))
              (*(int **)(param_1 + 0x68),*(undefined4 *)(*(int *)(param_1 + 0x78) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x78) + 0xc));
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x18);
    iVar1 = *(int *)(param_1 + 0x84) + -1;
    *(int *)(param_1 + 0x84) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x84) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}


