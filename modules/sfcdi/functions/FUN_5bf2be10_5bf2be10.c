/* Module: sfcdi.dll
   Function: FUN_5bf2be10
   Address: 5bf2be10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2be10(int *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  SIZE_T dwBytes;
  UINT uFlags;
  
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  pMem = (LPCVOID)param_1[1];
  if (*param_1 == 0) {
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
      GlobalFree(pvVar1);
    }
    param_1[1] = 0;
  }
  else {
    if (pMem == (LPCVOID)0x0) {
      pvVar1 = GlobalAlloc(0x42,*param_1 * 4);
    }
    else {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      dwBytes = *param_1 << 2;
      uFlags = 0x42;
      pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
      pvVar1 = GlobalReAlloc(pvVar1,dwBytes,uFlags);
    }
    pvVar2 = GlobalLock(pvVar1);
    param_1[1] = (int)pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      return 0x8007000e;
    }
  }
  return 0;
}


