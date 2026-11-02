/* Module: g2plug.dll
   Function: FUN_5f8025d0
   Address: 5f8025d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f8025d0(int param_1)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_5f8025b0(param_1,*(int **)(param_1 + 8));
    FUN_5f81e1d0(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_5f8025b0(param_1,*(int **)(param_1 + 0xc));
    FUN_5f81e1d0(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x10);
    if (0 < *piVar1) {
      do {
        pMem = *(LPCVOID *)(piVar1[2] + iVar3 * 4);
        if (pMem != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(pMem);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(pMem);
          GlobalFree(pvVar2);
        }
        piVar1 = *(int **)(param_1 + 0x10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar1);
    }
    FUN_5f8025b0(param_1,*(int **)(param_1 + 0x10));
    FUN_5f81e1d0(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


