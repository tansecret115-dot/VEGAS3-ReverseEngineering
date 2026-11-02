/* Module: mp3plug.dll
   Function: FUN_5f69b700
   Address: 5f69b700
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f69b700(int param_1)

{
  int iVar1;
  int *pMem;
  HGLOBAL pvVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x18);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        pMem = *(int **)(*(int *)(*(int *)(param_1 + 0x18) + 8) + iVar3 * 4);
        (**(code **)(*pMem + 0xc))();
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_5f6b66f0(*(int **)(param_1 + 0x18));
  }
  return;
}


