/* Module: vegas30.exe
   Function: FUN_00538540
   Address: 00538540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00538540(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int **)(param_1 + 0xcd4) != (int *)0x0) &&
     (iVar1 = **(int **)(param_1 + 0xcd4), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0xe8c) == 400) && (iVar3 = 0, 0 < iVar1)) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0xcd4) + 4) * iVar3 +
                *(int *)(*(int *)(param_1 + 0xcd4) + 8);
        if ((iVar4 != 0) && (*(LPCVOID *)(iVar4 + 0x14) != (LPCVOID)0x0)) {
          pvVar2 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x14));
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(*(LPCVOID *)(iVar4 + 0x14));
          GlobalFree(pvVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0xcd4),0,0xffffffff,0);
  }
  return;
}


