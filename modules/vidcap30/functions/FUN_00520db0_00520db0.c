/* Module: vidcap30.exe
   Function: FUN_00520db0
   Address: 00520db0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00520db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *pMem;
  HRESULT HVar3;
  
  pvVar1 = GlobalAlloc(0x40,0x3c);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (int *)FUN_00520e50(param_1,param_3);
    if (pMem != (int *)0x0) {
      HVar3 = StgCreateDocfile((WCHAR *)0x0,0x10012,0,(IStorage **)(pMem + 1));
      if (HVar3 != 0) {
        FUN_00520e80();
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


