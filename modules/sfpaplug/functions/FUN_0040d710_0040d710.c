/* Module: sfpaplug.dll
   Function: FUN_0040d710
   Address: 0040d710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040d710(int param_1)

{
  int iVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int **)(param_1 + 0xd8) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    return;
  }
  iVar1 = **(int **)(param_1 + 0xd8);
  if (0 < iVar1) {
    do {
      pMem = *(LPCVOID *)(*(int *)(*(int *)(param_1 + 0xd8) + 8) + iVar3 * 4);
      if (pMem != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_0042b9d0(*(int **)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}


