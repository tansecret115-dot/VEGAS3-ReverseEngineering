/* Module: vegas30k.dll
   Function: FUN_011d56c0
   Address: 011d56c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011d56c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  LPCVOID pMem;
  int iVar3;
  
  *param_2 = 0;
  pvVar1 = GlobalAlloc(0x40,0x90);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (LPCVOID)FUN_011d7540(param_1);
    if (pMem != (LPCVOID)0x0) {
      *param_2 = pMem;
      iVar3 = FUN_011d7660(param_3);
      if (iVar3 < 0) {
        FUN_011d75b0();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
        *param_2 = 0;
      }
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


