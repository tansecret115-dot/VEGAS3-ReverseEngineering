/* Module: vegas30.exe
   Function: FUN_004e5fd0
   Address: 004e5fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_004e5fd0(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  LPCVOID pMem;
  int iVar3;
  SIZE_T dwBytes;
  UINT uFlags;
  
  pMem = *(LPCVOID *)(param_1 + 0xe74);
  iVar3 = (uint)*(ushort *)(param_1 + 0xdaa) * (*(int *)(param_1 + 0x10) + 1);
  dwBytes = iVar3 * 4;
  if (pMem == (LPCVOID)0x0) {
    pvVar1 = GlobalAlloc(2,dwBytes);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 != (LPVOID)0x0) {
      *(int *)(param_1 + 0xe70) = iVar3;
    }
    *(LPVOID *)(param_1 + 0xe74) = pvVar2;
    return pvVar2;
  }
  if (*(int *)(param_1 + 0xe70) < iVar3) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    uFlags = 2;
    pvVar1 = GlobalHandle(pMem);
    pvVar1 = GlobalReAlloc(pvVar1,dwBytes,uFlags);
    pvVar2 = GlobalLock(pvVar1);
    pMem = (LPCVOID)0x0;
    if (pvVar2 != (LPVOID)0x0) {
      *(int *)(param_1 + 0xe70) = iVar3;
      *(LPVOID *)(param_1 + 0xe74) = pvVar2;
      return pvVar2;
    }
  }
  return pMem;
}


