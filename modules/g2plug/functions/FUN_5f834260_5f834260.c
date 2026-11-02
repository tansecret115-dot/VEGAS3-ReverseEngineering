/* Module: g2plug.dll
   Function: FUN_5f834260
   Address: 5f834260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f834260(int param_1)

{
  int *piVar1;
  int iVar2;
  LPCVOID pvVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
    FUN_5f8639d0(*(void **)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    CoUninitialize();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    FUN_5f81e1d0(*(int **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    FUN_5f81e1d0(*(int **)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int **)(param_1 + 0x25c) != (int *)0x0) {
    iVar2 = **(int **)(param_1 + 0x25c);
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        pvVar3 = *(LPCVOID *)(*(int *)(*(int *)(param_1 + 0x25c) + 8) + iVar4 * 4);
        if (pvVar3 != (LPCVOID)0x0) {
          FUN_5f833820(pvVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    FUN_5f81e1d0(*(int **)(param_1 + 0x25c));
    *(undefined4 *)(param_1 + 0x25c) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x25c) = 0;
  return 0;
}


