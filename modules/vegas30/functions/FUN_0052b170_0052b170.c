/* Module: vegas30.exe
   Function: FUN_0052b170
   Address: 0052b170
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052b170(LPCVOID param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  
  if (param_2 != 0) {
    iVar1 = *(int *)((int)param_1 + 4);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *(int *)(*(int *)(*(int *)((int)param_1 + 8) + 8) + iVar1 * 4);
      if (*(LPCVOID *)(iVar2 + 0x118) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x118));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x118));
        GlobalFree(pvVar3);
      }
      if (*(LPCVOID *)(iVar2 + 0x120) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x120));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x120));
        GlobalFree(pvVar3);
      }
      _SfList_DeleteList_16(*(undefined4 *)((int)param_1 + 8),iVar1,1,1);
    }
  }
  _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 8));
  pvVar3 = GlobalHandle(param_1);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(param_1);
  GlobalFree(pvVar3);
  return;
}


