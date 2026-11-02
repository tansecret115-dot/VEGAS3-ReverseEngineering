/* Module: vegas30.exe
   Function: FUN_0058f170
   Address: 0058f170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058f170(int param_1)

{
  int *piVar1;
  LPCVOID pMem;
  undefined4 uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  
  iVar3 = _SfQueueRemove_8(param_1 + 0x3c,0);
  while (iVar3 != 0) {
    iVar3 = _SfQueueRemove_8(param_1 + 0x3c,0);
  }
  iVar3 = _SfQueueRemove_8(param_1 + 0x18,0);
  while (iVar3 != 0) {
    iVar3 = _SfQueueRemove_8(param_1 + 0x18,0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  piVar1 = *(int **)(param_1 + 0x10);
  iVar3 = *piVar1;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    pMem = *(LPCVOID *)(piVar1[2] + iVar3 * 4);
    _SfList_DeleteList_16(piVar1,iVar3,1,0);
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
  }
  piVar1 = *(int **)(param_1 + 0x14);
  iVar3 = *piVar1;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    uVar2 = *(undefined4 *)(piVar1[2] + iVar3 * 4);
    _SfList_DeleteList_16(piVar1,iVar3,1,0);
    FUN_0058f150(uVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


