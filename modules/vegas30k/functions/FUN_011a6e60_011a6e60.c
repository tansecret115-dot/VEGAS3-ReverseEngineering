/* Module: vegas30k.dll
   Function: FUN_011a6e60
   Address: 011a6e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a6e60(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  iVar1 = *(int *)(param_1 + 100);
  while (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x78))
              (*(int **)(param_1 + 0x4c),*(undefined4 *)(*(int *)(param_1 + 0x58) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc));
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc) = 0;
    iVar1 = *(int *)(param_1 + 100) + -1;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x18);
    *(int *)(param_1 + 100) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 100) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  return;
}


