/* Module: extmondrv.dll
   Function: FUN_00402500
   Address: 00402500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00402500(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 100) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    iVar2 = **(int **)(param_1 + 100);
    while (0 < iVar2) {
      iVar2 = iVar2 + -1;
      piVar1 = *(int **)((*(int **)(param_1 + 100))[2] + iVar2 * 4);
      FUN_00416200(*(int **)(param_1 + 100),iVar2,1,0);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    ResetEvent(*(HANDLE *)(param_1 + 0x80));
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  return;
}


