/* Module: sfpublish.dll
   Function: FUN_0040b770
   Address: 0040b770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040b770(void *this,LPCSTR param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  int iVar2;
  LPWSTR lpWideCharStr;
  
  pMem = *(LPCVOID *)((int)this + 0x58);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  iVar2 = lstrlenA(param_1);
  pvVar1 = GlobalAlloc(0x40,(iVar2 + 1) * 2);
  lpWideCharStr = GlobalLock(pvVar1);
  *(LPWSTR *)((int)this + 0x58) = lpWideCharStr;
  if (lpWideCharStr != (LPWSTR)0x0) {
    MultiByteToWideChar(0,1,param_1,-1,lpWideCharStr,iVar2 + 1);
    lpWideCharStr[iVar2] = L'\0';
    return 0;
  }
  return 0x8007000e;
}


