/* Module: sftrans1.dll
   Function: FUN_0044f100
   Address: 0044f100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0044f100(int param_1)

{
  int *piVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + uVar3 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc));
  }
  pMem = *(LPCVOID *)(param_1 + 8);
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  if (param_1 != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
    return;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00000004);
  return;
}


