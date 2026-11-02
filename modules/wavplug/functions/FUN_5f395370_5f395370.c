/* Module: wavplug.dll
   Function: FUN_5f395370
   Address: 5f395370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f395370(int param_1)

{
  int iVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int **)(param_1 + 0x88) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    return;
  }
  iVar1 = **(int **)(param_1 + 0x88);
  if (0 < iVar1) {
    do {
      pMem = *(LPCVOID *)(*(int *)(*(int *)(param_1 + 0x88) + 8) + iVar3 * 4);
      if (pMem != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_5f3a2ac0(*(int **)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}


