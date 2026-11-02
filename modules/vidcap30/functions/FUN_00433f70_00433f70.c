/* Module: vidcap30.exe
   Function: FUN_00433f70
   Address: 00433f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00433f70(undefined4 *param_1)

{
  char cVar1;
  HGLOBAL pvVar2;
  char *pMem;
  int iVar3;
  LPCSTR lpsz;
  LPCSTR lpString;
  undefined4 local_4;
  
  pvVar2 = GlobalAlloc(0x42,0x800);
  pMem = GlobalLock(pvVar2);
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  if (pMem != (char *)0x0) {
    iVar3 = _SfList_CreateExZ_32(&local_4,4,0x10,0x10,0x40000002,0,0,0);
    if (-1 < iVar3) {
      _SfGetMetricBinary_16(DAT_005ba29c,0x450,pMem,0x800);
      cVar1 = *pMem;
      lpsz = pMem;
      lpString = pMem;
      while ((cVar1 != '\0' && (-1 < iVar3))) {
        lpsz = CharNextA(lpsz);
        if (*lpsz == '\0') {
          iVar3 = lstrlenA(lpString);
          iVar3 = _SfList_AllocAndInsertItem_20(local_4,lpString,iVar3 + 1,0xffffffff,0);
          lpsz = lpsz + 1;
          lpString = lpsz;
        }
        cVar1 = *lpString;
      }
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
    *param_1 = local_4;
    return iVar3;
  }
  return -0x7ff8fff2;
}


