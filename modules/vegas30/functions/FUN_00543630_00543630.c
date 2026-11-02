/* Module: vegas30.exe
   Function: FUN_00543630
   Address: 00543630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00543630(int param_1)

{
  undefined4 *_Memory;
  int iVar1;
  int iVar2;
  
  GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 4) + 0xc));
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  iVar2 = **(int **)(param_1 + 4);
  iVar1 = **(int **)(param_1 + 8);
  if (0 < iVar2) {
    do {
      free((void *)**(undefined4 **)(*(int *)(param_1 + 4) + 8));
      **(undefined4 **)(*(int *)(param_1 + 4) + 8) = 0;
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 4),0,1,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < iVar1) {
    do {
      _Memory = (undefined4 *)**(undefined4 **)(*(int *)(param_1 + 8) + 8);
      _SfDibFree_8(*_Memory,0);
      free(_Memory);
      **(undefined4 **)(*(int *)(param_1 + 8) + 8) = 0;
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 8),0,1,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 4) + 0xc));
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 8) + 0xc));
  return 0;
}


