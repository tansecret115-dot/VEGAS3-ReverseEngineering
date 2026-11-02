/* Module: vegas30.exe
   Function: FUN_00595a50
   Address: 00595a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00595a50(int param_1)

{
  int *piVar1;
  LPCVOID pvVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int local_4;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00595ba0(param_1,*(int *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  param_1 = param_1 + 0xf8;
  local_4 = 3;
  do {
    iVar3 = _SfQueueRemove_8(param_1,0);
    while (iVar3 != 0) {
      iVar3 = _SfQueueRemove_8(param_1,0);
    }
    piVar1 = *(int **)(param_1 + -8);
    iVar3 = *piVar1;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      pvVar2 = *(LPCVOID *)(piVar1[2] + iVar3 * 4);
      _SfList_DeleteList_16(piVar1,iVar3,1,0);
      pvVar4 = GlobalHandle(pvVar2);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pvVar2);
      GlobalFree(pvVar4);
    }
    piVar1 = *(int **)(param_1 + -4);
    iVar3 = *piVar1;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      pvVar2 = *(LPCVOID *)(piVar1[2] + iVar3 * 4);
      _SfList_DeleteList_16(piVar1,iVar3,1,0);
      pvVar4 = GlobalHandle(pvVar2);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pvVar2);
      GlobalFree(pvVar4);
    }
    param_1 = param_1 + 0x38;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


