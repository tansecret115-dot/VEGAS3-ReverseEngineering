/* Module: extmondrv.dll
   Function: FUN_00407640
   Address: 00407640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407640(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  HGLOBAL pvVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x3c) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x24))
              (*(int **)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44));
    (**(code **)(**(int **)(param_1 + 0x34) + 0x24))
              (*(int **)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x40));
    (**(code **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x34) + 0x10))
            (*(int **)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c));
  (**(code **)(**(int **)(param_1 + 0x3c) + 8))(*(int **)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    ICSendMessage(*(int *)(param_1 + 0x4c),0x4009,0,0);
    ICClose(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x50) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x50));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x50));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x54) != (LPCVOID)0x0) {
    FUN_00418210(*(LPCVOID *)(param_1 + 0x54),0);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


