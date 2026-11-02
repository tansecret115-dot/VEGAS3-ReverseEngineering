/* Module: vegas30.exe
   Function: FUN_00527430
   Address: 00527430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00527430(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  uint uVar5;
  
  if (0 < *(int *)(*(int *)(param_1 + 0x84) + 4)) {
    iVar2 = *(int *)(param_1 + 0xec);
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x84) + 8) + 8) + iVar2 * 4);
    if (*(LPCVOID *)(iVar3 + 0x118) != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x118));
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x118));
      GlobalFree(pvVar4);
      *(undefined4 *)(iVar3 + 0x118) = 0;
      *(undefined4 *)(iVar3 + 0x114) = 0;
    }
    if (*(LPCVOID *)(iVar3 + 0x120) != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x120));
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(*(LPCVOID *)(iVar3 + 0x120));
      GlobalFree(pvVar4);
      *(undefined4 *)(iVar3 + 0x120) = 0;
      *(undefined4 *)(iVar3 + 0x11c) = 0;
    }
    _SfList_DeleteList_16(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),iVar2,1,1);
    piVar1 = (int *)(*(int *)(param_1 + 0x84) + 4);
    *piVar1 = *piVar1 + -1;
    FUN_00526cc0(param_1);
    FUN_00524880(param_1);
    uVar5 = *(int *)(param_1 + 0xec) - 1;
    FUN_00525770(param_1,uVar5 & ((int)uVar5 < 1) - 1);
    *(undefined4 *)(param_1 + 0x124) = 1;
  }
  return;
}


