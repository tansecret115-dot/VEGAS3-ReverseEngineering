/* Module: vegas30k.dll
   Function: FUN_011b3ea0
   Address: 011b3ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011b3ea0(int param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int iVar5;
  
  if (*(int **)(param_1 + 0x1a0) == (int *)0x0) {
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x1a0);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1a0) + 4) * iVar5;
      pvVar3 = GlobalHandle(*(LPCVOID *)(iVar4 + 0xc + iVar2));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(iVar4 + iVar2 + 0xc));
      GlobalFree(pvVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x1a0));
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  return 0;
}


