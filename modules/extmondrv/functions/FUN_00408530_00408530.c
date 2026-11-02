/* Module: extmondrv.dll
   Function: FUN_00408530
   Address: 00408530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00408530(int param_1)

{
  int iVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x88);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x88) + 4) * iVar4 +
                          *(int *)(*(int *)(param_1 + 0x88) + 8));
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_00417470(*(int **)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x8c);
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
        iVar5 = *(int *)(*(int *)(param_1 + 0x8c) + 4) * iVar6;
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 + iVar4));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar5 + iVar4));
        GlobalFree(pvVar3);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    FUN_00417470(*(int **)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  return 0;
}


