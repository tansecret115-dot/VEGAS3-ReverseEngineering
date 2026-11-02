/* Module: vidcap30.exe
   Function: FUN_0046c490
   Address: 0046c490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046c490(int param_1)

{
  LPCVOID pMem;
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  
  iVar2 = param_1;
  param_1 = **(int **)(param_1 + 0xbc);
  if (0 < param_1) {
    do {
      pMem = (LPCVOID)**(undefined4 **)(*(int *)(iVar2 + 0xbc) + 8);
      piVar1 = *(int **)((int)pMem + 0x18);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int **)((int)pMem + 0x14);
      *(undefined4 *)((int)pMem + 0x18) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)((int)pMem + 0x14) = 0;
      (**(code **)(**(int **)((int)pMem + 0x10) + 8))(*(int **)((int)pMem + 0x10));
      _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 0xbc),0,1,0);
      if (pMem != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  _SfList_DeleteList_16(*(undefined4 *)(iVar2 + 0xbc),0,0,1);
  return;
}


