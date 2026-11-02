/* Module: vegas30k.dll
   Function: FUN_01199800
   Address: 01199800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01199800(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
  iVar1 = *(int *)(param_1 + 0x4d0);
  while (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x4b8) + 0x78))
              (*(int **)(param_1 + 0x4b8),*(undefined4 *)(*(int *)(param_1 + 0x4c4) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0xc));
    *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 0xc) = 0;
    iVar1 = *(int *)(param_1 + 0x4d0) + -1;
    *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x18);
    *(int *)(param_1 + 0x4d0) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
  return;
}


