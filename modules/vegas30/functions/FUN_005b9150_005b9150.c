/* Module: vegas30.exe
   Function: FUN_005b9150
   Address: 005b9150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b9150(int param_1)

{
  int iVar1;
  int iVar2;
  LPCVOID pvVar3;
  HGLOBAL pvVar4;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    FUN_005cb570(param_1,*(int *)(param_1 + 0x1d8));
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  FUN_005d9720(param_1);
  if (*(int **)(param_1 + 0x1e0) != (int *)0x0) {
    if (-1 < **(int **)(param_1 + 0x1e0)) {
      FUN_005cb410(param_1);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x1e0));
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*(int **)(param_1 + 0x1dc) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x1dc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_005cb460(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1dc) + 8) + iVar1 * 4));
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x1dc),iVar1,1,0);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x1dc));
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  if (*(int *)(param_1 + 0x20c) != 0) {
    _SfList_DeleteList_16(*(int *)(param_1 + 0x20c),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x20c));
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  if (*(int **)(param_1 + 0x210) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x210);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x210) + 8) + iVar1 * 4);
      pvVar3 = *(LPCVOID *)(iVar2 + 0x24);
      if (pvVar3 != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle(pvVar3);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x24));
        GlobalFree(pvVar4);
      }
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x210),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x210));
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  if (*(int *)(param_1 + 0x214) != 0) {
    _SfList_DeleteList_16(*(int *)(param_1 + 0x214),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x214));
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  if (*(int **)(param_1 + 0x33c) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x33c);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x33c) + 8) + iVar1 * 4);
      pvVar3 = *(LPCVOID *)(iVar2 + 0x28);
      if (pvVar3 != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle(pvVar3);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x28));
        GlobalFree(pvVar4);
      }
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x33c),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x33c));
    *(undefined4 *)(param_1 + 0x33c) = 0;
  }
  FUN_00540ca0(param_1);
  FUN_005c6660(param_1);
  return 0;
}


