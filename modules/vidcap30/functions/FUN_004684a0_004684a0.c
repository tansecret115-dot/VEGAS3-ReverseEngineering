/* Module: vidcap30.exe
   Function: FUN_004684a0
   Address: 004684a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004684a0(int param_1)

{
  LPCVOID pMem;
  LPCVOID pMem_00;
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1;
  param_1 = **(int **)(param_1 + 0x50);
  if (0 < param_1) {
    do {
      pMem = (LPCVOID)**(undefined4 **)(*(int *)(iVar1 + 0x50) + 8);
      pMem_00 = *(LPCVOID *)((int)pMem + 0x2d0);
      if (pMem_00 != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem_00);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem_00);
        GlobalFree(pvVar2);
      }
      _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x50),0,1,0);
      if (pMem != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x50),0,0,1);
  return;
}


