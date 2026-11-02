/* Module: vegas30.exe
   Function: FUN_005f65e0
   Address: 005f65e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005f65e0(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  LPCVOID pMem;
  int iVar3;
  
  pvVar1 = GlobalAlloc(0x40,0x4d8);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (LPCVOID)FUN_005f3510();
    if (pMem != (LPCVOID)0x0) {
      iVar3 = FUN_005f4ff0(param_1 + 0x114,param_1,param_1 + 0x10);
      if (-1 < iVar3) {
        *(int *)(param_1 + 0xc) = (int)pMem + 4;
        return iVar3;
      }
      FUN_005f36d0();
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


