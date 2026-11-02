/* Module: vidcap30.exe
   Function: FUN_00521d20
   Address: 00521d20
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00521d20(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *pMem;
  int iVar3;
  
  pvVar1 = GlobalAlloc(0x40,0x98);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (int *)FUN_00522210(param_1);
    if (pMem != (int *)0x0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x14))
                        (*(int **)(param_1 + 4),&PTR_DAT_0059bc90,0x10012,0,0,pMem + 10);
      if (iVar3 != 0) {
        FUN_00522290();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
        return (int *)0x0;
      }
      (**(code **)(*pMem + 4))(pMem);
      return pMem;
    }
  }
  return (int *)0x0;
}


