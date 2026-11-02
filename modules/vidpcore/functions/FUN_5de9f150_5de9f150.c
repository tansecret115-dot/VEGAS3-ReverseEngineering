/* Module: vidpcore.dll
   Function: FUN_5de9f150
   Address: 5de9f150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de9f150(int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_5de9f250();
  iVar4 = *(int *)(param_1 + 0xa0);
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + -4);
    if (-1 < iVar3 + -1) {
      do {
        FUN_5dea13a0();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    pvVar2 = GlobalHandle((LPCVOID)(iVar4 + -4));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)(iVar4 + -4));
    GlobalFree(pvVar2);
  }
  puVar5 = (undefined4 *)(param_1 + 0x50);
  iVar4 = 4;
  do {
    if ((HANDLE)*puVar5 != (HANDLE)0x0) {
      CloseHandle((HANDLE)*puVar5);
    }
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_5dea13a0();
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00000004);
    return;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}


