/* Module: wmfplug2.dll
   Function: FUN_004068f0
   Address: 004068f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004068f0(int param_1)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_004068d0(param_1,*(int **)(param_1 + 0xc));
    FUN_0042bfb0(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_004068d0(param_1,*(int **)(param_1 + 0x10));
    FUN_0042bfb0(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = *(int **)(param_1 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x14);
    if (0 < *piVar1) {
      do {
        pMem = *(LPCVOID *)(piVar1[2] + iVar3 * 4);
        if (pMem != (LPCVOID)0x0) {
          pvVar2 = GlobalHandle(pMem);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(pMem);
          GlobalFree(pvVar2);
        }
        piVar1 = *(int **)(param_1 + 0x14);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar1);
    }
    FUN_004068d0(param_1,*(int **)(param_1 + 0x14));
    FUN_0042bfb0(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_004068d0(param_1,*(int **)(param_1 + 0x30));
    FUN_0042bfb0(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar4 = (undefined4 *)(param_1 + 0x34);
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x54);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}


