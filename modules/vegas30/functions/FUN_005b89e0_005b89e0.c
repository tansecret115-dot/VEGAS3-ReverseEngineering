/* Module: vegas30.exe
   Function: FUN_005b89e0
   Address: 005b89e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b89e0(int *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(param_1[2] + iVar4 * 4);
      if (*(LPCVOID *)(iVar2 + 0x24) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x24));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x24));
        GlobalFree(pvVar3);
      }
      *(undefined4 *)(iVar2 + 0x24) = 0;
      if (*(LPCVOID *)(iVar2 + 0x28) != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x28));
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x28));
        GlobalFree(pvVar3);
      }
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar2 + 0x28) = 0;
    } while (iVar4 < iVar1);
  }
  _SfList_DeleteList_16(param_1,0,0xffffffff,0);
  return;
}


