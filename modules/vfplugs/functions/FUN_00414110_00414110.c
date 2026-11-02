/* Module: vfplugs.dll
   Function: FUN_00414110
   Address: 00414110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00414110(int param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  FUN_00414210(param_1);
  iVar3 = *(int *)(param_1 + 0xa0);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + -4);
    piVar4 = (int *)(iVar3 + iVar2 * 0x18);
    if (-1 < iVar2 + -1) {
      do {
        piVar4 = piVar4 + -6;
        FUN_00416380(piVar4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    pvVar1 = GlobalHandle((LPCVOID)(iVar3 + -4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)(iVar3 + -4));
    GlobalFree(pvVar1);
  }
  puVar5 = (undefined4 *)(param_1 + 0x50);
  iVar3 = 4;
  do {
    if ((HANDLE)*puVar5 != (HANDLE)0x0) {
      CloseHandle((HANDLE)*puVar5);
    }
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00416380((int *)(param_1 + 0xa4));
  piVar4 = *(int **)(param_1 + 0x48);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x44);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x40);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x3c);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x38);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x34);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x30);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  if (param_1 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)0x4);
    return;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}


